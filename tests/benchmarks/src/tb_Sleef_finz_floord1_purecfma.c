/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floord1_purecfma.c --function \
 *     Sleef_finz_floord1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.9f249ced86f2cp-296, 0x1.958262ad155b2p-243, 0x1.90003a64025ep-195, 0.0, 0.0,
     0x1.d1ca47f524a16p-454, 0x1.e32a639a496a5p-854, 0x1.96146e5486e7ap-317,
     0x1.984b5f77f4a66p-450, 0x1.78c4f0d690569p-290, 0x1.01949434f8e2fp-316,
     0x1.7a96c944f7ee4p-467, 0x1.4cd3f590e126cp-21, 0x1.95202bd6cf734p-824,
     0x1.a23ea3c63f36ap-72, 0x1.0128fb922f751p-482, 0.0, 0x1.92d426d7c58edp-687,
     0x1.c09cdc7ea038fp-254, 0x1.3f3e6ef80a197p-399, 0x1.6927ece1498e4p-116, 0.0,
     0x1.f2175c2af6f52p-214, 0.0, 0x1.bde27e4b74384p-401, 0.0, 0x1.c3ee26c359011p-598,
     0x1.beafd060c37d8p-309, 0x1.4ce846962070cp-130, 0.0, 0x1.2775182bb8163p-433,
     0x1.0f9d2be6e3eb6p-336, 0.0, 0.0, 0.0, 0x1.ca88a7fff3521p-946,
     0x1.9605e211bf818p-345, 0.0, 0.0, 0.0, 0x1.99446862b8b8bp-412,
     0x1.67e6fae808138p-379, 0.0, 0x1.d05e0d4580eep-570, 0.0, 0.0,
     0x1.50042b10697a5p-660, 0.0, 0.0, 0.0, 0.0, 0x1.a94f9effe01bp-354, 0.0, 0.0, 0.0,
     0.0, 0x1.41471586eb4fep-866, 0.0, 0.0, 0x1.fb64aa0563699p-17, 0.0, 0.0,
     0x1.3d34042e430b3p-965, 0x1.1b008ab08b043p-138, 0.0, 0x1.ee2ca96fb9de3p-283, 0.0,
     0x1.e8758af5a2de4p-751, 0x1.47d91f9be15b4p-777, 0.0, 0x1.5ce1635088bbbp-866,
     0x1.59c302cad9978p-948, 0.0, 0.0, 0x1.99f1386fba715p-127, 0x1.fb98b3f571a5p-363,
     0.0, 0.0, 0.0, 0x1.fa3dfd78d3578p-580, 0.0, 0x1.98fc93aaa492cp-59,
     0x1.8d92bf10d1a0bp-265, 0.0, 0.0, 0x1.7b59e8e7202dbp-481, 0x1.846b83a981bf6p-741,
     0x1.4116463e55651p-926, 0.0, 0x1.8f89db792e3d9p-780, 0x1.8a83e4f3e70dcp-459, 0.0,
     0x1.8a972d2a00791p-754, 0x1.8a37bf6b08cc6p-384, 0.0, 0x1.ddac56b5d29e9p-313, 0.0,
     0.0, 0x1.e0c406c9cc39fp-442, 0.0, 0x1.3cbf07d94aaf8p-687, 0.0, 0.0,
     0x1.eb048d67ad807p-463, 0x1.eb4a0aaf6d1e5p-502, 0x1.5d833090db19ap-898,
     0x1.8451006d917e3p-641, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.33e4be3de620dp-443,
     0x1.1daf62fdaac97p-950, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2c1d4e6ea5e91p-636, 0x1.1de945b7dd7a5p-560, 0.0, 0x1.4ee552ac3579bp-620,
     0x1.e8331609281f4p-463, 0.0, 0x1.7e7077751722dp-590, 0x1.080e25d3d0eadp-117,
     0x1.0a0c4c1c0743fp-395, 0.0, 0x1.ed445d74ff912p-220, 0x1.dd82bb9144059p-425,
     0x1.8340b8951402ep-606, 0.0, 0x1.1b5142066e551p-79, 0.0, 0x1.7086a64394229p-378,
     0x1.9e22eedf7c0bap-313, 0.0, 0x1.6039efb5642ep-717, 0.0, 0.0,
     0x1.f7b3ccbeb392ep-715, 0.0, 0x1.94e2d98182c71p-955, 0.0, 0.0, 0.0,
     0x1.d989a2283917bp-196, 0.0, 0.0, 0x1.d33d974aa87e2p-785, 0x1.c34f848dafba2p-371,
     0x1.30d7de86062dp-857, 0x1.3cdda77c1f42ep-176, 0.0, 0x1.24c1f650e834ep-192, 0.0,
     0x1.648842523af0cp-865, 0x1.a7edf3c306a4fp-974, 0.0, 0x1.f82f394c05466p-117,
     0x1.8a7fd83d53d32p-182, 0.0, 0x1.41cc8da38641ep-801, 0x1.d972fc66b93p-687, 0.0,
     0x1.73a38b666e9abp-723, 0x1.5f1c31f6d797bp-859, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd83cd7aef998p-926, 0.0, 0.0, 0.0, 0.0, 0x1.b767c9fc3ab88p-912,
     0x1.034fa11e0adc1p-909, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6afbb244fd67fp-991,
     0x1.d55ffbde8958ap-521, 0x1.d0a42baec5ef5p-425, 0.0, 0.0, 0.0,
     0x1.d48f4b1d485d4p-724, 0.0, 0.0, 0.0, 0x1.dc46ce6cd9841p-575, 0.0,
     0x1.eb5cbacbefff1p-185, 0x1.f007f2283d7f5p-985, 0x1.f57b4fce27109p-233,
     0x1.12379ca4af516p-88, 0x1.d55baa11307fp-282, 0.0, 0x1.551f25106fbb4p-80, 0.0,
     0x1.bd24471084cdp-836, 0.0, 0.0, 0x1.5521ba6187cc5p-272, 0x1.0fbe9c6df2ccdp-941,
     0.0, 0x1.bebd6958a7cb9p-181, 0.0, 0x1.5acde8cdae5e8p-358, 0x1.46a7fc551b4b3p-125,
     0x1.ba55ac495007p-829, 0.0, 0.0, 0x1.f5840c73954e2p-739, 0x1.dc2c1419550bfp-840,
     0x1.3549433326b41p-689, 0.0, 0.0, 0x1.67f42b4aca623p-738, 0x1.dfe19170af7b7p-702,
     0.0, 0x1.465d621be6313p-807, 0x1.e75e7f63c964fp-845, 0x1.915aa9a76571ep-380, 0.0,
     0x1.225b653466d1ap-139, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ef47e76384422p-755, 0x1.e65757bec8bfep-1001, 0.0, 0x1.0d7782babea3bp-176,
     0.0, 0x1.50fda9db0c89bp-908, 0x1.b657152e2911cp-186, 0x1.77eb6c3d4bac6p-325, 0.0,
     0x1.2f14421ada31p-562, 0x1.a940c11665926p-588, 0x1.58d4d4fcafc74p-930, 0.0,
     0x1.a13bc72b7cefdp-160, 0.0, 0x1.d541e21d00423p-132, 0.0, 0.0,
     0x1.eda2bb4330324p-349, 0x1.8d044086ce53fp-24, 0.0, 0.0, 0x1.6018192efde42p-488,
     0.0, 0x1.dee9c2fb375p-19, 0x1.e0c3b134eece8p-578, 0.0, 0.0,
     0x1.c1ef1d923886dp-180, 0.0, 0x1.d96de59f2597cp-654, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7d3cd8db3399bp-315, 0x1.181be10c084c9p-233, 0.0, 0x1.85835e09f5c43p-841,
     0.0, 0x1.be5760b02c6a5p-243, 0.0, 0x1.f3b3b23196aecp-534, 0.0, 0.0, 0.0, 0.0,
     0x1.f8d2d9fc70473p-707, 0x1.3954462067bacp-667, 0x1.49cb5de45b43fp-79, 0.0,
     0x1.87abdbec22a71p-768, 0.0, 0x1.328b1dc6fcf16p-673, 0x1.a733b29254eefp-742, 0.0,
     0.0, 0x1.2a455af7a9a35p-599, 0x1.c92349949ca11p-214, 0.0, 0.0,
     0x1.336d516e7f03p-656, 0x1.bd6fc12a2455cp-414, 0.0, 0.0, 0.0,
     0x1.db5815b6673e8p-674, 0.0, 0x1.b7e08b5e9a39dp-221, 0.0, 0.0, 0.0,
     0x1.d48ac2fca8f9ep-358, 0.0, 0x1.8c48792d518d3p-346, 0.0, 0x1.7f440832946e5p-868,
     0x1.de696d53bb5b6p-849, 0x1.d3cb91cc8cc4fp-593, 0.0, 0.0, 0x1.41abde57170dcp-36,
     0x1.2c0b4438196bap-481, 0.0, 0.0, 0x1.6b9e9ff68a263p-166, 0.0,
     0x1.7dbd5f384930fp-149, 0x1.101f221d3bae7p-514, 0x1.d2aced73f779cp-793, 0.0,
     0x1.37a475b9d8ce8p-484, 0.0, 0.0, 0.0, 0.0, 0x1.a1115557c035bp-740,
     0x1.b03a5c35be499p-94, 0.0, 0x1.38e596dab5c8ap-705, 0.0, 0.0,
     0x1.263dc3367dfc4p-799, 0x1.f9a33cadbe171p-993, 0x1.e2067184feb66p-192, 0.0, 0.0,
     0x1.723ec79e0acc1p-451, 0x1.d77cfd5511f41p-900, 0x1.5dc91098a9b0dp-945, 0.0,
     0x1.53f6def4029c9p-387, 0x1.df00ca74088ddp-165, 0x1.2abe1fd8479f8p-903,
     0x1.d65b87ab7dbep-21, 0.0, 0x1.2be468f422adbp-70, 0x1.0990cd23fc7a2p-234,
     0x1.23235cc47b54ap-523, 0x1.f307948cdb70ep-294, 0x1.0f8764d93f833p-424, 0.0,
     0x1.96305eb119c7ap-529, 0.0, 0.0, 0x1.452ce0d8e35p-44, 0x1.7efe0a1a990e4p-728,
     0.0, 0x1.162826971aa06p-990, 0.0, 0.0, 0x1.e62e6ca60d8aap-638, 0.0,
     0x1.d1e315a508ba2p-88, 0.0, 0.0, 0x1.f2ef4c2ab3cd7p-470, 0.0, 0.0, 0.0,
     0x1.b5013de23ee05p-341, 0x1.e32a07dcbf197p-593, 0x1.0ad4a813c12a9p-889, 0.0, 0.0,
     0.0, 0x1.49443859fdd6fp-412, 0x1.bfe8c0cf77852p-565, 0.0, 0.0,
     0x1.7f9600a3ec419p-281, 0x1.df9c974220742p-411, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd085e0839a11p-974, 0.0, 0.0, 0x1.f63365feb0096p-435, 0x1.f28f2e746bba5p-962,
     0x1.4b64fd1fe29c4p-507, 0x1.b94c977e74b68p-176, 0.0, 0.0, 0x1.e10b12ea7c4a4p-69,
     0x1.f7ce497ac8a2p-986, 0.0, 0x1.ddeec522bd306p-379, 0x1.7b3665bd846fep-44,
     0x1.ba2f850acc058p-177, 0.0, 0.0, 0x1.7c4036f93bf45p-700, 0x1.58e20337e3701p-895,
     0x1.61badba8ced1ep-680, 0.0, 0.0, 0x1.d6a7718123b51p-575, 0.0,
     0x1.c27aed511bd57p-361, 0.0, 0.0, 0.0, 0x1.b39fc2925fec5p-761, 0.0, 0.0,
     0x1.6c391dea3e11p-46, 0.0, 0x1.f1b0e655cef49p-1022, 0x1.47055204059dap-965,
     0x1.38d98683be416p-192, 0.0, 0x1.65899953847f2p-372, 0x1.2339b1da08de9p-498,
     0x1.f5a7fb0e0ce3bp-788, 0.0, 0x1.5d984989ddea7p-427, 0.0, 0.0, 0.0, 0.0,
     0x1.a50a006ba23a6p-768, 0.0, 0.0, 0x1.f8a2665601334p-632, 0x1.680786f25471cp-852,
     0x1.435a7a077dcbcp-728, 0x1.ce92e6b15c351p-750, 0.0, 0.0, 0.0,
     0x1.0736c47dc57c9p-381, 0x1.37fb2ba864148p-448, 0.0, 0.0, 0.0,
     0x1.8f20e441ef8eep-811, 0x1.9368768f55089p-658, 0x1.3109f0bec5694p-298, 0.0, 0.0,
     0x1.2ca4b94ae7fedp-435, 0x1.fe663cf9c4883p-665, 0.0, 0x1.d9a29ccf021e8p-201,
     0x1.73db144f7c285p-976, 0x1.5e2eaabf0350dp-100, 0x1.3f9e35ff23ecep-863, 0.0, 0.0,
     0x1.c0a6a94a71cap-553, 0.0, 0.0, 0.0, 0.0, 0x1.057752f538168p-428,
     0x1.c5b6db8c46cbep-401, 0x1.42f7a114b7c7ap-484, 0.0, 0.0, 0.0, 0.0,
     0x1.c47468e2f9611p-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.819f0a26ab337p-963,
     0x1.88d6375a642f2p-354, 0.0, 0.0, 0.0, 0.0, 0x1.23ea2d60771f9p-434,
     0x1.6da3c5ffa211bp-1010, 0x1.37e0ce0a6bd25p-162, 0x1.aa807906a7ca1p-507,
     0x1.723b56c282871p-408, 0.0, 0x1.877dfb08674d4p-185, 0.0, 0x1.30c191eba3974p-467,
     0.0, 0.0, 0x1.7a5210a2d9533p-827, 0.0, 0x1.713c4fb3c53ecp-500, 0.0, 0.0,
     0x1.f20ba4d9bff21p-241, 0x1.8443e822104a1p-285, 0x1.fcadc739c74f6p-778, 0.0, 0.0,
     0.0, 0.0, 0x1.0ffd60fbed9dep-353, 0x1.77a25a929e586p-41, 0.0,
     0x1.c19d4cb0a2e43p-52, 0.0, 0x1.47812cc9f615fp-484, 0.0, 0x1.8b61f82bd147ep-219,
     0.0, 0.0, 0.0, 0.0, 0x1.ee4ef924071dap-440, 0.0, 0x1.4562acc9c9962p-248,
     0x1.0b044b3afbc43p-193, 0x1.f84685f73c4c9p-836, 0.0, 0x1.dcc9c94563a9ep-392, 0.0,
     0.0, 0.0, 0.0, 0x1.e528ad13f3f91p-840, 0.0, 0x1.b72e29b62b5b6p-182, 0.0,
     0x1.1e40e2e69ab3dp-801, 0.0, 0.0, 0.0, 0x1.3f41c6afa2766p-660, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0677fb0677c6p-935, 0x1.f58bdd5a99f78p-746, 0.0, 0.0,
     0x1.4283394a06695p-399, 0.0, 0.0, 0x1.4ca21a709bc67p-911, 0x1.c119df300fe1p-412,
     0.0, 0.0, 0x1.eeceb5e8ea916p-998, 0.0, 0x1.69450026d68bap-697, 0.0, 0.0,
     0x1.3cf92392dac3fp-961, 0x1.98896467f75b8p-633, 0.0, 0.0, 0x1.0a0160a66e733p-187,
     0.0, 0x1.94f8da02db8ecp-680, 0x1.38938e0a531cdp-648, 0x1.eeda7e9ee76c8p-451,
     0x1.16380302d42cp-846, 0x1.ae67c83d8b64cp-322, 0x1.8fe782a095349p-703,
     0x1.ca1fabff14a57p-910, 0x1.394e841427994p-114, 0.0, 0.0, 0.0,
     0x1.f40409b2e8d6p-354, 0x1.025d39bbfce4p-992, 0.0, 0.0, 0.0, 0.0,
     0x1.ce875ec5b4764p-569, 0x1.e26aeeee1d489p-646, 0.0, 0.0, 0x1.e97a404d5f601p-457,
     0x1.0517a59182f12p-46, 0x1.e709cc7401131p-716, 0x1.000a3518bab45p-67,
     0x1.b4cf4affe3376p-500, 0.0, 0x1.bed8b8168d7bap-678, 0x1.6bf81b4a770e3p-296,
     0x1.34d533c64383bp-57, 0x1.3e49e58b3904fp-415, 0x1.4f2831e8e4caap-488, 0.0, 0.0,
     0.0, 0x1.d9cf75a33e013p-713, 0x1.218c5cffc0088p-489, 0x1.a49dda86a35ep-446, 0.0,
     0.0, 0x1.6f0bdf70d025dp-930, 0.0, 0x1.6e888b903dabbp-810, 0x1.7e94c78e57b62p-44,
     0.0, 0.0, 0x1.69e42269f55c5p-856, 0x1.14feb063497d8p-747, 0.0, 0.0, 0.0,
     0x1.bae9d2e3c928ep-605, 0.0, 0x1.db6e172c286f5p-410, 0x1.f9826165d304bp-157, 0.0,
     0.0, 0x1.8c6615ad1d2dap-52, 0.0, 0.0, 0.0, 0x1.e2dcae72763f3p-886, 0.0,
     0x1.5fd905c1cf04fp-236, 0.0, 0x1.4b332c9bc3a56p-498, 0x1.ba9a5617d18b5p-347, 0.0,
     0x1.eb3cf2433968fp-155, 0x1.e0aed4493bf28p-980, 0x1.3cfa2a3c65bddp-94,
     0x1.a1f4c87add5fcp-941, 0.0, 0x1.3ac1ef72a9e3ap-750, 0.0, 0x1.11027c7617ff1p-61,
     0.0, 0x1.bb2708ec2e9dap-227, 0.0, 0x1.2616cefcbdbffp-944, 0.0, 0.0, 0.0,
     0x1.6a5de55659a1bp-584, 0.0, 0.0, 0.0, 0x1.606b19932ab7ap-762, 0.0, 0.0,
     0x1.0567e979acc3fp-336, 0x1.1028c50be8264p-84, 0.0, 0.0, 0x1.f94af192d6d44p-766,
     0x1.c1a97f8730cefp-512, 0.0, 0.0, 0x1.9f2da26ee18fp-300, 0.0, 0.0, 0.0,
     0x1.9b39500a51ad2p-1008, 0.0, 0.0, 0x1.2bcf13d6c29a5p-830,
     0x1.2fc4088341c23p-808, 0.0, 0x1.a6150b07ff4afp-607, 0.0, 0.0,
     0x1.e0362b15f1437p-283, 0x1.23b47ffbbd48ap-758, 0.0, 0x1.6d0fbebfa5d7p-322, 0.0,
     0x1.094a8c33fcdd3p-358, 0.0, 0x1.96262076be961p-728, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d2bf4e1fc1d6cp-63, 0x1.ba4b93544fa1p-542, 0.0, 0.0, 0.0, 0.0,
     0x1.f492596998b1dp-112, 0x1.e66f0f430a51p-718, 0.0, 0x1.67b6b429f9959p-38, 0.0,
     0x1.25bd57ff0924cp-739, 0x1.7a6f9c291e805p-495, 0.0, 0x1.e22cb689497cbp-771, 0.0,
     0x1.9580209dbf093p-86, 0.0, 0.0, 0x1.b4711d8a3f622p-291, 0.0,
     0x1.4e8c2b1d7a11ap-190, 0x1.307caec7afb81p-145, 0.0, 0.0, 0x1.07d2f4d6f324fp-315,
     0x1.85bb1eb12ed78p-196, 0x1.74f75f97dc932p-536, 0x1.a115ab165a53dp-892, 0.0,
     0x1.a7087b851065cp-51, 0.0, 0x1.aac0006df7e12p-691, 0.0, 0.0, 0.0,
     0x1.6270d52cbf97p-436, 0.0, 0.0, 0x1.5b2f90e5b20ebp-466, 0.0,
     0x1.536985293ac46p-179, 0.0, 0x1.e8cc899a55e8bp-77, 0.0, 0x1.c5714c6cb9b93p-290,
     0x1.72ad0887a10e6p-159, 0x1.9e6696c298baap-76, 0x1.7f1772cfbab3dp-578,
     0x1.72f835c07efd3p-1001, 0.0, 0x1.524a36eb41207p-827, 0.0, 0.0,
     0x1.05c665f946c7p-140, 0.0, 0x1.3b7840329597bp-915, 0.0, 0x1.5bfbf6a3e10edp-174,
     0x1.6f08622f8ba6p-249, 0.0, 0x1.657c722b18791p-321, 0.0, 0.0,
     0x1.205a30cd2f7aep-614, 0x1.d872099c38bd5p-774, 0.0, 0x1.1bab755255d49p-706, 0.0,
     0x1.3d8dc36cad641p-490, 0x1.4dafee4e36ba5p-66, 0x1.b0c45fcbe674bp-127, 0.0, 0.0,
     0x1.7721576990649p-361, 0.0, 0x1.3fe8c89d4280cp-1021, 0.0, 0.0,
     0x1.06845fc6f7a86p-632, 0x1.4ba6290d9c8e9p-594, 0x1.71ee9f1c4bc74p-490,
     0x1.917b9e22e12dap-81, 0x1.55020aab05932p-630, 0x1.42ab138f4881ap-476,
     0x1.71a51708d0656p-310, 0x1.4319e67d5ed14p-619, 0x1.14887be45759bp-32,
     0x1.40123dcfa759ap-946, 0.0, 0x1.85e8f0210955cp-276, 0x1.ed3597da593f8p-817, 0.0,
     0x1.d2835c8535df9p-244, 0.0, 0x1.4bc302200b0e6p-30, 0.0, 0x1.925e11293d886p-708,
     0.0, 0.0, 0x1.bea662db493d9p-902, 0x1.0320798b3f792p-599, 0.0,
     0x1.3be9bd209102ep-71, 0x1.d40e45ce862edp-778, 0.0, 0x1.a1b934fabe9e2p-765,
     0x1.4ae71f64daa62p-272, 0.0, 0x1.14d29851dd234p-901, 0x1.52c947bffa93ap-569, 0.0,
     0.0, 0x1.6ca62355ed9cdp-582, 0x1.2f6994fa6147cp-154, 0x1.ec4c38bd2ec3fp-922,
     0x1.143b2be2d05b1p-676, 0x1.1b9324f264466p-563, 0x1.b4ac5858de0cfp-511, 0.0,
     0x1.447d41bf85abep-902, 0.0, 0x1.aacfc71fbf12fp-584, 0.0, 0x1.ec321aa1cd5afp-540,
     0.0, 0x1.0e222cd1281cdp-135, 0x1.ad8b83487626cp-352, 0.0, 0x1.beb8063e86875p-133,
     0.0, 0x1.37753820b7207p-254, 0x1.a3bba4e0e870ep-987, 0x1.9018e1944fb46p-857,
     0x1.1f77f575066e8p-9, 0.0, 0x1.5ecde97c5faedp-901, 0.0, 0x1.a4aa61dab92d8p-318,
     0.0, 0x1.1cf55806f0256p-558, 0x1.d8a0e780297bfp-999, 0x1.d2d82d73c1578p-724, 0.0,
     0.0, 0x1.332176dd66a7ap-437, 0.0, 0x1.feba01d55e621p-532, 0.0,
     0x1.de0d9f57eedc2p-553, 0x1.574645d80f4a1p-234, 0.0, 0.0, 0.0,
     0x1.d8c0327650ae3p-57, 0x1.bb38aa824b96bp-313, 0.0, 0x1.ef0c051f6de3dp-46,
     0x1.90f45e4e3cfc5p-423, 0x1.743c6901a2e1cp-323, 0.0, 0.0, 0x1.6d9dca0b8b065p-108,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.92b26f8b48c94p-273, 0x1.8b7dc23ea0819p-537, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.df9002750d74ep-478, 0.0, 0.0, 0.0,
     0x1.1ca343a82f9c2p-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e667d4b8001d8p-742, 0x1.8ee013a0be78ap-585, 0x1.a50f918ceb336p-722,
     0x1.393e2b7c81bafp-704, 0x1.d28f0b0a904c7p-447, 0x1.dfa37f61e81d3p-140, 0.0, 0.0,
     0.0, 0.0, 0x1.3da632d218fefp-822, 0.0, 0x1.96b28a3896ed9p-99, 0.0,
     0x1.65f55e2722b5bp-765, 0x1.d32f396c169a6p-866, 0.0, 0x1.3e9cc6914d6ccp-311,
     0x1.65a4cdb303421p-941, 0.0, 0.0, 0.0, 0.0, 0x1.b7e2e0bcb8c38p-255,
     0x1.1fa1b2d712067p-626, 0x1.6d3d1f29bd00dp-2, 0.0, 0.0, 0.0, 0.0,
     0x1.e0c4811466575p-221, 0x1.3f4634d16fd47p-719, 0.0, 0x1.d9479dc88e0e2p-618, 0.0,
     0.0, 0x1.34db2960d13c3p-124, 0.0, 0.0, 0x1.10f6e75844f1cp-18, 0.0,
     0x1.cde67daf6c36cp-256, 0x1.f9c2e7669fdfap-24, 0.0, 0x1.45497bd1072c4p-642,
     0x1.07a3c010c9286p-888, 0x1.bfbe8ac0a25d4p-328, 0x1.1479254b813cbp-989,
     0x1.684eec1db6bf4p-785, 0.0, 0.0, 0x1.8a6ef4a44b438p-957, 0.0, 0.0, 0.0,
     0x1.98043c75bf33cp-977, 0x1.9f9a6b11bf6afp-693, 0.0, 0x1.b038f224eaef4p-703,
     0x1.6a05c2c76ceeep-174, 0x1.9772af1383cbdp-297, 0.0, 0.0, 0x1.b82996cfc14a8p-610,
     0.0, 0.0, 0.0, 0x1.c34f83da3bbb1p-628, 0.0, 0x1.ff40381e82682p-532,
     0x1.579036039a8b1p-641, 0.0, 0.0, 0x1.38a416863cca7p-276, 0.0,
     0x1.3c19c7a77a9cdp-62, 0x1.2f21006890bd2p-997, 0.0, 0.0, 0.0,
     0x1.c905faf93f26cp-713, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c836f6be6a42bp-224,
     0x1.2670fb8d9f824p-276, 0.0, 0.0, 0x1.74f1bbd1f97a7p-614, 0.0, 0.0, 0.0,
     0x1.fd3ef75aefa7bp-210, 0.0, 0.0, 0x1.882df853b7e45p-13, 0x1.86acced88e71ap-462,
     0.0, 0x1.9ebf9f0c46446p-462, 0x1.52e5a74daa0c9p-306, 0x1.5d8065c8d31c4p-477, 0.0,
     0x1.5ac856a743daep-249
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
            tmp1 = Sleef_finz_floord1_purecfma(tmp0);
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
    printf("Sleef_finz_floord1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_floord1_purecfma bench acc %la\n", global_bench_acc);
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
