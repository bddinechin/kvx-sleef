/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpd1_purecfma.c --function \
 *     Sleef_finz_frfrexpd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.dcb4e0bd76ab4p-787, 0x1.771a9648d5bf4p-190, 0x1.64ba4665bda3bp-47, 0.0,
     0x1.3734d65dbd58fp-686, 0x1.1c3dbc49186c6p-30, 0x1.6f427c527ee9bp-156,
     0x1.2e3c80e831d69p-166, 0x1.7df77f6acef54p-297, 0.0, 0x1.d3e3032842eadp-549, 0.0,
     0x1.e0e8506f030c4p-689, 0x1.d4aa3bfb387fbp-969, 0.0, 0x1.41c4535da64cfp-557,
     0x1.d962602ac359dp-430, 0x1.081b2dca67db2p-92, 0.0, 0x1.a093d46ee09e8p-436,
     0x1.d05a4424ae931p-558, 0x1.5e2ab7d2e711ep-538, 0.0, 0.0, 0.0, 0.0,
     0x1.fb1a99f033c4dp-923, 0.0, 0.0, 0x1.ede93e27c25a2p-448, 0.0, 0.0,
     0x1.1601434082f04p-156, 0.0, 0.0, 0.0, 0x1.4e97aaef00488p-469,
     0x1.400269234d71ap-535, 0.0, 0.0, 0x1.bcca2e8dbcf05p-1018, 0x1.34674c72fec87p-16,
     0.0, 0x1.09d46c02967f9p-371, 0x1.37171b1317175p-688, 0x1.a116d1c9a8a71p-586, 0.0,
     0x1.f0fc0edb518f6p-234, 0.0, 0x1.bdc5bd54e29bfp-302, 0.0, 0.0, 0.0,
     0x1.1d85ee2c2927ap-210, 0.0, 0x1.7896b709d33cbp-1015, 0x1.17a60ca77696fp-686,
     0x1.ccb2344aaff06p-240, 0x1.4507c97f87e1dp-393, 0.0, 0x1.514e7911b0056p-731, 0.0,
     0.0, 0x1.f2fb84af31937p-333, 0x1.223c278cb1ddfp-471, 0.0, 0x1.73b9a7b656595p-975,
     0.0, 0x1.c2c9f431ffe1fp-325, 0.0, 0.0, 0.0, 0x1.1cf8e43eab105p-640, 0.0,
     0x1.5ee805620a591p-225, 0.0, 0x1.47f3d66e0802cp-753, 0x1.b01a8a050b1d7p-232,
     0x1.b58bc8bc87f82p-70, 0x1.58a491663c0d6p-203, 0.0, 0x1.482a692d3fa06p-212,
     0x1.ed101c23646fdp-954, 0.0, 0.0, 0.0, 0x1.623923ba322cdp-309,
     0x1.ec14709f92819p-19, 0x1.efca21f9c2531p-1016, 0x1.a0085f00db3d5p-918,
     0x1.fcd4a0a4e0232p-224, 0.0, 0.0, 0.0, 0.0, 0x1.024be81e1c359p-916, 0.0, 0.0,
     0.0, 0.0, 0x1.0bbb7dd600652p-796, 0x1.a119fa3cb668cp-531, 0x1.48383d89f2becp-697,
     0x1.7e28c9acc1b8fp-48, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6b97d547e0416p-358,
     0.0, 0.0, 0x1.a872a315558e1p-200, 0.0, 0.0, 0x1.1416cf3deff9dp-314, 0.0,
     0x1.56e317f70da5p-980, 0x1.fbc959ef72404p-772, 0.0, 0.0, 0x1.56d82c3e4f7f8p-884,
     0.0, 0x1.3d9d45826837cp-339, 0x1.deac51e807fefp-698, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0b95cfaa7938ep-385, 0x1.a7d79282957ecp-743, 0x1.7651b0ff7700dp-499, 0.0, 0.0,
     0.0, 0.0, 0x1.07a204ef7e8c7p-463, 0.0, 0x1.bda441b61f28fp-576,
     0x1.a0c3837a436cfp-784, 0.0, 0.0, 0x1.1cd6c6c3300b3p-45, 0.0, 0.0, 0.0,
     0x1.d0c9e99fa4cep-402, 0.0, 0.0, 0x1.0d5c21167de7fp-441, 0.0, 0.0, 0.0,
     0x1.2a1a8cad52a2ep-325, 0x1.eead3fda8c5bp-981, 0x1.49d4c27ef9bcep-465,
     0x1.adbe721d34b5bp-145, 0x1.e4cd4ec63922ap-759, 0.0, 0x1.a9057cf599434p-280, 0.0,
     0.0, 0x1.9a7e786980e69p-396, 0x1.27f82f08d38ebp-806, 0x1.0a74474eef032p-914, 0.0,
     0x1.ceeaf5daa5507p-852, 0x1.c542d39c26deep-184, 0.0, 0x1.bad09409090e1p-785, 0.0,
     0.0, 0.0, 0.0, 0x1.7b09ecddef2b2p-791, 0x1.cab19420b11dp-128,
     0x1.e083f69681bc3p-455, 0.0, 0x1.ee28b8f6164cfp-635, 0x1.a18c25ba5eac4p-613,
     0x1.6ea178c07094cp-690, 0x1.8b70d9481ed4fp-448, 0x1.2618208d67eb3p-17, 0.0,
     0x1.b923b4ab0e98p-850, 0.0, 0x1.f9aac34560147p-429, 0x1.4ef7a1cc366a5p-233, 0.0,
     0x1.1a3c665c5056cp-485, 0.0, 0x1.c838f82f3ae16p-166, 0x1.0c7972efb53ddp-274,
     0x1.07041900478a7p-681, 0x1.58e67f10fc99ap-382, 0x1.1e2b84844188cp-45,
     0x1.9d22ce71a4253p-851, 0x1.b998e375f68fp-566, 0x1.a7d2c1048a73bp-520,
     0x1.d9405107f4ecfp-720, 0x1.b4bb7fb845247p-500, 0.0, 0x1.e0b294a513a63p-790,
     0x1.d9fcd13c3d056p-917, 0.0, 0x1.ef33f4ff21008p-208, 0x1.1dec8b6c1c972p-869, 0.0,
     0.0, 0.0, 0x1.cec0dac410074p-498, 0x1.c7574f9a8146p-772, 0.0, 0.0, 0.0,
     0x1.d764649f4c154p-683, 0x1.5e96251578038p-882, 0x1.e8023a78cdd69p-924,
     0x1.8b11b6e9b40c3p-812, 0.0, 0x1.7c72549070ec8p-208, 0x1.64edb2184c6b2p-246, 0.0,
     0x1.85d4aba0d13f9p-341, 0x1.d544fb88e0e13p-790, 0.0, 0x1.e4f6fec99dafp-897, 0.0,
     0.0, 0.0, 0.0, 0x1.643fe443e13bap-884, 0.0, 0x1.4880439d23b05p-740, 0.0, 0.0,
     0x1.d174826abef33p-914, 0x1.00a32b48452c6p-645, 0.0, 0x1.ffa3177906bc8p-205, 0.0,
     0.0, 0x1.239486116be7ep-770, 0.0, 0.0, 0x1.dad41fbc79c44p-340, 0.0, 0.0,
     0x1.564d0417e8b14p-226, 0.0, 0x1.250ac83074e65p-686, 0.0, 0x1.6215af5a1dc56p-170,
     0.0, 0.0, 0x1.8231680cb1838p-509, 0x1.7644dc79b08d6p-904, 0.0, 0.0,
     0x1.0ebc3fbe46825p-78, 0.0, 0.0, 0x1.f7e1acbbb224dp-203, 0.0, 0.0, 0.0, 0.0,
     0x1.5f8fd093937d4p-132, 0.0, 0x1.e31ba44c7effbp-290, 0x1.df0294f8e239ep-554, 0.0,
     0.0, 0x1.c19c8867c45e4p-993, 0.0, 0.0, 0x1.3496a1126ebbfp-73, 0.0, 0.0,
     0x1.69a661091f71dp-183, 0.0, 0x1.112b615335e28p-873, 0x1.74b916ab22faap-189, 0.0,
     0.0, 0.0, 0.0, 0x1.dcbf5fb87e46dp-579, 0.0, 0.0, 0.0, 0.0,
     0x1.938e85bfcf4f6p-226, 0x1.d7ce49d5f96ep-375, 0.0, 0x1.cf4fde61e599p-722,
     0x1.170aea11dd0d9p-781, 0.0, 0x1.694d39828ebcbp-808, 0.0, 0x1.0c1c029d1f719p-960,
     0x1.1ea8aaeb17ceap-103, 0.0, 0.0, 0x1.1cb1f239d25a6p-553,
     0x1.ee30a286e324bp-1010, 0.0, 0.0, 0x1.39bc26c5270d3p-42, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2d3097fb0006cp-584, 0x1.0f440b767536fp-1019, 0x1.53c6c9f26cd99p-468,
     0.0, 0.0, 0.0, 0.0, 0x1.21ee2a101a572p-104, 0x1.8977b4bceb6b7p-627, 0.0,
     0x1.32f4cd2318078p-96, 0.0, 0.0, 0.0, 0x1.a9f6e5e541e85p-302,
     0x1.820638106d1dap-181, 0x1.5bd11cb4ba01p-815, 0x1.b308770886381p-230,
     0x1.b733646910e7fp-346, 0x1.53fb3001b7754p-986, 0x1.d464414e7ce38p-435,
     0x1.c1a237bdca11ap-178, 0x1.b9058f1a624d6p-928, 0.0, 0.0, 0.0,
     0x1.61e53167b8092p-307, 0.0, 0.0, 0x1.1fa995b42c6dbp-912, 0.0, 0.0, 0.0,
     0x1.db4a8a95b6fa8p-4, 0.0, 0x1.cbfe242e7a838p-782, 0.0, 0x1.06a85d0627abep-979,
     0.0, 0.0, 0x1.dc36fd200a631p-980, 0.0, 0.0, 0x1.5a6313c7dbca2p-896, 0.0,
     0x1.f5cc29e0ec217p-548, 0.0, 0x1.87fa87292213ap-453, 0x1.3aea6733ef331p-386,
     0x1.fa910871c5a3fp-444, 0.0, 0x1.ec4e78abadbf7p-47, 0x1.addd087a49b54p-490,
     0x1.1b0f87b2b9b5p-415, 0.0, 0.0, 0.0, 0x1.fefb0dd144226p-299,
     0x1.76174ce19b87fp-396, 0x1.41eaca3190a11p-886, 0x1.60f87cd8fa045p-824,
     0x1.d9e436a4e4303p-194, 0x1.100c5a5d6b6a4p-76, 0.0, 0x1.0eb962679e1bep-546, 0.0,
     0x1.4897c2721f7dp-297, 0.0, 0x1.485478403799fp-125, 0x1.672afeb902d9p-738, 0.0,
     0.0, 0.0, 0x1.43c5222eef63ep-39, 0x1.1965fa3dc1cdap-749, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7bfdee65f042ep-402, 0.0, 0.0, 0x1.ec95b248683e2p-519, 0.0, 0.0, 0.0,
     0x1.b651e50d0a7adp-444, 0.0, 0.0, 0x1.176f84e80e89dp-841, 0x1.e42f276a33396p-219,
     0.0, 0.0, 0.0, 0x1.73330f50c8fc8p-726, 0x1.f7486baa44f3p-590,
     0x1.c9ece15fb1c6cp-885, 0.0, 0x1.fbc6a35001c88p-785, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4ddf61221104ep-491, 0.0, 0.0, 0.0, 0x1.9fb16b47babd8p-539, 0.0,
     0x1.fffbc9546db23p-1022, 0.0, 0.0, 0x1.dfaae50b894bp-640, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ae970db32144ap-726, 0x1.913fff206c306p-678, 0.0, 0.0,
     0x1.9435494b5474cp-59, 0x1.923d690328f33p-344, 0x1.e9846519d5995p-283, 0.0,
     0x1.b5815e9b1658ap-141, 0x1.79a40c8226b37p-571, 0.0, 0.0, 0.0,
     0x1.3791e7e7e765dp-1016, 0.0, 0.0, 0x1.b57283bad4e61p-609, 0.0, 0.0,
     0x1.80da6e723b44dp-534, 0.0, 0x1.0c337064936fep-720, 0x1.439d84159c48fp-18, 0.0,
     0x1.ba96d4ea95dcep-407, 0.0, 0.0, 0.0, 0x1.ae42063488945p-241,
     0x1.12db52695c083p-354, 0x1.48be5731b5229p-176, 0x1.4f685aa4ee06dp-221,
     0x1.3c07205735b0bp-247, 0x1.8cde31e6b0503p-780, 0.0, 0.0, 0x1.a8b899e3f7e5p-382,
     0x1.9024404d18b3dp-890, 0x1.6b60b24a15853p-574, 0.0, 0x1.108bdf7c9f734p-269, 0.0,
     0x1.eb5eb71103a69p-394, 0.0, 0x1.93bcb1cbee2bap-827, 0x1.e60bea71baddfp-745,
     0x1.5d7cfd0158aap-1005, 0x1.3869257b936cep-685, 0.0, 0x1.0ea5cefb5bf4dp-764, 0.0,
     0x1.f79c3bc1f4896p-476, 0x1.276fcee89a343p-714, 0x1.e56da4db0405ep-240,
     0x1.7cffc83a9be0ap-609, 0.0, 0x1.21d3996666cb6p-279, 0.0, 0x1.30b13e5e75063p-41,
     0.0, 0.0, 0.0, 0x1.2e7b5201ce58fp-841, 0.0, 0x1.d6a71bcdcbf18p-459,
     0x1.854d661942acap-601, 0x1.88c990b3b071dp-109, 0.0, 0x1.ed149085be305p-641, 0.0,
     0x1.746502398224p-251, 0x1.ef930ba1f8f41p-280, 0x1.1c0d01df80b2cp-876,
     0x1.61b20ac592e5ep-304, 0.0, 0.0, 0.0, 0x1.1c9e98ecd8584p-98,
     0x1.3ef7c49b5b913p-590, 0x1.4b590a897ddcbp-586, 0.0, 0x1.5f5c343d25d06p-887, 0.0,
     0.0, 0.0, 0.0, 0x1.c5da8629ba792p-628, 0.0, 0x1.4704c8a337f92p-646, 0.0,
     0x1.e110f663c8879p-218, 0x1.df863f687792dp-80, 0x1.3f31260dd8e83p-1002, 0.0, 0.0,
     0.0, 0x1.55c948d24ce74p-171, 0.0, 0x1.28c38b61199a5p-219, 0x1.b41a7625a1cb2p-606,
     0x1.d7f982f070569p-338, 0.0, 0x1.2a0fbd2b8da0fp-619, 0.0, 0.0,
     0x1.175918cce7608p-560, 0x1.2e45bf3918872p-833, 0x1.67db356587d9p-406,
     0x1.e5c21493fc655p-844, 0.0, 0x1.bc009282a6a92p-49, 0.0, 0x1.0e13b96f7ad6p-314,
     0x1.3dba1a0b65a6bp-17, 0x1.8174046d07b7dp-224, 0x1.438233b25d1bcp-35,
     0x1.e610d6c285588p-150, 0x1.f9a8d59945c3fp-160, 0.0, 0.0, 0.0,
     0x1.215ef17a56dd2p-44, 0.0, 0x1.92f876bd74863p-304, 0.0, 0x1.cda4b746db5b1p-934,
     0.0, 0.0, 0.0, 0.0, 0x1.4491731dabd24p-947, 0x1.e55683cd31658p-956, 0.0, 0.0,
     0.0, 0.0, 0x1.4cc0afd10d9eap-939, 0x1.111450bae2971p-1020, 0.0, 0.0, 0.0,
     0x1.30c78722d9d15p-610, 0.0, 0x1.f008d6470c97dp-334, 0.0, 0.0, 0.0,
     0x1.2af46235e44f6p-624, 0x1.e23fa0f87de2bp-644, 0x1.8fecc11721697p-953, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.48a8ae4f1a55dp-1012, 0.0,
     0x1.4e9a841f0e149p-165, 0x1.7b270abb2785ap-734, 0.0, 0x1.0328fb060599dp-424,
     0x1.e2d4ab3029bcbp-326, 0.0, 0.0, 0x1.a6029a3504f96p-553, 0.0, 0.0,
     0x1.b059fc3afc519p-163, 0x1.bfeb32fdd3004p-234, 0x1.05e752372580fp-313, 0.0,
     0x1.fe771e9a556b9p-771, 0.0, 0.0, 0x1.fb46b3abbb2cep-242, 0x1.152abf6f9d8acp-39,
     0x1.59e4afcbb4855p-997, 0.0, 0.0, 0.0, 0x1.311c5b2d82178p-888, 0.0,
     0x1.11c89fa1ef944p-43, 0.0, 0.0, 0x1.786f006a12ef5p-431, 0x1.aea98f7954f31p-258,
     0.0, 0x1.2b17a0b99b2aep-295, 0.0, 0x1.f1abb9b281d5ep-179, 0x1.f486b0a54defbp-478,
     0x1.25aec81bedda1p-10, 0.0, 0x1.a8906d7446b58p-918, 0.0, 0x1.7145b60120308p-171,
     0.0, 0.0, 0x1.6f58101a2420ap-623, 0x1.44d308b7bfa75p-562, 0.0,
     0x1.8aed4df69e74dp-624, 0x1.6d89d10f3987dp-986, 0x1.af9c7cacd5ef5p-808, 0.0, 0.0,
     0x1.8d9fc43cc9e1dp-872, 0.0, 0x1.af56de211977cp-802, 0.0, 0.0, 0.0, 0.0,
     0x1.44d3b60d1dceep-568, 0.0, 0.0, 0x1.7a86b67e605a1p-899, 0x1.860205ff1fa83p-496,
     0x1.47c971d2f2bfp-64, 0.0, 0x1.6789e67f771e5p-819, 0.0, 0x1.ce11005d18149p-459,
     0x1.14cf4aa2c69d2p-757, 0.0, 0.0, 0.0, 0x1.18d5f590a1be1p-728,
     0x1.a6b25f6002751p-341, 0x1.f707369df1facp-627, 0.0, 0.0, 0.0, 0.0,
     0x1.8815759cdae7ap-652, 0x1.e9d4fecdbf0e6p-885, 0.0, 0x1.c1e6f0337c059p-593,
     0x1.5b41beb70cf12p-7, 0x1.4701c955c64cep-780, 0x1.1bce3674f8514p-196, 0.0, 0.0,
     0.0, 0x1.47e658d492edep-330, 0x1.08b57cecb5137p-533, 0.0, 0x1.1c697c6ac952bp-152,
     0.0, 0.0, 0x1.38639adbff04ap-41, 0x1.06cfc26475c33p-960, 0x1.a626ae241ca6ap-299,
     0.0, 0x1.304b58aa66557p-957, 0x1.ce8db2be119e6p-27, 0x1.fe0d03bd67b17p-456,
     0x1.060e20632f954p-1008, 0x1.2673c92927637p-541, 0.0, 0.0, 0.0,
     0x1.ac399f16bbaf2p-873, 0.0, 0.0, 0x1.9e93c90e41b17p-351, 0x1.7f42ff1c7573cp-488,
     0x1.ab7663c26aad2p-677, 0x1.904fc570e5fefp-673, 0x1.791fc6cbe9e2p-804, 0.0, 0.0,
     0x1.f6aec4a14ec6p-575, 0x1.69d44d3c6e73fp-481, 0.0, 0x1.1bc4eafbfc111p-486,
     0x1.dca4e68dd1703p-201, 0x1.6b5a2d80b4aacp-440, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fdcc61819737cp-423, 0.0, 0x1.a5fe6c3604235p-506, 0.0, 0.0,
     0x1.964d82ee0cac8p-660, 0x1.b65f6971b2bccp-948, 0x1.7eb2b10a105e1p-444,
     0x1.d123038385163p-505, 0.0, 0.0, 0.0, 0x1.6e8d45a72f87cp-107, 0.0,
     0x1.e0451bfa6f142p-215, 0x1.d097f3a9eda81p-301, 0x1.ee30e9381bb3cp-1022,
     0x1.a27526691f035p-303, 0.0, 0x1.1cca2f76dee79p-967, 0.0, 0.0,
     0x1.d5472e59d5045p-5, 0x1.6fa3aaa122a4cp-751, 0.0, 0x1.8dec0c7de2b24p-471,
     0x1.60eeb51684477p-171, 0x1.434b70bb53b24p-802, 0.0, 0.0, 0x1.8bb157adc5efdp-646,
     0.0, 0x1.f95675b1e4626p-1004, 0x1.18ac90ec436c1p-103, 0.0,
     0x1.34e34c8cd5d64p-688, 0.0, 0x1.88ca680bdbdep-184, 0.0, 0x1.f245f0942d71bp-914,
     0x1.e6c1ed564924dp-875, 0.0, 0x1.e214d0c38c643p-363, 0.0, 0x1.1d0a6eab5893ap-50,
     0.0, 0.0, 0x1.9c011a949e725p-849, 0x1.900d38aaad9ap-471, 0.0, 0.0, 0.0,
     0x1.caadc1d0c65afp-107, 0x1.366a9ce02a984p-1011, 0.0, 0x1.516c4c28a60f7p-845,
     0.0, 0x1.299026355d1a9p-110, 0x1.1f6f193eb39a8p-70, 0x1.130071813ed8cp-402,
     0x1.0802b027d1d7bp-443, 0x1.b76d9f5806015p-937, 0.0, 0.0, 0x1.f20c0e1d5a212p-862,
     0x1.d67c4c4fc2f8bp-410, 0x1.bdfd84bd95577p-368, 0.0, 0x1.a222468b737a8p-514,
     0x1.87b2d84c97b03p-830, 0x1.adf91788d5766p-369, 0x1.b8ea2c692401bp-628, 0.0,
     0x1.b50f7c4718d6ap-224, 0.0, 0.0, 0.0, 0x1.8168302c9bfe8p-362, 0.0, 0.0,
     0x1.5f9aef5f543a6p-331, 0x1.8d9718ad14852p-1000, 0x1.455aa15f3b611p-12, 0.0, 0.0,
     0.0, 0x1.57d3d10bf4b28p-30, 0.0, 0.0, 0x1.d45538e4b70d6p-976,
     0x1.429a91a8d5405p-577, 0x1.ce3faf7c67386p-736, 0x1.29928eb965d79p-889, 0.0, 0.0,
     0.0, 0.0, 0x1.857d4da420103p-826, 0.0, 0x1.b11529c58f584p-184, 0.0,
     0x1.4610b60aa194ap-460, 0.0, 0.0, 0.0, 0x1.b9ab394fd6eb9p-508,
     0x1.0fa7699b60973p-771, 0.0, 0.0, 0x1.aa0ff8417723cp-426, 0x1.cf2a21b2231b9p-801,
     0.0, 0.0, 0.0, 0x1.4ca5c9a2c8f26p-32, 0x1.28c463b96c698p-124, 0.0, 0.0,
     0x1.cc2b9f7119a2p-449, 0.0, 0x1.3b43aabc7a9f2p-232, 0x1.10d9eace62f5bp-653,
     0x1.c483e83f3988fp-975, 0.0, 0x1.5551e7702ff6p-438, 0.0, 0.0,
     0x1.b46a4dca5a688p-859, 0x1.4386d431d5fb3p-921, 0x1.84cff881724ep-170,
     0x1.994e003f976ap-899, 0.0, 0x1.404e53f5b42f5p-464, 0x1.05b1c92e474e8p-353,
     0x1.e3fc67c74ba15p-647, 0.0, 0.0, 0x1.8b92caa1f3f59p-202, 0.0, 0.0,
     0x1.07b7fcb358b63p-950, 0x1.cc3d5afda5018p-713, 0x1.da9924ab3c9fep-611, 0.0, 0.0,
     0x1.9c27b6a0ad05ap-658, 0.0, 0x1.cc27cb7cbd059p-742, 0x1.4adc54a9b79fcp-413, 0.0,
     0x1.bea9e306e4928p-386, 0x1.6029ee1da59c4p-485, 0.0, 0.0, 0x1.76e1987bb83fap-72,
     0.0, 0x1.dd2655763bc5cp-313, 0.0, 0x1.5f283742b9492p-532, 0x1.a665ff67c81e5p-29,
     0.0, 0.0, 0.0, 0x1.438c1238f7c02p-38, 0.0, 0x1.52e290d817b8ap-889, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.75d8722e655d4p-747, 0x1.2a1cdf01d6787p-728, 0.0, 0.0,
     0x1.20497723702afp-804, 0.0, 0x1.a80429dc80ffcp-905, 0x1.f63755e44f52dp-305,
     0x1.a3c22b472389p-473, 0x1.0627a915304cbp-148, 0x1.aebbd75521913p-755,
     0x1.03ed2669e18d4p-745, 0x1.216ae2d0fe8a1p-301, 0x1.d747f59d08411p-590,
     0x1.8090a5b3d417bp-335, 0x1.e62f89c6f13dbp-571, 0x1.5edb0c6c74db7p-759,
     0x1.380ed0211a414p-633, 0x1.f31d3b8616cacp-296, 0x1.330b166e6d238p-171,
     0x1.38ac045d0c102p-979, 0.0, 0.0, 0.0, 0x1.13be0980f5afep-368,
     0x1.e11323cf195b9p-758, 0.0, 0x1.d8dcccd040b78p-822, 0.0, 0.0, 0.0, 0.0,
     0x1.7f5e1677da04ap-296, 0.0, 0.0, 0x1.5aa9a39ad85abp-469, 0.0,
     0x1.93a0549c072fap-1021, 0x1.934cc7fd5fd85p-659, 0.0, 0x1.fc9de847a9892p-972,
     0x1.810cd9d4e680ep-910, 0.0, 0.0, 0x1.b5221905ded4bp-90, 0x1.8729cc1e01a04p-578,
     0x1.f3fe4f09b5f9dp-255, 0.0, 0x1.8e9c3a42d2eb6p-746, 0x1.ef2e99572aeep-168,
     0x1.8e82855d78ce7p-53, 0x1.1134deee972fdp-420, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4b87c8ff3b678p-138, 0x1.bba28dd546627p-122, 0.0, 0x1.990e1fbed749fp-597, 0.0,
     0x1.31182aa1f92fep-167, 0.0, 0x1.5c35fd45cb487p-226, 0x1.b8aacae194c29p-319,
     0x1.646c84e10c349p-679, 0.0, 0.0, 0x1.8c94dd05bbc22p-492, 0.0, 0.0, 0.0,
     0x1.e06fc3e334b61p-717, 0.0, 0x1.4247a4938a892p-315, 0x1.4f1b6e9219198p-251, 0.0,
     0.0, 0x1.44e1b4bfcdc61p-745, 0.0, 0x1.9d5b31168422ap-636, 0.0,
     0x1.8b3ead89ba4b3p-859, 0x1.b1b7293d7d8dcp-174, 0x1.3643618bcb2d6p-240,
     0x1.4724a8ed342dep-239, 0.0, 0.0, 0x1.0d064a79c9d27p-874, 0.0, 0.0,
     0x1.8d84329fc0f4fp-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.124e1ca5b022ap-985,
     0.0, 0x1.23f5925f0c0e6p-315, 0.0, 0.0
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_finz_frfrexpd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
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
