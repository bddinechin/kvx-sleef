/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_expm1d1_u10purecfma.c --function \
 *     Sleef_finz_expm1d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.2108d8216087ap-353, 0.0, 0x1.07d1186d9557p-826, 0.0, 0.0,
     0x1.031023301a3dep-347, 0.0, 0x1.d2a99ccdedc87p-208, 0x1.dd34a2e6809cbp-98, 0.0,
     0x1.d604266eeb892p-634, 0x1.4f86d20f91ef4p-835, 0.0, 0.0, 0.0,
     0x1.42d1d09c0549bp-186, 0.0, 0x1.75c7b0bf90178p-849, 0.0, 0.0,
     0x1.55a35eea9b4c4p-764, 0x1.666a5741d3824p-772, 0x1.ab8b24afe0569p-1020,
     0x1.f1fd4695038bfp-228, 0x1.c691ed3bc1a1cp-74, 0.0, 0.0, 0.0,
     0x1.b7af3480f4685p-280, 0x1.1185506be5d48p-297, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c2a2c241a3202p-392, 0.0, 0x1.c8516ce182dd6p-327, 0.0, 0x1.fa148dc95f438p-787,
     0.0, 0x1.33605655cf69ep-890, 0.0, 0x1.3be171dd00781p-662, 0.0,
     0x1.e065e190e8e48p-394, 0x1.5acdb8a4a6ebep-867, 0x1.f1f08d4c4f0dfp-192, 0.0, 0.0,
     0x1.2202b702e7b4cp-403, 0.0, 0.0, 0x1.7f0ce706d557fp-764, 0.0, 0.0, 0.0,
     0x1.6738c5b2809f4p-447, 0.0, 0.0, 0.0, 0x1.6bd77f5635d3cp-825,
     0x1.eb43fdadfdec6p-355, 0x1.4ef8fab114e05p-655, 0x1.870d4cd4ae657p-507,
     0x1.75bf633c56498p-886, 0.0, 0.0, 0x1.7a5a15fd4c6a2p-60, 0x1.7e87a9df23e1p-401,
     0.0, 0x1.af54b2bdf6c99p-787, 0.0, 0.0, 0x1.9d2b1be7cdea9p-705, 0.0, 0.0, 0.0,
     0x1.2480ef355bc76p-335, 0.0, 0x1.72579f64cf5aap-618, 0.0, 0x1.4faab9084caep-876,
     0.0, 0x1.59a56638caad9p-225, 0x1.d9f21c17cf5bap-409, 0.0, 0x1.c5d9886f54218p-152,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae00424f62de9p-483, 0.0, 0x1.cddfe4fa82419p-333,
     0.0, 0.0, 0x1.78a1bb2604a19p-523, 0x1.3b9434100ae46p-7, 0.0,
     0x1.fcf2a1395b47ap-59, 0.0, 0x1.c570a1bdbb65cp-417, 0.0, 0x1.09dab69103f2ep-450,
     0x1.49ef3fd208399p-344, 0.0, 0x1.7c4631e229eebp-328, 0.0, 0.0,
     0x1.c0e6192fa200fp-12, 0x1.7abb68aac22f4p-400, 0x1.74f1976145021p-335,
     0x1.00ea178f6f286p-597, 0.0, 0x1.faef69310f59p-415, 0x1.de5ee4a72c5d1p-647,
     0x1.e89869601b219p-347, 0.0, 0x1.1c7828d992442p-862, 0x1.c4d6c621a0413p-184,
     0x1.040516d42cb25p-151, 0x1.53737c754c2f6p-189, 0x1.8e397523650e4p-321,
     0x1.18e1cd35cecd9p-681, 0.0, 0x1.1f5d5f62572a4p-702, 0.0, 0x1.cdf41a9537798p-180,
     0.0, 0.0, 0x1.cfc4e591b70b7p-21, 0.0, 0x1.1f36826c7bcfbp-94, 0.0, 0.0, 0.0,
     0x1.0f0d4ee3ab06dp-890, 0.0, 0x1.89fa7275e7c6cp-701, 0.0, 0.0, 0.0, 0.0,
     0x1.f696c93eb3b1ap-176, 0x1.1dd7da5f30f0ep-385, 0.0, 0.0, 0x1.896d05d8c200bp-351,
     0.0, 0x1.c12272d793995p-512, 0.0, 0.0, 0x1.c0bb5d990fa87p-240,
     0x1.517b662ae04acp-745, 0x1.a6f50b5b4b737p-450, 0.0, 0x1.fc460552e6a54p-866, 0.0,
     0.0, 0x1.84689f383abf2p-664, 0.0, 0x1.33c9c42a575ebp-993, 0.0,
     0x1.7b461c70d9678p-419, 0.0, 0x1.29fee1ea185b7p-552, 0.0, 0x1.18da3c3d5a134p-201,
     0x1.aab5c5b597b77p-566, 0.0, 0.0, 0.0, 0x1.b961e835acb37p-860, 0.0,
     0x1.3775ea28b7e3ep-143, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c15aafe268e24p-687,
     0x1.aa4966477ea97p-112, 0x1.9c1dd6e230058p-308, 0x1.7a20b0941d78cp-788, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7f60a16639622p-777, 0x1.c1fa765a04b5fp-269, 0.0,
     0x1.f55bb2c97b7ebp-618, 0.0, 0x1.11e7741adb134p-634, 0.0, 0.0,
     0x1.c04e32cad7542p-104, 0.0, 0x1.d6113bea3e34fp-820, 0x1.4296ff300f842p-451, 0.0,
     0x1.e0e99ede9fe49p-1012, 0x1.da94df1be5f5p-796, 0x1.1c901ef7f84e3p-621, 0.0, 0.0,
     0x1.422ec3fe7b77dp-153, 0.0, 0.0, 0x1.26fe01a2cc41ep-380, 0x1.11e4105fadbdep-471,
     0x1.24ec903ea5c89p-382, 0.0, 0x1.0759fd10e6273p-751, 0.0, 0x1.5dba681d5a123p-236,
     0x1.828728c36bd67p-702, 0.0, 0x1.d0027f38f3962p-367, 0x1.9371fba1d860ap-567, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.fd604b3f03396p-895, 0.0, 0x1.9fa350b1b9f03p-101, 0.0,
     0x1.cea16a3b866a6p-995, 0.0, 0x1.3b5ca0c633d2bp-370, 0x1.a5777ecc13a22p-274,
     0x1.e4d2dac35a564p-957, 0x1.089f25d4cd0ccp-934, 0x1.f6916ac63cb92p-615,
     0x1.995d3508f048p-68, 0x1.80366f21e96f9p-252, 0.0, 0.0, 0x1.43426f201f163p-651,
     0.0, 0.0, 0x1.7a411901e8c88p-692, 0.0, 0x1.e490e11533a3cp-86,
     0x1.fb52e16b9d4dep-272, 0x1.d8c26b762d252p-128, 0.0, 0.0, 0x1.4f69df4ee31f1p-908,
     0x1.a7e38671d0769p-76, 0.0, 0.0, 0.0, 0x1.bf9b9667dfcd7p-783,
     0x1.cb42fcdc83e1fp-13, 0.0, 0x1.c9d90bcab7496p-401, 0.0, 0x1.cc05b0b45f1e8p-229,
     0x1.448d111e63333p-734, 0x1.b356444fe361ep-27, 0x1.40911f9b2ad06p-220,
     0x1.09549c1947091p-667, 0.0, 0.0, 0x1.9fd72405f9fe4p-634, 0x1.5287e607c2067p-790,
     0.0, 0.0, 0.0, 0x1.9b4efa9d09438p-306, 0x1.beca3d696090ep-1013,
     0x1.9eea29ac3e8d1p-71, 0.0, 0x1.b42f514b03593p-100, 0.0, 0.0,
     0x1.758128c8b25dcp-284, 0x1.93195b1ce342ap-730, 0.0, 0x1.ca17ca787cae8p-681,
     0x1.c477d832883b5p-734, 0.0, 0.0, 0x1.d4b3afb70cb36p-747, 0x1.a6e53b34c647bp-686,
     0x1.01dcee25c441dp-893, 0x1.63d5391e55a9cp-877, 0.0, 0.0, 0.0, 0.0,
     0x1.b0db9d646c63cp-161, 0x1.c6f596a534ef9p-824, 0x1.a191b19764059p-741, 0.0, 0.0,
     0.0, 0x1.6b650f5c427a4p-405, 0.0, 0.0, 0.0, 0x1.39001ff462324p-817,
     0x1.b1c4a09725c89p-778, 0x1.5ce259a24b162p-773, 0x1.f50e7e917ecbbp-550,
     0x1.7fa9c7847c831p-990, 0x1.10f704503833fp-767, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5cdad9c93c16cp-164, 0.0, 0.0, 0.0, 0.0, 0x1.93457f925eb8bp-348,
     0x1.6297a77347ab7p-372, 0x1.0a98c7337ec37p-193, 0.0, 0x1.7e5658f0bb947p-690, 0.0,
     0x1.121151b418a17p-176, 0x1.f8a50fbd86a3bp-52, 0x1.08b8d6909142bp-31, 0.0, 0.0,
     0x1.27e174af46725p-883, 0.0, 0.0, 0x1.828ed071c5649p-648, 0x1.82acdbc0725f1p-992,
     0.0, 0x1.699dd7a1a04b4p-579, 0.0, 0x1.29239efe937c8p-825, 0.0,
     0x1.3b0e735e34625p-381, 0.0, 0x1.52a4010bff0e1p-357, 0.0, 0x1.7e5d11ed2d6eap-877,
     0x1.be4aa9a709d45p-545, 0.0, 0x1.206f2e98332d9p-852, 0x1.068b366d8f164p-289, 0.0,
     0x1.c2893add5fb89p-45, 0x1.09f6975496375p-267, 0x1.93f783868bb72p-414, 0.0, 0.0,
     0x1.5e1c2c8e959b4p-687, 0.0, 0x1.949abad7ecfe1p-116, 0x1.1d1c74d3a3cb1p-110,
     0x1.bca7a5e5f0055p-933, 0x1.5d338eb6f85a4p-915, 0.0, 0x1.0b8b1dd4cdd34p-345,
     0x1.42526e4310611p-581, 0x1.9c6ca90ac5ae9p-987, 0x1.077eff5d49023p-1, 0.0, 0.0,
     0x1.3d60b4e6a9059p-679, 0.0, 0x1.ca0683770139dp-377, 0.0, 0.0,
     0x1.4f2d1356ce6cfp-332, 0.0, 0.0, 0.0, 0.0, 0x1.cf7b413c16fedp-179, 0.0, 0.0,
     0x1.65a7be2e02396p-383, 0.0, 0.0, 0.0, 0x1.fcee8f94aabb3p-230,
     0x1.cd8d99b71aa8ep-385, 0x1.3e91bf993bb5cp-106, 0.0, 0.0, 0x1.d18ebbd463fe5p-375,
     0x1.8952b198040f7p-201, 0x1.e47be39e5949ep-197, 0x1.c14762883a2e7p-706,
     0x1.98a2fe1025564p-721, 0x1.dbdde05a4ed97p-377, 0.0, 0x1.d47db0d316714p-876, 0.0,
     0x1.e50ecf4b4458fp-239, 0x1.74b566560b8c7p-740, 0x1.4670f3a88e75fp-241, 0.0,
     0x1.3c50e4de4f6f3p-787, 0.0, 0.0, 0x1.b668e51833ea3p-111, 0x1.10359fc8140fdp-281,
     0.0, 0x1.754781a23b99cp-233, 0x1.39b79efa0af65p-549, 0.0, 0x1.2c62ce72d8c5ep-855,
     0.0, 0x1.dc579cf008ea7p-99, 0x1.c5bb154eac7d1p-362, 0x1.4eef8983b0d83p-774,
     0x1.51a8bcec67296p-872, 0.0, 0.0, 0x1.7f05786356485p-417, 0.0,
     0x1.7b6a612bc76dcp-916, 0.0, 0.0, 0.0, 0x1.fb5cb0797cfbp-699,
     0x1.f5533908a0f43p-14, 0.0, 0x1.8050e6008629p-833, 0.0, 0x1.be31a1a91e3d3p-639,
     0x1.19344a3fd2444p-337, 0x1.f2a0d521d2702p-634, 0.0, 0x1.9f038d255da39p-227,
     0x1.15d39c56c2e97p-161, 0x1.1c8e69339be32p-80, 0.0, 0.0, 0x1.86c3d6edab812p-372,
     0x1.9e418d392eebbp-574, 0.0, 0x1.89f9ebebb21b6p-94, 0.0, 0.0,
     0x1.cb6c9a2cea3a7p-669, 0.0, 0.0, 0x1.2102e30f87beep-55, 0.0, 0.0, 0.0,
     0x1.3ae517b0da14dp-718, 0x1.9261231894d79p-331, 0x1.4285057f42e8fp-528, 0.0, 0.0,
     0.0, 0x1.0fb0c79dbcd63p-242, 0.0, 0x1.acb250dae3ee9p-683, 0.0, 0.0, 0.0, 0.0,
     0x1.3bb2049063e4bp-326, 0x1.1954b71d3fa39p-533, 0.0, 0.0, 0x1.5fa5d6806d097p-365,
     0.0, 0.0, 0x1.2635ca64bc987p-607, 0.0, 0.0, 0x1.ea47233c88145p-881, 0.0, 0.0,
     0x1.dcb35d0442524p-179, 0.0, 0x1.b2092108f3436p-318, 0.0, 0.0,
     0x1.a61e35a6e7bd1p-37, 0.0, 0.0, 0.0, 0x1.9f91cd404f788p-6, 0.0,
     0x1.829274a053b05p-253, 0.0, 0.0, 0.0, 0x1.1fe8bfdd01f54p-877,
     0x1.19fd8dee44e78p-44, 0.0, 0.0, 0.0, 0.0, 0x1.3fcd216ec48e7p-783, 0.0,
     0x1.ef75de4ff283ap-452, 0.0, 0.0, 0x1.f6ebd5d7d1d1p-172, 0.0,
     0x1.17db37bdcddfp-628, 0x1.93d3a6736b3dep-714, 0x1.530573299002p-337,
     0x1.e25a7836ce862p-773, 0x1.fe013e275d2bbp-33, 0x1.07c57d98273ap-481, 0.0,
     0x1.b88580f808603p-877, 0.0, 0x1.fb38156e666eep-365, 0x1.699a1a0da7c29p-264, 0.0,
     0x1.641c0e45cb7c3p-980, 0x1.f24f06e6bc25cp-132, 0x1.3026d870f1375p-631,
     0x1.fb0e9bd15077fp-419, 0x1.1128d3cca3cd3p-92, 0x1.aaf62b1386c62p-894,
     0x1.d9af5a6a40748p-592, 0.0, 0.0, 0.0, 0x1.3817628f479ccp-53, 0.0,
     0x1.1cccd39b34d13p-207, 0.0, 0x1.102b78a8bc965p-869, 0.0, 0.0,
     0x1.71fad75ed5f36p-149, 0.0, 0x1.c7d8d7373f78p-726, 0x1.f22d967e3a116p-200,
     0x1.4733933c47e33p-820, 0.0, 0.0, 0x1.72ddd854a438p-318, 0x1.50723decdd7bfp-962,
     0x1.8d4d64bf212fap-678, 0x1.adba90e3e8423p-179, 0x1.0efaa9c3ad869p-531,
     0x1.385f274cbd102p-246, 0x1.39d41c10f2901p-36, 0.0, 0x1.f588f47294bd7p-635,
     0x1.c78bfe8bbd8aep-588, 0.0, 0x1.d192a07fe2316p-370, 0.0, 0x1.127c9bfad4511p-407,
     0x1.44af073d43c53p-927, 0x1.a6e8e40b66b5bp-497, 0.0, 0x1.d597ef2be113fp-901,
     0x1.c886a7a28c8b7p-753, 0x1.4e50128e60a9ap-658, 0x1.8dab98345141dp-195,
     0x1.5f80af3826f37p-393, 0.0, 0.0, 0.0, 0.0, 0x1.3ac80aaad6bc7p-357, 0.0, 0.0,
     0.0, 0x1.8a2f461005551p-94, 0.0, 0.0, 0x1.9fcb3cc29a903p-411,
     0x1.ce3a5c37efbd5p-223, 0x1.b239f49d52361p-409, 0x1.ff60f7a94d291p-204, 0.0, 0.0,
     0.0, 0.0, 0x1.f385037d16f8fp-629, 0x1.9fb0bfe665e3dp-944, 0x1.d81b1b4b7d4f6p-310,
     0x1.c65ea99943e09p-572, 0.0, 0.0, 0x1.ba7b4444438dfp-880, 0.0,
     0x1.74aa66876f1a6p-29, 0.0, 0x1.704ce672c1c1cp-174, 0x1.85d4991a21b1bp-664,
     0x1.e74d5bcf6ff43p-253, 0x1.3df9423183ca6p-562, 0.0, 0.0, 0x1.fca31a9a2bdaep-729,
     0.0, 0x1.a78afa7b88097p-516, 0.0, 0.0, 0x1.68387cd17554bp-265, 0.0, 0.0,
     0x1.46f62fcbc3213p-244, 0.0, 0x1.4006e484781aep-75, 0.0, 0x1.b260790290cd8p-832,
     0x1.ea0868586e5e9p-547, 0x1.d6b1965982eap-118, 0x1.251c4bfd2571bp-731, 0.0,
     0x1.d0faace5a83dap-244, 0x1.74081166e616ap-727, 0x1.7d7f779b76152p-90, 0.0,
     0x1.aac2c7d53a987p-183, 0.0, 0.0, 0.0, 0x1.e67f0bc1a1809p-889, 0.0, 0.0,
     0x1.caac91ca0583fp-592, 0x1.c65c966918f57p-623, 0.0, 0.0, 0x1.870fb8c6f1b59p-356,
     0.0, 0x1.4dad203273858p-552, 0x1.c31c7cf62b0ffp-643, 0x1.a4b188577fa21p-869, 0.0,
     0x1.f38fe42e8e269p-677, 0x1.57e92b2c3d841p-983, 0x1.de1321f3d0d77p-504,
     0x1.b4aac4ce7a0e2p-319, 0.0, 0.0, 0.0, 0.0, 0x1.209f8e64fff2p-721, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.2ad7713ac3b01p-658, 0.0, 0x1.30173c53babfbp-968, 0.0, 0.0,
     0x1.b2794f6880597p-664, 0.0, 0x1.0874de497f0f3p-998, 0x1.13c1d8d437ad5p-709, 0.0,
     0.0, 0.0, 0x1.a4235a01fe561p-586, 0x1.63dd7f85d2afbp-400, 0.0,
     0x1.569e38695215ep-425, 0x1.cd9e04b7158b3p-654, 0x1.14feceb36e298p-741, 0.0,
     0x1.5ee4b081f0597p-975, 0.0, 0.0, 0x1.f64dee8b501c7p-327, 0.0, 0.0,
     0x1.81e29d1ced227p-550, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.35443f9ed17dcp-623,
     0x1.adfe537c7bd6fp-548, 0x1.57a89c76807a8p-629, 0.0, 0x1.7ca3de23fd5a8p-852,
     0x1.c1f36094df306p-236, 0x1.65d43921bfcb2p-902, 0.0, 0.0, 0x1.6fd35fcdf32c7p-95,
     0x1.2d8b7ec091ea3p-762, 0.0, 0x1.8fd0c4a86e96ap-294, 0x1.37a51f4dc30fp-342,
     0x1.8f28d4f6a4d08p-32, 0.0, 0x1.438008c4453bcp-358, 0.0, 0x1.ccb001a8c31f1p-605,
     0x1.a7c23b50e562ap-956, 0.0, 0x1.23c1c37c5906fp-1019, 0x1.343f0475d77ffp-298,
     0x1.f8f34c5566dedp-949, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eac4dc5d5e19bp-32,
     0x1.65bbf271113ffp-933, 0x1.a3eaa6120db8bp-620, 0x1.42587401f3af6p-118, 0.0,
     0x1.1a46443b2b89ep-701, 0x1.dbc3c290d2e2ep-642, 0x1.5632366d07d1fp-581, 0.0, 0.0,
     0.0, 0.0, 0x1.d1ca350935536p-219, 0x1.fe08fc4f98bc9p-878, 0x1.c2f708a0f455p-489,
     0.0, 0x1.04431e14d12eep-193, 0x1.518c4475ae2a4p-386, 0x1.5999a24df5915p-190,
     0x1.8b71621461783p-717, 0.0, 0x1.3fb035f109369p-300, 0.0, 0.0,
     0x1.27e137bde5391p-31, 0x1.2fc763052a9f4p-255, 0x1.b050d0b9630ddp-908,
     0x1.ef41f2673b227p-15, 0.0, 0.0, 0x1.bec413653a83cp-577, 0x1.d9ae466410e41p-680,
     0x1.3fe867509e906p-827, 0.0, 0.0, 0x1.7f3d1951114f4p-394, 0.0,
     0x1.4aa1620647579p-742, 0.0, 0.0, 0.0, 0.0, 0x1.110aadac7fae9p-125,
     0x1.54339793a3038p-521, 0x1.771019d83ada6p-774, 0.0, 0x1.ce3c1ad940b21p-327,
     0x1.08da20f7bf9a8p-675, 0x1.9e4949a668ebdp-117, 0x1.94ab447ff7abcp-96,
     0x1.18b524a7e0648p-968, 0x1.2b95a08937821p-512, 0x1.0bff35683af38p-601, 0.0, 0.0,
     0x1.82f6b317eb569p-57, 0.0, 0x1.e44f4ace01ec4p-908, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.303026e707085p-589, 0x1.fc4a1c174a4d8p-435, 0x1.71b307b503ec4p-202,
     0x1.5bab6f9c3c502p-76, 0x1.861419cc158c9p-22, 0.0, 0x1.28c3ab71a577ap-830,
     0x1.80262335e8a6ep-107, 0x1.a20f7dbc5cfebp-234, 0.0, 0.0, 0x1.79a25df813efp-254,
     0x1.fd3c6a9f1a2d3p-336, 0x1.ff51acf91762ap-195, 0.0, 0x1.59843145ba2b4p-749, 0.0,
     0.0, 0.0, 0x1.3a36dc8f0dfddp-1018, 0.0, 0.0, 0.0, 0.0, 0x1.d72416a836cecp-164,
     0x1.65e6dde981bc3p-183, 0x1.3317be40b53a4p-702, 0.0, 0x1.fc2a36a685168p-200,
     0x1.4bdbf860b1bedp-931, 0.0, 0x1.c2f11bc2e8e9p-180, 0.0, 0x1.270faa3ab608bp-613,
     0x1.0fdf86a94c65ap-127, 0x1.736e32c312fc5p-646, 0.0, 0.0, 0.0,
     0x1.befa620a92b81p-547, 0.0, 0.0, 0.0, 0x1.12bd5fae514b4p-118, 0.0,
     0x1.eebf8cdd6a4ebp-34, 0x1.6fb014d9ca37cp-507, 0x1.7b6ebd643d71ap-385,
     0x1.efbe081684277p-3, 0x1.50f0053fc25fbp-554, 0x1.aaacbaefed38bp-1016, 0.0, 0.0,
     0.0, 0.0, 0x1.0a5f8ef8db25cp-207, 0.0, 0x1.7e4fb651844f1p-5,
     0x1.65f47a0c300abp-376, 0x1.92d62891d50edp-537, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b14b671403306p-151, 0x1.8c0f9cc9b4337p-716, 0.0,
     0x1.506cb1fa3f724p-262, 0x1.5d8d20c5e78ep-262, 0.0, 0x1.614d69b087f05p-460, 0.0,
     0x1.8f1eddab63cb4p-540, 0.0, 0x1.8857c04371317p-224, 0.0, 0.0,
     0x1.31fa8765268f9p-445, 0.0, 0x1.cca0f67fce3b1p-127, 0.0, 0.0,
     0x1.f7225dd939b3dp-407, 0.0, 0x1.cda98d06b9e72p-660, 0.0, 0x1.da71a2c0c08cbp-999,
     0x1.e2fa5e5b4ab4bp-955, 0x1.b8d75777c47d6p-72, 0.0, 0x1.94e95a46c2971p-249,
     0x1.f75ad485cea6ap-427, 0x1.14c0331f1d41ap-823, 0.0, 0x1.429e5b91554ecp-603,
     0x1.a1b27a1010afcp-919, 0.0, 0x1.acc7a80a6adcdp-604, 0.0, 0x1.d3ce89d883611p-940,
     0.0, 0x1.4932bc06d2187p-891, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f600a9a2d6c8p-89, 0.0,
     0x1.85a575b0c12a5p-178, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.192266835ad66p-974,
     0x1.90b42cf90295fp-475, 0.0, 0.0, 0.0, 0x1.778b62ba8fe35p-430, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.57e6cb360c864p-387, 0.0, 0x1.f3a9662fd3e9ap-743,
     0x1.84bf3fb217474p-241, 0.0, 0x1.888d2a8b539fbp-628, 0.0, 0x1.3fba9ff1ea3bep-387,
     0.0, 0.0, 0.0, 0x1.d3f54f70ecbcap-159, 0x1.510a17ed2fdfp-723,
     0x1.91666c828189fp-871, 0x1.a027c18d4fea8p-475, 0.0, 0.0, 0.0,
     0x1.784bebd7f9a9dp-460, 0.0, 0x1.a1a47d41a4ff6p-301, 0x1.ff81f7f636372p-891, 0.0,
     0.0, 0x1.2ef0d5540798p-194, 0.0, 0x1.ec53dae4ccc6ap-370, 0.0,
     0x1.33dff75d0ce59p-949, 0x1.7257191f27989p-257, 0x1.4f1b4eb7a6877p-727, 0.0,
     0x1.72a9ff85effb7p-346, 0.0, 0.0, 0.0, 0x1.f9c86314fc7fap-413,
     0x1.6b10a8c7e3a85p-551, 0.0, 0x1.335a35c683c7p-868, 0.0, 0x1.a459dc686678fp-187,
     0x1.1e344941d3deep-268, 0x1.3dbcb2adb7a67p-572, 0.0, 0x1.ae79261030229p-42,
     0x1.52c08a7f07c38p-215, 0.0, 0x1.c027985c368cp-841, 0x1.106e07aa3c1ffp-219, 0.0,
     0.0, 0.0, 0.0, 0x1.bcbfe12f008a8p-73, 0.0, 0x1.c436a5c07c3b1p-405, 0.0, 0.0,
     0x1.9aa86abc824e1p-785, 0.0, 0.0, 0x1.3d824a6d26a6cp-936, 0.0,
     0x1.90855f266173fp-551, 0x1.249136b0996d1p-123, 0.0, 0x1.a6d5ab296d40ap-47,
     0x1.e917c46f157aep-480, 0.0, 0x1.2da1c6d33c50cp-757, 0.0, 0.0,
     0x1.240dbce6178d8p-376, 0x1.ff6ef1c7574afp-244, 0x1.768f7d98e460bp-93, 0.0,
     0x1.fb8df607a3569p-648, 0x1.ba47dd5802af1p-69, 0.0, 0x1.aaad84b4673bbp-138, 0.0,
     0.0, 0x1.373c3332ae952p-216, 0x1.b403c14f59b9cp-873, 0x1.719160e75945ep-104,
     0x1.e4193facc4ba2p-383, 0x1.04b087a7269e7p-822
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
            tmp1 = Sleef_finz_expm1d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_expm1d1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_expm1d1_u10purecfma bench acc %la\n", global_bench_acc);
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
