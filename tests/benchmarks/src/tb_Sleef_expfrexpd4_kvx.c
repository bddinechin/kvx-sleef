/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_expfrexpd4_kvx.c --function Sleef_expfrexpd4_kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --vector-size 4 --function-input-vector-size 4 --precision int32 \
 *     --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_int4_t external_bench_wrapper_cst = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
static const ml_int4_t external_bench_wrapper_cst1 = {INT32_C(0), INT32_C(0), INT32_C(0), INT32_C(0)};
volatile int32_t external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.82feb8b1adb33p-961, 0x1.4a4120312e145p-848, 0.0, 0.0,
     0x1.aca7e214c3bbap-822, 0x1.f5fdaa3a462dcp-40, 0x1.f041c95822d74p-730,
     0x1.ee6b9ab00f112p-936, 0.0, 0x1.409fc16a1b322p-248, 0x1.bae82149c4fc3p-903, 0.0,
     0.0, 0x1.13116ce57107bp-265, 0.0, 0.0, 0x1.3c5f0d45a9f5dp-244, 0.0, 0.0, 0.0,
     0x1.ff69ed6f84729p-523, 0.0, 0x1.d7e5bec070a11p-359, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c7baedfbfd79p-427, 0x1.4ead185321f64p-95, 0.0, 0.0, 0.0, 0.0,
     0x1.1b44c905d640fp-293, 0.0, 0.0, 0.0, 0.0, 0x1.ae617bc505612p-837, 0.0,
     0x1.85ddc94968dp-900, 0.0, 0x1.3a6fc6edd0c4ep-141, 0x1.a798143be77b9p-971, 0.0,
     0x1.7e071edf8d82ap-76, 0.0, 0x1.0607f0c20b8adp-873, 0x1.a72e93fe10fcdp-221,
     0x1.cc0a8e393e43fp-942, 0x1.92a2c22bf085fp-995, 0.0, 0x1.ced5b5cb4c67ep-576,
     0x1.ddfbd756b611p-300, 0.0, 0.0, 0.0, 0.0, 0x1.181f2839186e7p-757, 0.0,
     0x1.18c8b5bfbf4dbp-472, 0x1.96629d5e9af72p-255, 0x1.02937ebf7da1bp-412,
     0x1.55eb66d9696dep-913, 0x1.9fff7b2b91c53p-639, 0.0, 0.0, 0x1.a48c9fec96c57p-169,
     0.0, 0.0, 0.0, 0.0, 0x1.eac1d7411da8bp-386, 0.0, 0.0, 0x1.a4a92902db816p-8, 0.0,
     0.0, 0.0, 0x1.46fb58a1f8fdfp-428, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d68510b2bb9cdp-155, 0x1.3ef392b53dcb2p-489, 0.0, 0x1.7ab591363fae1p-918, 0.0,
     0x1.8d07c0e628056p-525, 0x1.becb5fe7a10d7p-546, 0.0, 0.0, 0x1.c9ffb2f179689p-929,
     0.0, 0.0, 0.0, 0x1.f351c1fc5eaf3p-71, 0.0, 0.0, 0.0, 0x1.0977ee0349e62p-827,
     0x1.42a13faafaf1ep-74, 0.0, 0x1.c9ea4b957fb13p-920, 0x1.956f24268976ap-975, 0.0,
     0x1.1ca3e4e99c975p-806, 0.0, 0.0, 0x1.4dfe7bb8e39c1p-529, 0.0,
     0x1.1f502a4c44204p-828, 0x1.a7be4748f322p-428, 0x1.31e91aa956d1bp-342,
     0x1.079e2a72d75a8p-548, 0x1.bc00fd99031fap-17, 0x1.5310eab8bf9cp-799,
     0x1.c1785098d9847p-270, 0.0, 0.0, 0x1.9ec6fe9918513p-818, 0.0,
     0x1.948df5655d538p-308, 0x1.740089d0201acp-613, 0x1.84f5067dd5a48p-614, 0.0,
     0x1.beb1e1926f336p-538, 0.0, 0x1.dabd8dfeecd95p-655, 0x1.6d1bc8e1f4fdbp-649,
     0x1.926513214de18p-27, 0x1.3194fdda4b1f4p-14, 0x1.d9f31ce581a8bp-181,
     0x1.f0f9b2635ec8p-862, 0x1.923ce40314465p-340, 0x1.7b352e3ba16c9p-265,
     0x1.cf4a8e8e6fd85p-271, 0x1.7b5e6ad50ca6p-852, 0.0, 0.0, 0.0, 0.0,
     0x1.fee3595238c43p-877, 0x1.82f7774c91967p-873, 0x1.cb0977dc49aadp-24, 0.0,
     0x1.deb8c8c8e66b2p-780, 0.0, 0.0, 0x1.9fac266762abep-33, 0x1.55b21bca880f9p-214,
     0.0, 0.0, 0.0, 0.0, 0x1.069084e96b7eap-440, 0.0, 0.0, 0.0,
     0x1.4706009e52891p-474, 0x1.07a336b739f85p-517, 0.0, 0.0, 0.0,
     0x1.7fc782c1ff4ecp-590, 0x1.5b7d5de26a53ep-419, 0x1.d6c5401a2f48ap-191, 0.0, 0.0,
     0x1.1e8b9eecc12c1p-933, 0.0, 0.0, 0x1.018b30fd6e523p-625, 0.0, 0.0,
     0x1.546962b6b5f92p-141, 0.0, 0.0, 0x1.784f84cb9c9abp-539, 0x1.5d6ad4e0cda8bp-588,
     0.0, 0x1.a338058646ab6p-511, 0.0, 0x1.4bd12b69bd6e2p-35, 0.0,
     0x1.8b8bb6def8657p-292, 0.0, 0x1.903dc1faf8fp-80, 0.0, 0x1.d668394cd6beep-137,
     0x1.7d6b54a2f630dp-541, 0x1.60f266a34d224p-797, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8b1c12017e03p-353, 0.0, 0x1.0ef5c4aa3de61p-867, 0x1.18d7fb0de5395p-1011,
     0.0, 0x1.b32e9ddbe3f8bp-373, 0x1.f4507532353fbp-557, 0.0, 0x1.755200363ada1p-609,
     0x1.6214c2a077398p-1022, 0.0, 0.0, 0x1.bc5c2d0938ef7p-227, 0.0, 0.0, 0.0,
     0x1.362afd69fe346p-785, 0x1.e3c654d673ad8p-671, 0x1.21beebe9b424cp-777,
     0x1.ac0efbb53e00ap-971, 0.0, 0x1.ee5c02d1f4af5p-647, 0x1.6cc6824252a02p-984, 0.0,
     0x1.90d87dea10c8cp-200, 0x1.2774e59ee8cebp-455, 0x1.41b6991b37cf3p-807, 0.0, 0.0,
     0x1.91cb0e8559015p-704, 0.0, 0x1.7f37eeb80256dp-442, 0.0, 0x1.6b054f242558ep-904,
     0x1.b9bf290f0385ap-806, 0x1.3b7393be559c8p-953, 0x1.31b0b0a86e5c2p-123,
     0x1.99d298f2ffcbp-927, 0x1.fa04afc91e665p-976, 0.0, 0x1.7d76088a88aep-517,
     0x1.0a2aa7f38f1e4p-780, 0x1.19b9e3574e48ap-830, 0x1.2586e487d8fabp-664, 0.0,
     0x1.1ac6779e42b22p-431, 0x1.108cb4b4f14d2p-673, 0.0, 0x1.2024f58aad6a6p-663, 0.0,
     0.0, 0x1.a2927345282d9p-621, 0x1.6fac76c49442cp-903, 0x1.46c069c4bc21p-233,
     0x1.92dc87f1c018ep-264, 0.0, 0.0, 0x1.1d9859fa2c33ep-940, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1ef47ec819bd8p-942, 0x1.fc804ee9a0fa4p-159, 0.0, 0x1.992b31c203b03p-823,
     0x1.9864528ce2d65p-760, 0.0, 0x1.5b5ec3ce1f053p-912, 0x1.b706dbfe890d5p-857, 0.0,
     0.0, 0x1.9f4f66f8c8b8bp-372, 0.0, 0.0, 0.0, 0x1.7d720b2a3c42bp-893,
     0x1.dd621c0b54105p-816, 0x1.16df012a44b6fp-38, 0x1.710a81f2f5c91p-949,
     0x1.a4712a809dfc4p-118, 0.0, 0x1.3729a8e35ad9fp-957, 0x1.1dba9b08249d3p-161, 0.0,
     0x1.973da8399482p-106, 0.0, 0.0, 0.0, 0.0, 0x1.bb53bf6614f88p-500,
     0x1.f108f6bb62f06p-942, 0x1.5a649473513c6p-229, 0x1.a988085d18c15p-64, 0.0, 0.0,
     0.0, 0x1.b607e0bd821dbp-34, 0.0, 0x1.f20defd66d7e5p-895, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2b9f335f72976p-959, 0.0, 0x1.36bf06fa71376p-394, 0.0, 0x1.b1a677e3f6224p-667,
     0x1.2e36b845e7634p-99, 0.0, 0.0, 0x1.c25dc4b3b5b65p-718, 0.0,
     0x1.e552434d9d39cp-264, 0.0, 0x1.d01a61e98e044p-874, 0.0, 0.0, 0.0, 0.0,
     0x1.6ff7d50a9c19dp-477, 0x1.04c1dba9049f2p-728, 0x1.8f4950445031cp-763,
     0x1.4d2f8c442f231p-788, 0.0, 0.0, 0.0, 0x1.de6effc3fdc69p-74,
     0x1.fbc1ba5755954p-672, 0x1.ec6f13f5eeb64p-121, 0x1.17ffad4efae13p-94, 0.0, 0.0,
     0.0, 0x1.7d898e6f1a3e9p-866, 0x1.129f67982a79cp-857, 0.0, 0.0, 0.0, 0.0,
     0x1.5efecec064dbp-858, 0x1.06b6dea5f94cp-181, 0.0, 0.0, 0.0,
     0x1.8538a1fff68c6p-777, 0x1.a5025ef8e6945p-1009, 0x1.8f21e5db58c59p-961, 0.0,
     0x1.5d20c5fc887ecp-372, 0x1.a43763c5b39b6p-27, 0.0, 0x1.f73f72998274ep-562,
     0x1.ca0bdf8f521ddp-624, 0x1.04fb0a284f2bdp-113, 0.0, 0x1.09d79627bd595p-589, 0.0,
     0.0, 0.0, 0x1.264b2d1d6c498p-71, 0.0, 0.0, 0.0, 0x1.85367ff7014efp-941,
     0x1.2b97b95f6da1p-151, 0.0, 0.0, 0x1.f2d42ba54dc7p-518, 0.0, 0.0,
     0x1.c913d4b113c3ap-441, 0x1.fe8f19b9711a7p-22, 0.0, 0x1.1c4b058f1598cp-740, 0.0,
     0.0, 0.0, 0.0, 0x1.84b3aab1a780ap-376, 0.0, 0.0, 0x1.d23f6b827b3d2p-1022, 0.0,
     0.0, 0x1.44a53248858bep-739, 0x1.6222383f4e342p-199, 0x1.5c01bccc9ceddp-443, 0.0,
     0x1.364d6d64a82dp-606, 0x1.6589d3430830ep-439, 0x1.49393091d9a41p-881, 0.0, 0.0,
     0x1.382c2bc1badddp-169, 0.0, 0x1.411ec84f8e8adp-559, 0.0, 0.0, 0.0,
     0x1.3be5be4442c94p-405, 0.0, 0.0, 0x1.51a499968439dp-636, 0.0,
     0x1.beaf29e3ffd1bp-305, 0x1.b1343f0fefafap-956, 0.0, 0x1.b5feccb43d76bp-681, 0.0,
     0.0, 0x1.ce14ce994fc05p-535, 0x1.a944ea56593aap-27, 0.0, 0x1.366538b7c62e8p-783,
     0.0, 0x1.d055a259d5683p-881, 0.0, 0x1.a74af41f576fbp-230, 0x1.28c9a5a34c7e6p-466,
     0x1.5b06ce8ddce6ep-523, 0x1.0c06fbb81324ap-221, 0x1.8a3238f85f36bp-900, 0.0, 0.0,
     0x1.c7b44947d183ep-214, 0.0, 0.0, 0.0, 0x1.90a01f89050f9p-887,
     0x1.cd8f1f0423e83p-733, 0.0, 0.0, 0x1.789c2ab6c13acp-428, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f4fc60ecbece5p-94, 0.0, 0x1.07e9ae1abf76bp-64, 0.0,
     0x1.2aed44f6b8169p-922, 0x1.e0f3764e4b833p-676, 0x1.f15ad8d355149p-709, 0.0, 0.0,
     0x1.2a66bfc783615p-414, 0.0, 0x1.ead6bf2551e2ep-121, 0.0, 0x1.daeab09dbfd49p-70,
     0x1.de7633074896fp-467, 0.0, 0.0, 0x1.8908ffe2a3993p-886, 0x1.b4f8e694f9de7p-617,
     0x1.f3f8c7f696552p-904, 0x1.61c8afb1e39bbp-235, 0.0, 0x1.a29153ea2207ap-572, 0.0,
     0x1.273fbd5f437cdp-581, 0.0, 0.0, 0.0, 0x1.744b4fa1fdf7ap-451,
     0x1.a4292e7052d48p-840, 0x1.040dbcf234598p-987, 0x1.e0fc8c2326f5ap-868,
     0x1.7b21f4e103fd8p-539, 0x1.c4e321a51b2d2p-296, 0.0, 0x1.e1bec72467c36p-826, 0.0,
     0.0, 0x1.f41bf33b0d55p-104, 0.0, 0x1.82621d792ea9dp-181, 0x1.975dd663362fcp-260,
     0.0, 0.0, 0.0, 0.0, 0x1.b3f7bfe515e6p-906, 0x1.d9d1988c4144p-609, 0.0,
     0x1.027cfe72aa10dp-827, 0.0, 0.0, 0x1.93b0b64c5db23p-1020, 0.0,
     0x1.fb79360d73037p-971, 0.0, 0x1.7820aa065e5b3p-833, 0.0, 0x1.73877f89748cp-946,
     0x1.b74a84a9bef72p-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8ad2f8678d5b7p-438,
     0x1.4d5120375c78ap-693, 0x1.37c96a9897797p-592, 0x1.4af5a60ab1441p-1008, 0.0,
     0.0, 0.0, 0x1.50875dc5bd469p-93, 0.0, 0x1.86eec5f1708acp-715, 0.0, 0.0,
     0x1.a2bc32bf8635p-1, 0x1.9d02a3d174653p-257, 0x1.33db18992a679p-384, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9225d7b848717p-230, 0x1.f364e61c36e59p-384, 0.0,
     0x1.a6c4c694bf142p-463, 0x1.88f3f1a708e76p-248, 0.0, 0.0, 0x1.e957cb9b8bd8cp-797,
     0x1.84f5a9fd3fa75p-992, 0x1.8b72b0fd9610dp-394, 0x1.ed615cdcbe5a4p-587, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0ea91eca480f4p-979, 0x1.88adb4c0c602bp-770,
     0x1.1e66d59cff99bp-840, 0.0, 0x1.cdbe73a6e81abp-189, 0x1.805b6fcfb5861p-266, 0.0,
     0x1.bad7927cc4bd7p-964, 0.0, 0.0, 0.0, 0x1.c99a7f1ee431dp-575,
     0x1.c8c4d3566b8b3p-200, 0.0, 0x1.91a18a7488f44p-715, 0x1.d259cbc90abeap-345,
     0x1.c48e931560d5fp-670, 0.0, 0.0, 0.0, 0.0, 0x1.0473858128456p-619, 0.0,
     0x1.6fdc19c64fc86p-527, 0x1.922ceb875a06fp-855, 0x1.fd630124f5a96p-717,
     0x1.a97d71213a232p-964, 0.0, 0x1.6d5493d57af0cp-865, 0.0, 0.0, 0.0, 0.0,
     0x1.427688b81e538p-102, 0x1.469cfcd3b9cccp-625, 0.0, 0x1.572b6c3719ba6p-577,
     0x1.94e0a4ae01fa8p-568, 0.0, 0.0, 0.0, 0x1.4fe5e56786342p-111, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d08de4a87806dp-301, 0x1.d5f33f09de57dp-912, 0x1.cc4914c617257p-738,
     0.0, 0x1.7191d452d6b53p-43, 0x1.41bcdeaddd057p-244, 0.0, 0.0, 0.0, 0.0,
     0x1.246e1eca3710fp-747, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.804565b97e352p-306, 0.0,
     0.0, 0x1.40d415793671fp-458, 0.0, 0.0, 0x1.971fb0e6a0168p-200,
     0x1.0311a73cbf6e9p-441, 0x1.135dfcc487943p-982, 0.0, 0x1.e887bf9349353p-443,
     0x1.8f7e7cca1c7b3p-101, 0.0, 0.0, 0x1.625a952417f8fp-196, 0.0, 0.0, 0.0,
     0x1.e987acd33f3ecp-800, 0.0, 0.0, 0x1.130cd0d67184fp-209, 0x1.6caf3efb24ee1p-109,
     0.0, 0x1.2596ad5e4520dp-427, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.12747cee13d06p-830,
     0x1.ec190f6609903p-6, 0x1.30398759d47b4p-84, 0.0, 0.0, 0x1.e51e3a4cec276p-1006,
     0.0, 0x1.e4f444f3f9093p-466, 0x1.6e59a57388f72p-278, 0.0,
     0x1.7d6554cf27a49p-1011, 0x1.72976567782c6p-36, 0.0, 0.0, 0.0,
     0x1.05679e58644acp-781, 0.0, 0.0, 0x1.2bd495b16421ap-618, 0.0,
     0x1.b9e363dd3cfa1p-673, 0.0, 0x1.e6218be120f5dp-427, 0x1.42a3b8d3c8a7fp-359, 0.0,
     0.0, 0.0, 0.0, 0x1.e168f756a1c4fp-302, 0x1.a4efb1898cda4p-285,
     0x1.bf66de1f9459ep-878, 0.0, 0.0, 0.0, 0x1.4ee5abf514c03p-870, 0.0, 0.0, 0.0,
     0x1.478b3666fd629p-823, 0x1.a5a88532baccp-611, 0x1.b8ffe9ad4639ep-427, 0.0, 0.0,
     0x1.3bee03c2ccf97p-645, 0.0, 0x1.1034202b27b3dp-266, 0x1.4d3821611df2ep-599,
     0x1.4ddabcfaf8472p-948, 0x1.69fab4c468794p-415, 0x1.7372001f159e5p-187, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.150b68e7b6788p-997, 0.0, 0.0, 0x1.f8e0961d7c902p-720,
     0x1.d43cad279b809p-312, 0.0, 0.0, 0x1.328e2950ae3d1p-15, 0.0,
     0x1.2d69cb8301f0ep-632, 0.0, 0x1.4abb70e9a6a9ep-437, 0x1.9d09f5d17fd5fp-611,
     0x1.1f6f5fe5ca5dep-737, 0x1.69c0fe3ed5276p-774, 0x1.01a0dc61574abp-303,
     0x1.292e89bc121ebp-226, 0x1.140f18f34e5fep-620, 0x1.cb32296ada7e1p-640,
     0x1.adaf176f00a9dp-828, 0x1.3699033a7c01p-752, 0x1.67251c76424efp-27,
     0x1.6bbe6e551092bp-938, 0x1.fb144a954906p-572, 0x1.1d808c63adaeap-161,
     0x1.206d4aef52c53p-990, 0.0, 0.0, 0.0, 0x1.045358a749a5bp-16, 0.0,
     0x1.3f4954b23752ap-633, 0.0, 0x1.cea1765e4413p-99, 0.0, 0.0, 0.0,
     0x1.c689e06f5a62fp-513, 0.0, 0.0, 0.0, 0.0, 0x1.010b7f655c217p-129, 0.0, 0.0,
     0x1.2a46e20532b6p-988, 0.0, 0x1.aaf09d17d01ebp-610, 0x1.e89a42723776fp-855, 0.0,
     0.0, 0x1.3fabb26759a76p-25, 0x1.eae9b1e22ee16p-910, 0.0, 0x1.cb23ac1cd1e09p-857,
     0.0, 0x1.187ef6f24bcd2p-899, 0.0, 0x1.c87221b30436fp-851, 0x1.35dfc3df4f785p-857,
     0x1.409b8f34f5e26p-712, 0x1.f48c1cc4f8aeep-840, 0.0, 0x1.b0d3e072d87acp-778, 0.0,
     0.0, 0x1.f8c580b17d219p-4, 0x1.2fcb5080250b4p-394, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f55bc728054ap-151, 0.0, 0x1.88a7a17f1c1bap-121, 0.0,
     0x1.0aa895fc57de4p-1015, 0.0, 0.0, 0.0, 0x1.2387c57303b1cp-340, 0.0,
     0x1.cfbda0cd56a7ep-619, 0.0, 0x1.e09dbef77ee7ep-949, 0x1.ae30e463aada2p-477,
     0x1.1c2b373b5a4fap-88, 0.0, 0x1.db3227052c014p-576, 0x1.94f9b3c4a5466p-134, 0.0,
     0.0, 0.0, 0x1.4ded089fffbb3p-275, 0.0, 0.0, 0.0, 0x1.a2594fec5653dp-452,
     0x1.0e0d4fe62ccfbp-120, 0x1.70c5275729942p-365, 0x1.2227ef17d2f89p-368, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.fa50a35f64a48p-433, 0.0, 0.0, 0.0, 0x1.ff2e7dc0992ddp-310,
     0x1.45105dbd6f07p-785, 0x1.6bb8d328d5952p-440, 0.0, 0x1.68ededf5c5259p-690,
     0x1.6cdddfa73ed2ap-494, 0x1.9346b3d19fea6p-409, 0x1.1b689bc638823p-1022, 0.0,
     0x1.7170ec8b750a3p-971, 0.0, 0.0, 0.0, 0x1.d4e6b79045a31p-484, 0.0, 0.0, 0.0,
     0x1.f60c35761c5p-726, 0.0, 0.0, 0x1.04918a9d31dp-853, 0x1.0578663f3af06p-13, 0.0,
     0.0, 0.0, 0x1.e811dff70915bp-403, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.160cdc2e70d33p-45,
     0x1.4566b674372b2p-963, 0x1.a48da420064ffp-610, 0x1.50565f1f380e1p-841,
     0x1.4e655177aeff3p-89, 0x1.1b3736f3ca4fbp-323, 0x1.689f8dc7dac1dp-58, 0.0, 0.0,
     0x1.1edee852a34e4p-76, 0x1.fa0a8b2630faep-714, 0x1.30d8c3d711d52p-108,
     0x1.9b8eeb554c4fbp-257, 0x1.e105e7556acd8p-529, 0x1.de6dc4064e77fp-716, 0.0, 0.0,
     0.0, 0.0, 0x1.2ad736668f2c3p-967, 0.0, 0.0, 0x1.fb39770849f01p-545, 0.0,
     0x1.f42cdf2c38517p-282, 0.0, 0x1.21df0a40a8589p-664, 0.0, 0x1.65a2dd15ef7bfp-951,
     0x1.4fa854114be0bp-992, 0x1.f12691cb5da68p-196, 0.0, 0x1.db146e1a97ef4p-880,
     0x1.e551cb426f521p-186, 0x1.4180539e945fep-417, 0x1.28faec801c157p-310,
     0x1.39b0dafa0074dp-1011, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e8813de35fc4p-644,
     0.0, 0x1.36088c5abaf82p-749, 0x1.9553e2b0a5dbap-193, 0x1.73148ad3fb2aep-377,
     0x1.604abd4d499c2p-127, 0.0, 0x1.58e2f8c4a64a9p-831, 0x1.faac486f1a6b9p-168,
     0x1.a3162b2dc8a3cp-1009, 0.0, 0.0, 0x1.91ef0a7d93fe2p-97, 0x1.7ca7c7ae796d2p-975,
     0.0, 0x1.3c572cf9ffa94p-868, 0x1.8c8fb2cdd732dp-108, 0x1.0f1ac526ba84dp-246,
     0x1.50610d999dda5p-584, 0.0, 0.0, 0x1.7ba3338e8c3dp-414, 0x1.b48758e1d2b74p-779,
     0.0, 0.0, 0.0, 0x1.39ab09c671401p-20, 0.0, 0.0, 0.0, 0.0, 0x1.f73505b8ce9ddp-254,
     0.0, 0x1.243c1eb64c51ap-726, 0.0, 0x1.ff1746faafe9fp-873, 0x1.b8cea5286135ep-126,
     0.0, 0.0, 0.0, 0x1.8f5c9bd337f6p-467, 0.0, 0x1.aa39dec509366p-1020,
     0x1.910faf36ffd7bp-961, 0x1.03cb9e568fea3p-766, 0x1.d39b5ef2a42f8p-710, 0.0,
     0x1.acdfd09ecc166p-975, 0x1.814a091bf2a8p-590, 0.0, 0.0, 0.0,
     0x1.9652b23b4bf06p-636, 0x1.3585b4a5dbc58p-917, 0x1.ead23d5d0ca81p-777,
     0x1.8319f04f2f267p-636, 0x1.24535353e6319p-598, 0x1.3274b515d42d8p-850,
     0x1.1961815786af9p-524, 0.0, 0x1.97544daacdbaap-656, 0.0, 0.0, 0.0,
     0x1.faeecb805bd06p-455, 0.0, 0.0, 0x1.4b9a2a6b0f9bcp-648, 0.0,
     0x1.5af075a449c7fp-668, 0x1.88528e76f8ab6p-450, 0x1.910cffefdc761p-152, 0.0,
     0x1.3f8fd59a9664p-517, 0.0, 0.0, 0x1.fe491872feb2fp-676, 0x1.e50c000c21cf6p-117,
     0x1.2218f3b1b768fp-178, 0x1.0459b02bc245ap-739, 0x1.e099219085ffp-551, 0.0, 0.0,
     0x1.3410a3ec3e654p-182, 0.0, 0x1.687ac3f8b79cep-774, 0x1.f598d9571a76ap-57, 0.0,
     0x1.b1ebaa128c43p-485, 0x1.d8627b192edfdp-136, 0.0, 0x1.6926c6f1f4decp-664, 0.0,
     0x1.b46589772ddebp-205, 0.0, 0.0, 0x1.ae42cfae24183p-248, 0x1.29ca70a32ef03p-505,
     0x1.94d3350512cb7p-782, 0x1.3731c122e30d9p-246, 0.0, 0.0, 0.0, 0.0,
     0x1.8ed7207dcd04cp-155, 0.0, 0x1.5ac09a97d0e5cp-363, 0.0, 0.0, 0.0, 0.0,
     0x1.af1e7da76c275p-446, 0.0, 0.0, 0x1.b216b1485d129p-155, 0.0,
     0x1.60ae497d60d2ap-666, 0x1.caf65ac06f01ap-741, 0.0, 0x1.0fe605d57d6b8p-455,
     0x1.785566c37bbd7p-901
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_int4_t global_bench_acc;
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
        ml_int4_t local_acc;
        int32_t i;
        ml_int4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_int4_t tmp1;
            ml_int4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_expfrexpd4_kvx(tmp0);
            memcpy(((ml_int4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 16);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
            i = tmp3;
        }
        tmp0 = global_bench_acc + local_acc;
        global_bench_acc = tmp0;
        tmp1 = j + INT32_C(1);
        j = tmp1;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_expfrexpd4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_expfrexpd4_kvx bench acc [%d, %d, %d, %d]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
