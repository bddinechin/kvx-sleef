/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhd2_u10avx2128.c --function \
 *     Sleef_finz_atanhd2_u10avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0.0, 0x1.34ab5b2906735p-899, 0x1.7d591bfa3dcf5p-463, 0.0, 0.0, 0.0, 0.0,
     0x1.4868e76cb20f3p-77, 0x1.8fb9c37a2a6f1p-445, 0x1.d8e59694d01d8p-966,
     0x1.9285771418ad2p-668, 0x1.b96648edc51a6p-110, 0x1.735ea57eef8ddp-819,
     0x1.bcda58db68619p-921, 0x1.8383ced31aecfp-346, 0x1.b4db27d28c2e4p-839,
     0x1.ef48bba5e2356p-452, 0x1.2e323e76b0971p-183, 0x1.9f712fa104a57p-843,
     0x1.095d741baacebp-922, 0x1.a8fc8a8ae3076p-292, 0x1.a734a05dfea2cp-604,
     0x1.9e20829aa7772p-691, 0x1.270f52b9d3c65p-622, 0x1.cd52de22385b2p-105, 0.0,
     0x1.d665da2e84e23p-108, 0x1.b1bc55d828232p-999, 0x1.b38f62d175873p-103,
     0x1.99ae4e0fe70bbp-468, 0.0, 0.0, 0.0, 0x1.88b7293bcf6c2p-988, 0.0, 0.0, 0.0,
     0x1.79bdf886a4aefp-670, 0.0, 0x1.cb7aec1b1f805p-343, 0.0, 0x1.30cf1f01af35p-891,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aab66ef9ce052p-644, 0.0,
     0x1.4a353f0cbacccp-887, 0x1.0ce091cd92a5fp-1009, 0x1.05b8bf9bccb95p-600, 0.0,
     0x1.580383fcde035p-470, 0.0, 0x1.a7853e104d064p-14, 0x1.515655df64122p-316, 0.0,
     0.0, 0x1.24c438b9c21aap-204, 0.0, 0x1.2b2d0acc2a401p-139, 0x1.b002b6448ac33p-273,
     0x1.d6c6996171106p-257, 0.0, 0.0, 0x1.7350a6d9f8605p-811, 0x1.4932a65be70a8p-373,
     0x1.7cd2a082eaec2p-892, 0x1.d392bfd44b6f7p-626, 0.0, 0x1.aacc31c3354e6p-646, 0.0,
     0x1.c87588c306b0ep-693, 0.0, 0.0, 0x1.1e0f8fe43c376p-405, 0.0, 0.0,
     0x1.a0fcc6144a45bp-805, 0x1.43a054d77bdbcp-845, 0.0, 0x1.57d927d708072p-995,
     0x1.d5ca8f41cf8cp-508, 0.0, 0x1.4d4679aa39d05p-636, 0x1.8102ce144ff3p-250,
     0x1.dc72c98f02e2ep-166, 0.0, 0.0, 0x1.d19e59700b698p-194, 0x1.9951444370a69p-742,
     0x1.f815204ea450cp-298, 0.0, 0.0, 0x1.0215d5d8ca865p-38, 0.0, 0.0, 0.0, 0.0,
     0x1.7adb7d9b3e437p-510, 0x1.75bb2b55bb6d8p-838, 0.0, 0x1.bbcd00d060277p-165, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f66d970090651p-475, 0x1.0f25805cbbdcep-257, 0.0,
     0x1.1f2861859e97bp-121, 0.0, 0x1.e52eb8891cf1dp-356, 0.0, 0.0, 0.0, 0x1p0,
     0x1.2f3a86a1d40a6p-241, 0x1.5153f52d47626p-226, 0x1.3a03a48b3bb39p-241, 0.0,
     0x1.1bf0be731084fp-404, 0x1.fe6e022288e62p-514, 0x1.6031792becce6p-186,
     0x1.70f03e8152554p-928, 0x1.6385563a44704p-83, 0x1.fd6192fa017c4p-413, 0.0,
     0x1.0f9a82ecc6734p-6, 0.0, 0.0, 0.0, 0.0, 0x1.2be385c129e6dp-898,
     0x1.3a6aa7fb5803bp-1000, 0.0, 0x1.9051dc1b48a05p-84, 0.0, 0x1.edb89e5b0fc39p-296,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7f212835ef709p-520, 0x1.0c72142bcda6ep-113, 0.0,
     0x1.9c33071fcec62p-668, 0x1.a96923b1ef80dp-83, 0x1.a55ff0e48a38cp-807, 0.0,
     0x1.514c8b2b25dcfp-79, 0.0, 0x1.d5d2faab23b52p-403, 0.0, 0.0,
     0x1.6dc7c59f7e35fp-105, 0x1.0956a09f1e376p-832, 0.0, 0.0, 0x1.5f48a3b07916cp-648,
     0.0, 0x1.ffa5591f2aa87p-705, 0.0, 0.0, 0.0, 0x1.80b312d0d613ap-503, 0.0, 0.0,
     0x1.1ef734a4ce2f7p-698, 0x1.fb82f365c9f61p-487, 0.0, 0x1.f260be92d9094p-411, 0.0,
     0x1.421f7c9f518a6p-837, 0x1.49617734321ebp-296, 0x1.3a1cf2299257bp-697, 0.0, 0.0,
     0x1.6c0c4860494b2p-793, 0.0, 0x1.3bcadcc83bd8ap-31, 0.0, 0x1.28db48cbf20eep-610,
     0x1.d1bd2634a09a6p-1011, 0x1.7c4f014f9be7ap-112, 0x1.dffd802d84ed4p-731,
     0x1.c3e47825cea36p-136, 0x1.df7c00c9bba63p-776, 0x1.83073c5b5d8d4p-550,
     0x1.6f48d312f4df5p-925, 0x1.3bc4e1dc481dp-528, 0.0, 0x1.3a7ca989a29a5p-526, 0.0,
     0.0, 0x1.c7f86799d02dp-114, 0.0, 0x1.2825f3bb63a5ep-612, 0.0, 0.0,
     0x1.9486c1dc059b8p-596, 0x1.be4289b14207ep-404, 0.0, 0x1.53f0a0d3d9458p-117,
     0x1.39e7e52145e9ap-167, 0x1.734ba087c590bp-108, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9f76e3d834fdbp-380, 0x1.a1ebd79e2a8f8p-76, 0.0, 0.0, 0x1.4598747cc027bp-440,
     0x1.42117af31040bp-917, 0.0, 0.0, 0x1.8874b16245494p-779, 0.0,
     0x1.b58083663672ap-167, 0.0, 0x1.6602f8d63e44dp-311, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.f7b7a034f548cp-173, 0.0, 0x1.497ccada5b3b7p-158, 0.0,
     0x1.b35928425dca3p-232, 0x1.2a4cec231d6f3p-29, 0.0, 0.0, 0x1.ab179088636b2p-921,
     0.0, 0.0, 0x1.6c0173579be3cp-489, 0x1.272831406536dp-283, 0x1.550886dd7aa65p-130,
     0x1.7b94494dcd193p-685, 0.0, 0x1.d9fe77f55783ep-340, 0.0, 0.0,
     0x1.2b60590c7cda8p-959, 0x1.fd001f3aeaf31p-181, 0x1.8d2c2d27d9f44p-190, 0.0,
     0x1.a957f9047ed93p-756, 0x1.49506cd29f1b7p-407, 0.0, 0x1.c57560415673ap-466,
     0x1.57a58aea3f3f7p-526, 0.0, 0x1.eb16bb125f233p-378, 0.0, 0x1.2b4a087aeedc6p-847,
     0.0, 0.0, 0.0, 0x1.3d81a44414dcp-424, 0x1.74cd3f6daf5e8p-456,
     0x1.1b514a8e9ef7cp-469, 0x1.2e64ba9547ffbp-412, 0x1.1d1ffbf26079fp-336,
     0x1.dd6b3192f5c0fp-923, 0.0, 0x1.84afa0c0bf60ep-789, 0x1.9d9d9feec056p-472,
     0x1.078e190200c1dp-491, 0x1.9fa40b9934e48p-692, 0.0, 0x1.2fb640d01a9aap-896,
     0x1.82dadae8f5534p-833, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d17e93b2133a2p-523,
     0.0, 0.0, 0.0, 0x1.0ea957bfe1863p-193, 0x1.47bdd6cc33edep-33,
     0x1.c4d2c6ee664cbp-497, 0.0, 0x1.8667a2090d22bp-794, 0x1.ce5464bd8df92p-658, 0.0,
     0x1.f15570087664dp-644, 0x1.936ed9f2bd508p-796, 0.0, 0x1.066395fc9f3f7p-163, 0.0,
     0.0, 0x1.d3f9222cfd687p-590, 0.0, 0x1.8e55fe70ccf32p-965, 0.0, 0.0, 0.0,
     0x1.e55666780a838p-363, 0.0, 0x1.6344224c97e9ap-822, 0.0, 0x1.c0d68048bc53ep-731,
     0.0, 0x1.39c11e32713d7p-784, 0x1.aea253d77092fp-812, 0x1.52f2de1d01164p-492,
     0x1.5dfabeab3c586p-475, 0x1.cb79b96646a87p-34, 0.0, 0x1.9b36cbc1dab85p-567, 0.0,
     0x1.b30c185c00165p-690, 0x1.a037aa9dce831p-748, 0x1.9a192e01000bbp-739,
     0x1.cd66c77c853edp-316, 0x1.17646434c20a5p-932, 0.0, 0x1.7f7c65a8f2e33p-884,
     0x1.1b1ffeb693c54p-280, 0x1.909e56296abacp-439, 0.0, 0.0, 0x1.42b0227c10289p-54,
     0x1.c7c6d4bc1fdcfp-367, 0.0, 0.0, 0x1.9e07922e1a9aap-72, 0.0,
     0x1.f96dfb42b6928p-563, 0x1.0e3cab221dc34p-1004, 0x1.2579c29a3162ap-290,
     0x1.bea50b4791cd5p-690, 0.0, 0x1.ccb9e5eebecd2p-275, 0x1.62ef3c57dcff5p-834, 0.0,
     0x1.10c68838334ebp-396, 0.0, 0x1.6b3dcb48a53ffp-976, 0.0, 0x1.46776c678ef42p-551,
     0.0, 0.0, 0.0, 0.0, 0x1.2019936b006dap-644, 0.0, 0.0, 0.0,
     0x1.73b88627bff53p-849, 0x1.7f4ab5906bf86p-493, 0x1.aaac345cf501dp-797, 0.0, 0.0,
     0x1.0a7e8fdcfb8c7p-147, 0x1.6de69c5915fc5p-933, 0.0, 0.0, 0x1.7b713822ee4ecp-750,
     0x1.0f149cfdec2abp-181, 0x1.2b36fcd5eba72p-234, 0.0, 0.0, 0x1.e40bc6d2eb551p-95,
     0x1.992dc732d3d9dp-45, 0.0, 0.0, 0x1.0d9c20515c853p-709, 0.0,
     0x1.b2f69bb0eadc1p-718, 0x1.11d3da89b890dp-938, 0x1.592f22626b6d3p-462,
     0x1.f2ec7b8f1520ap-1019, 0.0, 0.0, 0.0, 0x1.d0220162d53b8p-12, 0.0,
     0x1.8474ebf6aba76p-982, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d425104879f0cp-251, 0.0,
     0x1.ffdeb027a1085p-299, 0x1.3c90c17e4407cp-458, 0.0, 0.0, 0.0,
     0x1.6230a76cb4e72p-493, 0x1.6b158807cb946p-993, 0.0, 0x1.bb803933df48cp-931,
     0x1.b10cfd7a97ddfp-227, 0x1.9a977675fddedp-45, 0.0, 0x1.d16e98ca313e6p-642, 0.0,
     0.0, 0x1.ccff1f888d5cdp-1020, 0.0, 0x1.b084f952e0979p-876,
     0x1.a41d9f4493805p-487, 0.0, 0x1.0bd2290aac0a6p-582, 0.0, 0x1.5e9044d925433p-310,
     0.0, 0x1.3214b323643cfp-367, 0x1.e489297200d24p-294, 0x1.87584ed6cb5f6p-569,
     0x1.d1dcc8a6a8c93p-1006, 0x1.8e37d526bafa6p-562, 0x1.eec3b70cb813ep-84, 0.0,
     0x1.afef1deaf1208p-652, 0.0, 0x1.98ae850235c36p-670, 0.0, 0x1.225da0b68f59bp-989,
     0.0, 0x1.46c44579e763ap-542, 0x1.88eb40ef67685p-896, 0x1.c0a116946dc48p-750,
     0x1.dbfb49112f07p-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.022092cc4ee0cp-109,
     0x1.d459064df2a38p-85, 0.0, 0.0, 0.0, 0.0, 0x1.1357818f5f7cap-77, 0.0,
     0x1.bd556b30f06c9p-802, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2a57f70a047p-630,
     0x1.28152ab3a2afp-974, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1d7936a3902e8p-58, 0.0,
     0x1.0757aab637b26p-836, 0.0, 0x1.00de84ce262b9p-565, 0x1.bdf1eaf28903ep-645, 0.0,
     0x1.dd23b48555c8p-143, 0x1.fc5da98600a36p-538, 0.0, 0x1.9c88731704657p-790, 0.0,
     0x1.3700d9bae4ed4p-439, 0x1.ce040bea390acp-166, 0.0, 0x1.639eb39c3d1acp-769,
     0x1.ca8e02fcf20a3p-634, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9edae6150f22bp-893, 0.0,
     0x1.85962b96ce944p-1015, 0.0, 0x1.7e91099483b96p-76, 0.0, 0.0, 0.0, 0.0,
     0x1.fe46116407f5ap-671, 0.0, 0x1.5b9febe231a6fp-962, 0.0, 0x1.64f930f1b8deap-381,
     0x1.891941bae84cbp-528, 0x1.c3db9afef376dp-587, 0.0, 0.0, 0x1.f0412a27874fcp-232,
     0x1.7546503a130e9p-867, 0.0, 0x1.619749cfd9a3cp-437, 0.0, 0x1.fef5691e8667fp-315,
     0.0, 0.0, 0.0, 0x1.3f27f254ef3dp-683, 0.0, 0.0, 0x1.ce8bfce41db42p-284, 0.0,
     0x1.de6c7b495a2a4p-134, 0x1.1eea0ad344c12p-27, 0.0, 0x1.e7a40abca8c57p-390,
     0x1.271adfd9ae253p-481, 0.0, 0.0, 0x1.969ffe4fe29fcp-526, 0x1.cb618b6e889a1p-344,
     0x1.9c1dd4137282ap-932, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7c3e9a4d5f7dp-338,
     0x1.b773c35ba9607p-919, 0.0, 0x1.f344f4fd0fc8dp-144, 0.0, 0x1.b15e1dd2fb158p-495,
     0.0, 0x1.361e5b82ae17fp-1020, 0x1.c97272321d4c9p-364, 0.0, 0x1.2f322ac4b74c7p-66,
     0x1.ec0fa17e02c2fp-544, 0.0, 0x1.8343b29aff303p-946, 0x1.2b9f7b2922853p-698,
     0x1.5a40f0c244feep-974, 0.0, 0x1.4274bba0a535ap-1015, 0x1.0dbab736d685p-197,
     0x1.1dcb05e41d866p-721, 0.0, 0.0, 0.0, 0x1.47943f6a3c8eep-579,
     0x1.4bd1cc3154376p-400, 0.0, 0x1.11f020bc53fc2p-323, 0x1.ab23978129dd2p-61, 0.0,
     0.0, 0.0, 0x1.b80dcfdfaf411p-297, 0x1.c7bf93f0bc0c8p-214, 0x1.ab47ac99231c6p-451,
     0x1.70ff050af76f9p-399, 0.0, 0x1.1e03538098feep-532, 0.0, 0.0, 0.0,
     0x1.cce64596e06b9p-1019, 0.0, 0x1.e911ab0094d09p-766, 0x1.b5461cf51409dp-361,
     0x1.a1ebb58d0401bp-771, 0x1.54ff4b5b88661p-537, 0x1.5cfec780c5fecp-379, 0.0,
     0x1.d6a17b1959073p-1019, 0.0, 0x1.2df2a5f67d674p-264, 0x1.8527550baaebfp-891,
     0.0, 0.0, 0x1.8495e27086c58p-138, 0.0, 0x1.702a01a4a197bp-269, 0.0, 0.0,
     0x1.c436d65bea526p-878, 0x1.b4e24309d1dep-692, 0x1.5d26c6d5d40fp-534,
     0x1.bf0a8ba6dea4ep-37, 0x1.aff5291a0d372p-844, 0x1.b1d807d332e94p-400, 0.0,
     0x1.7d4e8ece1621bp-868, 0x1.69d4d397a0e71p-372, 0x1.c52ecb04eb545p-716, 0.0,
     0x1.07e38599e5f3ap-972, 0x1.90222a1cf19b5p-120, 0.0, 0x1.15641e3344aap-410,
     0x1.03e51de41b616p-458, 0x1.d4a027d2097cbp-763, 0x1.ca496ceff4ea6p-840, 0.0, 0.0,
     0x1.abc7163ec095cp-1000, 0x1.2a7d2d9f62459p-263, 0x1.e72241693259ep-368, 0.0,
     0.0, 0.0, 0.0, 0x1.fc34acdae22b4p-402, 0x1.ed77595857722p-565, 0.0, 0.0, 0.0,
     0x1.b9e5c74b32955p-514, 0.0, 0x1.b27433518aa6bp-265, 0.0, 0x1.0d9604b35dbb4p-350,
     0.0, 0.0, 0.0, 0x1.f7405ed64e574p-10, 0.0, 0x1.4c0e76715dde9p-566,
     0x1.cd02ce2647cdbp-397, 0x1.32fcdb0b76dccp-820, 0x1.c82b7ea66d975p-613,
     0x1.6c4f0d60f335cp-446, 0x1.a030e0bec718p-413, 0x1.477286c0b221ap-634,
     0x1.3c0a101abaecp-637, 0x1.9d3a930235a22p-168, 0x1.3f301898edeaep-886, 0.0,
     0x1.9cc133206ea6cp-781, 0x1.7663013327bbap-581, 0.0, 0.0, 0.0,
     0x1.a3488cd0aac6cp-532, 0x1.434dddbe531f8p-167, 0x1.1782b392f7a32p-15, 0.0, 0.0,
     0x1.fdbf40d2b4807p-588, 0x1.c1838260b40eep-192, 0.0, 0x1.04f43c3bad63p-830,
     0x1.88d9029dea145p-852, 0.0, 0x1.0b9c08e2bbf3ap-907, 0.0, 0.0,
     0x1.5cc9b567caf5dp-766, 0x1.2846afd7d41bep-102, 0.0, 0.0, 0x1.5c0f259387871p-589,
     0.0, 0x1.f7eb0799b466bp-204, 0x1.6002127c026cbp-686, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fc8c99d668fap-659, 0.0, 0.0, 0.0, 0x1.6c53c1f3de432p-125, 0.0,
     0x1.3607ec9b7e5b3p-173, 0x1.073477ab9e169p-198, 0x1.b9305a431f2ffp-192, 0.0, 0.0,
     0x1.30ecacf4d1fafp-789, 0x1.3790999f580afp-184, 0.0, 0.0, 0.0,
     0x1.033b7a0c491cap-601, 0.0, 0.0, 0.0, 0x1.2476476c9a8a5p-616,
     0x1.0c87d98d9f09bp-247, 0x1.fb255c5e2f62fp-516, 0.0, 0x1.4d8472c374488p-335,
     0x1.49830df9246a6p-217, 0x1.c42f11433d0cfp-874, 0.0, 0x1.b79e12f2a81b3p-149,
     0x1.230dbcf79e8ddp-898, 0x1.cc073027e240ap-943, 0x1.adff6740d5bd8p-11, 0.0,
     0x1.29bc8d77ae2a9p-400, 0.0, 0.0, 0x1.8474a959ad053p-721, 0x1.62a8ff830b4d5p-543,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0f82ac413da6p-151, 0.0, 0x1.864aa3afd19f7p-575,
     0.0, 0x1.49f3804bc4f43p-276, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98d8eac7b550ap-917,
     0x1.1a3a447ced1dcp-8, 0.0, 0x1.0ca5780b3bf3dp-976, 0x1.f821a7a29693bp-953,
     0x1.0a68075ff8dap-565, 0x1.f935953e95eabp-435, 0.0, 0x1.fe8a26cba969dp-765, 0.0,
     0x1.89b657b8c4a6ep-595, 0x1.e66aa1c301afp-881, 0x1.7b8a66f2a3f17p-411, 0.0, 0.0,
     0.0, 0x1.df87fbeef0e61p-329, 0x1.32b1e75362c3ap-100, 0.0, 0x1.2c6de2fa8ac84p-54,
     0.0, 0x1.e36b1f04b981ep-872, 0x1.25a14c9a00d1ap-757, 0x1.855a7cb4438e3p-299,
     0x1.582dbe86461f3p-530, 0x1.ea26939d647cp-251, 0.0, 0.0, 0x1.0a0eb91b849ebp-619,
     0x1.1bc9673f59382p-878, 0.0, 0x1.bd53fa9145b51p-778, 0x1.03671e22ef37cp-1000,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9f7aa36372b5p-300, 0x1.553dedd2ff042p-449,
     0x1.5c5d93abc02dep-76, 0.0, 0.0, 0x1.4de5f2f35c827p-132, 0x1.27352de98b065p-605,
     0.0, 0.0, 0x1.a78ce162d5c7ap-562, 0x1.c9c21f5f9c182p-103, 0x1.bfa3f99dfeebp-586,
     0x1.ff3077ebbc86ep-427, 0x1.3bf96103158fap-791, 0.0, 0x1.aa18c05d584cbp-438, 0.0,
     0x1.a9c53b6c8769p-410, 0x1.a414962c5de6ap-23, 0x1.0a72e08b6c5b9p-686, 0.0,
     0x1.39f3a40ed5d7cp-146, 0x1.bf85a973fab46p-528, 0.0, 0x1.85adc4bfb2d7ep-515,
     0x1.76f904f657b4cp-602, 0x1.7940d2e6c6093p-940, 0.0, 0.0, 0.0,
     0x1.15e8c6af2ebp-254, 0x1.abf256415cd9cp-474, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.603c050bacf4cp-318, 0x1.10db257341db6p-235, 0x1.c994938e8a6e5p-855, 0.0, 0.0,
     0x1.075f4b94e5ee3p-702, 0x1.ef7e2e704eea8p-444, 0.0, 0.0, 0.0,
     0x1.289a9a838fa88p-672, 0x1.90238ff61518p-500, 0.0, 0.0, 0.0,
     0x1.cae3d6db55f27p-990, 0x1.599b27fe293fcp-581, 0x1.a6b6d32cd4924p-515,
     0x1.c69f109b8b32p-633, 0.0, 0.0, 0x1.a63b5211c9615p-78, 0x1.b20b6c9682103p-620,
     0x1.c017abe2e851cp-555, 0x1.a072091e6648ap-40, 0x1.d349a7adb89f3p-569,
     0x1.5562c8e1f71f7p-979, 0.0, 0x1.182c1f16ffea9p-376, 0x1.094c2cbf60d11p-272,
     0x1.27227c084aacdp-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c38747c73ce5bp-125,
     0.0, 0x1.1cfef4078522bp-507, 0.0, 0x1.3cc2dc6fa9c67p-375, 0x1.26f452de7cc0cp-978,
     0.0, 0x1.281ba75c5dc82p-719, 0x1.b050bbf802f18p-279, 0.0, 0x1.0a3536145cddep-382,
     0x1.87c5edb9f4cc1p-132, 0.0, 0x1.7b5fbbd6970f3p-385, 0.0, 0.0, 0.0,
     0x1.ccb33ce43483ap-292, 0x1.c4d1221440d14p-897, 0x1.98afcda4e7ae3p-600, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9d4fd1b6d898bp-471, 0.0, 0.0, 0x1.879fc7ec2481ep-423,
     0.0, 0.0, 0x1.57885fef52d06p-382, 0x1.7af90140ced33p-61, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c47c81634250ap-860, 0.0, 0x1.696997d5d7adcp-712, 0.0, 0.0,
     0x1.0d0e8d07e0e21p-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b6550244d003p-534, 0.0,
     0.0, 0x1.5020f2ea777c3p-804, 0.0, 0x1.cc01f7fbff94bp-401, 0x1.f311afc451725p-314,
     0.0, 0x1.d1a202ea30f91p-175, 0.0, 0.0, 0x1.fee74a1c14a8cp-474, 0.0, 0.0,
     0x1.82b01c4b93dbdp-850, 0x1.20b3a3024766ap-830, 0x1.81cd1baed6d4cp-774, 0.0,
     0x1.d8b498bc6defep-434, 0x1.8d7d84fa5c105p-412, 0x1.1470b1c424b01p-346, 0.0,
     0x1.48f2576d4176ep-820, 0x1.f348bca2e49dfp-534, 0.0, 0.0, 0.0,
     0x1.be75fb5bdb472p-995, 0.0, 0.0, 0.0, 0x1.2fb58e6e2d801p-976,
     0x1.f29eb2058847ap-91, 0x1.d247f454fd1bcp-688, 0.0, 0.0, 0.0,
     0x1.504b1c8ba4f04p-628, 0x1.0a5ad39b1873fp-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.abef69669fea2p-43, 0.0, 0x1.343319072e2c5p-898, 0.0,
     0x1.b36ccfc99cf9bp-999, 0x1.6d4a32ace5448p-601, 0.0, 0x1.4bccf0fde2e7dp-305, 0.0,
     0.0, 0.0, 0x1.1223decc86d71p-772, 0.0, 0x1.bd9559969220bp-854,
     0x1.79d36b33507f6p-940, 0x1.7ea6fd6d04e65p-367, 0x1.1c20d59be4702p-835, 0.0,
     0x1.5d632cf977a59p-902, 0x1.d3129019b6e22p-626, 0.0, 0x1.0ce1392db328dp-744, 0.0,
     0x1.186c75485a08dp-161, 0x1.b28d43f16cbb7p-1020, 0.0, 0.0, 0.0,
     0x1.bb26a9a6d5de3p-862, 0x1.3bd670c280e67p-530, 0x1.ec8c5afd60d0fp-107,
     0x1.7deb0dee6ba25p-521, 0x1.f0f2de0451fd3p-800, 0x1.335fd4e4738cdp-931, 0.0,
     0x1.0e3d43db507fep-32, 0x1.b59b8067cbf5fp-920, 0x1.34073d99dd39p-985,
     0x1.7393aa29ad581p-55, 0.0, 0x1.0884116acf858p-20, 0.0, 0.0, 0.0,
     0x1.f9efc779366bp-205, 0x1.19c5fd1a571d2p-994, 0x1.6010542449f94p-817,
     0x1.2c2722c747886p-23, 0x1.1ebd3c24d033ap-454, 0.0, 0x1.c88715d4780f7p-667, 0.0,
     0.0, 0.0, 0x1.a8079d9022542p-357, 0.0, 0x1.912ef6b11ed0fp-168
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
            tmp1 = Sleef_finz_atanhd2_u10avx2128(tmp0);
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
    printf("Sleef_finz_atanhd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_atanhd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
