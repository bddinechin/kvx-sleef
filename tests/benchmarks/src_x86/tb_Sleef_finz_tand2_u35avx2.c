/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tand2_u35avx2128.c --function Sleef_finz_tand2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.5f392b68a85bbp-585, 0.0, 0.0, 0x1.1f618d83ba8bcp-841, 0.0, 0.0,
     0x1.6880733048398p-249, 0.0, 0.0, 0x1.228022586e344p-885, 0.0,
     0x1.c15d335b787dp-694, 0x1.ac13d4ae70175p-109, 0.0, 0.0, 0.0, 0.0,
     0x1.95af839890c62p-441, 0.0, 0x1.c045d34b026a2p-660, 0x1.19fa4062dcdbbp-421,
     0x1.7b03a588261f5p-999, 0.0, 0x1.a0e7638826b7dp-214, 0.0, 0.0,
     0x1.a15c0ff4e0b07p-34, 0x1.a25c5461ded07p-72, 0x1.7e807034ed671p-185,
     0x1.b01df569a995dp-847, 0.0, 0x1.e95837c44c8bbp-745, 0x1.931ced59d974ap-748, 0.0,
     0.0, 0x1.726934ca55706p-499, 0.0, 0.0, 0x1.28249badb576bp-273, 0.0, 0.0, 0.0,
     0.0, 0x1.da5343b0fc2dcp-140, 0.0, 0x1.ab98ab7a035e1p-810, 0.0,
     0x1.53651d2e3d753p-1, 0.0, 0.0, 0x1.a680a9b72859cp-409, 0x1.7a6baf8971ed9p-518,
     0x1.efeae1df8a039p-39, 0x1.729ac773cf785p-760, 0x1.ec33dc1f63d3dp-168,
     0x1.b06a3beb845efp-494, 0.0, 0.0, 0x1.e47908483091fp-354, 0x1.fc457173e855dp-281,
     0.0, 0.0, 0x1.3ff60293e8cfdp-491, 0.0, 0.0, 0.0, 0x1.60a0a6c528ea4p-816,
     0x1.a51675b88a73p-221, 0x1.641504653c8fap-322, 0.0, 0x1.e1a52f5a4296dp-164, 0.0,
     0x1.3d40d3f49bf5bp-338, 0.0, 0.0, 0x1.cd3596d3e311fp-90, 0x1.1744591d0b495p-74,
     0x1.e191abd383e1dp-357, 0.0, 0.0, 0.0, 0.0, 0x1.5174450cf8943p-233,
     0x1.5aa832725ea9dp-94, 0x1.685b92646a15p-834, 0.0, 0x1.f3ca006cbbe15p-645,
     0x1.5ee0ed73c6b56p-7, 0.0, 0.0, 0x1.96ff426c0fe65p-385, 0.0, 0.0,
     0x1.5063817e55831p-930, 0x1.e6eeeed888f4dp-528, 0.0, 0x1.b48f6a605ba0ap-391, 0.0,
     0x1.29884ae58e64ap-609, 0.0, 0x1.6d2fc9daa794fp-128, 0.0, 0.0, 0.0, 0.0,
     0x1.f94044e471663p-804, 0x1.0fc279a2ebf2fp-559, 0x1.7c54fd69359a4p-788, 0.0,
     0x1.c3227a7b15a3ap-267, 0.0, 0.0, 0.0, 0.0, 0x1.bdabead211f1ep-175,
     0x1.7fb3f04b29c81p-702, 0.0, 0x1.7cb7bcfa47d9p-775, 0x1.6d1e0961aa7d3p-269,
     0x1.219aac07288b4p-46, 0.0, 0x1.5fb785fc8838ap-468, 0.0, 0x1.4655059e1dbp-779,
     0x1.83ec63cbe36e2p-991, 0x1.a38507f6912e8p-1004, 0x1.41f5963475f84p-603, 0.0,
     0.0, 0x1.a057c8c529c1fp-33, 0x1.d9b3fa0be8fbfp-900, 0.0, 0x1.0550d26fcd66fp-34,
     0x1.4329a2ded45c9p-599, 0.0, 0x1.4c9cee0195e6ap-421, 0.0, 0x1.b92af6c9a9872p-347,
     0.0, 0x1.4750dc98139d8p-597, 0.0, 0x1.4bd75334311f9p-642, 0.0, 0.0, 0.0,
     0x1.145a2c01cf784p-286, 0x1.0073e70c2b187p-678, 0.0, 0.0, 0x1.e67a05583190ap-803,
     0.0, 0x1.7e3c9f4b41575p-297, 0.0, 0x1.fc4bd1b239c5ap-441, 0x1.bc168a3b7e34fp-277,
     0x1.11374ebf51a59p-507, 0.0, 0x1.8e69f027da259p-302, 0x1.5adfecad4fa83p-588,
     0x1.bc591122b7e46p-27, 0x1.b0b158919bcc6p-322, 0x1.80a31e9ec95eap-288, 0.0, 0.0,
     0.0, 0x1.09f60c65bcf92p-252, 0x1.cf3ec4a629b04p-1004, 0.0, 0.0,
     0x1.3fd4cbf42f01ep-19, 0.0, 0x1.8baa93b0c48a3p-295, 0.0, 0x1.3105c06b9d84fp-1000,
     0x1.273bbc7403767p-529, 0.0, 0.0, 0x1.8cad7c2465bbp-543, 0x1.85e6ae7b8c8b4p-363,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c92f864d8e285p-590, 0x1.4975d03997548p-433, 0.0,
     0.0, 0x1.c8817d5e222b6p-580, 0x1.c82bc3868337cp-99, 0x1.6d7c2e9203667p-755,
     0x1.c42a5b58df5bdp-498, 0x1.40b92be48bbe1p-225, 0x1.26789970e2a45p-765, 0.0, 0.0,
     0x1.aa0c877c2c9dap-563, 0x1.6e0826047c0ecp-802, 0.0, 0x1.d802a1e01d36ep-126, 0.0,
     0.0, 0x1.85425a632b84bp-205, 0x1.63b8828bf8d0fp-958, 0.0, 0.0,
     0x1.441ca3fde91dbp-915, 0x1.c9f739ccd5b9dp-721, 0.0, 0.0, 0x1.7902a0de4d63ap-839,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7beae084fb7e6p-132, 0.0, 0.0,
     0x1.dc3541644c03cp-1006, 0x1.d99501e67ab51p-576, 0x1.69380cbcb8d9dp-124, 0.0,
     0x1.91e16f40e1a58p-110, 0x1.4735459dd9089p-144, 0x1.381c99a29c55p-908, 0.0,
     0x1.d7c855c19b5ffp-664, 0.0, 0x1.59043312461f7p-845, 0x1.778a96282dd3bp-679, 0.0,
     0x1.0c500efe00a8p-493, 0x1.6d982822ce62ap-254, 0.0, 0x1.b13e2fb32e901p-959, 0.0,
     0x1.b98b6cb23d5a5p-976, 0x1.31e2c634bc8ecp-771, 0x1.52b304ce32aaep-909, 0.0,
     0x1.75f9698e1a3efp-125, 0.0, 0x1.1eeefb59a7e92p-233, 0x1.47b74188825f8p-579, 0.0,
     0.0, 0x1.92487d7ae07efp-756, 0.0, 0.0, 0.0, 0x1.25d168dc49428p-815, 0.0,
     0x1.b43802cf4d7e6p-793, 0x1.a0c2ecf07af96p-264, 0x1.2ab1d6b755408p-802, 0.0,
     0x1.46b66d487a0dap-239, 0x1.8f1268aac5a26p-423, 0.0, 0x1.53e7dd995969fp-150, 0.0,
     0x1.a7a6dc6174584p-735, 0x1.da329ce4af0cbp-112, 0x1.6fb0d385a27a4p-51, 0.0,
     0x1.3d52915b85f09p-123, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ab60fb82544p-602, 0.0,
     0x1.97ec9f002d51p-834, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8c5d818a0e6e7p-974,
     0x1.471fc5ff88b25p-222, 0x1.ee80fb647a344p-219, 0x1.a2ebe2c4737c1p-432,
     0x1.84c961f688b18p-428, 0x1.808b6ed658ea4p-526, 0.0, 0x1.791b627e541ap-749,
     0x1.c7875d92089b9p-243, 0.0, 0x1.1a0335123bf84p-373, 0x1.b50993c9392edp-399, 0.0,
     0x1.6ea8d3de4601cp-405, 0x1.c150a844fd99p-587, 0.0, 0x1.f1930bfcf546dp-85, 0.0,
     0.0, 0x1.ef93ba782ff4cp-28, 0.0, 0.0, 0x1.1df5e3443bda2p-477,
     0x1.67ff2fe3d44c8p-621, 0.0, 0x1.f76cd78263973p-747, 0x1.674b6a25fbaacp-6,
     0x1.9f6e7967f4511p-67, 0x1.ea3dc34f0568cp-471, 0.0, 0.0, 0.0,
     0x1.eb1035cc026d4p-551, 0x1.2e9ba68ea33a1p-218, 0.0, 0.0, 0x1.eaa95a1f48efbp-961,
     0.0, 0x1.cb95e2ed8baacp-214, 0x1.79c6d1ef02263p-2, 0x1.b71baf8c74449p-117, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68fe7ed94e39ep-528, 0x1.ae19b047faf43p-916,
     0x1.9be565347934cp-230, 0.0, 0x1.7d6fec417ce09p-526, 0x1.0f320b52b9b44p-665,
     0x1.aba1743c152dfp-334, 0x1.7364c5d8414c9p-309, 0x1.2d7c75bf7a63ap-358, 0.0,
     0x1.9b13e69c82338p-110, 0.0, 0x1.9bb4ca775fb91p-295, 0x1.85ad82d5b7ffep-736,
     0x1.d22c172a3daeap-284, 0x1.2b91a98194bdbp-152, 0.0, 0x1.3870cd6e5a6f7p-257, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0e73a3b7a6c4p-570, 0.0, 0.0, 0x1.2a7690c733c5ap-713,
     0x1.e3c9851411b11p-942, 0x1.75f8f7aa86a3dp-767, 0.0, 0x1.9a1791957f573p-380, 0.0,
     0x1.ef35a6bc34bbcp-980, 0.0, 0x1.759bd20f729eap-436, 0x1.5f7b290a8c799p-247, 0.0,
     0x1.721aeedc0d69dp-967, 0.0, 0x1.d470e69c153c8p-218, 0.0, 0.0,
     0x1.be7e40cb9ef5ap-54, 0x1.9004702641936p-165, 0x1.e4539f3fd457p-273,
     0x1.293787f74ba65p-388, 0x1.002c82a5be455p-251, 0x1.edbe14c0c5104p-827, 0.0,
     0x1.97678e7929707p-370, 0x1.d452a4f897fe9p-770, 0x1.38b1b336179dfp-362,
     0x1.87dc27039f03p-914, 0.0, 0.0, 0.0, 0x1.b834de2522d63p-235,
     0x1.6d914f6de3563p-799, 0.0, 0.0, 0x1.52bce534e6d66p-364, 0.0, 0.0,
     0x1.6ea044bf9b035p-336, 0x1.276ff9be993f3p-231, 0.0, 0.0, 0.0,
     0x1.c932603622322p-183, 0.0, 0.0, 0x1.f9f93d5d07d4fp-87, 0.0,
     0x1.ee4d7931422b4p-508, 0x1.52b0525064a5dp-511, 0x1.b737a2740e4d6p-956,
     0x1.4d699dcd885bdp-184, 0x1.0308e276ba78dp-179, 0.0, 0x1.abcc6e24fce8p-1008, 0.0,
     0.0, 0x1.d654ca66e81bfp-595, 0.0, 0.0, 0.0, 0.0, 0x1.3b6ba55599efcp-988, 0.0,
     0.0, 0x1.1d7dadce7d331p-577, 0.0, 0x1.80ac2c044fdbep-559, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.98945519ab496p-436, 0.0, 0x1.e5ece6bc2e565p-482, 0.0,
     0x1.aff7e0799eee9p-491, 0x1.a300a51e1cf61p-413, 0.0, 0x1.66d3ad18fd3dap-15, 0.0,
     0.0, 0.0, 0x1.544adcfd78cecp-865, 0x1.2b61d7d2380c6p-771, 0x1.4dd4436f06646p-479,
     0x1.0fbdd262adfb6p-468, 0x1.4236f0cb62e3ep-79, 0x1.116ca482d855bp-775, 0.0, 0.0,
     0.0, 0.0, 0x1.c3647b806b114p-876, 0x1.4bc8be221eb18p-382, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4ffb5851a1446p-234, 0.0, 0.0, 0x1.deb977986399cp-229, 0.0, 0.0, 0.0,
     0.0, 0x1.98bdcad7e9cc7p-208, 0.0, 0.0, 0x1.d5bc2e281134ep-829, 0.0,
     0x1.853ec555bdf06p-401, 0x1.db86950cadaf9p-177, 0x1.9353255575a6fp-98, 0.0, 0.0,
     0.0, 0x1.78dc24f6ba551p-468, 0x1.3ed46f531e6a1p-257, 0.0, 0x1.5e71358efa31fp-316,
     0.0, 0x1.849a80aab6decp-355, 0.0, 0.0, 0.0, 0x1.bdc8355f4dd3cp-590,
     0x1.768d95b100e13p-478, 0x1.9de74b072da71p-170, 0x1.1974641dca832p-695,
     0x1.66d3e8442b4d2p-113, 0.0, 0.0, 0x1.ce8e1b3632bb8p-300, 0.0, 0.0, 0.0,
     0x1.2d8343480d6adp-202, 0x1.36a03f0de2afep-141, 0x1.63eba5286e19dp-695,
     0x1.db7e21e6197ecp-843, 0x1.fdceebf3d15afp-883, 0x1.b7a4497cc7624p-631,
     0x1.65d9e71a6e231p-968, 0x1.cc998544a3bcbp-451, 0.0, 0.0, 0.0,
     0x1.afee984ee4763p-458, 0.0, 0.0, 0x1.10646497ae37ap-875, 0.0, 0.0, 0.0,
     0x1.e07319eceefe6p-138, 0.0, 0.0, 0x1.2825d3f01dad8p-997, 0.0,
     0x1.f9099ea94de44p-84, 0.0, 0.0, 0x1.118041cae26d8p-516, 0.0, 0.0,
     0x1.a9d329dd83b54p-40, 0.0, 0.0, 0x1.f69cf182917a8p-119, 0x1.c2aac7f4f58dfp-614,
     0.0, 0.0, 0x1.dabc63c12d388p-481, 0x1.71ff95d9f3218p-226, 0.0, 0.0,
     0x1.e51f0d2b1ffaap-109, 0x1.4faae9fe82cb2p-741, 0x1.661602cc4c2d9p-489,
     0x1.b9ae6fd290ba5p-138, 0.0, 0x1.9ab823956c24p-362, 0x1.07b9b77728ff5p-60, 0.0,
     0x1.8512a9961ad07p-903, 0x1.6e4b3604c557fp-978, 0.0, 0.0, 0x1.7b9e807ade68cp-749,
     0.0, 0.0, 0x1.c2de77f814f24p-817, 0.0, 0x1.160700595b8dbp-846, 0.0,
     0x1.3df9e4566b24fp-56, 0.0, 0.0, 0x1.28bbc19913991p-981, 0.0, 0.0,
     0x1.a91ab75514997p-604, 0.0, 0x1.a9d6c686e6e64p-303, 0x1.84dbbb0a5241ep-80, 0.0,
     0x1.26e96f5958d99p-260, 0.0, 0x1.7713f48598f9bp-946, 0x1.e55b8df823a2dp-584, 0.0,
     0x1.47fea2f531e8cp-572, 0.0, 0.0, 0x1.0c83a322efe3fp-89, 0x1.a200cc94e844cp-752,
     0.0, 0.0, 0.0, 0x1.54d182788d7acp-497, 0x1.f98583a388be9p-185, 0.0, 0.0,
     0x1.9e5eb9f9b884cp-598, 0x1.820faa25733bcp-314, 0.0, 0.0, 0.0, 0.0,
     0x1.71e8ddd215377p-487, 0x1.097a38498f79p-40, 0.0, 0x1.e82f930ed4b39p-318, 0.0,
     0x1.e25a174eb1a4p-332, 0.0, 0.0, 0.0, 0x1.5f2aeede6096bp-863, 0.0,
     0x1.712bc389f3f12p-834, 0.0, 0.0, 0.0, 0x1.5f16ebad35eeap-854, 0.0, 0.0, 0.0,
     0x1.1b193095fdf06p-882, 0x1.8726b90bad81ep-459, 0.0, 0x1.508545cd7e7b7p-642, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.404b8141b2e9dp-61, 0.0, 0x1.70b43d4b12f9ep-453, 0.0,
     0.0, 0.0, 0x1.dd966be42d93ep-758, 0x1.b446bfcb9694bp-448, 0x1.1a1f3ae8bf099p-699,
     0x1.e979345739b29p-612, 0x1.90976ca6b90fbp-153, 0.0, 0.0, 0.0, 0.0,
     0x1.5241c69002e8fp-722, 0.0, 0.0, 0x1.97a8d3b2662c3p-982, 0x1.2681fa1acb91cp-270,
     0.0, 0.0, 0x1.144ee3e14df7dp-35, 0.0, 0x1.3c622a479077p-10,
     0x1.dc38435506ccdp-517, 0.0, 0.0, 0.0, 0x1.3b68bdb802aa7p-444, 0.0, 0.0,
     0x1.6fbecbe07de65p-423, 0.0, 0.0, 0.0, 0x1.40ae58e8c231ep-928,
     0x1.38b62c277998fp-232, 0.0, 0x1.717d81a2285ffp-556, 0x1.9afcdc4ada402p-204,
     0x1.7e736ebb2f3dp-327, 0x1.d64d3ee887cc9p-506, 0.0, 0x1.90fcab9eba8e3p-242,
     0x1.439933303b2abp-621, 0.0, 0.0, 0x1.037565bfc6b16p-177, 0x1.a87245b26af33p-50,
     0.0, 0.0, 0x1.a04d45623bf78p-318, 0.0, 0x1.16256406d34b8p-631, 0.0, 0.0, 0.0,
     0.0, 0x1.0307347bc5dd1p-58, 0x1.643c7c9d58e81p-557, 0x1.731d225ecb30fp-35,
     0x1.b05d12184a8c3p-205, 0.0, 0.0, 0.0, 0x1.0c53d7cbf6a3dp-167, 0.0,
     0x1.77d7940f8dbc2p-681, 0.0, 0.0, 0x1.ac415ee46ad4dp-762, 0x1.9f8ffece1ee53p-721,
     0.0, 0x1.e6623532ca648p-525, 0.0, 0.0, 0x1.d8648f0f20f7ep-651,
     0x1.c10f3f2705f03p-470, 0.0, 0.0, 0x1.2616aeaa38a97p-383, 0x1.a5d479178cdb7p-482,
     0x1.40e51366f10c8p-764, 0.0, 0.0, 0x1.0371df5050924p-834, 0.0, 0.0, 0.0, 0.0,
     0x1.1b6f3aa165c95p-922, 0.0, 0x1.0ccfde77dbc5ap-585, 0x1.24b5af7da2b59p-1000,
     0x1.41cd0cc0d6c39p-443, 0x1.0f458a26d662ep-202, 0x1.0e2141dc671eep-244,
     0x1.51108f73b4603p-242, 0x1.450b1eb091c65p-345, 0x1.fb718b137b79p-10, 0.0,
     0x1.93ce8e2c17036p-539, 0.0, 0x1.bace809d71ff7p-299, 0.0, 0.0, 0.0, 0.0,
     0x1.e34027b3a72eap-397, 0x1.72fb40a143759p-233, 0.0, 0.0, 0x1.56d8791b2b106p-250,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c50e27f70ae23p-1022, 0x1.3a0f970f3191ap-647, 0.0,
     0.0, 0.0, 0.0, 0x1.73a6da34ce1a9p-183, 0.0, 0x1.bb55173d53b99p-557, 0.0,
     0x1.3014a4a6c91aep-854, 0x1.bf808b4f85decp-316, 0x1.c368f2ba3aecbp-721,
     0x1.5d3377a679b75p-858, 0.0, 0x1.6b8f3eb2c48c8p-912, 0x1.3166eba6669fap-318, 0.0,
     0.0, 0.0, 0x1.4573b940291c8p-309, 0x1.01b2b9f617a98p-549, 0.0, 0.0, 0.0,
     0x1.d3558410155b3p-388, 0.0, 0x1.e85a57b0d1e63p-725, 0x1.5c250d60cfa7ap-985,
     0x1.c1d8c4c720e2ap-360, 0.0, 0.0, 0x1.2cf112b8466fcp-243, 0.0, 0.0, 0.0,
     0x1.94c42dc966afp-531, 0x1.35a5af18bbb7ap-479, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b57df895935d2p-442, 0.0, 0.0, 0x1.56ae479641c63p-721, 0x1.ba950c02ae234p-303,
     0.0, 0.0, 0x1.4e7dbfd371698p-653, 0x1.69fa9d3e1708ap-741, 0x1.4a110b6463ec4p-167,
     0.0, 0.0, 0x1.52bcdeb6461fcp-817, 0x1.a2d98df1652cbp-239, 0x1.2aa1624c1b049p-11,
     0.0, 0x1.448096075a6e6p-482, 0.0, 0x1.d50f027c288ffp-392, 0.0, 0.0,
     0x1.1c3d2fe5b53p-114, 0.0, 0x1.e7e6ebd7e2681p-132, 0.0, 0x1.a3f3c674eacf8p-383,
     0x1.6ae11900893e8p-275, 0x1.f430534e2bde7p-700, 0x1.11b6a5dd6476ep-602,
     0x1.acda770975e8ep-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9aa1d2d06efafp-650,
     0x1.3f4e68a87faf1p-794, 0.0, 0x1.ed8e88bcf3026p-480, 0.0, 0.0,
     0x1.382773fa3ba98p-582, 0x1.6ef03437d5e33p-514, 0.0, 0x1.972cbee06ad92p-243, 0.0,
     0.0, 0x1.ee1d49dc2fa5fp-572, 0x1.b7ee075d5cbcbp-692, 0.0, 0x1.92d560c96ea0dp-268,
     0.0, 0.0, 0.0, 0.0, 0x1.0b1e24115ea11p-733, 0x1.df878900d3e88p-74,
     0x1.40e247bf1c094p-746, 0x1.94b0bb65aa9d3p-143, 0.0, 0x1.583b279fd01e4p-654,
     0x1.d2954bebbc4d1p-40, 0.0, 0x1.9d9d240ec5a85p-484, 0.0, 0.0,
     0x1.6a9a35080d04p-485, 0x1.e24357d4f6c36p-146, 0.0, 0x1.c29a4f6bad8e4p-405, 0.0,
     0.0, 0x1.1f47dc57a51e2p-916, 0.0, 0x1.12d109ecbd5b9p-883, 0.0,
     0x1.9a370fe73d3d8p-25, 0x1.a005796b360d6p-593, 0x1.b92bb71c45cf8p-553,
     0x1.1d404a2c18efdp-877, 0x1.9f4777fa4ccb8p-481, 0x1.595ecd5ad611dp-559,
     0x1.fcd8ea21d9e66p-114, 0x1.e6847d32a28cfp-33, 0.0, 0.0, 0x1.1354ee2e7fddp-560,
     0x1.36cd86aa82adp-841, 0.0, 0.0, 0x1.016ff7d77a35dp-15, 0x1.9a6fdfc00af8bp-766,
     0x1.f9f42818b3509p-269, 0x1.564e69c822417p-816, 0x1.8ca45b28ed483p-657, 0.0, 0.0,
     0x1.3357acfe81a3p-946, 0.0, 0x1.d4731959568f3p-46, 0x1.40e0a1353f5d6p-443,
     0x1.6cbb79254ae61p-817, 0x1.bde153fbb6c0dp-729, 0.0, 0.0, 0x1.2065d5f5eb353p-545,
     0x1.edfe9b42eca68p-955, 0.0, 0x1.fecd542ccb8ecp-909, 0.0, 0.0,
     0x1.26378f70cd1f9p-109, 0.0, 0.0, 0.0, 0x1.fdf9ab68b651p-158, 0.0,
     0x1.40b571d051dd6p-294, 0x1.82849a302c23fp-243, 0x1.0abccb5af7357p-256, 0.0,
     0x1.b314976b5d2dcp-353, 0.0, 0.0, 0.0, 0x1.4d1f8a949a975p-249, 0.0,
     0x1.25c22800c1075p-751, 0.0, 0.0, 0.0, 0x1.d90781fe998fbp-1021, 0.0,
     0x1.47a5f9cb5d80dp-725, 0.0, 0.0, 0.0, 0x1.6290e85775bd9p-629, 0.0,
     0x1.213f0c0589463p-269, 0.0, 0x1.bff8ef819100cp-128, 0x1.4a6c8b05090dep-912, 0.0,
     0.0, 0.0, 0x1.f8e4ff84d09bep-572, 0.0, 0.0, 0x1.4c8e49e0fee6dp-1009,
     0x1.e17d6ba6e29c6p-163, 0.0, 0x1.79c6efc714a16p-311, 0x1.77987677c0b03p-792, 0.0,
     0.0, 0x1.60774fb4ec937p-58, 0.0, 0.0, 0.0, 0.0, 0x1.f4c4ba9092fb5p-706,
     0x1.ff639cac30ccbp-968, 0x1.88d1b5ecd4c0fp-351, 0x1.2a91118fa4843p-140,
     0x1.ca5c1deed484ep-794, 0x1.93e5299a81dbbp-517, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1b716af81dc8ap-965, 0x1.2f3ff4866225dp-440, 0x1.fc5f681dd6924p-920,
     0x1.1b28a9aeed484p-948, 0.0, 0.0, 0.0, 0x1.a7a3b33bff52dp-185,
     0x1.e17eb90ac98b7p-760, 0x1.8973e24ae27ebp-225, 0.0, 0x1.70e028c81e51p-975, 0.0,
     0x1.2a3325d78424cp-140, 0x1.5a123f7d3d452p-873, 0x1.eaa918c4b1296p-207, 0.0,
     0x1.0ed02d8636ee9p-109, 0x1.20be6ec77779bp-403, 0x1.86002b9517b5fp-232,
     0x1.297e216c08454p-644, 0x1.91fdc6972919fp-253, 0x1.cf23d64239b28p-850, 0.0,
     0x1.654be99335d86p-10, 0.0, 0x1.9184bad363474p-909, 0.0, 0.0,
     0x1.b461f6242ba98p-67, 0.0, 0x1.b81d12bc99b28p-70, 0x1.24c1f60909d5dp-373,
     0x1.e68a42a24eb8ep-17, 0x1.f417775bde41p-558, 0.0, 0x1.6688be1a4c1d4p-703,
     0x1.99851f8bee3b5p-407, 0x1.7d488f70f051ap-38, 0x1.feaf80eb8cab8p-337, 0.0,
     0x1.ac89f785080efp-50, 0x1.42a87be633141p-280, 0x1.bc68d8ddf8d7fp-254,
     0x1.6870cad54885fp-882, 0.0, 0x1.73714ab52b0f6p-339, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double2_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
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
        ml_double2_t local_acc;
        int32_t i;
        ml_double2_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            ml_double2_t tmp1;
            ml_double2_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_tand2_u35avx2128(tmp0);
            memcpy(((ml_double2_t*)(external_bench_wrapper_output_table+ i)), &(tmp1),  16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(2);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
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
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_tand2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_tand2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
