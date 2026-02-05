/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sinpid1_u05purecfma.c --function \
 *     Sleef_sinpid1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
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
     0.0, 0.0, 0x1.e1bfdd9f73eaep-747, 0.0, 0.0, 0x1.fc181f3bd0beep-466, 0.0,
     0x1.fdc78d8599a65p-88, 0.0, 0.0, 0x1.d3f8d5bb0537dp-760, 0.0,
     0x1.6690bc7a8ca6fp-786, 0.0, 0.0, 0.0, 0x1.d5d703727c353p-549, 0.0,
     0x1.decbdbcc404ap-475, 0x1.9e594b0a4e461p-923, 0x1.300ddc7ad2f2ap-543,
     0x1.1bcc8b98fa878p-917, 0x1.f670ba6b845eep-302, 0x1.c1546685a2d74p-731,
     0x1.eb2273c60c14cp-169, 0x1.d40dadcac31fap-983, 0x1.af8ffab3ba4ep-279,
     0x1.6a20a2668dcd4p-548, 0x1.3755c73c3991p-12, 0x1.632024b65444ep-194,
     0x1.edb36292fb704p-319, 0x1.192b321729cfbp-957, 0.0, 0x1.1c4c3b9b9471bp-840,
     0x1.46e0531068fd3p-691, 0.0, 0.0, 0x1.761632217a2dfp-1020, 0x1.66d984911ffcp-99,
     0.0, 0.0, 0.0, 0x1.1b850a571bb22p-475, 0x1.9a00fddbaed93p-747, 0.0, 0.0, 0.0,
     0x1.8c450a2419dbep-134, 0.0, 0x1.c1b4f699ae21ap-893, 0.0, 0x1.eac97ebe19c34p-129,
     0.0, 0.0, 0x1.bafa1f75d2389p-255, 0x1.a19b2d12a6a55p-352, 0.0, 0.0,
     0x1.cd7a79f6f6092p-262, 0.0, 0x1.25196b26dbe69p-969, 0x1.d84410fd68426p-914, 0.0,
     0x1.6b0814b0900bdp-710, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f9bbabcce744p-98,
     0x1.9eb55c7cf559ap-756, 0.0, 0x1.6a3009ab73566p-793, 0x1.11a09539a3efbp-834,
     0x1.b5e0d3656564ep-722, 0.0, 0x1.ac04736390e02p-884, 0x1.ddb74b6cc03abp-721, 0.0,
     0.0, 0x1.755abb9f2d0c2p-247, 0x1.da727568d083ap-32, 0x1.3a4413cae6acfp-39, 0.0,
     0.0, 0.0, 0x1.f7fb020b30353p-472, 0.0, 0.0, 0x1.4730b56482f9ap-53, 0.0,
     0x1.8473882c3c206p-77, 0.0, 0x1.c90ad03dffe1bp-201, 0x1.767172ed9c0d2p-703,
     0x1.f03908718e4dp-279, 0x1.64025c1333947p-958, 0x1.e6c50f3d1e368p-182,
     0x1.e37833c4d2958p-1003, 0x1.4e0119d0c5514p-448, 0x1.c20e7ca9ded06p-673,
     0x1.a444b72ea13d9p-273, 0.0, 0.0, 0x1.7b0119182effp-552, 0.0, 0.0,
     0x1.30f00ade6bbcp-143, 0x1.5e0d19f65c812p-632, 0x1.61f54bfaf2736p-615, 0.0,
     0x1.e31f1f079d983p-113, 0.0, 0x1.20aebf59b3354p-133, 0.0, 0x1.151af6d85660dp-283,
     0.0, 0x1.1eabb9b3ca2dep-293, 0x1.c0d9f34ca9232p-97, 0x1.271a6c2856653p-846, 0.0,
     0.0, 0x1.573c272adff92p-1005, 0x1.58199e18a4182p-668, 0.0,
     0x1.bc751fbec0cddp-124, 0x1.b449089d53ap-543, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.538a87d1423f6p-643, 0x1.8748e4575ffd3p-64, 0x1.ee473ffc54f2dp-100, 0.0,
     0x1.b4ca067723b42p-738, 0.0, 0x1.5d4d63c2745dcp-442, 0x1.8d02b9299b0eap-592, 0.0,
     0.0, 0.0, 0x1.1e31c1bb85ba1p-119, 0.0, 0x1.59bb73c6b073bp-328, 0.0,
     0x1.df810c2e764bbp-224, 0.0, 0.0, 0.0, 0.0, 0x1.472663a672dap-623, 0.0, 0.0,
     0x1.7d356211b0166p-699, 0.0, 0x1.06d1a10fffa9fp-904, 0x1.c9fbfc4fcb29fp-575,
     0x1.6981423a8cbb3p-861, 0x1.dfb09d709e9d1p-126, 0.0, 0x1.4ae63e1d6fcdbp-255, 0.0,
     0.0, 0x1.09acd472fef2ap-991, 0.0, 0.0, 0.0, 0.0, 0x1.7daf3f1a0fde3p-91, 0.0, 0.0,
     0.0, 0.0, 0x1.e4b0f4d4d20bep-773, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e1c4e62e6d1c4p-987, 0.0, 0.0, 0.0, 0.0, 0x1.82dc4b92bfacp-60,
     0x1.e7e3ef815ef1ap-662, 0.0, 0x1.11fbd04797be3p-323, 0.0, 0.0,
     0x1.fb0c9ffa21e5bp-828, 0x1.e6228b60d9c98p-423, 0x1.192b7dd072015p-79, 0.0, 0.0,
     0.0, 0x1.8e4d39b653867p-239, 0.0, 0.0, 0x1.7deef924fb882p-579,
     0x1.d47052be275dap-338, 0x1.4d6d77cd5ebbp-969, 0.0, 0.0, 0x1.2728652a4612fp-407,
     0.0, 0x1.a6b378edfb684p-375, 0.0, 0.0, 0x1.fc8cde873584fp-205,
     0x1.2856871d30144p-931, 0.0, 0.0, 0x1.055ef8ba135eap-757, 0x1.a82186363f2fep-765,
     0.0, 0.0, 0x1.13d5bd3fcf07ap-393, 0.0, 0.0, 0x1.b9066c341bb83p-60, 0.0, 0.0,
     0x1.423594d056c99p-606, 0.0, 0.0, 0.0, 0.0, 0x1.77273009c8cf2p-727,
     0x1.a550602b0287ap-899, 0x1.f8cc9ab89755dp-230, 0.0, 0x1.c94fdb71e2438p-54, 0.0,
     0.0, 0x1.8f0469d8e1b57p-106, 0.0, 0x1.fbfd5a3ae4f82p-627, 0x1.731732cff7e25p-821,
     0x1.3f6bff286e1a2p-873, 0x1.8605b23820cbp-862, 0.0, 0x1.84fbbb7d66157p-622, 0.0,
     0.0, 0x1.e0125ef25fa96p-877, 0.0, 0.0, 0x1.2b5b330eb943fp-695, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a1e001b371c11p-814, 0.0, 0.0, 0x1.281cc0f409b1ep-408,
     0x1.c68a25ea5529fp-90, 0.0, 0x1.3ac03f51bb957p-1009, 0.0, 0.0,
     0x1.b8fc1c2943302p-373, 0x1.b61429235da26p-117, 0x1.882a06d4127eep-769,
     0x1.c5dcd7216d20dp-50, 0x1.4d2082b8e192ep-322, 0.0, 0x1.939b6c40374cfp-499, 0.0,
     0.0, 0x1.47dd7191273cep-227, 0.0, 0.0, 0.0, 0x1.4cd96db81c2cep-389,
     0x1.4880426e2bd84p-21, 0.0, 0x1.b6b4a20faab4dp-612, 0x1.5d282b488333ap-994,
     0x1.7be58710ee4f2p-1009, 0.0, 0x1.48fd27d37a0dp-655, 0x1.99120f9af12b4p-605,
     0x1.a059525a3645fp-113, 0x1.c3fbe4ec5e7cap-428, 0x1.0e6437afa74c9p-61,
     0x1.ba54f6c432b2p-818, 0.0, 0x1.ca4de6d9fded4p-976, 0x1.f15dcb42353c2p-169, 0.0,
     0x1.a66763e26a5fbp-896, 0.0, 0.0, 0x1.812d33edfb0c4p-687, 0.0, 0.0, 0.0,
     0x1.c3d730300be73p-279, 0.0, 0x1.f67e98400666cp-420, 0x1.cd16585813f67p-93, 0.0,
     0.0, 0x1.352e2b7178f03p-41, 0.0, 0.0, 0x1.d0fdbec9e4a3cp-295, 0.0, 0.0,
     0x1.e87f1374c8d6ep-347, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.155b3facf3ebcp-966,
     0x1.36f124438fcfep-654, 0x1.c2aaeeeb1ec13p-923, 0x1.c3ecbbc772036p-669,
     0x1.68109f1df9368p-259, 0.0, 0x1.80045ac445f6p-12, 0.0, 0x1.e5ff3ddeff8b4p-557,
     0.0, 0.0, 0x1.9f44d917d5bdbp-986, 0x1.95ff04dbd8397p-288, 0x1.f48bab748a7c7p-42,
     0.0, 0x1.bb4876fadfae6p-362, 0x1.5092fbd9ba508p-380, 0x1.e66075f008453p-882, 0.0,
     0.0, 0x1.356d1021a11dp-362, 0x1.1159a94b9ac94p-410, 0.0, 0x1.0eb767dac89e6p-680,
     0x1.21aab9eaf8659p-11, 0x1.934ba65c4a897p-524, 0.0, 0x1.1e7bd5efe35edp-830, 0.0,
     0x1.4dfbb7910904dp-483, 0.0, 0x1.4fceb26743a7p-818, 0.0, 0x1.6ef0d7bea1a13p-358,
     0x1.e7c6f0e53792bp-73, 0.0, 0x1.c63e119a4b2b2p-798, 0x1.ffa71a8ef87e9p-739, 0.0,
     0x1.81db83817f4f5p-531, 0x1.b850318d604cep-188, 0.0, 0x1.b02ebc25c0fbbp-21, 0.0,
     0.0, 0x1.66509882290e5p-301, 0x1.6878666fd8064p-757, 0.0, 0x1.b67b8836fed88p-774,
     0.0, 0x1.5f5e12614f761p-197, 0.0, 0.0, 0x1.1b08939cb0523p-139, 0.0,
     0x1.0d4157f033215p-352, 0x1.fa54de58831c7p-262, 0x1.650e0f9377632p-693, 0.0,
     0x1.ac3aeff35ca8p-53, 0x1.35b5d84da087fp-226, 0x1.455c0285ed807p-484, 0.0,
     0x1.0be44223a97f8p-355, 0.0, 0.0, 0.0, 0x1.a39af4e7df883p-108,
     0x1.2421dfaee4eecp-44, 0.0, 0x1.2e3fd4a58b982p-876, 0.0, 0.0,
     0x1.889ba9b828361p-647, 0.0, 0x1.b95c34f00a1cep-500, 0x1.6982761b1612ap-178,
     0x1.f03758d39772ep-108, 0.0, 0x1.d4a2e32a3d044p-291, 0x1.53fc5cc6f2e5ep-959,
     0x1.21247fe0ff3e5p-268, 0.0, 0x1.ea25965e3ea8dp-791, 0x1.132931755640cp-493,
     0x1.9beb5d6f67c4dp-14, 0.0, 0.0, 0x1.1b221f1175511p-714, 0x1.869d60448c29p-741,
     0.0, 0x1.f6861224199fap-445, 0x1.f6e62788587d5p-706, 0x1.3dc3e3512c89dp-53, 0.0,
     0.0, 0x1.8a43d308e482ap-165, 0x1.2048c2251b676p-350, 0x1.2f757e82c2042p-615, 0.0,
     0x1.9cac73964cb93p-292, 0x1.81d337d636802p-636, 0.0, 0.0, 0.0,
     0x1.4da28fd8f8381p-15, 0.0, 0.0, 0x1.06f430941d30ap-621, 0x1.d779c5a601ed2p-509,
     0x1.dcf797a60ffaap-474, 0.0, 0x1.a188974e6f6efp-499, 0.0, 0.0,
     0x1.74d060d3118fbp-101, 0x1.5978a12c61501p-234, 0.0, 0.0, 0.0, 0.0,
     0x1.d04a811623673p-236, 0x1.136a078d26442p-436, 0x1.7ee96a68bef08p-286,
     0x1.df3d1bcd05db2p-958, 0.0, 0.0, 0.0, 0.0, 0x1.fd10877d226eap-554, 0.0,
     0x1.86deec0e0a78p-799, 0x1.1cc0cddf5710fp-894, 0.0, 0.0, 0x1.84eb71e2cf026p-1,
     0x1.56d7309065777p-486, 0.0, 0x1.e6f5d9aa4c6adp-1020, 0.0, 0x1.5386095edd9e1p-9,
     0x1.5b9b467f27a5p-213, 0x1.9236a5a05c044p-459, 0.0, 0x1.e91bbfb4b9259p-499,
     0x1.b83d4ade2fd59p-274, 0.0, 0.0, 0.0, 0x1.64e377377af28p-543, 0.0, 0.0,
     0x1.30bfb3da3e082p-746, 0.0, 0.0, 0x1.2bcbb7f4d99c2p-579,
     0x1.16014d1e44ad5p-1015, 0.0, 0x1.f711ec0acc4ebp-880, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.74860f06a753ap-406, 0.0, 0.0, 0x1.9c7d82a54d723p-602, 0.0, 0.0, 0.0,
     0.0, 0x1.81a479e9e9c73p-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3594324224cb1p-28, 0.0,
     0x1.3a22233b66eccp-400, 0.0, 0.0, 0x1.9ad321becac64p-236, 0.0, 0.0,
     0x1.a62e7c609342dp-999, 0.0, 0.0, 0x1.d33742ab7252cp-768, 0x1.4a9c4e351cab5p-372,
     0x1.da934b84afe5dp-174, 0x1.8de4871862abap-64, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8ec830d87dcc3p-427, 0x1.7202f51fd59ep-537, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.caeb05ab6abaep-233, 0x1.d51f669a18701p-571, 0x1.2cd69b128d84ep-445, 0.0,
     0x1.c2a791817dfebp-821, 0x1.5c17a762fdb67p-580, 0.0, 0.0, 0x1.ad96210578c8cp-784,
     0x1.e80eeb905f0fbp-277, 0x1.e94fe2284c922p-480, 0.0, 0.0, 0x1.68db462d18b29p-332,
     0.0, 0.0, 0.0, 0x1.689f7d5853c18p-890, 0x1.57c7d97354096p-439,
     0x1.9e0f3fa40e842p-60, 0.0, 0x1.113ae1afcbbecp-458, 0.0, 0.0,
     0x1.c3d5270f9ecebp-880, 0x1.bd24af73bac34p-817, 0.0, 0x1.328bc827df2ecp-110,
     0x1.3013662d318e4p-940, 0x1.f0a67a5e23577p-287, 0x1.81e7f929eb476p-347, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60369a021b802p-627, 0x1.5f24f7134131cp-325, 0.0,
     0.0, 0.0, 0x1.f0cb6c11027d2p-1016, 0x1.e919e1f57a3d9p-209,
     0x1.f2fca08be511dp-793, 0.0, 0.0, 0x1.ea63974c67ec3p-171, 0x1.d219cdeaaa877p-513,
     0.0, 0x1.f7e56738a5849p-152, 0.0, 0.0, 0.0, 0x1.a25416adcb5d3p-853, 0.0,
     0x1.638fa869ba16dp-144, 0x1.fcc47980fdae9p-95, 0.0, 0x1.9677191a4e7b8p-643,
     0x1.b4017d2e6ef19p-741, 0.0, 0.0, 0.0, 0x1.188f691da8d8ap-360,
     0x1.85646c9357c42p-639, 0.0, 0x1.3d3ffb3f1cd7bp-834, 0x1.8b7faa55be4bbp-428, 0.0,
     0.0, 0x1.3a6ebf57966f5p-40, 0x1.da08689b3bf1dp-534, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e157823b84239p-415, 0.0, 0.0, 0.0, 0x1.83bb8d2405f34p-187,
     0x1.837e93b05b07ep-407, 0x1.985c8db8fd04cp-59, 0x1.f978969c896c5p-548, 0.0, 0.0,
     0.0, 0.0, 0x1.6402f16cca00ep-447, 0x1.7874aa2be8c9fp-2, 0.0,
     0x1.db663ec771ee4p-889, 0.0, 0.0, 0.0, 0.0, 0x1.5173d2a352afap-230, 0.0,
     0x1.26a55c0f68e47p-79, 0x1.7c39cb90e5ed3p-586, 0x1.d9a8412e5cfb3p-759, 0.0, 0.0,
     0x1.2d94c962d56a6p-228, 0x1.a8f357f9dfe1cp-618, 0.0, 0x1.d6ed4626b457dp-486,
     0x1.ab81d408c73d7p-78, 0.0, 0x1.5eb714fefe151p-238, 0x1.fd0c7cb4bede5p-914,
     0x1.f73a9481bdd99p-589, 0x1.9a74fa66c5874p-942, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.3c05fcb34de7fp-28, 0.0, 0x1.ca8e444082e32p-1020, 0x1.5d5a37ef2f46ap-209,
     0x1.a7e3f93c63575p-49, 0x1.8bc04e31679e2p-834, 0.0, 0x1.3a5782703ab16p-19, 0.0,
     0x1.f31ef0ee1972dp-643, 0.0, 0.0, 0x1.0b19931c1962fp-809, 0.0, 0.0, 0.0,
     0x1.3b24dbd687b8p-949, 0.0, 0x1.27e57289c4fd9p-1022, 0x1.950af33f8f884p-122,
     0x1.96df4439422c9p-644, 0.0, 0x1.6a585068b8b42p-867, 0.0, 0.0,
     0x1.6cbe42e139ed8p-645, 0x1.01a2e6966e67p-11, 0.0, 0.0, 0x1.9a2348a4f5178p-484,
     0.0, 0x1.24159e9239ed1p-145, 0.0, 0.0, 0x1.0edc5e006e33ep-185, 0.0, 0.0, 0.0,
     0.0, 0x1.ab0283d269478p-108, 0x1.1e97e8a1858a5p-923, 0x1.71b58db47ca6cp-467,
     0x1.2324c8bd10bd2p-910, 0.0, 0.0, 0.0, 0x1.0f9e29ed29a57p-772, 0.0,
     0x1.29b1ebae869d6p-368, 0.0, 0x1.30edb96ceb24ep-661, 0.0, 0x1.f35d76ff3e76p-733,
     0x1.ba5a2b424d228p-517, 0.0, 0.0, 0x1.a8847725b7aa2p-111, 0x1.14c0dada50c79p-343,
     0.0, 0x1.500c09c795282p-49, 0x1.3546462e50fdp-844, 0.0, 0.0,
     0x1.1e06edc85d7b4p-98, 0.0, 0x1.cf5bc4b8e70dp-566, 0.0, 0x1.ffe35891016c9p-67,
     0.0, 0x1.9865aff36622bp-960, 0.0, 0x1.7f6231cc68faap-560, 0x1.454a25efb136ep-284,
     0.0, 0x1.5999020fd0dbap-263, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c18d992ac494p-204, 0x1.1ab00eb45a1abp-48, 0x1.6c655118ab765p-513,
     0x1.dd35abf545c52p-507, 0.0, 0.0, 0x1.20c574fa2363p-504, 0x1.3f05b2a76aef5p-435,
     0.0, 0x1.d2dd67015fda7p-505, 0.0, 0x1.0fd076868821bp-35, 0x1.35df603a5e072p-786,
     0x1.84180dd5f90b3p-409, 0.0, 0.0, 0x1.43765081eed8cp-88, 0.0,
     0x1.2e063ec1909e8p-44, 0.0, 0.0, 0x1.e467820932a78p-915, 0.0, 0.0,
     0x1.e1a860ec72aa5p-708, 0.0, 0x1.66686529ad394p-285, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.aebf8632f2ec3p-579, 0x1.93c694cfff20fp-128, 0x1.32d9cd1e4d556p-456,
     0x1.00d571dedd607p-757, 0.0, 0x1.f9cc133949b5ap-514, 0x1.41df66e9608fp-267,
     0x1.80606acd56cccp-958, 0x1.9d3467390813ep-496, 0x1.676a223153377p-693,
     0x1.e0c342bcce763p-460, 0.0, 0x1.7a056b2f0c191p-295, 0.0, 0.0,
     0x1.845be03e96b37p-80, 0x1.e05dc190cd39fp-868, 0x1.49029eca0ae82p-501,
     0x1.e07b4e9b5e16fp-183, 0.0, 0.0, 0x1.049cdf86ed8cfp-1000,
     0x1.d0d759629de7cp-281, 0x1.2d7e17fa9a3e2p-176, 0x1.825e95bc0d095p-176,
     0x1.b9048d026d5cep-306, 0x1.3d5843a466c89p-202, 0x1.fbb05658948b3p-468,
     0x1.5655b68c226abp-728, 0x1.f25c828505ca8p-937, 0.0, 0x1.1e2f2c784baa7p-622,
     0x1.9ef06673b0421p-476, 0x1.acddcd58c361ep-34, 0.0, 0x1.5da939762f141p-460,
     0x1.f613dfd965d9ap-789, 0x1.802b83e5887bap-220, 0x1.3727ffb2e0489p-824, 0.0,
     0x1.96a8b8fa024e9p-865, 0x1.37c9e63c0c7cdp-898, 0x1.7471fe06e1eaap-670,
     0x1.fbcc1f4ef9f73p-596, 0.0, 0x1.72d3ba38b762ap-107, 0x1.42a7bfeb184eep-265, 0.0,
     0x1.d5357af50fb14p-618, 0x1.e53882aaa849ap-369, 0.0, 0.0, 0x1.8d48c39f79f4ap-961,
     0x1.a1a4d09695f0ap-859, 0.0, 0x1.835850d5af43ep-250, 0.0, 0.0,
     0x1.b856890430156p-970, 0x1.232dcf42f40b2p-867, 0x1.ee670071455e4p-310, 0.0, 0.0,
     0.0, 0x1.f37ba1e5386a3p-99, 0.0, 0x1.dd0fb8edf0648p-950, 0x1.9f57a7e56328bp-673,
     0.0, 0x1.5357c2fb77e38p-591, 0.0, 0x1.4830a485ff73ep-760, 0x1.f2038e6315c65p-803,
     0x1.040c6e1964e6p-856, 0.0, 0.0, 0.0, 0x1.351592f14fb6ep-590, 0.0, 0.0,
     0x1.5af1beeb91546p-877, 0.0, 0x1.d16223e8b8689p-525, 0.0, 0.0, 0.0,
     0x1.a1250563d2faap-76, 0.0, 0x1.db1f322004c91p-11, 0.0, 0.0, 0.0,
     0x1.5d9233b20fb78p-558, 0.0, 0x1.8e49f8342999ap-615, 0.0, 0x1.f0967609e7254p-892,
     0x1.19954cde4df6ep-296, 0x1.6fde72713b214p-99, 0.0, 0.0, 0.0, 0.0,
     0x1.57014e599dcbbp-752, 0.0, 0x1.43834e47f7ebep-73, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.60282c72881d6p-399, 0x1.bb30713fe75b5p-965, 0x1.1e2880c96e1b3p-577, 0.0,
     0x1.932764855f27dp-58, 0.0, 0x1.663fc05cfa16cp-666, 0x1.2c83d9477ff3ep-670, 0.0,
     0.0, 0.0, 0x1.a52d76e91e371p-841, 0.0, 0x1.f4a5828c6a2fcp-949, 0.0, 0.0, 0.0,
     0x1.a3c038ddad60cp-434, 0x1.536155d874c92p-102, 0.0, 0x1.7853d4ca7268p-838, 0.0,
     0.0, 0.0, 0x1.db6c77febb36bp-69, 0.0, 0x1.2aa4f6b3cd677p-693, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4b7e86349ec98p-406, 0x1.ce1a8b4b8b3f9p-382, 0x1.9fe617b1fb893p-446,
     0x1.9b186645a65cdp-267, 0.0, 0x1.56271ba7439bep-978, 0.0, 0.0, 0.0,
     0x1.cb3e4b9492b16p-594, 0x1.7aa64042b31cap-29, 0.0, 0x1.63fada0dd2732p-210,
     0x1.5e233191bed46p-844, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b04e4b06e3345p-165, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9da77f6cefda5p-595, 0.0,
     0.0, 0.0, 0x1.92f01492e828cp-613, 0.0, 0x1.cb18551454c66p-330, 0.0,
     0x1.7ec7a1274049dp-148, 0.0, 0.0, 0.0, 0x1.2181aa89bc976p-760,
     0x1.e2ed0d13b7ea2p-561, 0x1.195681212f5c5p-385, 0.0, 0.0, 0.0,
     0x1.cea1e62026c26p-269, 0.0, 0x1.9c4a27b50e394p-590, 0.0, 0.0,
     0x1.076b0c2493866p-562, 0.0, 0x1.d9ed29933f67fp-777, 0x1.25cf23b792565p-839,
     0x1.ef350578f4de1p-273, 0.0, 0.0, 0x1.1599709278bc3p-466, 0x1.60b4cd32abbbbp-468,
     0.0, 0x1.80c95e225a1c1p-240, 0.0, 0.0, 0.0, 0.0, 0x1.dfdf7507ced5p-376, 0.0,
     0x1.4fc1b2f078372p-679, 0.0, 0x1.e9227fe93b79dp-810, 0.0, 0.0,
     0x1.74ef47f005df2p-126, 0.0, 0x1.638371a94d91dp-821, 0.0, 0.0, 0.0,
     0x1.20f384ad99225p-209, 0x1.008273ab1e76p-809, 0x1.8ab75ef28d77bp-157,
     0x1.ce3a15377605fp-876, 0x1.fbe915ecdd93bp-394
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
            tmp1 = Sleef_sinpid1_u05purecfma(tmp0);
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
    printf("Sleef_sinpid1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_sinpid1_u05purecfma bench acc %la\n", global_bench_acc);
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
