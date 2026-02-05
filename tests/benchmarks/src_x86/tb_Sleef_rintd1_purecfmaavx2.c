/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_rintd1_purecfma.c --function Sleef_rintd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.01c65123b678p-715, 0x1.838b147e3d1f9p-924, 0.0, 0.0, 0x1.1101157c361c7p-721,
     0x1.bc2a65e270d6p-656, 0x1.f13569fb5f3f6p-230, 0.0, 0.0, 0.0, 0.0,
     0x1.e84d355cbcd29p-887, 0x1.e3870f57d3f2ep-964, 0x1.bfa5609c7beebp-635,
     0x1.f851d223d76d6p-656, 0.0, 0.0, 0x1.d1a1cd9b79199p-752, 0x1.d02f10dcff774p-620,
     0x1.ecd75b63e187dp-577, 0x1.b89362f25f92ap-1015, 0.0, 0.0, 0.0, 0.0,
     0x1.a0bde3addf249p-771, 0.0, 0x1.b9951aae5df67p-980, 0x1.0e5809fe63288p-409,
     0x1.69e2a342935f9p-377, 0.0, 0.0, 0x1.1a1769852782dp-483, 0x1.57b20f2eccaddp-410,
     0.0, 0.0, 0.0, 0x1.caf7c5d1b4d5p-246, 0.0, 0x1.a81c65e3831aep-859,
     0x1.705b115143d28p-646, 0x1.57911a03da46ap-436, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7db9c5cc3df58p-478, 0.0, 0x1.d20ed3d42af81p-243, 0.0, 0.0,
     0x1.e0960573abd61p-76, 0x1.4ca378070978ap-910, 0.0, 0.0, 0.0,
     0x1.b573ffba860b1p-308, 0x1.ecc5db5e3767dp-914, 0x1.b625efb2c9e39p-727, 0.0,
     0x1.1b754bebfbc9bp-404, 0x1.d099918a0b68cp-309, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1e1e624b8e509p-939, 0.0, 0x1.5f03222f4409ep-408, 0x1.e7b3a0f21bca9p-158,
     0.0, 0x1.f75d3de53a58ep-815, 0x1.a4e646ef9dce3p-511, 0x1.e8ea6f57d5975p-379, 0.0,
     0.0, 0x1.f376e76abf6f6p-913, 0x1.0dd26650524b7p-443, 0x1.2ac70123aedecp-697, 0.0,
     0.0, 0x1.4a5f218a96125p-912, 0x1.599d3c579703dp-813, 0x1.cc4336b8b35ep-848,
     0x1.fd77861a3e2ddp-324, 0x1.cd1751d2ec922p-265, 0x1.453e81b3ab548p-975,
     0x1.14f6b2892e56ap-928, 0.0, 0.0, 0x1.8947b7700600bp-50, 0x1.04a9d8b3ec206p-739,
     0.0, 0.0, 0.0, 0x1.c549de698135fp-127, 0.0, 0x1.68a0c0f491b8dp-237,
     0x1.4b0a8d10316c8p-124, 0.0, 0x1.cb0c6a8de26c6p-322, 0x1.4d740cbb44ca4p-859,
     0x1.e833ff0dd8c9dp-932, 0x1.a87d5afd80f5bp-981, 0.0, 0x1.caca42ed4d777p-228,
     0x1.bb5883eee547cp-551, 0x1.b0a13f983a12ap-946, 0x1.8d5a41eb8d2b3p-69, 0.0,
     0x1.bd333b63e7e4dp-708, 0.0, 0x1.c41bf083abafap-762, 0x1.bbf6638612b8fp-283,
     0x1.bb8b401819f34p-185, 0.0, 0.0, 0x1.dfafcc57221f7p-600, 0.0, 0.0, 0.0,
     0x1.cb4d24a49aed1p-916, 0x1.65e1e7196174ep-204, 0x1.9f051bc5b130dp-1012, 0.0,
     0x1.7c1db184e0a5p-416, 0x1.2fb4a625e70fcp-558, 0x1.820e2fa5834c4p-88,
     0x1.04ad1d8fe68cp-434, 0.0, 0x1.d60065a55a85p-52, 0.0, 0x1.a871d95570178p-3, 0.0,
     0.0, 0.0, 0x1.83a26c85c0d06p-107, 0.0, 0.0, 0x1.29c87ea5be2b1p-91, 0.0, 0.0,
     0x1.bd268b9e78643p-448, 0x1.6f3850f44a588p-410, 0x1.560c76b9ced77p-793, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cdb114c2773a2p-636, 0.0, 0x1.256cebccfdf14p-464, 0.0, 0.0,
     0.0, 0x1.547863d5ee47dp-660, 0.0, 0x1.70b52cebfb9d6p-686,
     0x1.01fe3cb58b59ap-1007, 0x1.87330d681086cp-964, 0.0, 0x1.374e33dfd1a92p-281,
     0x1.3c3c9f5ecdb9bp-174, 0x1.68cb8faefe144p-500, 0x1.9466f2195e857p-792, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.059881b78664ap-503, 0.0, 0x1.769138a123d6bp-432, 0.0,
     0x1.4e17212be327ep-927, 0x1.ca400c954e592p-75, 0x1.1ceece709b3ecp-231,
     0x1.341c2af632ea9p-891, 0.0, 0x1.3a6005b42a69p-921, 0.0, 0x1.e6c9c189576afp-835,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a61505b260487p-374, 0x1.ba394a3a87cdcp-680, 0.0,
     0x1.08f9928ce65abp-26, 0x1.e068692b4fcbp-214, 0x1.ade0752966226p-476, 0.0,
     0x1.9393d85f64004p-329, 0.0, 0x1.6787893425285p-133, 0.0, 0x1.4b34d4c2e5a58p-423,
     0x1.8b7300ae61d3cp-863, 0x1.849a6b670f6ecp-669, 0.0, 0.0, 0.0,
     0x1.39d474c5a17b7p-242, 0x1.75ae69516f4b7p-512, 0.0, 0.0, 0.0,
     0x1.2c39bb1f40753p-329, 0x1.4c9429558e028p-425, 0.0, 0x1.b1240bb63b464p-648, 0.0,
     0.0, 0x1.4625be0648b88p-639, 0x1.15de65baa2b87p-934, 0x1.9583c4a7447eap-141, 0.0,
     0.0, 0x1.6f0765c800f66p-374, 0.0, 0x1.f0dc56a1a26adp-990, 0.0, 0.0, 0.0,
     0x1.abbbb5d23a48bp-397, 0x1.5cd738e988797p-971, 0x1.9415430301d8ep-9, 0.0,
     0x1.561d08eaeaa3fp-700, 0.0, 0x1.003b2849a41edp-439, 0x1.07efe36ce83b3p-704, 0.0,
     0x1.6f3559650d9e4p-897, 0.0, 0.0, 0x1.c78d13f8d7941p-795, 0.0,
     0x1.cd86c69067163p-380, 0.0, 0.0, 0x1.48d0d1cadcfa9p-333, 0.0,
     0x1.ae1cd3956d9c1p-800, 0.0, 0.0, 0.0, 0.0, 0x1.6a61d8db3dde5p-347, 0.0,
     0x1.0dec5f657a926p-335, 0.0, 0x1.d7bb922081bf4p-770, 0x1.747d6d627dd5dp-362,
     0x1.2e24ba2194c1p-63, 0x1.24093a178e122p-754, 0x1.ed346b0904cb6p-643,
     0x1.6012f49e67ca6p-988, 0.0, 0x1.b928212c7b33ep-136, 0x1.d02db4684ca37p-579,
     0x1.d9cc9667a6833p-986, 0.0, 0x1.91bea28dd3a43p-471, 0.0, 0x1.531977efe4167p-582,
     0.0, 0.0, 0x1.2a0fde1f83d3dp-575, 0.0, 0.0, 0x1.81b3a2373ed2ep-78, 0.0, 0.0, 0.0,
     0.0, 0x1.2a5ae38f74c06p-500, 0.0, 0x1.acea832f5b02dp-620, 0.0,
     0x1.d57324d5930dp-922, 0x1.037153ab219bfp-986, 0.0, 0x1.b394d652b73fp-865, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e56d0cea0709bp-949, 0x1.78208c02784cbp-285,
     0.0, 0.0, 0x1.90c7c9721e763p-797, 0.0, 0x1.26fbf7fee368ep-56, 0.0, 0.0,
     0x1.5c30d285530a8p-497, 0.0, 0x1.49e63a346af38p-701, 0x1.7203c7537dc33p-876,
     0x1.330f4b7c2381bp-1007, 0.0, 0x1.baa724709669fp-776, 0x1.dfaf0609bff29p-344,
     0x1.8731c7f4e51b5p-205, 0x1.0626c4ba44e75p-727, 0x1.0f6c164c747e2p-28, 0.0,
     0x1.c80931e603b39p-884, 0x1.6d2435dab40a5p-1015, 0x1.481723aa567ap-760,
     0x1.1a39ab6b63ca2p-595, 0x1.7b55c6d5a9619p-459, 0.0, 0.0, 0.0, 0.0,
     0x1.d73a3254ec271p-552, 0.0, 0x1.e07ac2fab9a81p-62, 0.0, 0x1.ddd3da1f7646ap-121,
     0.0, 0x1.9a32a6df1c693p-998, 0.0, 0.0, 0.0, 0x1.a9004da80c57ap-917, 0.0,
     0x1.d6bb993e8d0a8p-900, 0x1.b7dbcf188845p-829, 0x1.b94b8966876bfp-445, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.462bd10d8492p-168, 0.0, 0x1.31083ef9f321fp-776,
     0x1.98b3e1b28931fp-583, 0.0, 0x1.249dbe9823955p-895, 0.0, 0.0,
     0x1.6147d08a56982p-465, 0.0, 0x1.33d862f562003p-670, 0.0, 0.0, 0.0,
     0x1.f4b57fb3f20fdp-644, 0x1.79a9165bcfdc4p-378, 0.0, 0.0, 0x1.3fa7c376f2d7ep-787,
     0.0, 0x1.3a0fb3a34e91cp-55, 0.0, 0.0, 0x1.4c080b469d2eap-774, 0.0, 0.0,
     0x1.822db2d622dfp-314, 0.0, 0x1.d5fe0e692114ap-858, 0x1.bbb62475aa8c1p-956, 0.0,
     0x1.aa00de0171eb2p-253, 0x1.646001e4ac6d2p-609, 0x1.37152f1b8d603p-725, 0.0,
     0x1.a78ddf10fe5e7p-1, 0.0, 0x1.e29362ef4809fp-172, 0.0, 0.0, 0.0,
     0x1.80acc3c96d7fdp-333, 0.0, 0x1.9bbd0f06b4769p-484, 0x1.aabce8991cd22p-49, 0.0,
     0x1.a69ba2f4901d4p-935, 0.0, 0x1.eea4f9dc5939bp-94, 0.0, 0x1.1af57e84ab551p-739,
     0.0, 0.0, 0.0, 0.0, 0x1.61d161f8c005dp-922, 0x1.f3c7e3d46847ep-497, 0.0, 0.0,
     0x1.b4f896fcac241p-836, 0x1.0977e3754f758p-520, 0x1.8b4f5336de34ep-105, 0.0, 0.0,
     0.0, 0x1.43fc2bc5f2932p-20, 0x1.f6b8f4bc4c525p-398, 0.0, 0.0,
     0x1.bf7b926f57916p-544, 0x1.a616f7f3230bcp-749, 0x1.a8d066d2a9d17p-732,
     0x1.7b47d672bf56fp-147, 0.0, 0x1.b1bf39ea13ad3p-64, 0.0, 0.0, 0.0,
     0x1.ab9fb5aa94af4p-619, 0.0, 0x1.4cb7007a44b47p-915, 0.0, 0x1.9a23ef1fefa83p-143,
     0x1.4a2b22e911f35p-882, 0.0, 0.0, 0x1.133c42e29f7p-60, 0x1.f4682625db3b2p-669,
     0.0, 0x1.1c53ee2408977p-466, 0.0, 0.0, 0x1.bed08161a6284p-798, 0.0, 0.0,
     0x1.f3ffca36b4193p-1004, 0x1.c3d9cc7b07015p-278, 0.0, 0.0,
     0x1.7034666b8b2e6p-886, 0x1.f07e2103ba137p-910, 0x1.6c9c56cab4bfcp-517,
     0x1.c078e371a18b9p-133, 0.0, 0x1.6ee351820633cp-677, 0.0, 0.0, 0.0,
     0x1.1fd8f769e1ac2p-238, 0.0, 0x1.57986e02af9c3p-1007, 0x1.987a47e0b7c08p-380,
     0x1.2a35db426f60ep-801, 0x1.cdf0ed6b587f5p-293, 0x1.f25ca63951c2dp-584, 0.0, 0.0,
     0x1.3fe12c92f3293p-11, 0.0, 0x1.e6b3f4e6c5996p-534, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4ab1b76584b2ap-795, 0.0, 0x1.724c6a57f119bp-145, 0x1.2f116cd41ca85p-400, 0.0,
     0x1.b2dc1c1a905d9p-711, 0x1.3abcbd78cf455p-777, 0x1.5e325d8742567p-85,
     0x1.81ef8871d8a7fp-687, 0.0, 0.0, 0x1.e96bfc702fdep-123, 0.0,
     0x1.6fbcd87dd899bp-481, 0.0, 0x1.ef1b5c9edbf86p-641, 0x1.dba0fa9c1598bp-962, 0.0,
     0x1.166f0b02e7d95p-326, 0.0, 0.0, 0x1.879292e4e06efp-52, 0x1.9561ebab7932cp-737,
     0.0, 0.0, 0.0, 0x1.7423569ee57bep-696, 0.0, 0x1.fd535d0e2149cp-270, 0.0,
     0x1.ecac1a496d19bp-194, 0.0, 0x1.ce2c5f24c1c9dp-533, 0x1.30487f85ad5a6p-852,
     0x1.999f9fe800b8ep-800, 0.0, 0.0, 0x1.b9f359ddc650ep-105, 0x1.7e73073743ebp-652,
     0.0, 0.0, 0x1.dc3a46141c4afp-869, 0x1.02c6ec52fe624p-149, 0x1.dbb18c8de6d42p-755,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1310f36f6de55p-512,
     0x1.706a029981628p-863, 0x1.8b3c105bd7989p-791, 0x1.cb56d06616d99p-828, 0.0,
     0x1.3773b29a4f543p-727, 0x1.e87dfbaf4b034p-943, 0.0, 0x1.63a0a6f1034c6p-741, 0.0,
     0x1.6faac696bb579p-244, 0.0, 0x1.a5674a1f13e85p-521, 0x1.9ea8d92f3c2cfp-865,
     0x1.08dfe0f86cf1p-589, 0x1.50a9dab0ab042p-494, 0x1.ec71d7baf93ap-512,
     0x1.6cee70f20971bp-405, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.318964e740d4dp-352, 0x1.62c90c7544fd8p-79, 0.0, 0.0, 0.0,
     0x1.e84d97bf1ca8ap-635, 0.0, 0.0, 0.0, 0x1.747397989272p-745, 0.0, 0.0,
     0x1.81e8f839eff02p-820, 0.0, 0.0, 0x1.ee2f83ef23849p-454, 0x1.577da21d60c23p-155,
     0x1.61dddb390382ap-236, 0.0, 0.0, 0.0, 0x1.c7f64d3f6232fp-303,
     0x1.3f33fc71ba8b9p-8, 0.0, 0x1.f2968fb7f7dc8p-731, 0.0, 0.0,
     0x1.ae66e28fad7acp-731, 0x1.85fcdc918b1d6p-386, 0x1.d8560ecec427p-635,
     0x1.cc02c7643bd79p-163, 0.0, 0x1.b050064febf16p-100, 0.0, 0x1.bd3eb01fc0b88p-269,
     0x1.2d5a59cd07f6cp-973, 0x1.ada77070e71d3p-299, 0.0, 0x1.fe098d83d6d58p-549, 0.0,
     0.0, 0.0, 0.0, 0x1.20ce708720506p-618, 0.0, 0x1.fcfec0a94f5d7p-677,
     0x1.8bd34c5ee8defp-987, 0x1.457224c40c7b1p-554, 0x1.187c6a76157f6p-478, 0.0, 0.0,
     0x1.f23569cfe172ap-418, 0.0, 0x1.fb7edd2e2fdefp-350, 0.0, 0x1.1b9f150ed85dfp-970,
     0x1.362b9d2e75acdp-215, 0x1.9913329ad8d64p-659, 0x1.d01123e74e2dbp-51,
     0x1.80afe6d26e577p-983, 0x1.9f8ade6bf4752p-479, 0.0, 0.0, 0x1.6fecd95e6b3e9p-647,
     0x1.204edc7354efp-513, 0x1.6e4fbaaa64d0ap-795, 0x1.24c2b51c5f187p-281, 0.0,
     0x1.380333ed4b86dp-949, 0x1.7c35472076c94p-366, 0x1.e653763ea7538p-798, 0.0,
     0x1.685bc659b499p-159, 0.0, 0.0, 0.0, 0.0, 0x1.f385cff53c245p-486, 0.0,
     0x1.97c7484685d22p-31, 0.0, 0x1.31578873dbecbp-172, 0.0, 0.0, 0.0, 0.0,
     0x1.3bfc71f37f88p-417, 0.0, 0x1.cdf4d6b70b89ep-936, 0.0, 0x1.29ea72db94266p-308,
     0x1.df70fadbe002ep-249, 0.0, 0.0, 0x1.2bc8a04063402p-463,
     0x1.9737a2b506f59p-1020, 0.0, 0.0, 0x1.c2030158464d7p-3, 0x1.b00baa68eae1bp-846,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e20b2d0f6c77p-813, 0.0,
     0x1.7b251e4bd77c2p-320, 0x1.ddba6bad9185cp-13, 0.0, 0x1.72ea128b7b349p-7,
     0x1.4c8c26741e2e3p-768, 0.0, 0.0, 0.0, 0.0, 0x1.c5874143fbb61p-684,
     0x1.1794b01ae1f84p-188, 0.0, 0.0, 0x1.8e46498d635dp-633, 0.0, 0.0,
     0x1.7b694bc5fa364p-63, 0.0, 0.0, 0.0, 0x1.c5f2793ce1336p-307, 0.0,
     0x1.68d3410c56046p-356, 0.0, 0x1.2768296a98928p-784, 0x1.b97da4433a4d8p-593,
     0x1.9d77edbc004fp-1, 0x1.8f0406c0ae09ap-711, 0.0, 0.0, 0x1.3eaee175b7d77p-333,
     0x1.8206886c1de4ap-96, 0x1.5c9eee723163bp-417, 0x1.3ed36504a1cbp-362,
     0x1.ddc307912fa39p-169, 0.0, 0x1.97f7da84fcf24p-408, 0x1.031da585081bfp-210, 0.0,
     0.0, 0x1.1802a34dc4009p-334, 0.0, 0.0, 0x1.c870e55b569d1p-281,
     0x1.909852b46bd7ep-67, 0.0, 0.0, 0x1.3c127551ab746p-1015, 0x1.d716b7b943205p-997,
     0x1.309edb419ffe1p-381, 0x1.9f000fc46513ap-542, 0.0, 0x1.a5b999a77c9b3p-195,
     0x1.4a39859e0f3b3p-956, 0.0, 0.0, 0x1.863f897ab18a3p-846, 0x1.4861f7449da2ap-499,
     0.0, 0.0, 0x1.5491df3adf66ap-406, 0x1.c51d037a52333p-55, 0.0,
     0x1.762e47da5db2bp-443, 0x1.ca20599d24802p-734, 0x1.f5bd51db88e16p-508,
     0x1.011cff3b5727ep-484, 0x1.84ef50d961702p-765, 0x1.f2598a72a11a2p-131, 0.0, 0.0,
     0x1.48d3a229cd425p-205, 0x1.32b4a1e6557afp-317, 0x1.a2726fed6bf51p-789,
     0x1.0a5ee63a8ead7p-857, 0x1.4c0c716d2d2eap-391, 0x1.f33dc92408354p-647,
     0x1.81b2ff5ac3167p-321, 0.0, 0x1.baf9fdccfda6cp-121, 0x1.27f798b6fad2dp-736,
     0x1.9fa5588d120dcp-161, 0.0, 0.0, 0x1.01914d5025b37p-906, 0.0, 0.0,
     0x1.c19e989c70a65p-11, 0x1.86655d2c9b63ep-558, 0x1.18351af747074p-410, 0.0, 0.0,
     0x1.3909c86ed2309p-380, 0x1.6dde67c2d4b51p-226, 0.0, 0.0, 0x1.f91b976df74d9p-632,
     0x1.8792408fa74bdp-162, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8072eb4fe40fbp-234, 0.0,
     0.0, 0.0, 0.0, 0x1.73e01856d6c49p-735, 0.0, 0.0, 0x1.dd2ba035a6feep-201,
     0x1.e53ac1f5a647ep-481, 0.0, 0x1.ea4951bd0ba03p-252, 0x1.da807303b1f42p-244,
     0x1.12b304aa184ddp-47, 0x1.24896c0595096p-886, 0.0, 0x1.f348b41383365p-80, 0.0,
     0x1.3bba1866488fbp-337, 0.0, 0x1.c1108cbeb3e95p-469, 0x1.27c61658ba727p-7,
     0x1.53128c332e767p-744, 0x1.37c3aa2e59ce4p-215, 0x1.f5ff105dc5d29p-720, 0.0,
     0x1.0479746b38a48p-628, 0.0, 0.0, 0.0, 0x1.92dd2c4030964p-19, 0.0, 0.0, 0.0, 0.0,
     0x1.82346fee08f1fp-49, 0x1.be99e495a379fp-582, 0x1.edad179bce88dp-763,
     0x1.4041e8eeedaf5p-780, 0x1.c54c364dbdadcp-748, 0x1.e93ab55ac70fdp-952, 0.0, 0.0,
     0x1.f46fb250dae18p-898, 0.0, 0.0, 0x1.638f7791ae192p-434, 0x1.b4a1edf92c3c5p-594,
     0.0, 0x1.0567cb20b63c8p-563, 0.0, 0.0, 0x1.daf5b3eb61d5ap-260,
     0x1.0cf39886b6df7p-716, 0x1.db49259218fep-828, 0x1.3e43402da6771p-718,
     0x1.c0c2a70277c88p-578, 0.0, 0x1.907831fff1493p-382, 0x1.c1054cd4088fdp-770, 0.0,
     0.0, 0.0, 0.0, 0x1.bdc5f75357778p-747, 0.0, 0.0, 0x1.e51c08a1424f8p-101,
     0x1.f79a5a9d86dd6p-939, 0x1.6a6a2903acb76p-776, 0x1.083a9653b6213p-896, 0.0, 0.0,
     0x1.82c8d05b33cbdp-319, 0x1.042fafc7bb39p-824, 0.0, 0.0, 0x1.362a1b7551d35p-87,
     0x1.c2ba3c616cf1p-233, 0.0, 0x1.0047e22f1d788p-860, 0.0, 0x1.913da3d33da73p-308,
     0x1.eda39fc42b1b6p-864, 0.0, 0.0, 0x1.c2d28c6fd108ep-433, 0x1.594a691d73824p-698,
     0x1.18abec8c6fbdep-295, 0x1.4a3b8b5a5d7b7p-625, 0.0, 0x1.49b7f4e1cfdep-319, 0.0,
     0x1.4a1433668d1e9p-124, 0.0, 0x1.10400159abe26p-318, 0.0, 0x1.ee470c9d865e9p-610,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.82b481f786c78p-921, 0.0, 0x1.a2c7f1b87f0d8p-930,
     0x1.ab51a3b6721cfp-563, 0x1.58a90b62f0c28p-1017, 0.0, 0x1.4fb1cb3484c33p-920,
     0x1.4e6c5d9392b63p-129, 0.0, 0.0, 0.0, 0x1.5555ea07b07e2p-176,
     0x1.df15809ed2b5p-450, 0x1.5a8aaf11dc43fp-888, 0.0, 0x1.0c9364ac8b9e2p-102, 0.0,
     0x1.d5949351c4189p-666, 0x1.007b427d2f4cbp-216, 0x1.5927cf790aba8p-967,
     0x1.d18e2c9442c61p-555, 0x1.70fb7cbe95953p-876, 0.0, 0.0, 0x1.e7ccff5c02c7p-285,
     0.0, 0.0, 0.0, 0x1.3e2afc9ed03c7p-710, 0.0, 0x1.c54096ba068a7p-805,
     0x1.753b7cb62ec01p-29, 0.0, 0x1.b60d4eeac845bp-878, 0.0, 0x1.ff48f67ab615cp-77,
     0x1.383a59d69b1bp-691, 0x1.d68a075eee31bp-193, 0.0, 0x1.1405b1cabbb25p-212,
     0x1.e68bd451e0183p-639, 0.0, 0x1.f1b01685ce401p-56, 0.0, 0x1.13f6355495becp-287,
     0.0, 0x1.5d4e2fbcc8042p-426, 0x1.6560b0c95f447p-938, 0x1.f774cf42cb8aap-628, 0.0,
     0.0, 0.0, 0.0, 0x1.16370ebca90c3p-857, 0x1.3eb946964260bp-989, 0.0, 0.0, 0.0,
     0x1.9708cd1ddf82p-979, 0x1.923dfe3ff59ecp-997, 0.0, 0x1.f22c5a1af0d52p-556, 0.0,
     0x1.cbf7ebf4d22a9p-507, 0x1.57be75a7e123dp-631, 0x1.5a9315aaf3851p-160, 0.0,
     0x1.97eee71940a81p-871, 0x1.906d9aef64832p-907, 0x1.265542b3c1709p-163, 0.0,
     0x1.f83660a277179p-809, 0.0, 0.0, 0.0, 0x1.eccc6066e9021p-793,
     0x1.f6d3132dfbc1fp-535, 0.0, 0x1.b8be4b8badcedp-785, 0x1.c3e2d76cf465dp-858,
     0x1.ba0fd99689c83p-307, 0.0, 0x1.e87891639f35ap-892, 0.0, 0.0,
     0x1.7d2fee884cb85p-713, 0x1.28137d8527a6p-1, 0x1.867cfdd4b1902p-311, 0.0,
     0x1.52a960867a04fp-22, 0.0, 0.0, 0x1.ac621624336d2p-797, 0x1.07c01e8056c5fp-875,
     0.0, 0.0, 0x1.19ad73cdddfa4p-517, 0.0, 0x1.909ab3659e981p-584, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8bcd5179f35bdp-122, 0.0, 0x1.eac00f1cde7c8p-884,
     0x1.c095c2b559815p-108, 0.0, 0x1.b0ee64e375d33p-329, 0.0, 0x1.7e8b6aab7d70ap-402,
     0x1.2059362e5d1f9p-666, 0x1.65c845407d731p-653, 0x1.4310d2d1660fcp-532, 0.0, 0.0,
     0.0, 0x1.6d1ca13e480a9p-832, 0x1.a8a1c1c27a33p-554, 0x1.800b4d7e483bp-501, 0.0,
     0.0, 0.0, 0x1.43f2e266f507p-217, 0x1.8a97037fb3031p-23, 0x1.c07d7f112cc6cp-102,
     0.0, 0.0
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
            tmp1 = Sleef_rintd1_purecfma(tmp0);
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
    printf("Sleef_rintd1_purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_rintd1_purecfma bench acc %la\n", global_bench_acc);
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
