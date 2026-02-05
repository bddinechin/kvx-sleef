/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_floor.c --function floor --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.3d0be6d579843p-390, 0x1.517f378ad2f83p-254, 0.0, 0.0, 0.0,
     0x1.ba35039b7e1ap-174, 0x1.63fcf7c004cdcp-362, 0x1.adc68f38781a3p-288, 0.0, 0.0,
     0x1.5409ca333a30cp-361, 0x1.e4a2f82f0396dp-375, 0x1.10d0440e8e767p-8, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.66f66ce6ca922p-232, 0x1.65ada290df00dp-123,
     0x1.70ccaa92cdfa4p-59, 0x1.2b8855fefc1aep-467, 0.0, 0.0, 0x1.e91c89b8e2327p-632,
     0x1.d087930c8d40fp-98, 0.0, 0x1.70fda68b92c3p-280, 0.0, 0.0,
     0x1.2ab250f32ee49p-666, 0x1.92256f6c72158p-539, 0x1.79ffad979096ep-142, 0.0, 0.0,
     0.0, 0x1.7c0846798197ep-642, 0.0, 0.0, 0.0, 0x1.bdd2a37a8fc8dp-11,
     0x1.257a5865206edp-915, 0x1.957410342cc0cp-762, 0x1.6aca5c3b74a59p-182, 0.0, 0.0,
     0x1.38a6df5f0517fp-514, 0x1.40fd8205aeedcp-791, 0.0, 0.0, 0.0, 0.0,
     0x1.d6a7ab1df5e73p-746, 0x1.ef888128ceb6dp-821, 0.0, 0x1.53e65f49d1628p-753, 0.0,
     0x1.46c7516d4bdf2p-132, 0x1.10e4e2ec1f58dp-289, 0.0, 0.0, 0.0,
     0x1.69410015cf8d8p-429, 0x1.9d0853b4d0b7ep-701, 0.0, 0.0, 0x1.10eb479e30346p-201,
     0.0, 0x1.6e6d1e183ea3bp-839, 0.0, 0x1.ee9c7e78a4f1fp-56, 0.0, 0.0, 0.0,
     0x1.4c078727ee7d7p-175, 0x1.82bfc847a13dp-387, 0.0, 0x1.2f26ec22d0279p-37, 0.0,
     0.0, 0x1.1578eaf0c6e19p-168, 0.0, 0.0, 0.0, 0x1.a1959469934cdp-316,
     0x1.b26940d45f505p-578, 0.0, 0x1.c76ef6909dba8p-280, 0x1.4b6464270798fp-492, 0.0,
     0.0, 0x1.db3784fef7cbbp-549, 0x1.bb37cda48d64ap-344, 0x1.d748dbdc611c6p-21,
     0x1.f40c2c267b3eap-655, 0.0, 0.0, 0x1.00dcc93a99ea2p-851, 0x1.a08eb9cffb72dp-338,
     0.0, 0x1.8a1bdf3192a32p-401, 0.0, 0.0, 0x1.61c95b1bb861cp-712, 0.0, 0.0,
     0x1.06f67c1c8bab6p-932, 0x1.5bf503707d74ap-377, 0.0, 0.0, 0.0,
     0x1.6bbab7c606404p-969, 0.0, 0x1.9fb8338481d62p-278, 0x1.7a687e3ad4fdcp-302,
     0x1.6607c21d39b82p-274, 0.0, 0x1.4984e1297f4cap-327, 0x1.d32e1f6bddf99p-374,
     0x1.7088a80264733p-566, 0.0, 0x1.d29bd5071b683p-566, 0x1.1066d94469071p-767,
     0x1.ee2dce237601bp-26, 0.0, 0x1.a5bbd16e8e028p-362, 0.0, 0x1.deb2cb02fc2c2p-495,
     0.0, 0.0, 0x1.7cfec99cbdeeep-760, 0.0, 0.0, 0x1.606f9ab798dd7p-368, 0.0, 0.0,
     0x1.e4501215a9b31p-669, 0.0, 0.0, 0x1.dff40dc89db28p-486, 0.0, 0.0,
     0x1.c8d735d3318e7p-566, 0x1.11e4e60b3e107p-853, 0.0, 0x1.77c4a1d71c3e8p-648,
     0x1.ad95e285d3ffbp-734, 0x1.066f4b2a63edcp-993, 0x1.0e6693b526949p-996, 0.0,
     0x1.860dd41419f66p-400, 0x1.4e0c08b1c05e9p-921, 0x1.e1004f170218cp-981,
     0x1.123e62376ddbfp-130, 0.0, 0x1.6137a2baa025ap-675, 0.0, 0.0,
     0x1.de8740f3f2d72p-414, 0.0, 0x1.a8c78c40cab95p-532, 0x1.22d0d4ea288ffp-269, 0.0,
     0x1.ed33f58e31e89p-80, 0.0, 0x1.14b9d78b368c4p-372, 0.0, 0.0, 0.0,
     0x1.1e6a0275c8afbp-779, 0.0, 0.0, 0.0, 0x1.254717f60fd59p-89,
     0x1.7677704f7111cp-356, 0x1.0e7368790dec7p-603, 0.0, 0.0, 0x1.1ca612ae3339ep-112,
     0x1.cf9babe3bd898p-653, 0x1.b8d08be1bef19p-757, 0x1.07041059f0f6ap-530, 0.0, 0.0,
     0x1.c05908484d6d2p-566, 0.0, 0x1.393a86f8180acp-514, 0x1.d8c37231f0abdp-244, 0.0,
     0x1.7a17c09237e55p-366, 0x1.2de90b353356fp-615, 0x1.395bf8f1f2d8p-60, 0.0,
     0x1.6b0668511ec0cp-803, 0x1.c2370b265d3d5p-306, 0x1.51f2b80d0a1b4p-483, 0.0, 0.0,
     0x1.468b8653d2eb3p-633, 0x1.d9a901a682f05p-994, 0.0, 0x1.277796c98419ap-232,
     0x1.af3e7ba77df72p-190, 0x1.7f11c0c6a7d0cp-764, 0x1.ca892a85ae2e9p-274, 0.0,
     0x1.33c4221f6207fp-680, 0.0, 0x1.c0a36a31c5b0fp-224, 0x1.e52b321d13081p-398,
     0x1.a81982a1d91acp-383, 0.0, 0x1.699e41826bd3ap-850, 0.0, 0x1.05b3832fc2225p-735,
     0.0, 0x1.0e64dfe003f42p-717, 0.0, 0x1.f0cf3011d73f4p-597, 0.0, 0.0, 0.0, 0.0,
     0x1.300ecf61c5338p-694, 0x1.12c50f1d55b78p-839, 0x1.ee49535bd61e2p-299,
     0x1.3ec72840c3d37p-92, 0x1.cfaec6dce2389p-283, 0x1.2748a2888a6a9p-419,
     0x1.b7d2efe009d7bp-930, 0x1.dca0563bce17p-471, 0.0, 0.0, 0x1.7f856d2977f29p-408,
     0.0, 0x1.2a2cbbe2f41c2p-83, 0.0, 0x1.25510acf3d09cp-550, 0.0, 0.0, 0.0,
     0x1.0a783aa7c741ep-817, 0.0, 0x1.149ef8b4a8709p-441, 0.0, 0.0, 0.0,
     0x1.0eb6dfb630137p-653, 0x1.196ada25a4903p-472, 0x1.f7b6231bc9bcap-137, 0.0,
     0x1.0f0f5e59a238bp-302, 0x1.c27a07e8b371ep-458, 0.0, 0.0, 0x1.b0cfd04fa5869p-70,
     0x1.576ade28bc297p-842, 0x1.5e23efd5ce0f4p-213, 0.0, 0x1.a3ba47b65bf96p-337, 0.0,
     0.0, 0x1.bec2350ce2b14p-217, 0.0, 0.0, 0.0, 0.0, 0x1.71b8c9c50e8d1p-454, 0.0,
     0x1.f427d66db72fep-861, 0x1.2feb00aa57af8p-703, 0x1.a1abfe5d78ec4p-473, 0.0,
     0x1.4e333795855dap-25, 0x1.dd57aa00d06fbp-807, 0x1.10e66544b4ed6p-708, 0.0,
     0x1.06cf882c43594p-807, 0x1.7e8d2105d2fd9p-688, 0.0, 0.0, 0x1.52c4fca3dbf55p-646,
     0.0, 0.0, 0x1.aab0a02cc081ep-316, 0.0, 0x1.02d6abd84cfc2p-58, 0.0, 0.0,
     0x1.bfab19e091149p-156, 0.0, 0.0, 0x1.012d64e7675c2p-9, 0.0,
     0x1.cd75650b99c04p-847, 0x1.a237e532cec13p-902, 0.0, 0.0, 0x1.afee7c5c498e4p-280,
     0x1.3f7dc90033248p-184, 0.0, 0.0, 0.0, 0.0, 0x1.2768dc02336e8p-979,
     0x1.a4944b14d265dp-973, 0.0, 0x1.96560a072765p-483, 0x1.fb6ce8f2e3b2ap-698,
     0x1.230fbeeab7d5dp-298, 0.0, 0.0, 0x1.66ac91426008ap-117, 0x1.b4103cb14aacfp-385,
     0.0, 0x1.779510332c338p-681, 0x1.371e2c1fdb384p-783, 0x1.c06662be40754p-785, 0.0,
     0.0, 0.0, 0x1.886b2dc2e3f6bp-10, 0x1.69cb02ad2c3f8p-652, 0x1.ffbfcd1ba066fp-79,
     0x1.db731003e69cfp-506, 0.0, 0x1.a6eccfbe32668p-276, 0.0, 0.0, 0.0,
     0x1.adb5f5846003cp-500, 0x1.c5225856533bp-602, 0x1.0fcf501a9ea68p-722,
     0x1.3b7e8ff5982e6p-520, 0.0, 0x1.a3cf9308ab415p-679, 0.0, 0x1.c9a9c7cc477f2p-362,
     0.0, 0x1.44dccdeca0dffp-224, 0.0, 0.0, 0.0, 0x1.48d6767f43b25p-576,
     0x1.a268b9920d2d1p-68, 0x1.e131028c4e375p-325, 0x1.2c3d2a9ab3884p-341,
     0x1.99db05b81c5fbp-507, 0x1.9dbef570644d6p-727, 0.0, 0x1.3048b017ec16dp-82, 0.0,
     0.0, 0x1.d38843668b7e1p-419, 0.0, 0x1.ead69d2e9a703p-978, 0x1.113e7015df11ap-431,
     0.0, 0x1.7e6d89a3e0a38p-181, 0.0, 0.0, 0.0, 0x1.c7a456feb0f1p-662, 0.0,
     0x1.b80ddfde929e3p-771, 0x1.b96338573dbadp-79, 0x1.a354ee97281d6p-365,
     0x1.0579e980880bfp-593, 0.0, 0.0, 0x1.19667aeb04607p-431, 0.0,
     0x1.e802520303e33p-134, 0.0, 0.0, 0x1.6d57bfa723ccap-571, 0x1.d93a1861e65b7p-771,
     0x1.e990657a27f7ap-117, 0.0, 0x1.db4786953f2dbp-116, 0.0, 0x1.8230af4dfffcdp-405,
     0x1.59354f334ccf1p-86, 0.0, 0.0, 0x1.c1f09323bd60dp-647, 0x1.2c4b6901385fbp-285,
     0.0, 0.0, 0x1.5af96ec6b144ap-547, 0x1.81702a8608b1p-957, 0.0, 0.0,
     0x1.48a27ff64ddc6p-97, 0.0, 0x1.a28b76cff1d4cp-642, 0.0, 0x1.51b4127edbefbp-168,
     0x1.6771cb7287f7ep-754, 0x1.679a61ddd9e01p-366, 0x1.7e34f8dcd59adp-356,
     0x1.1b39e4daae514p-662, 0x1.4a4ed3467e483p-799, 0x1.5e32f2a24ee42p-113,
     0x1.d33e0694f247ep-70, 0.0, 0x1.6a2762a44ac5p-38, 0.0, 0x1.480e45fd2e686p-571,
     0.0, 0x1.b37716b1e1a3dp-618, 0x1.80137ad43b8c2p-679, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a01c03b96325p-186, 0x1.d8eac9e651317p-709, 0x1.6eeab0752345fp-127, 0.0, 0.0,
     0x1.8759a69526c76p-583, 0x1.e431ad95ffe42p-108, 0.0, 0.0, 0x1.76a8056d98fa4p-536,
     0x1.aec6648777ca5p-754, 0.0, 0x1.50b35a7cd6f67p-674, 0x1.4a7ffa6dc3055p-558,
     0x1.987bdc4597c74p-673, 0.0, 0.0, 0x1.c071534eee6ebp-792, 0x1.087ae411a4699p-909,
     0.0, 0x1.ec8cbaa89a6bcp-392, 0.0, 0.0, 0x1.172ea81f584f3p-199, 0.0, 0.0, 0.0,
     0.0, 0x1.ef63556f6ea18p-79, 0x1.dfe88dbc33a48p-813, 0x1.09a55c2c61066p-375,
     0x1.cf15c5cf65232p-1011, 0x1.a6b395665b066p-876, 0.0, 0x1.02c854765a9e6p-380,
     0.0, 0.0, 0.0, 0x1.4ca98fbf480e6p-950, 0.0, 0x1.16c61a769381ep-103, 0.0, 0.0,
     0.0, 0.0, 0x1.ce61fe239f4cap-44, 0.0, 0.0, 0.0, 0x1.60d737f703f88p-632, 0.0, 0.0,
     0x1.8c001d0091ac6p-596, 0x1.5dfd6268d394ap-776, 0.0, 0x1.07239f9d5a328p-330, 0.0,
     0x1.d911898335c4fp-21, 0x1.8405eac990543p-198, 0.0, 0.0, 0x1.d3b30a9c8eaddp-686,
     0x1.24e101d44143dp-720, 0x1.051f0fbb8ff19p-1010, 0.0, 0x1.4ad7fb89f95bfp-507,
     0.0, 0x1.7531abd3ab888p-968, 0.0, 0.0, 0x1.a150c5e88fa64p-999, 0.0, 0.0, 0.0,
     0.0, 0x1.a98f382b1f973p-86, 0.0, 0x1.8144e4db83622p-223, 0x1.3ec05da340cefp-589,
     0x1.20733b30e65fbp-788, 0.0, 0x1.f8c0d73005b7cp-308, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d8c5565caef81p-316, 0x1.e0dbdb23c193p-747, 0.0, 0.0, 0x1.2845d5467944bp-140,
     0x1.5196a09958e22p-726, 0.0, 0.0, 0x1.794165dbf5a15p-892, 0x1.c37c941542ee7p-279,
     0.0, 0x1.0db135a11e2eap-651, 0.0, 0.0, 0.0, 0x1.7d238bfb64caep-1003, 0.0,
     0x1.164845e27d131p-629, 0x1.0cc7788ff5202p-622, 0.0, 0.0, 0.0,
     0x1.476ac18e13dabp-863, 0x1.13d94e63bf349p-552, 0.0, 0x1.f67dfe18b74f2p-64,
     0x1.42ffc050edec3p-633, 0x1.e671554dc6575p-374, 0x1.b9b959bd67627p-247,
     0x1.b00dad2e32ad9p-419, 0.0, 0.0, 0x1.132a8a209a4b1p-947, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9d271a4f009a8p-895, 0x1.668a041775078p-12, 0x1.c0401bd42e14p-185,
     0.0, 0x1.eb11254e45cfbp-889, 0.0, 0x1.d92ad290761d4p-794, 0.0, 0.0, 0.0,
     0x1.e6f0dd67956f2p-433, 0x1.b4e5f73b6f9fcp-660, 0.0, 0.0, 0x1.365663f905daap-563,
     0x1.05daeef45338ep-237, 0.0, 0x1.79410e20b1c26p-884, 0x1.987ecf76c38dep-657,
     0x1.60bb0a32e1375p-802, 0x1.3b3c3e6051df3p-727, 0x1.f91887a2414d9p-510, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0800cd4fb01a6p-870, 0.0, 0x1.558e77a8fb8a5p-943,
     0x1.1000d3a04fa63p-182, 0.0, 0x1.7a18f2b36dc66p-73, 0x1.9a13e54fe04c2p-147,
     0x1.dfa7547b1e9bap-636, 0x1.9b76491694f2fp-838, 0.0, 0x1.757accde5779fp-447,
     0x1.381375d705655p-719, 0x1.612cfe0f26b94p-350, 0x1.9105f5dc28b7cp-221, 0.0,
     0x1.2ac0a357cf62p-660, 0x1.0a248931edcddp-185, 0x1.0601ffc92f27bp-354,
     0x1.d0cc8fbd7c346p-212, 0.0, 0x1.674fda9ce2a0bp-293, 0x1.a4e607d5bd13dp-360,
     0x1.17d27168d494cp-133, 0x1.d3be1fd11db7dp-894, 0.0, 0x1.53d0925e78036p-400, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2f6ca08f362a3p-505, 0x1.2a9743b62dcb4p-698,
     0x1.65a3858d9932bp-929, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9237555bda482p-907,
     0x1.5ca7f880a12d9p-117, 0.0, 0x1.cc47b852edd76p-910, 0x1.92d788248ceadp-52, 0.0,
     0.0, 0x1.9b45d26782b8ep-652, 0x1.957b08dcecb4ap-398, 0x1.9847a7891ff63p-38, 0.0,
     0.0, 0x1.0de6b7a856cebp-285, 0x1.f4d50e6e8f495p-108, 0x1.2bf5a370e2beep-24,
     0x1.6dc9f1ceac7c5p-476, 0.0, 0.0, 0.0, 0x1.e014c31942624p-818,
     0x1.caac99d6810e2p-1007, 0.0, 0x1.6f5015c1d2131p-978, 0x1.dab734ca9846bp-901,
     0x1.976d0caaecfeap-369, 0.0, 0.0, 0.0, 0x1.3903f16c7aed7p-740, 0.0, 0.0, 0.0,
     0x1.167a03ec77919p-286, 0x1.572a54b94d916p-889, 0x1.cc252619bc8a5p-913, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.74c5a3256c782p-77, 0x1.fecbeb1e72b6bp-868,
     0x1.a7f94927a8fe3p-774, 0x1.cf0e05b9fb335p-284, 0x1.ab56741e9e0c7p-563, 0.0,
     0x1.f9500114f8bf4p-729, 0x1.900552754ada2p-919, 0.0, 0x1.e6b4a6f2aa87ap-561,
     0x1.bc37a5317008p-13, 0.0, 0x1.1f56791d29a21p-586, 0x1.bc1b2377a65bcp-820, 0.0,
     0x1.2d74d676ef36bp-732, 0.0, 0x1.87a7605df7077p-589, 0.0, 0.0,
     0x1.af926666132b3p-392, 0x1.a6c67450de426p-942, 0x1.9565afb518d6dp-738,
     0x1.5c2308df05e55p-509, 0.0, 0x1.37ec5960d2137p-62, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1f0c4490fce73p-949, 0x1.b3ec8759df36bp-491, 0.0, 0.0, 0x1.69842bdf78128p-433,
     0x1.95fbb0665905fp-249, 0x1.07e402bab54bcp-956, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.981b3cdb6947fp-120, 0x1.d83ea454f96e4p-685, 0x1.cab50ce9c194dp-786, 0.0,
     0x1.1592475a38ca5p-462, 0x1.e68a0052b8c53p-15, 0.0, 0.0, 0.0,
     0x1.d80921629f178p-161, 0.0, 0x1.b671e4b25ace3p-915, 0x1.3a7d8c845818dp-317, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c357292c32ca1p-794, 0.0, 0x1.14596ba07347bp-439,
     0.0, 0x1.052f1f85f8464p-143, 0x1.a0fab8202f52fp-621, 0x1.1af2bcf17d911p-42,
     0x1.c8732e2373a1ep-55, 0x1.1e86f9ab6c824p-514, 0.0, 0x1.228a8304ac5bcp-920,
     0x1.279071ab4244ep-933, 0x1.0a2acd3342672p-865, 0.0, 0x1.dfacd44c407e1p-60,
     0x1.7abd70a9af642p-582, 0.0, 0.0, 0x1.bb9545c471fc9p-585, 0x1.4846d8b2fb312p-268,
     0.0, 0x1.8a4de61a44b97p-26, 0x1.b037966c31c8ap-752, 0.0, 0.0,
     0x1.f2882f15aead5p-341, 0x1.ec4ada96edap-449, 0x1.2cdef40e487fcp-357, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.917cdfbaefd8p-906, 0x1.0456b8dd88ac2p-323,
     0x1.80e3d76abdfdfp-357, 0x1.8ab44ba6816eap-326, 0.0, 0.0,
     0x1.3306244fc265fp-1001, 0x1.9f854ab06572p-767, 0.0, 0x1.f55ef00359bf4p-661,
     0x1.814a91b6748cp-955, 0x1.1828f5bc730bp-391, 0x1.1d882ceb26727p-146, 0.0,
     0x1.7fd8c110c8453p-914, 0x1.f190f07f9096dp-204, 0.0, 0x1.d5ea6a11af5fp-245,
     0x1.906f2033c4ac1p-899, 0x1.98bd624659a18p-201, 0x1.ebea70f73851p-435, 0.0, 0.0,
     0x1.10dd6544429c1p-744, 0x1.dc7845acdee3bp-762, 0x1.e641b579f391p-209,
     0x1.36b40b2d05db5p-950, 0.0, 0.0, 0x1.8f5c56389bdcfp-214, 0.0, 0.0,
     0x1.8bdb4ecdc5ac5p-265, 0.0, 0.0, 0x1.bf56e62af192bp-812, 0.0,
     0x1.2692a925c1dd1p-19, 0x1.e6e181052a467p-177, 0x1.f6eb66457baa2p-587,
     0x1.ce560e52b0847p-212, 0.0, 0x1.0e2963267fbebp-46, 0x1.84889bacc8311p-770, 0.0,
     0.0, 0.0, 0.0, 0x1.80a47d304acb3p-585, 0x1.81a5bf8b51557p-915, 0.0, 0.0,
     0x1.cb73bc1683ba4p-904, 0x1.adf607290cf3bp-711, 0x1.92edc656550d7p-645, 0.0,
     0x1.3ed3401415ed8p-330, 0.0, 0x1.6892c6a55ce49p-104, 0.0, 0x1.ff17f1ea56962p-140,
     0x1.7ae824517e458p-737, 0x1.00abaec7ee039p-287, 0x1.24c11f2bac06dp-457,
     0x1.478585d66ae9ap-799, 0x1.9575a7850b1d3p-17, 0x1.10e200a224f34p-825,
     0x1.af42516de58f5p-623, 0.0, 0.0, 0x1.d4e09ced5500ep-317, 0x1.2eafca0e5c2d5p-375,
     0.0, 0.0, 0.0, 0x1.674bf37ac5e65p-468, 0.0, 0.0, 0.0, 0.0,
     0x1.177d2b95f508ap-717, 0x1.89059d51c07c3p-385, 0x1.9cb8097989fbdp-524, 0.0, 0.0,
     0x1.dffe5b06e342fp-1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.76bda4515676fp-635,
     0.0, 0x1.f93a687dc425bp-682, 0x1.9bfaae569b26fp-42, 0.0, 0.0, 0.0, 0.0,
     0x1.c8aa76a543f09p-122, 0x1.4e061771cc55ep-57, 0x1.c695bd6535894p-881, 0.0,
     0x1.ca45d77a01866p-713, 0x1.d41e1be7b966bp-17, 0.0, 0.0, 0x1.12f94e72e926fp-426,
     0x1.2a855784135a8p-923, 0x1.05d1e4e0438e3p-1000, 0.0, 0x1.0672402a1f4cap-772,
     0x1.a5013f19f87a2p-389, 0x1.973085dd88601p-912, 0x1.f97d400bb17a5p-365,
     0x1.7fc203a4a2fap-664, 0x1.ea62e5b8858c9p-334, 0x1.329a62bf41e3fp-469,
     0x1.27a7e966134bdp-567, 0.0, 0.0, 0.0, 0x1.c7ebb53e33f19p-210,
     0x1.662800477c1a1p-952, 0x1.02b0d53f646aap-263, 0x1.8ff125f13f2e2p-71, 0.0, 0.0,
     0.0, 0x1.5ebafac6e8669p-27, 0x1.08183dbedcb59p-847, 0.0, 0.0,
     0x1.6a50a259335dap-633, 0.0, 0x1.0d16123790057p-515, 0x1.ea760374196e4p-275,
     0x1.99cd6fc029c77p-855, 0.0, 0.0, 0.0, 0x1.5033d89c77b18p-577, 0.0, 0.0,
     0x1.6d7e92a589d67p-878, 0.0, 0x1.5ff297cc2321p-988, 0.0, 0x1.508d4a5dfd034p-303,
     0x1.634c56ae3eca1p-573, 0x1.e0b7bc5a3ab78p-672, 0.0, 0.0, 0.0,
     0x1.90fe832c5659ep-576, 0x1.3148b8374a0bap-633, 0x1.ff6c0ac940465p-495,
     0x1.70d3e052cb2b7p-319, 0.0, 0x1.3b2dc7f10a1f1p-708, 0.0, 0.0,
     0x1.e7edd39977c35p-681, 0x1.6aa1928dc979fp-653, 0x1.08afd07ef1eb3p-561, 0.0, 0.0,
     0x1.8b75c3fcca4cfp-337, 0x1.320299d5b947ap-227, 0.0, 0.0, 0x1.515e450f49ccep-588,
     0x1.a450238be8833p-796, 0.0, 0x1.07c9351403268p-435, 0x1.c49a3bd459d92p-445, 0.0,
     0.0, 0x1.bba7ac756d7dfp-389, 0x1.5e1c0943566d9p-565, 0x1.33723af3bce16p-62,
     0x1.7ef1325832746p-70, 0x1.2b6a92e519296p-720, 0.0, 0x1.36ebcc0d96531p-541, 0.0,
     0x1.105597599d456p-597, 0x1.2ac28eb5823dbp-334, 0.0, 0.0, 0x1.59dc82c33224cp-948,
     0.0, 0x1.e45ca3823fe6p-848, 0x1.fad8de7c3b10ap-443, 0.0, 0.0,
     0x1.171ec5cdcade4p-858, 0.0, 0x1.d2290204008afp-223, 0.0, 0.0,
     0x1.453821d5db786p-332, 0.0, 0x1.291773ae89a07p-184, 0x1.6ae55f069d95fp-970, 0.0,
     0.0, 0x1.dc700548a4dcp-951, 0.0, 0.0, 0.0, 0.0, 0x1.936343535042dp-3, 0.0, 0.0,
     0x1.cb925b46759cbp-636, 0.0, 0.0, 0x1.bb73e1c075e97p-32, 0x1.ab2a04da8d47ap-567,
     0.0, 0x1.0f18bfd08c9b2p-337, 0x1.372cd98912039p-479, 0.0, 0.0,
     0x1.51a737bb6ce4p-811, 0x1.0bf8590ed00cfp-619, 0x1.d3aa358143a23p-247,
     0x1.65732c681d403p-290, 0x1.30a85edfa4f31p-775, 0.0, 0.0, 0.0,
     0x1.09f04158da3b7p-588, 0x1.d52640c5c497p-99, 0x1.4c6f501e9e6f2p-534,
     0x1.13a13b1a9d5b4p-408, 0x1.58899b6755b16p-443, 0.0, 0x1.dd26f20504e5p-218, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = floor(tmp0);
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
    printf("floor %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("floor bench acc %la\n", global_bench_acc);
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
