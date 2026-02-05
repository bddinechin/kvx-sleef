/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd1_u10purecfma.c --function Sleef_cosd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target kv3
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
     0x1.67d31333d407ep-437, 0x1.1355fdefe1732p-249, 0x1.2e55f718841a5p-633,
     0x1.f4f7b849e3a27p-585, 0x1.1010232b31b95p-629, 0.0, 0x1.6dcb7c308023bp-956, 0.0,
     0x1.01a3c843f78eep-689, 0.0, 0x1.831319c697e1p-291, 0x1.98cc7b9fbf91bp-206, 0.0,
     0x1.5a52184028ec3p-919, 0.0, 0.0, 0.0, 0x1.ecd605d387218p-396, 0.0,
     0x1.68566fd2567e5p-496, 0.0, 0.0, 0x1.451e2e8b4d89p-779, 0x1.b8150be2fc33ep-61,
     0.0, 0x1.c0322b16cafa4p-1014, 0.0, 0.0, 0x1.2326e4649521ep-523,
     0x1.fcb88a746547ep-208, 0.0, 0x1.63304b34ec6c9p-678, 0.0, 0.0,
     0x1.f2772887345a1p-780, 0.0, 0x1.ec149da774b4cp-690, 0.0, 0x1.cb68d10441719p-479,
     0x1.3bb4f0d80b38p-681, 0.0, 0.0, 0.0, 0x1.96472717c4139p-867,
     0x1.df3596881b498p-627, 0x1.df08e6d08d473p-260, 0x1.1f78059e608b8p-961,
     0x1.d8d8b227e59c1p-624, 0x1.910d0cd328704p-758, 0.0, 0.0, 0.0,
     0x1.c5db5037ff1a5p-143, 0x1.6a67138ca718fp-495, 0x1.715544e2d3f9ap-771, 0.0,
     0x1.889e1a6f4ce56p-189, 0x1.035ad38b09f9fp-970, 0x1.c9859c8467d68p-248, 0.0, 0.0,
     0x1.069bc8078b5d2p-748, 0x1.2c0aba14cd366p-353, 0x1.613d5c7486125p-907,
     0x1.173401e180a9cp-177, 0x1.071f942ebb4edp-389, 0.0, 0.0, 0x1.65444a2031339p-894,
     0.0, 0x1.7a146c55c95f6p-827, 0.0, 0.0, 0x1.cac748147a1acp-461,
     0x1.e2bfc13e13c1p-431, 0x1.79c22218dca44p-841, 0.0, 0x1.3e337d94a3f2ap-958,
     0x1.68d00a2e037b3p-233, 0.0, 0x1.33af616978b2p-928, 0.0, 0x1.6294321087fa7p-852,
     0.0, 0.0, 0.0, 0.0, 0x1.f9455f19f0167p-84, 0x1.504f233a9e7d6p-844, 0.0, 0.0,
     0x1.f2f233dfa41aep-664, 0.0, 0.0, 0x1.64bef80d3cd45p-294, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0e81139936af2p-742, 0.0, 0x1.0b149f67cf301p-924, 0.0, 0.0,
     0.0, 0x1.6699bfd7b9c6cp-716, 0.0, 0.0, 0x1.1dbab01aa1accp-313, 0.0, 0.0, 0.0,
     0.0, 0x1.feced30c9f56fp-385, 0.0, 0x1.70b4492f198e2p-12, 0x1.94357044d4145p-617,
     0.0, 0x1.995588786267fp-435, 0x1.e4208e05e9f92p-250, 0.0, 0x1.30a6f708c44cep-108,
     0.0, 0x1.b0b08ecc5cb9ap-135, 0.0, 0.0, 0x1.93d5d98b8868ep-843,
     0x1.0084a67b00b69p-133, 0.0, 0.0, 0.0, 0x1.39bc13da54c74p-618, 0.0,
     0x1.4bc5fcf6ebf69p-335, 0x1.61d2f23613712p-145, 0x1.edc1342d4e1d2p-810,
     0x1.df416d6e60e54p-690, 0x1.eac0d02b9827bp-343, 0.0, 0.0, 0x1.0e39745c3eee1p-970,
     0x1.e406fabf491f1p-738, 0.0, 0x1.be798ee5c39f2p-406, 0x1.8a0345fbbd2edp-541, 0.0,
     0x1.1abcbc0ade134p-532, 0.0, 0.0, 0x1.3a18322aceef2p-249, 0.0, 0.0, 0.0,
     0x1.f31f43d180f79p-1020, 0.0, 0.0, 0.0, 0x1.0b53db4bc7ce8p-794, 0.0, 0.0,
     0x1.187d310937c04p-752, 0.0, 0.0, 0.0, 0x1.97ca163088d6bp-767, 0.0,
     0x1.28bc222d9f20cp-941, 0.0, 0x1.90d91fdf8ab89p-584, 0.0, 0x1.9a4b9aa5f238ep-946,
     0x1.9aa7997232de8p-620, 0.0, 0.0, 0x1.3524b8003b907p-345, 0.0, 0.0,
     0x1.0025bf7627718p-641, 0.0, 0x1.a6734b77f05d1p-34, 0x1.9927b401b1511p-855, 0.0,
     0x1.4ef9fb411d648p-835, 0.0, 0x1.365040700f731p-700, 0x1.7732a0ddbfe33p-317,
     0x1.4bd82e7ae8eb2p-817, 0.0, 0x1.9a0335692df0ep-959, 0x1.9fcecacdfb7b3p-453,
     0x1.02033b9059f4ap-430, 0x1.1b72bf0df0ff7p-205, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fc6f787d7579ap-61, 0.0, 0x1.10ae3f809a6c8p-1010, 0.0, 0x1.d1f430174d957p-343,
     0.0, 0x1.b819d0d081564p-592, 0x1.bcb0dc84f832ap-542, 0x1.d20442e0a9e54p-647,
     0x1.dce1f0fa8cd8bp-547, 0.0, 0x1.adc0465dd3936p-436, 0.0, 0.0, 0.0, 0.0,
     0x1.4211dd3b13fdap-799, 0x1.9f974bb426927p-955, 0.0, 0x1.6d476f8be0c54p-119,
     0x1.f789828b96753p-606, 0.0, 0.0, 0x1.b8f176ec01ffcp-824, 0x1.0f568b03d5b4dp-593,
     0x1.2e3c547a3f3d4p-916, 0.0, 0x1.696d9e2f75087p-957, 0.0, 0x1.23d9f2779a11cp-378,
     0.0, 0.0, 0x1.19033833b788dp-756, 0.0, 0.0, 0x1.25ac1ad6f7dbep-196, 0.0, 0.0,
     0.0, 0.0, 0x1.c91b13c280272p-428, 0.0, 0.0, 0.0, 0.0, 0x1.d21e72cb9b267p-649,
     0x1.3be1516271d7fp-629, 0x1.273d44cb461e3p-595, 0.0, 0.0, 0.0,
     0x1.dc831d73707d2p-929, 0x1.95f3cee7a1459p-571, 0.0, 0x1.2b5834094348ap-408, 0.0,
     0x1.9d0a4c4d9ae79p-158, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.755ce396c7de3p-11, 0.0,
     0x1.36e213fe517fp-106, 0x1.d745724814166p-357, 0.0, 0x1.8bcf9269c91fbp-849,
     0x1.f0c9b507f6479p-220, 0.0, 0.0, 0.0, 0.0, 0x1.2ae06a5f9b246p-284,
     0x1.86ead71127035p-386, 0x1.1cf00a374272dp-216, 0x1.a040b6a0c3fadp-748, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8e641e4475cbep-61, 0x1.ce143d798de91p-901, 0.0, 0.0,
     0x1.c88703fc8a5b7p-823, 0x1.addff5dedb7b7p-517, 0x1.4f8c1596b9814p-698, 0.0, 0.0,
     0.0, 0x1.72063736dc2ep-48, 0.0, 0x1.eba1c7d1933ffp-839, 0.0, 0.0,
     0x1.5cca79d351fb6p-863, 0x1.58888edee55bap-648, 0.0, 0.0, 0.0,
     0x1.ad94206f79be2p-37, 0.0, 0.0, 0.0, 0.0, 0x1.6a093865796adp-442, 0.0,
     0x1.94b34f66d1f5ap-464, 0.0, 0.0, 0x1.dc3934a42c365p-533, 0x1.f9c225dd72d15p-936,
     0.0, 0x1.96a063ce82ac8p-418, 0x1.bddb2679c75afp-199, 0x1.0a94f75dfb385p-800, 0.0,
     0.0, 0.0, 0x1.8a5a82244e868p-62, 0.0, 0x1.8b1a8150a2ab8p-1011,
     0x1.26f9a51104478p-685, 0x1.46852fba90178p-536, 0.0, 0.0, 0x1.3d0bb1dde9823p-877,
     0x1.88ee2520cb564p-299, 0x1.889f12b2a40b2p-266, 0.0, 0x1.804d7f18843aap-265, 0.0,
     0x1.7dc609265ef72p-894, 0x1.259b06ba060e8p-295, 0x1.1e10069297153p-899,
     0x1.3fd939bc92ac9p-600, 0x1.cd079d8c20c15p-50, 0.0, 0x1.7e573f2d9f32p-52, 0.0,
     0x1.f19fdfca405d8p-760, 0.0, 0x1.60e62628cc2d6p-863, 0.0, 0x1.83103a094ee8dp-308,
     0.0, 0x1.6c7fa8d934c28p-691, 0x1.63efba8e2888bp-696, 0x1.7db82306b3bd7p-721,
     0x1.7ae6bc066144dp-894, 0x1.284aecd393777p-695, 0x1.e8e69cd17a0d1p-139,
     0x1.487bf31dda442p-195, 0.0, 0.0, 0x1.3b8fd58975627p-615, 0x1.b5bfa455c4ed7p-528,
     0.0, 0.0, 0x1.caa587cb2dccep-100, 0x1.447d7f30a6c6fp-26, 0.0, 0.0, 0.0, 0.0,
     0x1.1616d23822a07p-804, 0.0, 0x1.529a8fe0c9195p-844, 0.0, 0x1.96da1a03ed72cp-243,
     0.0, 0x1.393e01d0b158ap-683, 0x1.d4058f1c37e5fp-568, 0x1.c99acc8cd375fp-543, 0.0,
     0.0, 0.0, 0x1.e5b90900797c9p-955, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cb5d7283c842ap-403, 0x1.a212baed0b197p-907, 0x1.f8c55ef74d7ffp-625,
     0x1.38ba3894a772ap-196, 0.0, 0.0, 0x1.f509abc60fdffp-504, 0.0, 0.0,
     0x1.c0d8073c23caap-596, 0.0, 0x1.bc92c87134b06p-107, 0x1.97a648a077789p-690,
     0x1.ce47707af7832p-281, 0x1.74c48e5a21075p-553, 0x1.563646fd6eff4p-506,
     0x1.7e7264e7999b2p-405, 0x1.9785b69b73704p-428, 0x1.ad6782e0dac74p-994,
     0x1.21e50bad17a89p-568, 0x1.b90079d0dfa06p-636, 0.0, 0x1.f09fabe6123c8p-828,
     0x1.48366459a2292p-804, 0x1.443a245499e3fp-1009, 0.0, 0.0,
     0x1.7d0a08b9ba28cp-861, 0.0, 0.0, 0.0, 0x1.0fc298da1e546p-881,
     0x1.795f45aba929fp-942, 0x1.25dfd0044483dp-237, 0.0, 0.0, 0.0, 0.0,
     0x1.e4234b2bbdbbcp-243, 0.0, 0.0, 0.0, 0x1.90f2489ea818dp-845, 0.0,
     0x1.3f690dc1dc00dp-542, 0.0, 0x1.94376f8bb3526p-395, 0x1.91cd65ce808b9p-28,
     0x1.dc1f2685a6a49p-783, 0x1.75d4187425feap-488, 0x1.4fa06ad63035cp-578,
     0x1.33c8f69ecdc41p-31, 0.0, 0x1.2b4aa85add304p-214, 0.0, 0.0,
     0x1.e8f0eb2c31189p-844, 0.0, 0.0, 0.0, 0x1.b84bf58a599d3p-1017, 0.0,
     0x1.6be095a0918f9p-130, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5942f64c29709p-292,
     0x1.6f99e7722fc28p-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.012742e500759p-113, 0.0,
     0x1.b1b5bdfc2b851p-841, 0x1.37447747b7668p-333, 0.0, 0.0, 0.0, 0.0,
     0x1.bd28001a24c3fp-451, 0.0, 0x1.fe32f059fcc9cp-158, 0.0, 0.0,
     0x1.ce7b53580ea08p-184, 0.0, 0.0, 0.0, 0x1.ca8527d001f8dp-79, 0.0, 0.0,
     0x1.6f67eb5592003p-757, 0x1.edb4d44dde883p-94, 0x1.ed9ed80d6ffedp-303, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.043b2eca53769p-264, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e565fb2ea9c73p-284, 0x1.c1a99c9d22684p-915, 0.0, 0x1.94cede63c927ap-275, 0.0,
     0.0, 0.0, 0x1.601e5022adaa4p-250, 0.0, 0.0, 0x1.9f0f3f823de26p-728, 0.0, 0.0,
     0x1.9090175640d2ap-716, 0.0, 0.0, 0x1.f90b5eb42398p-995, 0.0, 0.0,
     0x1.d7e7fcecd452ep-282, 0x1.4c8f758a87b8ep-435, 0.0, 0.0, 0.0, 0.0,
     0x1.f9a96f37a25e1p-197, 0.0, 0x1.5f9399bef7e84p-103, 0.0, 0x1.377a8bdc61c4p-110,
     0x1.7aa4830ecd11fp-586, 0.0, 0x1.b51f317070426p-397, 0.0, 0x1.09e53b0925baap-715,
     0.0, 0.0, 0.0, 0.0, 0x1.747eb7cba11fap-853, 0.0, 0.0, 0.0, 0.0,
     0x1.7a852dbaf29f5p-423, 0x1.fea956465ea5fp-700, 0.0, 0x1.53071df98b4bbp-84, 0.0,
     0.0, 0.0, 0.0, 0x1.666a7cc1b5ba6p-379, 0.0, 0x1.af18dbc211318p-438, 0.0, 0.0,
     0x1.ef8b7b98ddfdap-859, 0.0, 0x1.d7f35e163962cp-179, 0x1.2fe0de3eb2cc4p-536,
     0x1.eb25bfa7b587ap-33, 0.0, 0.0, 0.0, 0x1.f2b1fdd10b676p-197,
     0x1.1480cde6fa7e3p-972, 0x1.8f6db15aa3002p-345, 0.0, 0.0, 0.0,
     0x1.86606eac3323ep-662, 0x1.a3f74f2a0879ep-134, 0.0, 0.0, 0x1.aaf625a307475p-899,
     0x1.5395a6b5611bfp-570, 0.0, 0.0, 0x1.6ed4a2b663162p-76, 0x1.e379ef1506123p-977,
     0x1.484c0bc64d30fp-821, 0x1.2d708903c0de2p-774, 0.0, 0.0, 0.0,
     0x1.a0fcc3bf07a51p-34, 0x1.c556d870aa3eep-1019, 0.0, 0x1.266ac39114ab5p-741,
     0x1.baaf8809b26d9p-945, 0x1.eb4cdc58c6c0fp-119, 0.0, 0x1.95f034043322dp-231,
     0x1.8198c45afd9e1p-633, 0x1.50e3e6e983d68p-236, 0x1.fb85455ebd11ap-6,
     0x1.535b4749bc0f4p-774, 0.0, 0x1.42f2d68c42b88p-266, 0x1.35254cff3ef9bp-225,
     0x1.00973e7744e9ep-16, 0x1.bc13cd5ff09c9p-422, 0x1.f579b7fa26d4cp-385, 0.0,
     0x1.68f85b0cc326p-354, 0x1.525bf412c4a1bp-902, 0x1.73d1182487483p-50, 0.0, 0.0,
     0.0, 0x1.7c33e152570a2p-924, 0x1.934c7eaddba64p-252, 0.0, 0x1.7f256779926fap-43,
     0x1.31d8fc1be33b5p-358, 0.0, 0x1.ae8f410dcc26dp-109, 0.0, 0.0,
     0x1.5052fd49509a5p-989, 0.0, 0x1.5853312a6434p-185, 0x1.03dbc20130d36p-926,
     0x1.b1014443e6ab6p-83, 0x1.7d79890ff012ep-116, 0.0, 0.0, 0x1.16e1802bcd707p-581,
     0.0, 0.0, 0.0, 0x1.fb643f45b4e1ap-150, 0x1.218448178c405p-367, 0.0,
     0x1.41a57c0ae7703p-492, 0x1.c25347f1fbda6p-325, 0.0, 0x1.967b6dfc54f3dp-165,
     0x1.2bcb44e442361p-48, 0x1.cef8546b5784cp-514, 0.0, 0x1.19490b477cad5p-860, 0.0,
     0x1.77ff9f7a478b5p-7, 0.0, 0.0, 0x1.d67eb1e770914p-808, 0x1.b9255ad8ada8cp-152,
     0.0, 0x1.b2eecfc808d8p-97, 0.0, 0.0, 0x1.2a16dae6ddfbfp-794,
     0x1.f858c759b0bcep-345, 0x1.34addddc1455dp-475, 0x1.a8a0fb76c0aa1p-958,
     0x1.1070b49ba4587p-263, 0.0, 0x1.a5053e604e342p-573, 0.0, 0x1.4fab69a8e6deap-65,
     0x1.8eb07a12d92ddp-753, 0x1.a03aeed6e884p-606, 0x1.0441e1340014ep-66,
     0x1.62af2af7ee08ap-805, 0x1.eaf0c9f11a6c9p-151, 0.0, 0x1.688d7a9d27316p-1004,
     0x1.21f9bba3dcf83p-399, 0x1.293a5a0d5dc4bp-617, 0.0, 0x1.8283b884819p-612, 0.0,
     0.0, 0.0, 0x1.b0de0680fa416p-754, 0.0, 0x1.6968b35977745p-411, 0.0, 0.0,
     0x1.194f630addc4bp-232, 0x1.541dc67220179p-445, 0x1.fc7579e7eb8a3p-973,
     0x1.ba817bf906922p-230, 0x1.974bbd1f8bf8dp-673, 0.0, 0.0, 0x1.f857b5662d3bap-5,
     0.0, 0.0, 0x1.ed3162dcdac09p-654, 0x1.01f58ceac5e34p-920, 0.0,
     0x1.da3ebf66e5763p-863, 0.0, 0x1.b769d4ee02354p-515, 0.0, 0x1.8f277672e52f9p-418,
     0.0, 0x1.1bc22870f9f72p-554, 0x1.543412f7e4f7p-451, 0.0, 0.0, 0.0,
     0x1.f27101b5e803p-695, 0.0, 0x1.7e579a7e01e2cp-977, 0.0, 0.0,
     0x1.5e52c4e2169e6p-336, 0.0, 0x1.54eb8a37ef5aap-907, 0x1.96d7281b8ddc7p-347, 0.0,
     0.0, 0.0, 0x1.a46a6912adb99p-384, 0.0, 0x1.f0b4845b3fce1p-543,
     0x1.fb12170b71375p-677, 0.0, 0.0, 0x1.53eab0ff6f79bp-317, 0x1.9e98c3dcfd19cp-402,
     0.0, 0.0, 0x1.f65fa7d68a353p-332, 0.0, 0.0, 0x1.f02be3fb77bd7p-898,
     0x1.417e2d83b1c8bp-69, 0x1.165cddcbc0a71p-660, 0x1.f96064e1c8755p-750, 0.0,
     0x1.ee94e61a7dd91p-853, 0x1.88d102ffca06ap-914, 0.0, 0x1.02c2d165f0113p-43,
     0x1.bd9d419f60ff6p-153, 0x1.7f7d507fe05e4p-840, 0x1.05d0b7caf4617p-179,
     0x1.24719b30f997cp-705, 0.0, 0x1.40438d59201bfp-978, 0x1.20defdb198de8p-291,
     0x1.cd482d682cc17p-774, 0x1.71b47fbd3e416p-819, 0.0, 0.0, 0x1.fc09e5d9d9267p-769,
     0x1.6143071cfd584p-457, 0x1.302596586eaaap-627, 0x1.7281aa536d315p-568, 0.0, 0.0,
     0x1.5c7e97edd2eebp-290, 0x1.a56634e6d3108p-619, 0.0, 0.0, 0x1.7539f0d1cb40cp-820,
     0.0, 0x1.9a234bf6e59ddp-366, 0.0, 0x1.21f889fec775dp-645, 0x1.7384ace768509p-308,
     0x1.6c93e213123d7p-232, 0.0, 0x1.eb8e2229ac144p-117, 0x1.ddf62f581d416p-891,
     0x1.e19c90166dfedp-604, 0.0, 0.0, 0x1.7025032ea58edp-737, 0x1.2b39574b7e752p-951,
     0x1.6a55357af0f9fp-144, 0.0, 0.0, 0.0, 0.0, 0x1.73f36c8e0909p-313,
     0x1.ffe29e263b3b2p-658, 0x1.cbff4bc85826ep-898, 0.0, 0x1.9e339c9ea3eacp-29, 0.0,
     0x1.ca689005b8f1ap-814, 0x1.4e555fa50ec2bp-627, 0x1.6b064c3d3b835p-106,
     0x1.0b36099eb4f47p-653, 0.0, 0x1.0bcb8d95e0439p-332, 0x1.f4f7af90c11b4p-616,
     0x1.cefd293e02db1p-329, 0x1.bdc6cb45a1429p-165, 0.0, 0.0, 0x1.106f283553e01p-498,
     0x1.a211a2efd89e6p-585, 0x1.85ad5b7757016p-738, 0.0, 0x1.f2795f427fdc8p-1022,
     0.0, 0x1.c79eb0c00c6cdp-543, 0x1.11769d6e18963p-706, 0.0, 0x1.b293b451ebd72p-664,
     0x1.986da9a9ecf4bp-238, 0x1.2b8f83fbadcccp-760, 0x1.af51a61cf01bdp-286, 0.0, 0.0,
     0.0, 0x1.cd52cba673679p-755, 0.0, 0x1.952fe9506583ap-584, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e7e246ecb07f8p-867, 0x1.31ac58f5084ap-127, 0.0, 0.0, 0.0,
     0x1.db18242e75f68p-38, 0x1.9ce195ba9483fp-891, 0.0, 0.0, 0x1.87a1750e77185p-48,
     0x1.b6c4db3fa8242p-877, 0.0, 0.0, 0.0, 0.0, 0x1.a04e07795dbdbp-715,
     0x1.7afea6558bc95p-372, 0.0, 0.0, 0x1.2417a874bc218p-65, 0x1.f5269955c4dcap-265,
     0.0, 0.0, 0x1.d3aeffcce54cp-647, 0x1.5beaded144618p-259, 0.0,
     0x1.6bb792db8fc2fp-457, 0.0, 0x1.55c69a9d50ab3p-228, 0x1.ed055eb8e27f4p-45,
     0x1.a5e93de6ebe7ep-178, 0x1.47ec11b690307p-62, 0x1.3a5893147ede6p-82, 0.0,
     0x1.e5345b2be0bd2p-692, 0x1.0b9184f610ebep-464, 0.0, 0x1.a7fc5dd889c9p-589, 0.0,
     0.0, 0.0, 0.0, 0x1.9ba405436e838p-59, 0x1.3267ca7b8a106p-415, 0.0, 0.0,
     0x1.a0825aff2e3cap-572, 0x1.a8f2b4194146ep-221, 0.0, 0.0, 0x1.d19a130292fe1p-875,
     0x1.1ab971a67114dp-229, 0.0, 0.0, 0.0, 0.0, 0x1.70be831898d0dp-801,
     0x1.b661119e62008p-946, 0x1.e83a4cdd20e19p-941, 0.0, 0x1.ead0c974251e8p-637, 0.0,
     0.0, 0x1.25c1ad052618ep-819, 0.0, 0.0, 0x1.1fa3d7471f266p-10,
     0x1.278a9b73bb73fp-411, 0.0, 0.0, 0x1.33e59710f4475p-154, 0x1.4814f3603a7c2p-206,
     0.0, 0.0, 0x1.5ed07d9a22db9p-893, 0.0, 0.0, 0x1.f4c4788004fb2p-206, 0.0,
     0x1.c5c5da741a6a3p-532, 0x1.2974e10b73e2ap-224, 0x1.9ea074942e7cep-441, 0.0,
     0x1.7c24bad6221aap-560, 0.0, 0x1.55bd666aed92bp-249, 0.0, 0x1.0ce77f67d01b6p-432,
     0.0, 0.0, 0.0, 0x1.ad779d4171c31p-541, 0.0, 0x1.37641fdd253b9p-504,
     0x1.9709249c3d74bp-543, 0.0, 0.0, 0.0, 0.0, 0x1.c68030f44b6dcp-244,
     0x1.8ebea5187c266p-344, 0.0, 0.0, 0x1.01b7c7efb011ep-29, 0.0, 0.0, 0.0,
     0x1.b62fe7b833db5p-1001, 0x1.6839a387a06dap-633, 0x1.448e920583bd8p-801, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.36f78a29eb94cp-371, 0.0, 0.0,
     0x1.a0f30f487473p-460, 0.0, 0.0, 0x1.9aae721b616f3p-472, 0.0, 0.0, 0.0,
     0x1.082c4ba5d89f6p-1011, 0x1.b3388ba5540a8p-563, 0.0, 0.0,
     0x1.2ea49e284e261p-300, 0.0, 0x1.fcec28d6d9296p-929, 0.0, 0x1.01f792fb4489fp-602,
     0.0, 0.0, 0x1.76404b34c27e4p-282, 0x1.d96acddbc20d8p-585,
     0x1.35b8b993d7826p-1011, 0x1.64f17b22d0a62p-582, 0.0, 0x1.fcd0c08ca893cp-324,
     0x1.d136b1910c76bp-328, 0.0, 0.0, 0x1.a27a9ae703947p-413, 0.0, 0.0,
     0x1.7d3119ccb8f72p-489, 0.0, 0.0, 0.0, 0.0, 0x1.18a213414eb22p-974, 0.0,
     0x1.8424cf87916c8p-319, 0.0, 0.0, 0.0, 0x1.18ff88fadaf0dp-687, 0.0, 0.0,
     0x1.56f387ec0fd1cp-201, 0x1.a98f787639198p-121, 0.0, 0x1.a607e7df62eep-771, 0.0,
     0.0, 0.0, 0x1.0d1a65badaec9p-495, 0x1.9c331767ee11dp-801, 0.0, 0.0, 0.0,
     0x1.d89da428b7e5ep-1008, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ee2981d855492p-499,
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
            tmp1 = Sleef_cosd1_u10purecfma(tmp0);
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
    printf("Sleef_cosd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
