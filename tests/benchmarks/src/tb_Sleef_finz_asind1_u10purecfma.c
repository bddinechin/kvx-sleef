/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_asind1_u10purecfma.c --function \
 *     Sleef_finz_asind1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.bd79d7804b876p-51, 0x1.58bfb71eab851p-1016, 0.0, 0x1.8ec7a6d743455p-992,
     0x1.39c1067a5b594p-144, 0.0, 0.0, 0x1.bb3f3b71e8e52p-961, 0x1.161962d12d263p-890,
     0x1.49b180b43ef12p-1003, 0x1.facc44d634adep-149, 0.0, 0.0,
     0x1.a8647af0b7bacp-804, 0x1.950e4b3c73b77p-786, 0.0, 0x1.3af35d99346cdp-728,
     0x1.4205db26e1769p-48, 0.0, 0.0, 0x1.e13320c3dcdc5p-481, 0.0,
     0x1.992a58a013844p-99, 0.0, 0x1.d6d3c59114156p-489, 0x1.00c3f45a3a85dp-938,
     0x1.1cb2cac7406fp-882, 0x1.f630ae499f8b6p-231, 0.0, 0.0, 0x1.dfc09567199a5p-47,
     0x1.6983b7b2a091dp-995, 0.0, 0.0, 0x1.0d9e0d50e8f9ep-860, 0x1.7e7208f6b70ffp-446,
     0x1.de3d837407baep-142, 0.0, 0.0, 0.0, 0.0, 0x1.d288ba804d567p-414, 0.0, 0.0,
     0x1.bc3b526027a06p-122, 0.0, 0x1.7d3d9808d5d7cp-498, 0x1.cd99840c801ddp-203,
     0x1.70b0c262185ecp-854, 0.0, 0.0, 0x1.d04519bca414fp-967, 0x1.9f715d6824e1ap-618,
     0.0, 0x1.4d4c29719faf6p-716, 0.0, 0.0, 0x1.b2c6bb95d4205p-163,
     0x1.e1ddeef60325ep-4, 0x1.4f35db469188bp-551, 0x1.22d5335a57e08p-19,
     0x1.d8a3537e2023ep-966, 0.0, 0.0, 0x1.1ab23a9232e68p-137, 0.0,
     0x1.4f8bedb550754p-388, 0x1.9ea80586b9576p-868, 0x1.3d73f04260ab9p-219, 0.0,
     0x1.c4a3e168d5c9ap-451, 0x1.53f0e9817b5d1p-420, 0x1.c0943b22dd61ap-293,
     0x1.2febfcaa60de1p-734, 0x1.82eed85be0575p-995, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.142fe666c032p-387, 0.0, 0x1.666acdd99f17p-669, 0.0, 0.0, 0.0, 0.0,
     0x1.4f6fba7c62c8ap-132, 0x1.51fc4a0ca73bep-278, 0x1.ac9beb6bcea1p-814, 0.0, 0.0,
     0.0, 0x1.4bef858f01a9fp-360, 0x1.1f54e68fbc826p-163, 0.0, 0x1.b66363d999fd7p-230,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.39858b8cc99aap-97, 0x1.bff8b52f251a4p-558,
     0x1.16efa52fdad23p-243, 0.0, 0x1.6668c8a3e2b95p-956, 0x1.d41f8afdceeb9p-276, 0.0,
     0x1.8a5421cdec3a6p-50, 0x1.089e36a95cc0cp-146, 0.0, 0.0, 0.0, 0.0,
     0x1.01d8a8bf5d47ep-210, 0x1.8c830490fa54cp-114, 0x1.95ae0e04588bbp-237,
     0x1.732e703e75707p-473, 0.0, 0x1.22cee37f0a7a5p-529, 0.0, 0.0, 0.0, 0.0,
     0x1.7874a9b307012p-148, 0.0, 0x1.7d00e3c7b00fdp-815, 0.0, 0x1.e0e81bf5819b5p-670,
     0x1.d8cd57a09867ep-836, 0x1.8e27fa1ecc5bdp-577, 0.0, 0.0, 0x1.098eec79fb7edp-496,
     0x1.6d71e27ad2ad6p-946, 0x1.a62026602bbcap-619, 0.0, 0.0, 0.0,
     0x1.1ff9cbe141aa9p-10, 0x1.0775fcdebdddp-117, 0x1.faa4643915a6dp-885,
     0x1.6c73d809bb637p-334, 0.0, 0.0, 0.0, 0x1.33e052bf99b08p-675, 0.0,
     0x1.1af3df77aadc4p-254, 0x1.e38a7f56be893p-449, 0x1.783f4151c1bcfp-519, 0.0, 0.0,
     0x1.11a482b445ca6p-489, 0x1.59c599f2e3a66p-194, 0x1.d21d2fd9b4a0fp-735,
     0x1.3b5e3d7c99fe2p-310, 0.0, 0x1.525025adb513dp-834, 0x1.92ea8678496b5p-242, 0.0,
     0x1.5190e8eba402bp-299, 0x1.b388c2f138a81p-445, 0x1.b5995260a0656p-550,
     0x1.50f58a892c53dp-806, 0.0, 0x1.4cfdf2be7fba3p-669, 0.0, 0x1.cb3b8bc0a8bfcp-721,
     0.0, 0.0, 0x1.7dd15deab4f31p-398, 0x1.c5d461bce934bp-300, 0.0, 0.0, 0.0,
     0x1.58e3e0d62236ep-224, 0x1.5cd23200b6fc6p-944, 0x1.050e258a94955p-29,
     0x1.c1827438c3aa2p-613, 0.0, 0.0, 0.0, 0.0, 0x1.f5e067b4c0cf2p-105, 0.0, 0.0,
     0.0, 0.0, 0x1.cae7afc5d48dfp-39, 0x1.455de12335ac2p-702, 0.0, 0.0,
     0x1.d6a287e36db98p-960, 0x1.d1e2be5fbdf6cp-9, 0.0, 0x1.d702cd763bbf7p-785,
     0x1.cc44529d1b7p-953, 0.0, 0x1.fa1540c1b7ea6p-802, 0x1.5eb14d3afc0a4p-185,
     0x1.a458ac2961b5dp-319, 0.0, 0x1.9a0c3e407efafp-94, 0x1.cdfee3d2146d5p-1016,
     0x1.a1ee375997278p-150, 0.0, 0.0, 0x1.11c0a29dc682ap-207, 0.0,
     0x1.180f97a6d6a08p-579, 0.0, 0x1.fef655ea584b4p-257, 0x1.469c19058f85bp-393, 0.0,
     0.0, 0x1.3f2d93a9f391dp-407, 0x1.ab9c8f5d7dd82p-781, 0x1.28915f0dad5a8p-768,
     0x1.a7cce55bb490ap-72, 0.0, 0x1.90b7c02f3d3bep-467, 0x1.ea04a9facc8a7p-7,
     0x1.744a4a994131bp-567, 0x1.7966bb378fed3p-477, 0x1.b92fdb79791eap-942,
     0x1.37aefac0679d6p-622, 0.0, 0x1.e4c3400532b2dp-20, 0.0, 0x1.18f97f364111ap-936,
     0x1.7627772da3cebp-316, 0.0, 0x1.5bc54235183b4p-78, 0.0, 0x1.b158ddad242e9p-783,
     0.0, 0x1.998a7cc2ac6ep-825, 0x1.da331dc303eb4p-421, 0x1.5a5c8227e1675p-362,
     0x1.274f9c2f74095p-274, 0x1.8a441856807ecp-407, 0.0, 0x1.60f56ac13001ap-901, 0.0,
     0x1.6034c8df6b653p-529, 0.0, 0x1.c0941e212db8fp-720, 0x1.8e541ff481cap-765,
     0x1.e30209ec11129p-570, 0.0, 0x1.068ff565a43dcp-380, 0.0, 0.0, 0.0,
     0x1.24aaebfa44a1cp-443, 0x1.e2ae57a4ba338p-8, 0.0, 0x1.a46ce475dc8bcp-729,
     0x1.fca100ce3f1d4p-67, 0x1.dec6df9329d95p-629, 0.0, 0.0, 0.0,
     0x1.146ce92ec7a5ep-243, 0.0, 0.0, 0.0, 0x1.4c72a9dc06ffep-575,
     0x1.f9653c52d3147p-124, 0x1.d23fec76b07a4p-728, 0x1.628892640b279p-176,
     0x1.abaa1cbb80b92p-366, 0x1.67455c36959ep-74, 0.0, 0.0, 0.0,
     0x1.5f2c249c8232bp-540, 0x1.fcaf9e63ace0fp-920, 0.0, 0.0, 0x1.fcddf84c6f139p-629,
     0.0, 0.0, 0x1.cf7613de77dfep-84, 0x1.9d444726a3555p-909, 0x1.6bc61e19b0d76p-951,
     0x1.4a952b5939c7fp-379, 0x1.817db7cfd725dp-520, 0x1.8e66a5b58aac6p-218, 0.0, 0.0,
     0.0, 0.0, 0x1.07278a9c79f72p-294, 0.0, 0x1.afc2d1be5cd75p-94,
     0x1.602a9eee9d595p-162, 0.0, 0.0, 0.0, 0x1.df80dfbe60ebep-387,
     0x1.c8177720b94d7p-406, 0x1.679f4c487e82bp-83, 0x1.2a9320737cf19p-379, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cb60753854c2p-35, 0x1.684e6e76ab1f8p-420,
     0x1.37a6a68e3a898p-442, 0.0, 0.0, 0x1.280039f033dbp-142, 0x1.b6390a8fa7127p-319,
     0x1.1da49db287f62p-304, 0x1.e1b26dafbaa48p-284, 0.0, 0x1.d4c8c0a323a18p-570, 0.0,
     0x1.b472c7f122115p-275, 0x1.bd39768730cfep-241, 0.0, 0.0, 0.0,
     0x1.0328b8929a8d7p-395, 0x1.7d7b451187c5ep-619, 0x1.d3203fa57ab2dp-260,
     0x1.101c0a71d7a59p-266, 0.0, 0x1.f720e72bcc717p-522, 0x1.dfbd3e88c66efp-292,
     0x1.393837165de34p-112, 0.0, 0.0, 0x1.c81076f43d8c5p-194, 0x1.86d97f93a2a66p-610,
     0x1.f3e0ec0a6a4afp-957, 0x1.e25a7e2ee83eep-879, 0.0, 0x1.b1d2c09ce9e65p-152, 0.0,
     0.0, 0x1.3d73475ca0f7dp-543, 0x1.7bad999d7dbefp-896, 0x1.3bfc2dbc34c22p-312,
     0x1.dd83c4564c63fp-365, 0.0, 0x1.49d99351ef53ep-879, 0x1.6cd46aeb17b59p-392,
     0x1.5ab3f01f9f149p-447, 0x1.f68255443373ep-877, 0.0, 0x1.b84ab8d6aeecbp-188,
     0x1.026def9120af2p-418, 0.0, 0.0, 0.0, 0x1.dd2eb3cc67d74p-956, 0.0,
     0x1.4731159007ea6p-680, 0.0, 0x1.d04b513836eaep-93, 0x1.5104062641ce8p-525,
     0x1.9dcc84089562ap-746, 0.0, 0x1.e48d70d03b0ffp-718, 0.0, 0x1.03fd8a71ddea4p-622,
     0.0, 0x1.cc0b0d131c1c4p-175, 0.0, 0.0, 0x1.2dfd33f4f7298p-469, 0.0, 0.0, 0.0,
     0.0, 0x1.8e96bfa89464ap-552, 0x1.5601a907b6044p-16, 0x1.d943d08dcbeccp-580,
     0x1.55616f389974cp-152, 0.0, 0x1.2f404a3cddf39p-973, 0.0, 0x1.dae6da436c737p-661,
     0.0, 0x1.ce6bd0df77ca4p-691, 0.0, 0.0, 0x1.e47c33bb108abp-555,
     0x1.a46a9aeebc37ap-820, 0.0, 0.0, 0x1.2daf03f898267p-326, 0.0,
     0x1.deaa82354143ep-137, 0.0, 0x1.ec2890fc18d17p-642, 0x1.2c9f7bdd6af19p-165, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.72c2130647d4ap-358, 0x1.d823cf1ffbc01p-397,
     0x1.49c1181e54048p-18, 0x1.5eee1120cc076p-247, 0.0, 0x1.a98833a8bf117p-556, 0.0,
     0.0, 0x1.20a6f59a6ecf3p-865, 0x1.88f62fa676797p-787, 0x1.450acc48bbbb4p-579, 0.0,
     0.0, 0x1.12ca6ca2fb8dfp-316, 0.0, 0x1.97bc5d9af9333p-877, 0.0, 0.0, 0.0, 0.0,
     0x1.828740a2256a5p-278, 0x1.fa1dfdd536cadp-834, 0.0, 0.0, 0x1.3f3dee47a461bp-995,
     0x1.c30a313bc91ap-865, 0.0, 0x1.cb5a10ac2b217p-343, 0.0, 0x1.2d41c2a73eae9p-354,
     0x1.066874e3ccf56p-1006, 0x1.57cb13dbcc541p-890, 0x1.b082cd0076462p-107,
     0x1.9773dcc2629adp-919, 0.0, 0x1.12a5d01d84db8p-486, 0.0, 0.0, 0.0, 0.0,
     0x1.0fa5633c036efp-249, 0x1.e9df300080bf7p-167, 0.0, 0.0, 0x1.7825a42e7191ep-54,
     0.0, 0x1.6e143ec7a5c8dp-580, 0.0, 0.0, 0x1.a7285ec170d71p-266, 0.0, 0.0,
     0x1.25d1f136ffbb1p-757, 0x1.e04c4919caa8ap-672, 0.0, 0.0, 0x1.64b47f604a83ep-943,
     0.0, 0.0, 0.0, 0.0, 0x1.5501abf4d236fp-296, 0.0, 0.0, 0x1.3ba5252d6e2e5p-15, 0.0,
     0x1.16e1af1b73bc8p-531, 0.0, 0x1.cbdef0e131e2p-507, 0.0, 0.0, 0.0,
     0x1.8ac3bf849f75ep-960, 0x1.c335894d8d4c1p-324, 0x1.0c70adac17a3fp-9, 0.0, 0.0,
     0.0, 0x1.9445e357e0d6ep-431, 0x1.64c6d57f6c3c5p-2, 0.0, 0x1.482b9a3b6a948p-451,
     0.0, 0.0, 0.0, 0.0, 0x1.b987586637868p-536, 0x1.a74f2c6ebde49p-336, 0.0,
     0x1.9d611d96b302cp-571, 0x1.5a4f1859c8e57p-320, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.de47200e8ce8fp-298, 0.0, 0x1.afa6744376538p-871, 0x1.89015214ceb7fp-688,
     0.0, 0x1.904fa5934eb7ep-263, 0x1.22792664d1562p-637, 0x1.caadd39117459p-368, 0.0,
     0.0, 0x1.1ca1b9c6201a2p-365, 0.0, 0x1.b7b3dd02a0c57p-907, 0.0,
     0x1.0e29948ab6573p-138, 0.0, 0x1.2d2e1c1c6b4e1p-335, 0.0, 0.0,
     0x1.8cb55c79e0831p-418, 0.0, 0.0, 0.0, 0x1.8225f1f1726f6p-272,
     0x1.bf9ddecd228e3p-339, 0x1.dfa5aff80d44bp-962, 0.0, 0.0, 0x1.a4cdecb517f7ap-976,
     0.0, 0.0, 0x1.260ed005b26bep-856, 0.0, 0.0, 0.0, 0x1.0f270312ff509p-940,
     0x1.44d1e1e8015dap-174, 0x1.8204525487108p-479, 0x1.7d2faaa8c7149p-933, 0.0, 0.0,
     0x1.69dc4b8f00ab3p-18, 0.0, 0.0, 0x1.3db874b8d7cdap-106, 0.0,
     0x1.cd042099afdc2p-49, 0x1.42fafbc999659p-530, 0x1.3333cc108eeaap-58, 0.0,
     0x1.5d0b9bbefccbfp-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2d60ee32de181p-826,
     0x1.7617fa7f1cf0ap-478, 0x1.732912216183ep-117, 0.0, 0.0, 0.0, 0.0,
     0x1.9670ffb0fcc15p-436, 0x1.6ae95e2cee892p-215, 0x1.4feb9ca2b8bc9p-837,
     0x1.b28f29cc27bc7p-308, 0x1.a575d80766771p-708, 0x1.d8e6304d695d1p-541, 0.0, 0.0,
     0.0, 0x1.263c670b73fbfp-361, 0x1.42bdb06bcc68dp-711, 0x1.e3681e3febe0cp-204,
     0x1.f6e729f66634cp-653, 0x1.3647e15651137p-100, 0x1.118d2a6724e91p-210, 0.0,
     0x1.b492b4942892p-894, 0x1.8cb7a9862349cp-7, 0.0, 0x1.4960eb143a6c3p-977,
     0x1.20e72fb848d35p-128, 0.0, 0x1.f61b1a9869836p-1003, 0x1.a94742f9e105ep-641,
     0.0, 0x1.94b977fa5af38p-468, 0.0, 0x1.74f91be129e06p-430, 0x1.af85be427f27ap-82,
     0.0, 0x1.c69f08468c292p-824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1daa4de8bfd0ep-577, 0x1.2ff0b03631044p-329, 0.0, 0x1.43a6c66f30655p-1001,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3ed0018dda5cep-338, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.0f60c8c1776e8p-283, 0x1.864cefe067effp-967, 0x1.2d920064f0dcdp-828, 0.0,
     0x1.ac3b866d6d658p-794, 0.0, 0x1.aeec9bfa0c8fcp-73, 0.0, 0x1.8ffcd70c2351fp-658,
     0.0, 0.0, 0x1.5c2ac76db0102p-173, 0.0, 0.0, 0.0, 0x1.15fe2820a228dp-34,
     0x1.2578bdb1808d7p-390, 0.0, 0.0, 0.0, 0.0, 0x1.e75bb5d37905p-746,
     0x1.22efe5e78ba1dp-410, 0.0, 0x1.0eec947cd56efp-863, 0.0, 0x1.362b62481136bp-527,
     0x1.bce0c96af401ap-665, 0.0, 0.0, 0.0, 0.0, 0x1.39b46527e3c88p-162,
     0x1.2b000d3745bb1p-18, 0.0, 0.0, 0x1.840f2f248f164p-383, 0.0,
     0x1.85c29e53cab68p-322, 0.0, 0.0, 0.0, 0.0, 0x1.e55acb22dc0bfp-211,
     0x1.06acb340aed9ep-472, 0.0, 0.0, 0x1.580f69319b9cbp-879, 0x1.6714de4f324d7p-231,
     0x1.4efca71b5db38p-411, 0.0, 0.0, 0x1.5a4421fe36c3fp-976,
     0x1.fa3d3ba93757ap-1007, 0x1.4c3e00137aa93p-726, 0.0, 0x1.997b7917cf29bp-931,
     0.0, 0.0, 0x1.6e5b737175a33p-1002, 0.0, 0.0, 0.0, 0x1.8f0b6afc34a36p-841, 0.0,
     0.0, 0.0, 0x1.41c6bd9d3ea11p-332, 0x1.8ca7d4542566ep-701, 0x1.1bc730fbf54fdp-965,
     0x1.3ec784eacbe08p-157, 0.0, 0.0, 0x1.5e11650123712p-190, 0.0,
     0x1.ac0b6f850ea9dp-741, 0.0, 0.0, 0.0, 0x1.269fcd07f6e64p-269, 0.0, 0.0,
     0x1.c1dc48e9d91dap-815, 0x1.c0b26b4fdc8f3p-623, 0.0, 0.0, 0.0,
     0x1.321713e87e669p-68, 0x1.cfef77965518ap-228, 0x1.09cea7cdfd836p-579, 0.0, 0.0,
     0x1.01ff24f67f223p-744, 0.0, 0.0, 0x1.b9bd81dd4af59p-166, 0x1.36c6dc9ed4a15p-819,
     0x1.2b30bb1b8314fp-466, 0x1.971dfce9a151dp-314, 0.0, 0x1.3f99b0ca5d7ap-709, 0.0,
     0x1.6ff9882dc7e4cp-1020, 0.0, 0.0, 0x1.fe1fd8feb0994p-220,
     0x1.01be7513313dep-186, 0.0, 0x1.7bfd93fce8826p-907, 0.0, 0x1.4e8b9596ae155p-375,
     0x1.105287e01597p-84, 0x1.632bd21aa2954p-157, 0x1.bed2a75cf38cp-612, 0.0, 0.0,
     0.0, 0x1.83c07a6afc523p-788, 0.0, 0x1.d3b2d7fd67facp-77, 0x1.11a5bb53b46f4p-865,
     0x1.3df221c31514cp-45, 0.0, 0.0, 0.0, 0.0, 0x1.0eba6ff5a4d04p-960, 0.0, 0.0, 0.0,
     0x1.aa6d1ecff5419p-1, 0x1.69b5fea1b655bp-61, 0x1.cc948bcc1f51ep-287,
     0x1.ca92c852fb67bp-261, 0.0, 0.0, 0x1.7626c7aa75e8ep-617, 0x1.b4ae243b6f651p-436,
     0.0, 0.0, 0x1.73a0d2cec2dfep-249, 0.0, 0x1.49a1a63f14712p-465, 0.0, 0.0,
     0x1.550face5a40b9p-266, 0.0, 0.0, 0x1.2ab6a6f506797p-690, 0x1.644aaac8084f8p-578,
     0x1.e78d25cca87a2p-847, 0x1.66b1164a73487p-181, 0x1.45d2727ad38cep-806,
     0x1.906bb7bf534bdp-664, 0.0, 0x1.094df2676ab1ep-281, 0.0, 0x1.5b3bfa8d963c8p-335,
     0x1.c36647987e8dp-375, 0.0, 0x1.dc45a9f89c53cp-404, 0x1.7cc324de4b0dep-280,
     0x1.b8ef90863d8ecp-296, 0.0, 0x1.1afd9787a6c25p-797, 0.0, 0x1.322b58c0b3416p-1,
     0x1.0a341c521f341p-425, 0x1.f995373c2ff01p-349, 0.0, 0x1.7e08f8e0ab572p-127,
     0x1.f36a9700f1731p-972, 0.0, 0x1.c6f0f1c75d8f5p-260, 0.0, 0x1.0fc5a92ff10bcp-255,
     0.0, 0x1.f4997c4c83993p-201, 0.0, 0x1.f08466206ec1ep-514, 0x1.6791465fa3f6ap-134,
     0.0, 0.0, 0x1.11665c337e564p-1015, 0x1.4cfc392d9b62ep-281,
     0x1.ba05fd65de019p-483, 0x1.f8d849569fa6bp-177, 0.0, 0x1.c90c0896222cfp-346, 0.0,
     0x1.a9149d0d4158ap-926, 0.0, 0.0, 0.0, 0x1.3c715692f63c2p-704, 0.0, 0.0,
     0x1.9142219c909e9p-902, 0x1.f9336caa22339p-972, 0x1.c9e235c33ebb6p-109, 0.0,
     0x1.eb116f19e37f7p-877, 0x1.69c03119f99ddp-347, 0.0, 0x1.40aa39b2c8d3p-690, 0.0,
     0.0, 0.0, 0x1.73f4ec868cd54p-989, 0x1.20642eb0db9bdp-792, 0.0, 0.0, 0.0, 0.0,
     0x1.3afe60649b03ap-686, 0.0, 0.0, 0x1.bb6c334fb0229p-1019, 0x1.c08024aadfb9cp-95,
     0x1.5bd3a05521a2dp-121, 0x1.986ef722b5a7fp-224, 0x1.91a6cf0d65b71p-362,
     0x1.2107905d6709p-979, 0.0, 0.0, 0.0, 0x1.c39036d90034ap-906, 0.0,
     0x1.1bc9bc41044b7p-203, 0x1.c4a2b1fd220e8p-920, 0x1.e930bae95f10dp-930, 0.0,
     0x1.33587805f4d9ep-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.054b200dd829ap-80, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.37d067da9ef39p-700, 0.0, 0.0, 0.0, 0.0,
     0x1.71f22af98c072p-953, 0.0, 0.0, 0x1.e61b2656eafd8p-227, 0.0, 0.0,
     0x1.850b88429510bp-384, 0x1.b736e26580262p-772, 0.0, 0x1.7d389faeacbb7p-638, 0.0,
     0.0, 0x1.90720db06a8ecp-323, 0.0, 0.0, 0x1.40d0935c9d609p-487,
     0x1.e280a0abe6787p-299, 0.0, 0.0, 0.0, 0x1.4a792d13ea0fbp-388,
     0x1.d2196959265edp-631, 0x1.648a4c59c2678p-167, 0x1.4a0ad5ce75de1p-30, 0.0, 0.0,
     0x1.955e00fcd790dp-788, 0x1.e3a7ce9dab531p-234, 0x1.6564c2321e28ap-499,
     0x1.300d91d4760dcp-707, 0x1.d50b1478982d6p-573, 0x1.4ad82eb4d856ap-868,
     0x1.4e1f1032b70ap-556, 0.0, 0x1.745d38cda6b5p-265, 0x1.615ea29bf08bep-743,
     0x1.3015b9fb8ca82p-83, 0x1.90ad44d3510c8p-59, 0x1.93486165f5f9cp-953,
     0x1.c3fe06147b0e6p-62, 0.0, 0.0, 0.0, 0x1.9d99024a533aap-260, 0.0,
     0x1.324d5f817998dp-45, 0.0, 0.0, 0.0, 0x1.659ca919bb60fp-668,
     0x1.6f2528e478d21p-449, 0.0, 0x1.ec0db89df5795p-777, 0x1.6edd3bfe50e5bp-524, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.585826f67a882p-292, 0.0,
     0x1.a7442255ef023p-55, 0x1.5ea64f7fc94bbp-420, 0.0, 0x1.7a23e976afc41p-657, 0.0,
     0.0, 0x1.8465b8ba2aa69p-531, 0x1.1e19dabd763d7p-39, 0x1.3066f7a0ae496p-555,
     0x1.5a5d834a37154p-559, 0.0, 0x1.777dbcde75fb8p-683, 0x1.0b7223d6f9e54p-888, 0.0,
     0x1.33e45a0c0945cp-793, 0.0, 0x1.7cb758aefe224p-457, 0x1.00ccde6aa036bp-502,
     0x1.d61e23b8ebb6dp-615, 0.0, 0x1.cc0006acd0879p-712, 0x1.985d7669dc986p-812, 0.0,
     0x1.6d4feef31450bp-253, 0x1.667c6573a957ap-832, 0.0, 0x1.026bc538aa29bp-640,
     0x1.5890824d9f572p-150, 0x1.f99f81ae7333cp-95, 0.0, 0.0, 0x1.5c6c1f1aafa37p-53,
     0.0, 0.0, 0.0, 0x1.3327d4c93ab03p-376, 0x1.6a4b0704f5d5p-920, 0.0,
     0x1.18edb90413e8ap-497, 0.0, 0x1.b4d0d864fc3e6p-708, 0x1.d80e230ba6977p-725, 0.0,
     0.0, 0x1.79b2088fa6bfep-738, 0x1.76a716df3d894p-129, 0x1.8db79eee60251p-561, 0.0,
     0.0, 0.0, 0.0, 0x1.9316776d83b0ap-464, 0.0, 0.0, 0x1.e447218b94f75p-808, 0.0,
     0x1.a5024a66d029p-984, 0x1.9e5e1e9ad5141p-426, 0x1.4406e7a5be0cp-540
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
            tmp1 = Sleef_finz_asind1_u10purecfma(tmp0);
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
    printf("Sleef_finz_asind1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_asind1_u10purecfma bench acc %la\n", global_bench_acc);
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
