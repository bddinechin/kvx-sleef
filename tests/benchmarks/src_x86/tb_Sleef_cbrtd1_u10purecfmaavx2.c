/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cbrtd1_u10purecfma.c --function \
 *     Sleef_cbrtd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.fb6b9438b369bp-43, 0x1.da057dd8b5074p-347, 0x1.24128bdce2d75p-492, 0.0,
     0x1.7ae27f26485dp-481, 0x1.683cc0305af9dp-5, 0x1.10716ab2b59f3p-667,
     0x1.47846cab7c2ddp-935, 0x1.7018f89761b9fp-85, 0.0, 0.0, 0x1.8b286dcd3e95ep-535,
     0x1.af4dcfe754eafp-1011, 0.0, 0x1.c5e6403adc1b8p-377, 0x1.5c1505cc88efdp-845,
     0.0, 0.0, 0x1.d3ee52166ff29p-251, 0.0, 0.0, 0x1.f480dd075948ap-287,
     0x1.8492414053f11p-640, 0.0, 0x1.044ed3ea96ed6p-418, 0x1.2feebf33b97c9p-299, 0.0,
     0x1.c4f8ce7903ep-900, 0.0, 0x1.182edeece56d7p-713, 0x1.2c7de59058126p-837, 0.0,
     0.0, 0x1.de9e9d5cd9f05p-209, 0x1.5935bedb9e295p-503, 0x1.a8dadedcee2cfp-954, 0.0,
     0.0, 0.0, 0x1.d5103f919ea87p-762, 0.0, 0x1.fc5bafa86e6cbp-603,
     0x1.8e5a2c663cf71p-195, 0x1.be3f7d889759dp-576, 0x1.a5fdbd5cb85cdp-517,
     0x1.5f574043234c6p-946, 0.0, 0x1.359c11e92a1c2p-115, 0x1.501ddab02bb1ep-532, 0.0,
     0x1.3bfbb53440759p-596, 0.0, 0.0, 0.0, 0x1.96feac7b4ff74p-400,
     0x1.7bb66c706daecp-249, 0x1.1c3a4a4bc29b9p-1001, 0.0, 0x1.82cc906a1af81p-733,
     0.0, 0x1.7d24ec1463416p-517, 0x1.15d4d54e3036cp-694, 0x1.7f98c03650f47p-103,
     0x1.80634291eca55p-647, 0.0, 0x1.c2846ed7f6ef3p-678, 0x1.d144af98bbd58p-56, 0.0,
     0x1.5ad62e9d33c56p-477, 0x1.6de491e61ab5p-217, 0.0, 0.0, 0x1.0de9d59df6989p-370,
     0x1.4211667f089adp-683, 0x1.1bfec190cc481p-410, 0x1.a0ae86343ace1p-436,
     0x1.a2ef472fbbbdfp-822, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.90c5dfdf5a0a6p-413, 0.0,
     0.0, 0x1.4f203f1159121p-336, 0x1.856a8aaabd57fp-418, 0x1.ce028f1ae46dap-917,
     0x1.cf7dd579034cdp-971, 0x1.e6a602f065192p-185, 0.0, 0x1.b6227c6db9197p-460,
     0x1.2d8af452df2e5p-279, 0.0, 0x1.eaf319479b87bp-312, 0.0, 0.0, 0.0, 0.0,
     0x1.3c49878844aa2p-312, 0x1.046fcfd743433p-434, 0.0, 0.0, 0x1.0d4e8124a116fp-954,
     0x1.8e6887126e996p-94, 0x1.f72afab90032dp-320, 0.0, 0x1.9cacb693c0bbdp-875,
     0x1.903872bf2b6bap-753, 0x1.889eb33e4f19ap-654, 0x1.dae3bb9d7a9ccp-435,
     0x1.5db74d1731a92p-428, 0x1.a6fd73f9f5863p-20, 0x1.9dcb901a09523p-477,
     0x1.939c1f5de1d52p-148, 0x1.f2c3b3a9c9af5p-273, 0x1.70e78bd534bccp-157, 0.0, 0.0,
     0x1.f1be7e514d94fp-255, 0x1.34b5130cf319cp-678, 0x1.4c85146dcb9d2p-743, 0.0, 0.0,
     0.0, 0x1.b9624a38381e1p-62, 0x1.15a92418f24e2p-274, 0.0, 0x1.16725692ce087p-433,
     0x1.4e7e0cc2d6653p-214, 0.0, 0x1.d05c977f63079p-504, 0.0, 0x1.faf2e408aa97ap-504,
     0.0, 0.0, 0x1.d97846d21c6d8p-910, 0.0, 0x1.472b88d7f8a5cp-681, 0.0,
     0x1.c4cd893a74088p-306, 0x1.54f6e7277234fp-571, 0.0, 0.0, 0x1.7e5994f747618p-386,
     0x1.a3ec331bb6aebp-97, 0.0, 0x1.0c9241762cf7ap-4, 0.0, 0x1.63b8df0d71888p-788,
     0.0, 0x1.76e458e59b6cp-62, 0x1.0b8396e4a648ep-662, 0.0, 0.0,
     0x1.41f91f712a87p-281, 0.0, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0x1.3af56dc733de3p-669,
     0x1.0b2c07e3df95fp-503, 0.0, 0.0, 0.0, 0x1.efb0e616d477cp-700,
     0x1.e307ab657c064p-317, 0.0, 0x1.4f827e67d7debp-698, 0.0, 0x1.462d1404d15bap-612,
     0x1.73c714af14d4fp-694, 0.0, 0.0, 0.0, 0x1.49c08dbc2b1d4p-592, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1158097b712b1p-415, 0x1.f325ffe9285b9p-352,
     0x1.e924db5a009a2p-202, 0x1.6dae9667187d8p-580, 0x1.67d282d5ca393p-501,
     0x1.d9c7f5969ba6ep-538, 0.0, 0x1.917124e86e8f5p-266, 0x1.07f2f2100ab67p-365, 0.0,
     0x1.8c9f1714c1459p-105, 0.0, 0x1.512163eb9bb02p-254, 0.0, 0x1.6fe0a6b75492p-305,
     0x1.02d916fe08167p-606, 0x1.3b6d32fe75411p-295, 0x1.c17438ba7e30fp-551, 0.0,
     0x1.c88e9be62bd1ap-868, 0.0, 0x1.3f1645905ffd9p-815, 0.0, 0x1.ed4ae8de1e36fp-466,
     0.0, 0x1.7c4047c186be6p-955, 0x1.9a05ff8e12b15p-681, 0.0, 0x1.91debb01d0041p-110,
     0.0, 0.0, 0.0, 0x1.e95cb7b44b6efp-978, 0.0, 0.0, 0.0, 0x1.8e8db22dd9537p-638,
     0x1.fc50485bc04e5p-373, 0.0, 0.0, 0x1.41a895d70f909p-414, 0.0, 0.0, 0.0, 0.0,
     0x1.ec4046df1d4f8p-412, 0.0, 0x1.87a700e858f02p-525, 0.0, 0.0,
     0x1.0ee189f3f90bcp-440, 0.0, 0.0, 0.0, 0x1.1b19cf301aac4p-548, 0.0, 0.0,
     0x1.2ad87a1e0625dp-116, 0x1.b7fcbee596c0bp-359, 0x1.42efa82a5230ap-996, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f5957a00248a7p-101, 0x1.c621bbd579dc7p-207,
     0x1.57cb7fa6509e7p-766, 0.0, 0.0, 0x1.0d0442aa8543cp-805, 0x1.0dfbb7f2a9541p-840,
     0.0, 0x1.a36a62990ab7fp-634, 0.0, 0.0, 0.0, 0x1.dbac72a411faap-808, 0.0, 0.0,
     0x1.11f4c060160d3p-9, 0x1.d8786ec9bf391p-94, 0x1.a91d8256bce1dp-824,
     0x1.8469669f8c9a4p-90, 0.0, 0x1.3a8df2378af5cp-17, 0.0, 0x1.64433d658bd21p-424,
     0x1.da81a28000c37p-751, 0.0, 0x1.5ac1f9e4a2714p-515, 0x1.d4e274f5f61d4p-420,
     0x1.d9cf9239ee3c3p-482, 0.0, 0x1.00d87208aa23bp-600, 0x1.8e5b8609b2c0dp-318,
     0x1.315767567b695p-634, 0x1.ec538d39e7136p-294, 0.0, 0x1.093eaf230a618p-276, 0.0,
     0x1.10d0e52909731p-969, 0x1.542dac1528718p-491, 0.0, 0.0, 0x1.9d7bb475f7ee4p-231,
     0x1.ddcad0c7c4a27p-249, 0.0, 0.0, 0x1.acca2e55e508ap-79, 0.0,
     0x1.6b616b6daa8f4p-707, 0.0, 0.0, 0x1.1f22924aed24bp-441, 0x1.033354c8f0b9p-684,
     0.0, 0x1.2bdb3cade64afp-280, 0x1.634a81a3af524p-218, 0x1.c6d75982a8acfp-677,
     0x1.0395bd4fb87f5p-875, 0x1.913d14c561f8ap-542, 0.0, 0.0, 0.0,
     0x1.bac97765f839cp-569, 0x1.553bc2875b176p-493, 0.0, 0.0, 0x1.0bbe905de7297p-756,
     0x1.39c8bd2fb1413p-374, 0.0, 0x1.da0a03768c5c5p-206, 0x1.eba6cab956124p-753,
     0x1.a8fd378d843adp-476, 0.0, 0.0, 0.0, 0x1.559daa6413abep-776, 0.0,
     0x1.804867e5bce3p-818, 0x1.ecfab432b7ce2p-392, 0.0, 0x1.90481cae62006p-820, 0.0,
     0x1.0d3d7a24eb92bp-560, 0x1.f11805b315597p-92, 0.0, 0.0, 0x1.90f8094a77a4fp-847,
     0.0, 0x1.bb2095d71f8a6p-555, 0.0, 0x1.d6e810f34e65p-641, 0.0,
     0x1.78fba89bee46dp-850, 0.0, 0.0, 0x1.9c01b38f9d96bp-430, 0x1.1d22169b4b6ap-1017,
     0x1.0cfad07393bacp-524, 0x1.cd8ac095f439dp-143, 0x1.a34f7e551bbacp-703,
     0x1.1cced4b484c6fp-329, 0x1.f7902d861f14p-75, 0.0, 0x1.22748c40e3e87p-634, 0.0,
     0x1.4f65a1d45a5cep-603, 0.0, 0x1.c0319ba046eaap-532, 0x1.c1de7735a8873p-121,
     0x1.afc56e7ce1178p-582, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ddceb9a739171p-462, 0.0, 0.0, 0x1.ea221cd1d266fp-332, 0x1.e1c1e28c43a88p-903,
     0x1.7175ba3dc3363p-457, 0.0, 0.0, 0x1.71c92496444ap-775, 0.0,
     0x1.98590ee70f401p-569, 0x1.3b148144fd208p-973, 0.0, 0.0, 0.0,
     0x1.7b87ab3e69a45p-808, 0.0, 0.0, 0x1.4b085f9fbc33p-623, 0x1.86c922b657915p-855,
     0.0, 0.0, 0.0, 0x1.23436c675713ap-354, 0x1.3654694cb4ba1p-131, 0.0, 0.0,
     0x1.ab75be074460cp-351, 0.0, 0x1.3a45ec4eda218p-676, 0x1.afdc468ab016bp-10, 0.0,
     0.0, 0x1.f33b0b648db92p-901, 0x1.bde3ad03dd3adp-631, 0x1.1b08efc57060bp-604, 0.0,
     0.0, 0.0, 0.0, 0x1.c8d062862a406p-153, 0x1.ab9557ee47396p-731,
     0x1.a9049f345289fp-494, 0x1.53eadd6b8604fp-913, 0x1.0c24684c85d97p-454,
     0x1.74133633ed89dp-531, 0.0, 0x1.f24e0fbd3580ep-298, 0.0, 0.0,
     0x1.0defb0cdb919ap-902, 0.0, 0.0, 0x1.485f69e79b5bp-620, 0.0,
     0x1.bbadf8df36466p-50, 0x1.8b1f76c0b831ep-460, 0.0, 0.0, 0x1.ce84b184f12a4p-208,
     0.0, 0x1.968a1f58c9785p-664, 0.0, 0x1.267938a938dbbp-251, 0x1.81c0923621f7ep-314,
     0x1.05ccc07c852b1p-470, 0x1.622d185ce92bcp-11, 0x1.07e83d866f06ep-552, 0.0, 0.0,
     0x1.25a19517462ebp-760, 0x1.224a63f55abbbp-987, 0.0, 0.0, 0x1.81e80b12db04ep-372,
     0x1.a6f2fe670afa7p-849, 0.0, 0.0, 0.0, 0x1.5344666c161ccp-664,
     0x1.13b4d46cec9c6p-367, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.beef01189ab46p-542, 0.0,
     0x1.77b15cdd3438cp-963, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2dc88ec87d653p-71, 0.0,
     0x1.52832f5db6a99p-161, 0x1.b0c833cb4d1d5p-705, 0.0, 0.0, 0x1.ce8c777e104a7p-133,
     0x1.aaee7729d91b4p-963, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2b03ec705d0a7p-317,
     0x1.a9a9adbea69e2p-910, 0x1.dc4ba84ae36cfp-300, 0x1.2a67a37dd6134p-963,
     0x1.f4e5f90fc08cfp-319, 0.0, 0.0, 0x1.ada2b5baecf9dp-970, 0.0, 0.0,
     0x1.b954d9e8bde25p-404, 0x1.3d4ee5786fd85p-273, 0x1.d70b0c8b264adp-1020,
     0x1.309c1b507d00ep-164, 0.0, 0x1.6bb115262c6c7p-592, 0.0, 0x1.7af95cda57f43p-936,
     0.0, 0.0, 0.0, 0x1.139e4e07f9e4ap-609, 0.0, 0x1.a91b0c0fa3ee7p-434,
     0x1.1087362552147p-624, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.188d2e8a1b2b7p-318,
     0x1.6f1f0ee11e95ap-984, 0x1.47414711e673cp-831, 0x1.bc4b1f8f0f20dp-99, 0.0, 0.0,
     0x1.f31a0117c5109p-774, 0.0, 0x1.4251678e9ddeap-149, 0.0, 0x1.3dab5fc5c9ed1p-577,
     0.0, 0x1.9a00a36930d3ap-82, 0x1.3a40435b196cp-155, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d95c0ffb628fdp-432, 0x1.7686aee6b699ap-904, 0x1.291a5243c5b3dp-930,
     0x1.78962dc39b8b6p-845, 0.0, 0x1.52e1153a01955p-169, 0.0, 0.0,
     0x1.a66d3b9704bacp-949, 0.0, 0.0, 0.0, 0x1.c4f5d0fa64faep-701, 0.0,
     0x1.a9dd9740e481bp-179, 0x1.db5ddd28f1679p-993, 0x1.4437b145a47b1p-686,
     0x1.e90150cb69f73p-664, 0x1.238118105c0f8p-31, 0.0, 0.0, 0x1.df8bfc549c25p-974,
     0.0, 0x1.5baf9e9f3122fp-321, 0x1.e0d9022b35ff5p-1014, 0x1.5328fdca6e33p-138, 0.0,
     0x1.69ca85aeafb88p-204, 0.0, 0.0, 0.0, 0x1.bcc86b25bd757p-638, 0.0, 0.0,
     0x1.a231cc6811bcbp-582, 0.0, 0x1.91b4133efac13p-55, 0.0, 0.0,
     0x1.98e9fd1f722fep-221, 0.0, 0.0, 0x1.c24d766b1929fp-716, 0.0,
     0x1.e30d069cdbfb5p-1005, 0x1.af0abb9264a25p-333, 0.0, 0x1.8da1b07e8c77p-650, 0.0,
     0x1.0aa4e98c5872p-923, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bede96bc4e5b4p-300, 0.0,
     0x1.20ef0ac146ab3p-946, 0x1.748d14b7b8b2bp-402, 0x1.b511ecb5e32c6p-362, 0.0,
     0x1.4287cbcacbcf2p-540, 0x1.a3002611f10f8p-766, 0x1.8212c566ebb4dp-30, 0.0,
     0x1.d42dd8108ddedp-711, 0.0, 0.0, 0.0, 0.0, 0x1.f5fb5a9692e9cp-513,
     0x1.52a1ab62ca415p-277, 0.0, 0x1.6eafbdbbc633ep-528, 0x1.a3ba51051ad53p-866,
     0x1.82e38ce462b39p-853, 0x1.11d5c7ae1c0b2p-466, 0x1.fba7e7c5333fep-595, 0.0, 0.0,
     0.0, 0x1.5d6dc27812fbbp-681, 0.0, 0.0, 0x1.87a2b44cafd5cp-527,
     0x1.beabcb02d0226p-426, 0.0, 0x1.2e79368a5f1e6p-514, 0x1.47b9a51b9ed14p-212,
     0x1.05818aad0c29cp-792, 0x1.2d841a1e0b2b8p-803, 0.0, 0x1.9aba6dba5b7e1p-522,
     0x1.e630c67307dbap-669, 0.0, 0x1.3d28867fac367p-115, 0.0, 0.0,
     0x1.69fb1bf9326c6p-48, 0.0, 0.0, 0.0, 0x1.acbcc3a4c6d4ep-423,
     0x1.526a138e76651p-497, 0.0, 0.0, 0x1.2709add7b519ap-1020,
     0x1.08a8786ed4801p-472, 0x1.9e37492e8205p-11, 0x1.eee7b7241d05ep-381,
     0x1.50050639601f9p-123, 0.0, 0x1.c58b6f038efb8p-640, 0x1.2007ac494a1f6p-810, 0.0,
     0.0, 0x1.1a2b30d2e38bep-26, 0x1.7b4e3396a6514p-938, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9fb143039893dp-827, 0.0, 0x1.efd67aecd79bfp-262, 0.0, 0.0, 0.0, 0.0,
     0x1.7303c4f13076fp-212, 0.0, 0.0, 0x1.c90ce4f2a28bfp-862, 0.0, 0.0, 0.0, 0.0,
     0x1.81e04d48c70cfp-774, 0x1.ea4da9424826p-530, 0x1.eb84647aa580dp-916, 0.0,
     0x1.7b321397f8be4p-601, 0.0, 0.0, 0x1.cde4f3d96fdaap-666, 0.0,
     0x1.96927318851f1p-194, 0x1.698f08d94ed76p-290, 0x1.98e4c77514339p-826,
     0x1.3d32b1bd30285p-102, 0.0, 0x1.9f1c7c06617bfp-891, 0x1.73aff74a1ff37p-682, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3d32665519eabp-810, 0.0, 0x1.ecd63d906aee5p-411,
     0x1.d7bb7bbd47fb5p-54, 0x1.bfd19c2f551fep-51, 0x1.67ea88fa81f6p-1009, 0.0,
     0x1.2bf3845b5747dp-417, 0.0, 0x1.26ff3c3d20afp-577, 0.0, 0.0,
     0x1.86c34df5e927dp-848, 0x1.bef1b0e5bd7ecp-125, 0x1.5392d5ed0301dp-412,
     0x1.493afb6245dfdp-833, 0.0, 0x1.562b281dd8081p-148, 0x1.15945c75ae4bdp-84, 0.0,
     0x1.3db1b09b897d6p-267, 0.0, 0x1.941786a4ebea9p-862, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8cc09e08be76ap-124, 0.0, 0x1.10e2f3aecdd5ep-810, 0.0,
     0x1.bee95242611ep-897, 0x1.ba7f445091a63p-484, 0x1.166a72b01f829p-761, 0.0,
     0x1.4bdd00ea13dcbp-918, 0x1.20c78149d81f6p-701, 0x1.07ae7f1688649p-42,
     0x1.1c358be9cec46p-485, 0.0, 0x1.4cd471867934ap-929, 0.0, 0x1.667e488a78e43p-684,
     0x1.f2254b72965d1p-991, 0.0, 0x1.1f3ca3ee308e2p-996, 0.0, 0x1.508fef75fc748p-437,
     0.0, 0x1.3f5b8a562d00ep-336, 0.0, 0x1.d91497df56f31p-973, 0x1.7b987cbcbf72p-670,
     0.0, 0x1.cd61e8c9aa159p-154, 0x1.b657610214e72p-316, 0x1.20f0ba9c1f935p-651,
     0x1.27ca862a870c9p-382, 0x1.5c9a218584928p-446, 0.0, 0x1.f0b20ce8b9f7cp-659, 0.0,
     0.0, 0x1.cfb9155977826p-1018, 0.0, 0x1.0965d6a7a3c2p-839, 0x1.cd560db38d321p-132,
     0x1.672843f4fe77p-324, 0x1.406e4af3d6949p-885, 0.0, 0.0, 0x1.a5fa41476e6dp-325,
     0.0, 0x1.2eaff2d48ee81p-71, 0x1.2c21ba1bd7befp-544, 0x1.ddc402fadadd3p-391, 0.0,
     0.0, 0x1.6bb4da4202239p-533, 0.0, 0x1.6457142eda3f6p-61, 0.0, 0.0, 0.0,
     0x1.a42655bea35f5p-371, 0x1.d10f8679d14a9p-988, 0x1.86d7469cc1717p-471,
     0x1.042ff2e236a5cp-846, 0.0, 0x1.a37c565dd9b92p-29, 0.0, 0.0, 0.0,
     0x1.a193ceddc23b4p-412, 0x1.d10e56e1b78f1p-340, 0x1.eefa09dd5a7b8p-233,
     0x1.861768c14103fp-912, 0x1.41cb99fe9d695p-381, 0.0, 0.0, 0x1.ef9adaa9e317dp-525,
     0.0, 0x1.cbb3c100a1c7ap-834, 0x1.a13808dde698bp-935, 0.0, 0.0,
     0x1.b0e6fde64eea1p-1015, 0x1.0437e7139f963p-69, 0x1.5a39d0783c22dp-278, 0.0,
     0x1.05c7f40e7d85ap-33, 0x1.a55bdc7d4c51p-804, 0x1.baaa4f54e3c7dp-329,
     0x1.e15ae228ed696p-968, 0x1.af709303b4cd3p-83, 0.0, 0x1.c1bb512b3f8dbp-399, 0.0,
     0x1.9da23ccb5eed2p-889, 0x1.f61811ab58d15p-936, 0x1.063d0f7b39116p-647,
     0x1.30c188544b6c1p-408, 0x1.629f45c62c8dep-582, 0x1.8bcb8d84d9a2dp-929,
     0x1.69576657422dfp-248, 0x1.15da28287e736p-320, 0x1.fd5a7f1e165b7p-721,
     0x1.8d348bbd9cd6p-1005, 0x1.8634b6ed97a87p-428, 0x1.4c625a01a82fcp-189,
     0x1.bf6bd324dfe3ap-209, 0.0, 0x1.5c45623168f1ep-651, 0.0, 0x1.ccdf11a7df42cp-441,
     0x1.ccf35075fcacp-848, 0x1.a64519655142ap-320, 0x1.2f89b1739fdf8p-835,
     0x1.44027010f26cdp-854, 0x1.f577d0e298bc6p-81, 0.0, 0x1.b71c92aea2b08p-165, 0.0,
     0x1.41c7c089e508fp-875, 0.0, 0.0, 0x1.887e93e4096aep-1006,
     0x1.7bb5cfe00d6ccp-284, 0x1.dc201d1df6b34p-49, 0x1.898623ffa84e5p-24, 0.0,
     0x1.3e72f4ccb706dp-575, 0.0, 0.0, 0x1.c5a0c5f879f49p-559, 0.0,
     0x1.4d2dbb5dfeb79p-292, 0.0, 0.0, 0.0, 0.0, 0x1.9b842c62b5613p-503, 0.0, 0.0,
     0.0, 0.0, 0x1.ee813799433f6p-157, 0x1.1266441d36c46p-247, 0x1.c3a56b5a31fc1p-521,
     0x1.4a88e4a733d7ep-593, 0.0, 0x1.ae4937e18f8d7p-962, 0.0, 0x1.fea383b63a834p-208,
     0.0, 0x1.8c43f79780d22p-332, 0x1.4802d04649f38p-816, 0x1.6849ad74b8932p-829,
     0x1.8a64584c45488p-1000, 0.0, 0x1.856adbd89b27cp-749, 0.0,
     0x1.806eae71ebb0ep-307, 0.0, 0x1.73de188f8feb7p-975, 0x1.fc730ad3c9ddfp-708,
     0x1.f41cf6359b244p-260, 0x1.9befab6a5da77p-225, 0x1.d8d7673e33c2fp-721, 0.0,
     0x1.3a645a844072p-954, 0x1.9be3eb0b2de1p-412, 0x1.38c5d29c418c4p-125, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f3d79b59c00b4p-392, 0x1.65435b718c8e7p-139, 0.0,
     0x1.58bf4b338050ap-511, 0.0, 0.0, 0.0, 0.0, 0x1.0d279384e57b7p-890, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.416ffd6029c63p-726, 0x1.4e4308fb026ccp-316,
     0x1.6defdcc463661p-741, 0x1.1f1c7e0165793p-730, 0.0, 0x1.9d9b5e364bab6p-995, 0.0,
     0.0, 0x1.6b63fc060c661p-742, 0.0, 0.0, 0x1.d4be246bdf0bdp-82,
     0x1.2d09124aa9d28p-592, 0x1.6a9d2eda95207p-651, 0.0, 0.0, 0.0, 0.0,
     0x1.43fa694e2dcacp-120, 0.0, 0x1.5a4e948d205d6p-363, 0.0, 0.0, 0.0,
     0x1.0ae01cf68c08fp-214, 0x1.b42580ac006b2p-659, 0.0, 0.0, 0x1.cb3ea6293c15dp-23,
     0x1.e28686e0fcb02p-403, 0x1.546b5c18fc0c2p-177, 0.0, 0x1.2a12ba8ef348ap-665,
     0x1.91192d669a257p-159, 0x1.d900898ebfe29p-788, 0.0, 0x1.838b6173c571dp-561, 0.0,
     0x1.83618267d0334p-394, 0.0, 0.0, 0x1.3ace962a694b8p-69, 0.0,
     0x1.3935875ff2251p-988, 0.0, 0x1.7326f2c5e532ep-331, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a46686fe6b3fap-259, 0x1.8c3c8b431c9ebp-904, 0.0, 0x1.6f1a1d845948dp-32,
     0x1.b097b5a994a4bp-349, 0x1.5e689d669ed16p-987, 0x1.b9a18ce9a8bcep-560,
     0x1.45e8a39a915a7p-819, 0.0, 0x1.de91d6957307cp-182, 0x1.1f59fa0c03c15p-108,
     0x1.d8b39b29470e8p-787, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a5149180e3edcp-91, 0.0, 0.0,
     0.0, 0.0, 0x1.d1921fa93b6f3p-364, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88dc08f436d23p-255, 0x1.aa802a3efad6cp-49, 0.0, 0x1.384c0547b0ae4p-73,
     0x1.035bdd75a86ap-832, 0.0, 0.0, 0.0, 0x1.140b6a9d611eep-133,
     0x1.569d150a50a47p-757, 0x1.ee7b34a69ee2dp-230, 0x1.df3000b2d8c1fp-353, 0.0, 0.0,
     0.0, 0x1.acef26c8a160cp-562, 0.0, 0.0, 0.0, 0.0, 0x1.319c450f775efp-178
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
            tmp1 = Sleef_cbrtd1_u10purecfma(tmp0);
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
    printf("Sleef_cbrtd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cbrtd1_u10purecfma bench acc %la\n", global_bench_acc);
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
