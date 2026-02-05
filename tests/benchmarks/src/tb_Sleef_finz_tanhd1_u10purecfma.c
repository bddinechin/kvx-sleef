/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_tanhd1_u10purecfma.c --function \
 *     Sleef_finz_tanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.2a412beba0e1fp-509, 0x1.c6653e7ec671p-914, 0x1.97c5a1f69a6e3p-518, 0.0, 0.0,
     0x1.a1542df66aff7p-235, 0.0, 0x1.7804ef13e8089p-478, 0x1.e37035d1cbc1dp-533,
     0x1.67ad1f41735aep-18, 0.0, 0x1.e3366eeb9679ep-891, 0x1.f6c77c6d3b809p-658,
     0x1.64df759e97489p-85, 0x1.20e770ecd9a28p-656, 0x1.8d0d1bb30440ep-309, 0.0, 0.0,
     0x1.18f8a9e3def47p-609, 0x1.c3e040c0a6781p-765, 0.0, 0x1.5fbbe4ffba2ebp-719, 0.0,
     0x1.9a09baf168231p-600, 0.0, 0x1.9b87378b2f056p-788, 0.0, 0.0, 0.0,
     0x1.056723e0c596bp-52, 0.0, 0x1.5bd7d3693b2d1p-465, 0.0, 0.0,
     0x1.5fb2af94bd323p-58, 0x1.83aac4102a981p-500, 0.0, 0x1.fe85f37ab93aap-253,
     0x1.c7feb7cf34fffp-401, 0.0, 0x1.1cbd9ff1b50bep-962, 0.0, 0.0,
     0x1.3252746915089p-904, 0.0, 0.0, 0x1.d2cacadbc71fbp-676, 0.0, 0.0, 0.0,
     0x1.dcccbfb292fa7p-293, 0.0, 0x1.cb4ce85c3331p-684, 0x1.ae8db120b5729p-452,
     0x1.f37d3c6692094p-1020, 0x1.138eb92b7ac9p-840, 0.0, 0x1.72376f610331p-336, 0.0,
     0.0, 0x1.220a90add3b89p-816, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5bc4f6a379c37p-503, 0x1.71d5249aa851fp-153, 0.0, 0x1.32db3422764fdp-775, 0.0,
     0x1.4b25254b99a6fp-950, 0x1.e130952289feep-954, 0.0, 0x1.350bf0f501a09p-418, 0.0,
     0.0, 0x1.8ca69c8f574a9p-236, 0x1.69e0678e3115cp-181, 0.0, 0.0,
     0x1.2fac53e27b8b9p-859, 0x1.d01e2239ce5c1p-558, 0.0, 0.0, 0.0,
     0x1.cbabab63215f2p-664, 0.0, 0x1.80aa42722628p-759, 0.0, 0x1.65117cbe6c0eep-278,
     0x1.c3b9fa21379ccp-169, 0.0, 0.0, 0x1.e61113754fef3p-172, 0x1.3d18da32a97fbp-857,
     0x1.c64348e45ba67p-601, 0x1.9371133b8593fp-142, 0.0, 0x1.a2e754ae02773p-697, 0.0,
     0.0, 0.0, 0x1.aa64a025629f8p-387, 0x1.fdd21b7de50d8p-951, 0x1.4d825caf69763p-411,
     0x1.743b7d32342a9p-101, 0.0, 0x1.69eda700317fdp-719, 0x1.45547edc37553p-340,
     0x1.293b34cddd439p-56, 0.0, 0x1.38faa1d31b41bp-573, 0x1.9de2bd6a74247p-628,
     0x1.0b2a21ffadf03p-481, 0x1.ec24bca0b62e5p-573, 0x1.483d0dc96747cp-240, 0.0,
     0x1.9ea52a2d27578p-583, 0.0, 0x1.f7784eddfd9fcp-674, 0.0, 0.0,
     0x1.e6556bd0f9a1ap-545, 0x1.d59e4ea525899p-86, 0.0, 0.0, 0.0,
     0x1.f33c8f980ad44p-101, 0.0, 0x1.e9a387b481ed1p-679, 0.0, 0.0,
     0x1.45f3bd49252f8p-927, 0.0, 0.0, 0x1.4c04219023dc4p-107, 0.0, 0.0,
     0x1.20abacb3acf38p-296, 0x1.7a70499076ed8p-333, 0x1.83c2dec3b729ap-687, 0.0,
     0x1.7b5e3e4616d09p-216, 0x1.1a0b987ffb3afp-627, 0x1.ad0406134b3e1p-846,
     0x1.28865483555c4p-564, 0.0, 0.0, 0x1.35f7a526bdb95p-257, 0.0,
     0x1.3368d58fa8c01p-102, 0x1.d4271badf2e5cp-154, 0x1.b75c5289a8c6fp-605, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.6dd7aa203b86ap-606, 0.0, 0x1.900d709546214p-88,
     0x1.4ceba69dffb48p-917, 0.0, 0.0, 0x1.8d3dd592e24c5p-499, 0x1.8c73ad66361e1p-305,
     0.0, 0x1.743e6744f4587p-822, 0x1.d7fa772c8487ap-911, 0x1.c0d31bd766ee9p-207, 0.0,
     0x1.84f14ae393cfp-432, 0x1.091128d088c65p-429, 0x1.3464d75e27c4ap-846, 0.0, 0.0,
     0.0, 0.0, 0x1.af13d67b9e161p-954, 0x1.d4ed8b734f0a4p-298, 0x1.32142ff7f8928p-931,
     0.0, 0x1.02b03fb9a7633p-1000, 0x1.900ac0a56dfdap-74, 0.0, 0x1.dcf090fe68ee2p-985,
     0x1.b3a272e2baa0dp-503, 0x1.613b46d22c0bbp-948, 0.0, 0x1.5ab29deab2f46p-76, 0.0,
     0x1.e979ff0d98c46p-419, 0.0, 0.0, 0.0, 0x1.f2a4a719a94a4p-805, 0.0, 0.0,
     0x1.a6c7f9da4d041p-932, 0.0, 0x1.6ef815d0ca7d3p-883, 0.0, 0.0, 0.0,
     0x1.224151d8745aap-351, 0.0, 0.0, 0.0, 0.0, 0x1.47f3c22e5072dp-831, 0.0, 0.0,
     0.0, 0.0, 0x1.6f2aac8b98f43p-898, 0.0, 0x1.c7a2e8ac4d29p-824, 0.0,
     0x1.dfaa1306d397fp-631, 0x1.94eefe91687ap-176, 0x1.03066911b3bbdp-545,
     0x1.6b702e8bd2441p-458, 0.0, 0.0, 0x1.b3fdfb725325cp-411, 0.0,
     0x1.25978b258bc9ap-91, 0x1.0c517d55123cbp-772, 0x1.c255de784a1bep-659,
     0x1.704c445064578p-198, 0.0, 0x1.72848eb806ef4p-45, 0.0, 0x1.acfe3d9fd2a87p-676,
     0x1.e5fb41b687cc5p-873, 0.0, 0.0, 0x1.655ad8c303f9p-786, 0.0,
     0x1.ccf6b602463b2p-417, 0.0, 0.0, 0x1.a43f636b0d874p-307, 0x1.c33ed4a0be524p-870,
     0x1.6a8d640b39ea4p-153, 0x1.8178c387bdc9ep-651, 0x1.eb72f4a8b0302p-116,
     0x1.87174862a7e02p-664, 0x1.a79736016f222p-660, 0x1.85bb4350e2969p-358, 0.0, 0.0,
     0.0, 0.0, 0x1.5159993474a29p-128, 0x1.f12b05f377f5ap-151, 0x1.09f5d16a881d2p-797,
     0x1.1a9515336c71bp-661, 0.0, 0x1.9a0e526265a4dp-941, 0x1.bc99836ed23cbp-193, 0.0,
     0.0, 0x1.889dac4713b87p-768, 0x1.729c0fdc4ceaep-974, 0.0,
     0x1.8b2d1088d4b27p-1020, 0x1.56371d66cc4bdp-880, 0x1.d6cc3b40ba3a9p-433,
     0x1.851ecda0c7c8fp-870, 0x1.36b592c60989bp-5, 0x1.cd84dac3e8a05p-358,
     0x1.753f68d097813p-918, 0.0, 0x1.ef7ae6f048d34p-488, 0.0, 0x1.993cf3bb9ada6p-754,
     0x1.cd0f0eee7166ep-65, 0.0, 0x1.056101d22ae9ep-464, 0x1.7db0112094a7p-182, 0.0,
     0x1.1f9ac3de6d8efp-508, 0.0, 0.0, 0x1.aaf074f7fdf43p-590, 0x1.45ba609e33cb1p-92,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f91611f6f3b97p-341, 0.0, 0x1.6f2feaaa17a73p-956,
     0x1.103fdcba55082p-407, 0.0, 0x1.e5209d4f0bea7p-297, 0.0, 0.0, 0.0,
     0x1.c9ff63872961p-86, 0x1.1147de532c0bep-968, 0x1.8154d18b93974p-96, 0.0, 0.0,
     0.0, 0x1.5b90d10aa7ce8p-48, 0x1.8c4d49e09c5c1p-17, 0x1.3009a5fe1df8bp-462,
     0x1.726edc165d999p-322, 0x1.b4ea18cd6dfd4p-739, 0x1.d2ecaa6bb8257p-25,
     0x1.0cc5911981159p-33, 0.0, 0x1.f985c3ec07737p-411, 0.0, 0x1.00e2111e169d7p-630,
     0.0, 0.0, 0x1.c8154b4c4a7a5p-416, 0x1.94f68ae83b172p-182, 0.0, 0.0, 0.0,
     0x1.0e7d102d99147p-1016, 0.0, 0x1.058a71e475ee1p-646, 0.0, 0.0,
     0x1.40eca083b9c98p-760, 0.0, 0.0, 0x1.9606adcd619adp-681, 0x1.198433f4d22c6p-212,
     0x1.c452f57f2f55fp-291, 0x1.3821087b4350dp-409, 0x1.a11f8510f64a7p-28,
     0x1.b394c7b1beb89p-1012, 0.0, 0.0, 0.0, 0.0, 0x1.30430c2367e9ep-37, 0.0, 0.0,
     0x1.0caebfab79b04p-767, 0x1.57488ff5523b9p-930, 0.0, 0x1.b1429371e4de4p-163, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.53dc5b3282fb9p-386, 0.0, 0x1.2119ee659850fp-630,
     0x1.9a728d83d4cd3p-846, 0x1.4c4d2f1204129p-319, 0x1.9f9240eb28c94p-894,
     0x1.4396269ec4dep-321, 0.0, 0.0, 0x1.962bd4cd14abcp-691, 0x1.eab47028d2cfdp-741,
     0.0, 0.0, 0.0, 0.0, 0x1.3c94ee3492e65p-387, 0x1.be5548cad878bp-58,
     0x1.f8b985cbb81fep-580, 0x1.c3b4a6cbaa53ap-416, 0.0, 0x1.3850e0e35bdfcp-496, 0.0,
     0.0, 0x1.4da8743c2c078p-947, 0x1.344cf1f107e75p-77, 0x1.5dc16104f1c4fp-515, 0.0,
     0.0, 0.0, 0x1.a72306c1b4fadp-316, 0x1.2d66a20619d43p-891, 0x1.3388d33bd37a7p-559,
     0x1.0a0e5bbc2e8e7p-634, 0.0, 0.0, 0x1.bd6d23ac96398p-494, 0.0,
     0x1.90f7d40473bf9p-905, 0.0, 0x1.0990223638f37p-281, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fae37652a3f56p-530, 0x1.3686caf7256fdp-311, 0x1.63050ca360093p-439, 0.0, 0.0,
     0x1.d39bc54536705p-185, 0.0, 0x1.7c202c76a2d71p-160, 0.0, 0x1.18255bc62d735p-316,
     0.0, 0x1.c6437a5c0eea9p-489, 0x1.dce36716e9b91p-288, 0x1.2fe8acad503e9p-201,
     0x1.072616e1bbd39p-316, 0x1.b941dd6153b86p-158, 0x1.5f1710d326416p-204,
     0x1.fc34fd601458dp-395, 0x1.2e60549ab9f86p-107, 0.0, 0.0, 0x1.b315ae9b3c608p-444,
     0.0, 0.0, 0x1.ef087f1a7a7e1p-224, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e58ab71f1cd08p-426, 0.0, 0.0, 0x1.84f4a0c8a81adp-850, 0.0, 0.0,
     0x1.fed8578c46ceep-308, 0x1.fd1f2c1af9c39p-260, 0.0, 0x1.017e00a44712cp-390,
     0x1.75856081e8625p-345, 0x1.5b434872deb96p-430, 0.0, 0x1.b18ab895bc9b1p-566,
     0x1.c8cf75b0342d9p-93, 0x1.a4f55a2ce1e5ap-222, 0.0, 0x1.0c9334a2485fbp-465, 0.0,
     0.0, 0x1.89039947ed9a3p-535, 0x1.39ecd6831c871p-228, 0.0, 0.0,
     0x1.ae824c6fa95e1p-177, 0x1.13a0bfe12bfdep-542, 0.0, 0x1.5ea08429c3fa7p-358, 0.0,
     0.0, 0.0, 0x1.20670ecc55293p-547, 0.0, 0x1.c58a6d3924b88p-947, 0.0, 0.0, 0.0,
     0x1.6d584b9334cd2p-484, 0x1.1ba46dd100c7bp-992, 0.0, 0x1.b921415aecb6bp-1016,
     0x1.fa8bf0916ab1dp-261, 0x1.0e43229abf086p-210, 0.0, 0x1.caf02f009e2ep-711,
     0x1.efae938dbce83p-74, 0x1.3e38992a8ecb6p-348, 0x1.9234c1d6c4687p-242, 0.0,
     0x1.67456b81180a3p-696, 0x1.89c46486a630cp-183, 0x1.42f30315c78f6p-417, 0.0,
     0x1.bf4a1378910eap-79, 0x1.00f4adfdbc4b8p-295, 0x1.b9ac2734cdaecp-766,
     0x1.6bfade28643e9p-982, 0x1.a6db3a996f38p-164, 0x1.6f16a26526e0cp-300, 0.0, 0.0,
     0x1.7868b70d1c7bbp-468, 0x1.216bdbbde56a4p-598, 0x1.2d6d7e98ce33ep-494, 0.0,
     0x1.48f0954bd5d79p-128, 0x1.c8342b29109cdp-110, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d79dc0b9f90a6p-26, 0.0, 0.0, 0x1.16952cb696b46p-574, 0.0,
     0x1.7f2d0e04f1e42p-612, 0.0, 0.0, 0.0, 0.0, 0x1.81343c6684f6ap-830,
     0x1.b62a913cac49bp-314, 0.0, 0x1.36c7c33a992cbp-86, 0.0, 0.0, 0.0,
     0x1.394d85cc70caep-497, 0.0, 0.0, 0.0, 0x1.641ec09cb0162p-961,
     0x1.93a275b143df4p-906, 0x1.91adde32a9264p-871, 0.0, 0.0, 0.0,
     0x1.7204ca4950e9ap-899, 0.0, 0.0, 0.0, 0x1.ccfddb550f148p-808,
     0x1.9223d1f484c8bp-1012, 0x1.105715ebbc63cp-900, 0x1.77e86f62120a3p-554, 0.0,
     0.0, 0x1.d0ef497c0218ap-91, 0.0, 0.0, 0.0, 0.0, 0x1.1e7df0e6d8dep-528,
     0x1.ccb400a366bedp-903, 0x1.c7557464870ccp-845, 0.0, 0.0, 0x1.e8f6471e02353p-149,
     0.0, 0x1.5a45d858a4639p-954, 0.0, 0.0, 0.0, 0x1.ef01716aa8e41p-424, 0x1p0,
     0x1.af7807a2cdp-627, 0.0, 0x1.2bd4ef070b7f6p-884, 0x1.d827e2a4b8906p-491, 0.0,
     0x1.06276feba52ddp-616, 0x1.fc2679e643b13p-849, 0x1.ee48bc8c302e3p-351, 0.0, 0.0,
     0x1.0d46a094d665fp-209, 0x1.862886fe4dd06p-360, 0x1.bbaa89cde2846p-891, 0.0, 0.0,
     0x1.e4caf235d9e5ap-259, 0.0, 0.0, 0x1.4c8151b909892p-900, 0x1.1183a59103b1ap-722,
     0x1.7ff5a9cdca832p-155, 0.0, 0.0, 0x1.4ea3110056b55p-940, 0x1.99a24244b4ccbp-765,
     0x1.a5b48b5fce204p-925, 0x1.9400cd59e3486p-573, 0.0, 0.0, 0x1.bed2294d6ffd4p-792,
     0.0, 0.0, 0x1.d6257bd77805p-845, 0.0, 0x1.d373fc9be372bp-532,
     0x1.45b9ac70da421p-723, 0x1.79b57b591d03p-767, 0.0, 0x1.35c244a99c8bp-1019, 0.0,
     0.0, 0x1.28bd98300a333p-24, 0x1.04042ba757f05p-288, 0x1.36496bdf527a1p-552, 0.0,
     0x1.f3bc021d3c9e7p-720, 0x1.c5f7fce8a7e12p-16, 0x1.759c524d12b9fp-830, 0.0,
     0x1.e46781ed04a2cp-270, 0.0, 0x1.2fda471ea2d12p-987, 0x1.345607836ddfdp-885, 0.0,
     0x1.55489ac35d5a7p-227, 0x1.d5b4349c95072p-189, 0.0, 0.0, 0x1.0c1b21889e645p-270,
     0.0, 0.0, 0.0, 0x1.8746a140011abp-102, 0x1.b6e3482d39daep-774,
     0x1.ccaa7e2cd0406p-448, 0.0, 0x1.aea00ebd3737dp-858, 0x1.4e1235a53903ap-211, 0.0,
     0x1.1f7b72c5c49f2p-84, 0.0, 0x1.8883248ac2854p-306, 0x1.5aeb8a6b647c4p-45,
     0x1.018587d3ae9f1p-112, 0.0, 0.0, 0.0, 0.0, 0x1.b83b976ae4a1cp-1022,
     0x1.d487ac8eecf4ep-481, 0x1.008d6cb1a594dp-269, 0.0, 0.0, 0.0,
     0x1.6eadd46c8bbf5p-852, 0x1.657eee5ee983dp-460, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.62420940be386p-692, 0.0, 0.0, 0x1.235a5c4368f5bp-459, 0.0, 0.0,
     0x1.367a59cd2fdafp-528, 0.0, 0.0, 0.0, 0x1.0e8efb67b7f27p-820, 0.0, 0.0,
     0x1.0145cf842a08p-894, 0.0, 0x1.30ecba36de609p-503, 0.0, 0x1.cf5df08ef553cp-150,
     0.0, 0x1.046db2b68512bp-706, 0x1.d3e4aaebe0777p-496, 0x1.bc95a0d6996a6p-38, 0.0,
     0x1.a5804ffc906dbp-683, 0x1.b62031bd2526cp-948, 0.0, 0.0, 0x1.e144ed09f113cp-457,
     0x1.b61f5be4f4091p-990, 0.0, 0x1.8c89e5af69075p-213, 0x1.64be81f2f6ec9p-185,
     0x1.ef905dfd2181dp-843, 0x1.11ff78b5949a5p-163, 0.0, 0x1.a15005a94f669p-904, 0.0,
     0.0, 0x1.e2de00e88c88ap-822, 0x1.1b97a5235271dp-256, 0.0, 0.0, 0.0, 0.0,
     0x1.b7fb9f9da9ccep-248, 0.0, 0.0, 0x1.b9d0338492345p-204, 0x1.f5576fd9f3175p-753,
     0.0, 0x1.c2dcb4103cf35p-592, 0x1.8e3aa7a1f1e4dp-391, 0.0, 0.0,
     0x1.32d70c70c8d01p-110, 0.0, 0.0, 0x1.5cfae22c25b77p-610, 0x1.319663115d674p-155,
     0x1.d6fa86984201ap-451, 0x1.9509179a2ee09p-894, 0x1.90c1f9492ac94p-853, 0.0,
     0x1.0c72e6b511aebp-426, 0x1.f023589aee5bdp-640, 0.0, 0x1.341200d32ad0cp-941, 0.0,
     0x1.bd7ce2347e718p-602, 0.0, 0x1.0c20e2022dc05p-461, 0x1.0cbd774a08bb9p-668,
     0x1.edb197c2e0fdbp-240, 0.0, 0.0, 0.0, 0x1.5b2af782c0602p-257,
     0x1.a318e3fe0d1e7p-332, 0.0, 0.0, 0x1.81378c6260b62p-217, 0.0, 0.0,
     0x1.b4b20f6ad9f7dp-643, 0x1.eeca33d18c6e7p-17, 0.0, 0x1.03695784d1949p-305,
     0x1.9ad2d91e19bcap-664, 0x1.c69e21e15231p-860, 0.0, 0x1.bfcb792cc9ccap-788,
     0x1.5856c5412b5dcp-379, 0.0, 0x1.e8aae8f0d31cdp-378, 0x1.563d0b0d62de5p-932,
     0x1.1964b214649aep-498, 0x1.9a08db1d9df3cp-529, 0.0, 0x1.923024def312ep-41, 0.0,
     0x1.7193608d3c138p-762, 0x1.ff772663b39a5p-946, 0x1.934c12b5bdd3ap-169,
     0x1.6fea147754dd5p-1011, 0.0, 0.0, 0.0, 0x1.6c5dbe9a8e0a9p-967,
     0x1.8210147b7ef75p-805, 0.0, 0x1.f8c2a0b6d1a3dp-355, 0x1.ee5f8ef58e52ep-47, 0.0,
     0.0, 0x1.e3eeedbbbda9cp-333, 0.0, 0x1.b1606e14fefb8p-899, 0x1.4ddeb1956df05p-446,
     0x1.d3ab4541a81e7p-981, 0x1.2914e06d1a173p-905, 0x1.c2d69a8cfb5e9p-863,
     0x1.b8584eccea38ap-971, 0x1.813941ad421b2p-44, 0x1.47f072fa965dcp-795, 0.0,
     0x1.2ed770831b69ep-115, 0.0, 0x1.34597fcb49e01p-353, 0x1.0d60297857c59p-761,
     0x1.00078ca19a0d8p-436, 0x1.e8223d9bd9767p-568, 0.0, 0.0, 0x1.f33a5a7c99ep-465,
     0.0, 0x1.724ec898e1d49p-270, 0.0, 0.0, 0x1.fa4ec77ba517p-521,
     0x1.f58901ba23d5ap-749, 0x1.5a6e548d8e5f8p-156, 0.0, 0x1.3593055fe173ep-123,
     0x1.dd1b33fa79d19p-529, 0.0, 0.0, 0.0, 0.0, 0x1.669af115b8e85p-700, 0.0,
     0x1.29938240f4f43p-65, 0x1.996a9128ca4c2p-591, 0.0, 0.0, 0x1.1f6661abaced5p-174,
     0.0, 0x1.558f5b407928ep-874, 0x1.16c5b25a32c89p-322, 0x1.c66cf2a0dd1b9p-298,
     0x1.e12b4ce60918dp-839, 0x1.7a0f6b5a992d2p-318, 0.0, 0.0, 0.0,
     0x1.0c161f646355ep-40, 0.0, 0x1.cec1d6221d60dp-378, 0x1.fa7208e043e5p-245,
     0x1.5e1e2e6137408p-271, 0.0, 0x1.46459c59bb72p-796, 0x1.21c32767cf25ap-363, 0.0,
     0x1.b9e2a27b655d5p-265, 0x1.99bc8899dde44p-376, 0.0, 0x1.c64feab45dd3ep-156, 0.0,
     0x1.b886ca9047cecp-349, 0x1.6689a7393d877p-163, 0x1.db941e71a3489p-30, 0.0, 0.0,
     0.0, 0x1.652b8339c906bp-231, 0x1.14cacbb34c0a5p-450, 0x1.0b0a1f3dac47ap-12, 0.0,
     0.0, 0x1.4ccc99c84b2c7p-256, 0.0, 0x1.7414c1dacac8p-12, 0x1.3ab80315dc93ap-557,
     0.0, 0.0, 0x1.6c0e101accdc7p-976, 0x1.f17d31be6c612p-215, 0.0,
     0x1.67c55e0c50b54p-773, 0.0, 0x1.c6f0ace2b46acp-623, 0.0, 0.0, 0.0,
     0x1.157bbd291add4p-933, 0.0, 0.0, 0x1.273a6d21c4ef2p-783, 0x1.1127b9965284bp-1,
     0.0, 0.0, 0x1.24c65bd31857ap-886, 0x1.3ee4839283fabp-935, 0x1.e79f994aae376p-769,
     0.0, 0x1.f8055a570a41cp-437, 0.0, 0x1.43ebd9155e764p-275, 0.0, 0.0,
     0x1.2f66df1df4b2cp-527, 0.0, 0.0, 0x1.50a2a88969bd9p-812, 0x1.e423af6fb518dp-665,
     0.0, 0x1.c92f6f59b34ap-22, 0.0, 0x1.a546700ea4748p-326, 0x1.c56c891b2d016p-824,
     0.0, 0.0, 0.0, 0x1.7b9f82dcd8a8bp-159, 0.0, 0.0, 0.0, 0x1.a4df1d9f4491bp-654,
     0.0, 0x1.727c28d047c99p-194, 0x1.cf84bf8123896p-166, 0x1.b692181817261p-568,
     0x1.01ec98412410bp-763, 0x1.0231b5185e4e4p-559, 0.0, 0x1.5f8bae59362bep-657, 0.0,
     0x1.a093174a8b361p-111, 0.0, 0.0, 0.0, 0x1.a0afe84d9b1fp-508, 0.0, 0.0,
     0x1.8d6b55d328695p-484, 0.0, 0x1.76cc629be86f2p-981, 0x1.b441f628d186bp-850,
     0x1.cb81e2198bd4cp-832, 0x1.1a6ed13694269p-452, 0x1.7a76fd9414334p-124,
     0x1.984c030afd596p-693, 0x1.8a9b167ce7543p-453, 0.0, 0x1.2378b480f95a7p-251, 0.0,
     0.0, 0x1.876333662096dp-955, 0.0, 0.0, 0.0, 0x1.4018440d7b3b5p-80,
     0x1.5ea2bd66cdfe5p-941, 0x1.e621377f87a58p-73, 0x1.a865081dd2143p-862,
     0x1.6f158aa8af7d4p-623, 0x1.abf91323e9ef3p-650, 0x1.9bbe2ce958861p-969, 0.0,
     0x1.667e70a91d0d5p-755, 0.0, 0x1.34ed578ff2df3p-378, 0.0, 0x1.2b539c7387ba5p-692,
     0x1.2e5f8654a69f6p-604, 0x1.3a66a9b1cab76p-77, 0.0, 0.0, 0.0,
     0x1.896e66d5fbee3p-280, 0.0, 0.0, 0.0, 0.0, 0x1.566b39cc5539cp-280,
     0x1.1a899685d3039p-719, 0.0, 0x1.80d0932e00a7cp-796, 0.0, 0x1.759b102cbf9d6p-192,
     0.0, 0x1.70f4756fb1b82p-701, 0x1.34a4e98e4aff2p-461, 0x1.073fe04d0b7d5p-254,
     0x1.9719fd25bb21ap-916, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.61fe89e22e4fcp-703,
     0x1.f9a63ff1c7b44p-14, 0x1.50941bbcf0142p-638, 0x1.b3f26e9b469c8p-555, 0.0, 0.0,
     0x1.4758dadf0b972p-693, 0.0, 0x1.d8d2ded53f8c3p-635, 0x1.ae964b4b748ebp-1003,
     0x1.80874cc22d02bp-556, 0.0, 0.0, 0x1.8d43c56c94e73p-446, 0x1.e0c7e8dce9c59p-945,
     0.0, 0.0, 0.0, 0.0, 0x1.d55b97e0b47b9p-708, 0x1.e52342e6a450bp-190,
     0x1.b09f6d6b7f41p-646, 0x1.b3bdf26e44113p-887, 0.0, 0.0, 0.0,
     0x1.18166f1f22f72p-818, 0x1.b000f613afa99p-182, 0x1.f68129410cd38p-964, 0.0,
     0x1.9c036d971e76ap-220, 0.0, 0.0, 0x1.2e8cc623e16e9p-449, 0x1.3c0f826202abcp-936,
     0.0, 0x1.7d1f24f566e43p-844, 0.0, 0x1.6f951ad2a89c3p-213
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
            tmp1 = Sleef_finz_tanhd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_tanhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_tanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
