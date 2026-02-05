/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpd2_kvx.c --function \
 *     Sleef_finz_frfrexpd2_kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.f85e963516965p-460, 0x1.60454001245a6p-136, 0x1.5ac1623afbaa5p-374, 0.0,
     0.0, 0.0, 0.0, 0x1.a5c24199ad701p-500, 0x1.6eba514697bfdp-202, 0.0,
     0x1.7fc14125c4953p-327, 0x1.b429a96692554p-143, 0.0, 0x1.a7f930ba17029p-691,
     0x1.db3b338856797p-923, 0x1.4ce837c7aa8a4p-316, 0.0, 0x1.181cac3ce2857p-677, 0.0,
     0x1.20df5558a4a47p-880, 0.0, 0.0, 0x1.c7bff1f4e2919p-288, 0.0,
     0x1.eeb9f39b4b8c1p-760, 0.0, 0.0, 0x1.23993b01e7803p-664, 0x1.a35ad0ef0861cp-63,
     0.0, 0x1.65ba509e4544ep-100, 0.0, 0x1.0e14b75f7c62fp-985, 0.0,
     0x1.2463c54f5a604p-587, 0.0, 0x1.1abce39346adap-536, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7ef51e835c1f6p-928, 0x1.a57a4289d1b59p-960, 0x1.70a6864b91305p-583, 0.0,
     0x1.11be6bcaaa4b3p-510, 0.0, 0x1.7f0767d40ad35p-54, 0x1.62139fcb52eadp-186,
     0x1.08882eb83f00ap-47, 0x1.984db608dda6cp-321, 0x1.49bb6aa82116ap-351,
     0x1.bff6f63df0b14p-824, 0.0, 0.0, 0x1.a55321df80201p-573, 0x1.244c1fc8e7638p-479,
     0x1.cd6a723d28d58p-422, 0x1.b9c8ce81eb08ep-3, 0x1.0df8b14a35674p-603,
     0x1.dbf4d04d7303dp-873, 0.0, 0.0, 0x1.2b05f83056541p-755, 0.0,
     0x1.11f2e8621817p-373, 0.0, 0x1.1c10021f881b2p-331, 0x1.071df983eca16p-762,
     0x1.fde26fec58447p-529, 0x1.0e1d5f2b56c83p-355, 0x1.e59234609c38bp-326, 0.0, 0.0,
     0x1.88295d8f8643fp-569, 0x1.e32198b1179f4p-895, 0.0, 0x1.255409a5beafbp-90, 0.0,
     0x1.9f3ff8cb9c9c1p-695, 0x1.87634106ac6bfp-988, 0.0, 0.0, 0.0, 0.0,
     0x1.4271290d82091p-685, 0x1.84e3c367d1066p-915, 0x1.8d3e8898fb9a8p-471, 0.0,
     0x1.a23ec2e48e163p-459, 0x1.ab5d7398a96b2p-913, 0x1.e2b7afc9430dp-819,
     0x1.1af90d9c122c6p-802, 0x1.c0fce02086295p-40, 0.0, 0x1.a26296495fc8fp-957, 0.0,
     0x1.b5c97ef8b613fp-104, 0x1.0c0804e0efc61p-185, 0x1.225cd091bd525p-71,
     0x1.6feb5b70eae69p-245, 0.0, 0x1.3a41c9df33b9ap-811, 0.0, 0x1.db47691648741p-438,
     0.0, 0x1.cb99933c5937ap-107, 0.0, 0.0, 0x1.916c273d6621bp-225,
     0x1.eee9ee450c762p-779, 0x1.fcc9a939f2be6p-884, 0.0, 0x1.45a3973c94ea9p-965, 0.0,
     0x1.6f65d892b3a54p-49, 0x1.8a01a2ef19214p-944, 0x1.e212274da4514p-66, 0.0,
     0x1.1b2d74eb1c65fp-54, 0.0, 0.0, 0.0, 0x1.03c8d1062c113p-577,
     0x1.a9c23e748f6c4p-604, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ad3dedced9f21p-622, 0x1.ab60fe9c0c9d5p-44, 0.0, 0x1.356e808261ebep-24,
     0.0, 0x1.5f96c0c2518f4p-425, 0x1.7463bd6ac4455p-849, 0.0, 0.0,
     0x1.5ec7ef57750eap-521, 0.0, 0.0, 0.0, 0x1.508c7f99e171fp-653, 0.0,
     0x1.c1f5d75e96843p-629, 0x1.1d445fa9a5342p-868, 0x1.810daf7a7121bp-1010,
     0x1.def2373301404p-545, 0x1.061c9388c5217p-56, 0x1.fcf82fda8b319p-861,
     0x1.35c0d5a1b1c4ep-894, 0x1.73792b1fcb2ep-580, 0.0, 0x1.5ae2eb70191cbp-451,
     0x1.7609a248e4387p-384, 0x1.ebe067162944p-854, 0.0, 0x1.2fedf6485ffbp-302,
     0x1.7aa224e2aafdbp-698, 0x1.2d65ecb61952bp-876, 0.0, 0x1.3d0022256e2b5p-291, 0.0,
     0x1.4482b232570b6p-419, 0.0, 0.0, 0.0, 0.0, 0x1.a8fd7c9dab56ep-6,
     0x1.0a69d912c33dfp-576, 0x1.dca7e24711fecp-327, 0.0, 0x1.ea55e82bd5cb5p-495, 0.0,
     0.0, 0x1.54ab9fb72a829p-459, 0x1.e9e21ad313a7bp-544, 0x1.5de3fe8cb48ap-993, 0.0,
     0.0, 0x1.056d9c177b878p-79, 0.0, 0x1.9810472203b27p-351, 0x1.a2f458e9ed916p-698,
     0x1.02dd16ce2cf84p-396, 0x1.9d59efbcefbdfp-496, 0x1.582c2ee7a7349p-554, 0.0,
     0x1.e743ee3f6551bp-673, 0.0, 0.0, 0.0, 0x1.211fbe2954d36p-113, 0.0, 0.0,
     0x1.99eb91012501ep-94, 0x1.c2852749bbd1p-738, 0.0, 0x1.76350769f2d6cp-664, 0.0,
     0x1.bcb014afe38acp-694, 0x1.434ff8e4640bap-170, 0.0, 0.0, 0x1.072af91588951p-300,
     0x1.68f425f40776dp-705, 0.0, 0.0, 0.0, 0x1.ad852ae6cbb31p-233, 0.0, 0.0, 0.0,
     0x1.320527e237cbfp-518, 0x1.0a74fe160af59p-398, 0.0, 0.0, 0x1.c0dc450356b94p-786,
     0.0, 0.0, 0.0, 0x1.684375e278802p-97, 0x1.9794fa2cf0778p-342, 0.0,
     0x1.c03739b656c41p-578, 0.0, 0.0, 0x1.d5c940c59b25p-759, 0.0, 0.0,
     0x1.532b071d0d86p-437, 0.0, 0x1.c52f9e47854bdp-224, 0x1.8eef14edf86d7p-641, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.6303938144593p-715, 0x1.d6d18919353bp-787, 0.0,
     0x1.7c7299081024dp-9, 0x1.c56ca63df58b1p-874, 0.0, 0x1.7fb71f5623465p-373,
     0x1.148aaf979f94ep-660, 0.0, 0x1.5140cde5218ebp-30, 0.0, 0x1.67f0a5feaca4dp-56,
     0.0, 0x1.237a8d4843df5p-915, 0.0, 0.0, 0x1.dfa004e22fdb5p-683, 0.0,
     0x1.0520a6eb7ab2cp-146, 0.0, 0x1.6d37f54d6c3ddp-670, 0x1.29d7d1cec19f8p-655,
     0x1.53ffa00f13806p-1009, 0.0, 0.0, 0.0, 0x1.788f2a89a7e0dp-799, 0.0, 0.0,
     0x1.2229ad7bdc33ep-867, 0x1.bc3a8b2a8a3b4p-899, 0.0, 0.0, 0x1.18c6fa96d2d13p-162,
     0.0, 0.0, 0x1.6af0488216dbbp-144, 0.0, 0x1.d310e4a4c4785p-317,
     0x1.7ae7de8e67b0bp-645, 0x1.1e9563f4746f7p-623, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1e68bb5caab92p-687, 0x1.e5164b6744806p-52, 0x1.e835e05ef3b37p-993, 0.0,
     0x1.c5d6f2970efe6p-244, 0x1.bc75b0a85e0d3p-875, 0.0, 0.0, 0.0,
     0x1.419d78ecd5bb4p-591, 0x1.047dcdcdda4f8p-450, 0x1.c3977fbf0e3f9p-439, 0.0,
     0x1.404291cda58fdp-816, 0.0, 0.0, 0x1.7312d0403d0a6p-138, 0.0,
     0x1.a8f6ced9a5e51p-126, 0.0, 0.0, 0x1.11d13fb2b1c4bp-422, 0.0, 0.0, 0.0,
     0x1.a6ea37ad05df9p-361, 0x1.5617619efcd2ap-502, 0x1.76c977535eb37p-484, 0.0, 0.0,
     0.0, 0x1.c1fc070f14c77p-182, 0x1.7a55a09b1e89cp-641, 0x1.ead92185f070ap-417,
     0x1.ea0dc4e679362p-164, 0.0, 0.0, 0x1.95fef0baf812ep-455, 0x1.2f70208212d2ap-169,
     0x1.4251a88215f9ep-470, 0.0, 0.0, 0.0, 0.0, 0x1.f1d5bd5d0881cp-623,
     0x1.8c1518abca82bp-602, 0x1.970ca5b342d4p-707, 0x1.cd1e53c791299p-938, 0.0, 0.0,
     0x1.0ee62c9eef35bp-315, 0x1.0165274e6acbep-442, 0x1.0d6820fc5fa9bp-141, 0.0,
     0x1.2bdb1676f9f78p-737, 0x1.8c7ea9f14f9a1p-188, 0x1.26f4bd48ccc7p-56, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.8bf2f9714066dp-633, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c3145e0e94c3cp-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2820a4d21d6dcp-714,
     0x1.d326e04ea8663p-535, 0x1.d0ac41e3385bcp-676, 0.0, 0.0, 0.0,
     0x1.40b81b1d3d209p-768, 0x1.3e5210ec02adp-492, 0.0, 0x1.61184de4b2f1p-113,
     0x1.0762652eb8aecp-487, 0x1.06fc2250adbcep-388, 0x1.1dcb399c17995p-137, 0.0,
     0x1.ee949fb461975p-755, 0.0, 0x1.ff7e85e3133b4p-176, 0x1.223ad08629812p-963,
     0x1.4a219bdf08896p-956, 0x1.9409022686059p-502, 0x1.6abd41b38396fp-515,
     0x1.a090635009059p-734, 0.0, 0x1.6a9f3d227c5bap-887, 0.0, 0.0, 0.0,
     0x1.e65d13673d73cp-358, 0.0, 0x1.fb620b6b06bd7p-508, 0.0, 0.0,
     0x1.547b5bb460037p-960, 0x1.115b3337aaa1ep-580, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4f2ba2f1adcp-970, 0.0, 0.0, 0.0, 0x1.9aa19f3e48c2ep-123,
     0x1.c664d267f8fabp-788, 0x1.9eb7a365371eep-957, 0.0, 0.0, 0x1.82cb8800094bep-643,
     0.0, 0.0, 0.0, 0.0, 0x1.2ff29a358785bp-996, 0x1.348d34c07e78cp-222, 0.0, 0.0,
     0.0, 0.0, 0x1.da0c9cb8a3c28p-629, 0.0, 0x1.dc32ec87d38e8p-737, 0.0,
     0x1.7d32173ec538cp-31, 0x1.ac5505c7b2fc6p-209, 0.0, 0x1.9c83b876bab8bp-295, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17f35f55d58c4p-258, 0x1.7adac6b50c1a6p-928,
     0x1.c0da33719f444p-15, 0.0, 0.0, 0x1.4ace8f73c84b6p-975, 0x1.6285e7b05c53bp-360,
     0.0, 0x1.69de6725546bdp-17, 0x1.651ae75078cbbp-634, 0x1.d4b374309c682p-363, 0.0,
     0x1.46efc990a4737p-509, 0.0, 0x1.3b4857c9fa544p-772, 0.0, 0x1.6a92dcec17cc4p-270,
     0x1.671d2d4b825e6p-85, 0.0, 0.0, 0x1.f6762ff8ff90ep-33, 0x1.70d3e134dfc16p-363,
     0.0, 0.0, 0.0, 0x1.3447cea258bf7p-851, 0.0, 0.0, 0x1.03a2f6c62b2bcp-256, 0.0,
     0.0, 0.0, 0x1.5dd3f3733052p-805, 0x1.d8ae604f937d9p-331, 0.0, 0.0,
     0x1.f5173d38ff63ap-983, 0.0, 0.0, 0x1.d774b5565ce6ep-831, 0x1.05c5062a63222p-179,
     0.0, 0x1.3a96a61b6596p-553, 0x1.9ec3380e6db1ep-174, 0.0, 0x1.701c88610f869p-831,
     0x1.92c6cb7ea61cdp-970, 0x1.d9bce06629665p-503, 0.0, 0.0, 0x1.cd064066672f2p-609,
     0x1.0897004f1d0d3p-911, 0.0, 0.0, 0.0, 0x1.f89ee80d4b962p-25, 0.0, 0.0,
     0x1.a2894d1ca8139p-752, 0x1.3053ed5950628p-828, 0.0, 0.0, 0x1.2f6a4349f6c3ap-68,
     0.0, 0.0, 0.0, 0x1.81a361907d8cap-895, 0.0, 0.0, 0x1.3ca99dd8268bbp-296,
     0x1.959e4df6e0c5ap-405, 0.0, 0.0, 0x1.88a68b5ffec28p-540, 0x1.38435122719d3p-999,
     0.0, 0x1.425bb2763f77cp-863, 0.0, 0x1.31985caa7de73p-568, 0.0, 0.0,
     0x1.a802679184516p-567, 0x1.df4c2825dc307p-298, 0x1.f79d1a478b04bp-694, 0.0, 0.0,
     0.0, 0.0, 0x1.65d3649b0e5p-820, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.32da85d7e7ed6p-256,
     0.0, 0.0, 0x1.31518df62bfa9p-610, 0x1.74b4d832e2ebdp-814, 0.0, 0.0, 0.0, 0.0,
     0x1.8db6fc2059f9cp-372, 0.0, 0x1.088a1dd0f1dc3p-427, 0.0, 0.0,
     0x1.9c8b7bbb66032p-967, 0x1.b40f29766c104p-310, 0.0, 0x1.449a570289f0ap-646,
     0x1.c0a8caf974563p-910, 0x1.6050918dc4594p-784, 0x1.5b1db35c8ce7ap-197,
     0x1.0fdd93ac57477p-495, 0.0, 0.0, 0x1.da1c492d3d59p-505, 0.0,
     0x1.b90578d980312p-478, 0.0, 0x1.28ce92ba48773p-535, 0.0, 0.0, 0.0, 0.0,
     0x1.a3f76913fff43p-705, 0x1.5d8c2de2bb329p-366, 0x1.168df208772ffp-574, 0.0, 0.0,
     0.0, 0.0, 0x1.33426635660d8p-52, 0.0, 0x1.4712ed9ab9c8cp-723,
     0x1.999205ad2b691p-674, 0.0, 0x1.6b42873a15d03p-972, 0.0, 0x1.fffcb4646a026p-212,
     0x1.0b3bd7de1fedbp-18, 0.0, 0x1.fb05a7455d228p-680, 0.0, 0.0, 0.0,
     0x1.13bfea8e34727p-855, 0.0, 0x1.93ed206409b5cp-1007, 0x1.5fcaa8aef2e83p-677,
     0.0, 0x1.0daa19198d481p-798, 0.0, 0.0, 0x1.deb58e7e245ecp-241,
     0x1.f7299c9db4f37p-921, 0x1.66953977f79fp-40, 0x1.db0f1de6decf3p-242, 0.0,
     0x1.4ba49ebc9d51p-998, 0.0, 0.0, 0.0, 0.0, 0x1.0bae2fbe06586p-1006,
     0x1.95324dab5a2ap-112, 0x1.c36294d9f055ap-639, 0.0, 0.0, 0x1.cb9844cdfd655p-551,
     0x1.53f0354e906b8p-304, 0x1.bd69e3eb7ffb7p-739, 0x1.e00a123bb365p-970, 0.0,
     0x1.c4f69e4e4c4abp-273, 0.0, 0.0, 0.0, 0x1.f07ff9b3f5d29p-29, 0.0,
     0x1.c7734b657137ap-958, 0x1.56f88837db34dp-92, 0x1.0308c854c00e6p-544, 0.0,
     0x1.3f8566630918cp-453, 0.0, 0.0, 0x1.5921d8a3379e1p-801, 0.0,
     0x1.ccf5c38d4310ap-801, 0.0, 0x1.479c3f6edbc44p-148, 0x1.6d6154c78c4d4p-51,
     0x1.49e99fd43d117p-767, 0x1.8129975489972p-661, 0x1.4d57074e1a01ap-523,
     0x1.7e24f5bfece8bp-756, 0x1.6e569d106a25bp-195, 0x1.74210a7132824p-555,
     0x1.c36320466fc15p-168, 0x1.de497465a3ec6p-712, 0.0, 0.0, 0.0,
     0x1.4ce1943613795p-248, 0x1.808a81c0b10e2p-168, 0.0, 0.0, 0x1.a3c56067bdab6p-250,
     0.0, 0.0, 0.0, 0x1.889b6b633e4e2p-985, 0.0, 0.0, 0x1.bd3c99af833aap-349,
     0x1.f6598c6aed1a2p-867, 0x1.63f8e4e3595b3p-234, 0x1.7c2a4ecb946afp-99, 0.0, 0.0,
     0.0, 0.0, 0x1.accadcfba5f55p-634, 0x1.35d568676178cp-870, 0.0, 0.0, 0.0,
     0x1.2fa27743a9b04p-303, 0x1.d13eebe67174ep-49, 0x1.2d59ab9f9a63cp-542,
     0x1.1059e18cad0aap-23, 0.0, 0.0, 0.0, 0x1.ce4c3277dafbp-781,
     0x1.e5207ca8c286fp-951, 0.0, 0x1.9fc34b990531p-947, 0x1.485b0b8ebc388p-315,
     0x1.cf6247458d021p-522, 0x1.392cf99698333p-700, 0x1.df00ddb5b9167p-912, 0.0, 0.0,
     0.0, 0x1.7fc5b8527160ap-646, 0x1.36d3b651b8343p-118, 0x1.5b5e59039f423p-938, 0.0,
     0.0, 0x1.6f620ec2a055ep-749, 0x1.02775eabad945p-261, 0x1.97beecbfd4cc8p-377, 0.0,
     0x1.73b7178116a2bp-805, 0x1.e43170e6a5cd2p-372, 0x1.8c1c670249dedp-676,
     0x1.62620586e315bp-34, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9ad34fb256ee2p-968,
     0x1.80970e2ea3365p-330, 0x1.0b093cae861c3p-104, 0x1.0f9c96d71a0c7p-359, 0.0,
     0x1.b9d55f79cdaabp-74, 0.0, 0.0, 0x1.ddb2003c66086p-345, 0x1.1d2e842403897p-533,
     0x1.b87707d7b99d8p-833, 0.0, 0.0, 0x1.2eba7feca6299p-589, 0x1.1e4fd77f9c25fp-176,
     0.0, 0.0, 0x1.38b7d0497e284p-616, 0x1.5826521717b45p-1003, 0.0, 0.0,
     0x1.cec6f1ebe2a95p-247, 0.0, 0.0, 0x1.e01ebda9411p-998, 0x1.4352e2af780f5p-603,
     0x1.87cd4c81caa8ep-720, 0x1.04a8d855adbf5p-528, 0.0, 0x1.74e91ce311e28p-472, 0.0,
     0.0, 0.0, 0x1.ef192c415c738p-436, 0x1.5e1ba99e87b5ap-463, 0x1.71eee2f7c3d3fp-830,
     0.0, 0x1.c704dd792d7d4p-531, 0x1.6dd8fbd7a0296p-410, 0x1.4ce0c5b6c927cp-859,
     0x1.c0cb7ec8c3bbcp-34, 0x1.62d21c5bedc82p-9, 0x1.cdab0d888d0d9p-320,
     0x1.5603161662253p-475, 0x1.b95ba5493c8cap-658, 0x1.1b221fa341e4bp-728,
     0x1.f64d58ed33c4bp-187, 0.0, 0.0, 0x1.42b4fc48d336ap-305, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.37331332046e8p-740, 0x1.0390e300d84d1p-715, 0.0, 0x1.5a51c1982d4ffp-339,
     0x1.6accbf37988c1p-315, 0x1.39cdf10c44bbcp-525, 0x1.ecca3e0593a86p-486, 0.0,
     0x1.42ac8d8ae63a5p-944, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3cf7649e53bc8p-217,
     0x1.b60570042db51p-899, 0.0, 0.0, 0.0, 0x1.50b0e9632ab76p-507,
     0x1.eb1b0bd218ea4p-488, 0.0, 0x1.8ccc09c7dafd9p-683, 0x1.e2ded3cd3bb31p-645, 0.0,
     0x1.60f9515ee5f7cp-832, 0x1.701a40e2af53fp-550, 0.0, 0x1.d96db13fa470ap-160, 0.0,
     0x1.0f6129d6f1842p-101, 0x1.1f45ecc103c4dp-994, 0x1.c1353c4238bf7p-204,
     0x1.1fbc184708b62p-367, 0.0, 0x1.ed6fe55cd6f36p-778, 0x1.8b8be3f46f48bp-164, 0.0,
     0x1.84f375a8cab2dp-149, 0x1.b4a39a958e5cap-751, 0x1.59c59d75d1f19p-88, 0.0, 0.0,
     0.0, 0.0, 0x1.2882cf9c9010bp-542, 0.0, 0.0, 0.0, 0x1.d458a63474769p-303,
     0x1.c025151aa9db3p-16, 0.0, 0.0, 0.0, 0x1.f1ae2a1501a82p-385, 0.0,
     0x1.71e4a58886222p-119, 0x1.339930c53db37p-982, 0.0, 0x1.9d1cea47d7fabp-226,
     0x1.007fcb238506ep-852, 0x1.7e3690770fcdap-528, 0x1.01909b8b1a99ep-489, 0.0,
     0x1.066869f8125e6p-1010, 0x1.406ee75610f64p-852, 0x1.928d2b2d3a4e6p-738, 0.0,
     0.0, 0.0, 0x1.64b4d628a2e52p-804, 0x1.7b3833e823fdbp-164, 0x1.6fdd2c5221b65p-134,
     0x1.b77013c8a94fep-333, 0.0, 0.0, 0x1.588799247485dp-47, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.74fd64da9ab48p-237, 0.0, 0.0, 0x1.9b4c188f7b4cep-422, 0.0, 0.0,
     0x1.1363cd6308695p-607, 0.0, 0x1.a10194ebca459p-325, 0x1.47b199ccab02bp-883, 0.0,
     0x1.400c4638e9ec3p-501, 0x1.bd416a6f0bdd9p-984, 0x1.7dce300deca5fp-690,
     0x1.8b4e95efa6e8fp-614, 0x1.f655eed7199f8p-779, 0.0, 0x1.07332241549dcp-785,
     0x1.a9e279407f97cp-504, 0.0, 0x1.26dc35bd504d8p-412, 0x1.c50401715d891p-474,
     0x1.c734495c84a04p-940, 0x1.73650a996a538p-658, 0.0, 0.0, 0x1.090f8d6919b5cp-660,
     0.0, 0.0, 0.0, 0.0, 0x1.b8cb1210ac17bp-109, 0x1.755c9edfe6a71p-186, 0.0,
     0x1.7da268ab43675p-346, 0x1.27853a0533d18p-312, 0.0, 0x1.4ee576590853p-885, 0.0,
     0.0, 0.0, 0.0, 0x1.a4173ccdcac2dp-948, 0.0, 0.0, 0x1.ffc5a23b89caep-275, 0.0,
     0.0, 0.0, 0.0, 0x1.75e0b51c611fdp-399, 0.0, 0x1.85c8aec5912f5p-391,
     0x1.13626d6f55a89p-392, 0.0, 0.0, 0.0, 0x1.7eeae02389b18p-479,
     0x1.9b1fa114a7bbdp-461, 0.0, 0x1.6b4f142c0d7ffp-226, 0.0, 0.0,
     0x1.24432de178ec6p-592, 0.0, 0.0, 0x1.9612869a9b7d3p-168, 0.0, 0.0, 0.0,
     0x1.a99d63b3ca7c9p-897, 0.0, 0.0, 0.0, 0x1.8e237b964b495p-926, 0.0,
     0x1.0ce35b8775425p-45, 0.0, 0x1.d69fbe261436ep-237, 0x1.09f04393c23dcp-207,
     0x1.aa6d31dae44bp-852, 0x1.5f64a9582c84ep-113, 0.0, 0x1.de0951bf85711p-756, 0.0,
     0x1.bf82b364181e8p-941, 0x1.de63c1268b26fp-669, 0.0, 0.0,
     0x1.4aade15b0b1cep-1020, 0x1.003584b4dd95dp-661, 0x1.31940e9a8662ap-591, 0.0,
     0.0, 0x1.011fe94398ecbp-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca823a860040dp-646,
     0.0, 0.0, 0.0, 0x1.8bcefdd569cc2p-383, 0.0, 0x1.b6c3f4cb6f40ap-69,
     0x1.30cba54de096ep-507, 0x1.9adb528f30352p-428, 0x1.b14c85c2295d5p-654,
     0x1.c3e65896388fdp-869, 0x1.60d93436c5b6p-846, 0x1.c3c36139cd73ep-960,
     0x1.d1c06490be504p-691, 0.0, 0.0, 0x1.bbb154c604c03p-592, 0x1.340a3dba0a307p-877,
     0.0, 0x1.5a5dd428e1c6bp-238, 0x1.ef76196bab24p-72, 0x1.641be0395857cp-477,
     0x1.3f15b5e0040e1p-466, 0.0, 0.0, 0x1.784704a6aaa24p-353, 0x1.4fb000847d4b5p-898,
     0x1.961c0d569a129p-1009, 0.0, 0x1.8e8403ea6e092p-842, 0x1.edc86e0bb809dp-966,
     0.0, 0.0, 0.0, 0x1.a884274159bb3p-722, 0x1.917bd74ff9f29p-118,
     0x1.3fd1abe2e431fp-390, 0.0, 0.0, 0x1.91576a9dca5fbp-576, 0.0, 0.0, 0.0,
     0x1.d448ff7959291p-636, 0x1.d4f81f3d414a9p-800, 0.0, 0x1.922b8a773a627p-78, 0.0,
     0.0, 0x1.09f4de0ac8924p-116, 0x1.5cb1f4a2d433ep-859, 0.0, 0.0, 0.0,
     0x1.913a9aa32acd2p-744
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_frfrexpd2_kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_frfrexpd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
