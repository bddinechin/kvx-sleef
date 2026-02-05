/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d2_u10kvx.c --function \
 *     Sleef_finz_log2d2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0x1.d2b86470a306p-814, 0x1.25f4450d0cad3p-161, 0x1.ca2e56dae7269p-652, 0.0, 0.0,
     0x1.1b2fb00e45e2fp-240, 0.0, 0.0, 0.0, 0x1.e8b72d3e0c1ep-549, 0.0, 0.0, 0.0,
     0x1.62ec83432e62p-47, 0x1.ab51f59d5e702p-560, 0.0, 0.0, 0x1.03dee449014f5p-389,
     0.0, 0.0, 0.0, 0x1.d257359504472p-836, 0.0, 0.0, 0x1.b90061dbca23cp-810, 0.0,
     0.0, 0x1.2b344110c1611p-383, 0.0, 0.0, 0x1.7f3d6528b55e6p-301, 0.0,
     0x1.cad7316310b38p-972, 0.0, 0x1.bd55bdbebc4a5p-970, 0x1.594e2b08a1214p-500,
     0x1.164e95e7666d5p-398, 0x1.f287b78782fa7p-724, 0.0, 0x1.039beeca166cdp-849,
     0x1.35671a81b6f84p-492, 0x1.c4baac6481953p-61, 0x1.2651b8bd24da3p-880, 0.0,
     0x1.19bd20cc9a564p-159, 0.0, 0x1.3204f567a43acp-127, 0.0, 0x1.77a8923c1dfe8p-36,
     0.0, 0.0, 0.0, 0x1.d61cc068c9a8cp-226, 0x1.05ad055cf7027p-538,
     0x1.a920607d240eap-684, 0x1.3f5313221cdd3p-183, 0x1.c66a55b92595p-251,
     0x1.d7e946f64dd8dp-115, 0x1.44ef72c4a6dabp-828, 0x1.3b3c49b4fc315p-591, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.acbd218d1267fp-971, 0x1.b0af087081ebfp-341,
     0x1.fc8a68b3fe412p-108, 0.0, 0x1.dad56a099d8afp-862, 0.0, 0.0, 0.0,
     0x1.abd571141e4a8p-277, 0.0, 0x1.212839438a91ap-139, 0x1.d9dc9f1d376cp-158,
     0x1.d221a0bbcca8cp-497, 0x1.aef31c45902d5p-831, 0x1.cf8e7ae75c773p-727,
     0x1.bb0a1f938f2bbp-988, 0x1.be9e8d561be0cp-156, 0.0, 0.0, 0.0, 0.0,
     0x1.ac4388b030c1fp-943, 0.0, 0.0, 0x1.0fc94c41035f1p-810, 0.0, 0.0,
     0x1.46a4b0e46c443p-879, 0.0, 0.0, 0.0, 0x1.a5201bd4d6432p-260, 0.0,
     0x1.8ee6841955376p-801, 0x1.9274d243e425fp-356, 0x1.685cbf27acd43p-376,
     0x1.c8fa716cadee2p-554, 0.0, 0x1.e71f0b4babb6ap-381, 0x1.512f3589e7301p-16,
     0x1.dc1485ab8bec8p-889, 0.0, 0.0, 0.0, 0x1.0105a13963274p-65,
     0x1.3535d1f2107d2p-130, 0x1.e12d7bd5fa3fdp-784, 0.0, 0.0, 0.0,
     0x1.138572405ecd9p-814, 0.0, 0.0, 0.0, 0.0, 0x1.592bcad3f6975p-208, 0.0,
     0x1.a648d376da244p-155, 0x1.52fa176a3e24ep-418, 0.0, 0.0, 0.0,
     0x1.80e9de2e8564ap-170, 0x1.275b9a89c6165p-303, 0x1.024d5587e8735p-6, 0.0,
     0x1.265005de43442p-755, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.13a6421b69c08p-382,
     0.0, 0x1.5a188c55bbad6p-683, 0.0, 0x1.dfe4ab5860161p-612, 0x1.7e225c92b4e9dp-379,
     0.0, 0x1.553e942766266p-401, 0x1.5c0608eb70227p-513, 0.0, 0x1.ce43580bbc0e8p-837,
     0.0, 0x1.86eb97f5d1769p-248, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.975dcc737c3b1p-300,
     0.0, 0x1.5e2df46f1972ap-3, 0x1.bc1dc3f7d159ep-784, 0.0, 0.0, 0.0,
     0x1.e6e678cc1d8c5p-799, 0x1.c01b84ca76e44p-425, 0.0, 0x1.b4435daefd8f9p-839, 0.0,
     0.0, 0.0, 0.0, 0x1.89390483e1ff7p-611, 0.0, 0x1.fc26fcf5ac1acp-80,
     0x1.55a969702bde4p-811, 0x1.5335b4a6db931p-382, 0x1.176a1619aa52ep-63, 0.0, 0.0,
     0x1.6fe7abfbf0f44p-665, 0.0, 0.0, 0x1.8303ff053396ap-822, 0x1.b2617b8ccb9bcp-205,
     0.0, 0.0, 0x1.607b4c116e862p-885, 0x1.db62d39808b55p-514, 0.0,
     0x1.67c5338393208p-800, 0x1.5508ac9d2f72dp-468, 0.0, 0x1.704105fd3eb5fp-737,
     0x1.04558840efd6bp-461, 0x1.2cfc517c3100dp-74, 0.0, 0x1.f2628494440fp-705,
     0x1.2648260ca7d15p-559, 0.0, 0x1.b16a3ab487225p-969, 0x1.6482b2f85931ap-756,
     0x1.109195a13d60cp-668, 0.0, 0x1.2b877425098ep-822, 0.0, 0.0, 0.0, 0.0,
     0x1.53afc1130ec82p-622, 0.0, 0.0, 0.0, 0x1.a5d6bf54bfa9cp-470, 0.0,
     0x1.fe49bfc0e24b6p-331, 0x1.3d3a622615445p-688, 0.0, 0.0, 0.0,
     0x1.8384996bd295cp-301, 0.0, 0.0, 0.0, 0.0, 0x1.41dba81180403p-297, 0.0, 0.0,
     0.0, 0x1.9907f991e47e4p-232, 0x1.c558d3a33cbe4p-623, 0x1.9b29dd69a9a5fp-514, 0.0,
     0.0, 0x1.8a9a6a669c2cdp-832, 0x1.1b4c23a7e4bf8p-272, 0.0, 0x1.1cd9a8b3e3329p-19,
     0x1.836f0ad976c24p-74, 0.0, 0.0, 0x1.39b7ab9a28143p-413, 0x1.fe56ed9f8883p-139,
     0x1.2a9d6eb3acddap-802, 0x1.7b805adaaf813p-438, 0x1.2ce40d8fec4d4p-216, 0.0, 0.0,
     0x1.dae156ccd2565p-417, 0x1.6fab67a4aca07p-901, 0x1.bd9ad795a1249p-548,
     0x1.dc8b90ed9de1p-318, 0.0, 0.0, 0x1.ce42054d6b951p-746, 0x1.2659acd359e7cp-747,
     0.0, 0x1.5e424bea2130dp-920, 0x1.f5bef5735f259p-777, 0.0, 0.0,
     0x1.cf6255e13a7c8p-765, 0x1.041807907f02p-6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b7540e3276d7cp-389, 0.0, 0.0, 0.0, 0x1.2f0da9741a5f3p-891,
     0x1.d4c18b89aac3fp-527, 0x1.9119f221c49d7p-735, 0.0, 0x1.0a1ad99c08828p-599,
     0x1.7b82e82a6c08bp-917, 0.0, 0x1.df64bb3ab67p-323, 0.0, 0x1.c05e826b676edp-638,
     0.0, 0.0, 0x1.00e52dfb2c86ep-232, 0x1.7fb1b2dd57de5p-780, 0x1.ac1e8696b7a61p-789,
     0.0, 0x1.88e4881a415abp-867, 0.0, 0.0, 0.0, 0x1.264d95dbc3d8p-806,
     0x1.799d7adb588aap-495, 0.0, 0x1.6564dde2171a1p-612, 0.0, 0.0, 0.0, 0.0,
     0x1.8a83c407773f2p-372, 0x1.9d80b1430846ap-1002, 0.0, 0.0, 0.0,
     0x1.fb4bdc2b513acp-638, 0.0, 0.0, 0.0, 0x1.b42911c93889bp-320,
     0x1.236eebfe83fc8p-601, 0.0, 0x1.69289c4c3a091p-489, 0.0, 0x1.2cd2d74f07323p-798,
     0.0, 0.0, 0x1.38390d12ee3dp-320, 0.0, 0.0, 0.0, 0.0, 0x1.994b219f73042p-1014,
     0.0, 0.0, 0.0, 0x1.ea8146c89a163p-670, 0x1.52795b14ea773p-178, 0.0,
     0x1.5753431ae5eebp-543, 0x1.ef77fcd5ba428p-122, 0x1.81ae7f3ea0cfdp-492, 0.0,
     0x1.b3cfb8f38032fp-79, 0x1.5f6475aa655p-564, 0.0, 0.0, 0.0,
     0x1.913a7db1ab45fp-78, 0.0, 0x1.a7b2cc5ba6475p-401, 0.0, 0.0,
     0x1.dc4a212da8341p-465, 0.0, 0.0, 0x1.bd4530a724932p-697, 0x1.34f1f440df8dcp-40,
     0.0, 0.0, 0x1.c24ef143067a9p-18, 0x1.abbb531788dffp-266, 0.0,
     0x1.76307bc847941p-88, 0.0, 0.0, 0x1.f67d765932c44p-536, 0.0, 0.0, 0.0,
     0x1.b632154a93152p-528, 0x1.6ebe01cc8d225p-559, 0.0, 0.0, 0.0,
     0x1.72d05be4fa553p-173, 0.0, 0.0, 0x1.746dae0d87571p-571, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.7f2776f1d67c2p-827, 0x1.2a11d09683825p-553, 0x1.c8af18560cc39p-562,
     0.0, 0x1.308d8fb3f3a53p-363, 0.0, 0x1.24100a86579d6p-14, 0.0,
     0x1.6d7c614973533p-198, 0.0, 0.0, 0x1.ccfd2bff4ab1fp-300, 0x1.24cb0bbe4087ap-377,
     0.0, 0.0, 0x1.5d270803d1759p-9, 0x1.321a86fed6e77p-452, 0x1.336b814acd32cp-405,
     0x1.3960fcd1cadb2p-203, 0x1.78f6a57ffdd67p-110, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.2e39e0eca3cc1p-385, 0.0, 0x1.aa2ac4103f56cp-257, 0.0, 0.0,
     0x1.fc100e25b4cf9p-510, 0.0, 0x1.b790a56b27ba2p-824, 0x1.a09f80be9721fp-308, 0.0,
     0x1.c1d392a60b3bap-126, 0x1.d9c15aa30651cp-239, 0.0, 0x1.4c3481180c6e4p-596, 0.0,
     0x1.264b59316c8ccp-362, 0.0, 0x1.b56eb0d8afb85p-521, 0.0, 0x1.b4de86b9e5c22p-614,
     0x1.c90a6afebc902p-787, 0x1.011a1e9295bb4p-699, 0x1.cf2b8fb61aa23p-971, 0.0,
     0x1.eb8ebbe29d7a4p-349, 0x1.21714d0008463p-851, 0x1.4a19fd92a923ep-631,
     0x1.41c56562f8be5p-489, 0x1.e744a0a41d285p-985, 0.0, 0.0, 0.0,
     0x1.a331746571f35p-984, 0x1.7caee9a033b0ep-729, 0.0, 0.0, 0.0,
     0x1.90b0ae9526822p-8, 0.0, 0x1.3bf17a96222b1p-1016, 0.0, 0x1.5f444bcb89925p-408,
     0x1.6a75f38ebfc75p-318, 0.0, 0x1.07f92ae26ad3bp-175, 0x1.7e23e46cc0523p-495, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d77285cf1ca2dp-164, 0.0, 0x1.b8cdb154be8eep-575, 0.0,
     0x1.8c8f83ef9f781p-872, 0x1.6eb8ba5c14ac2p-596, 0.0, 0x1.b9fea2f4ac0b1p-325,
     0x1.075dabc4426e6p-647, 0x1.4995d79da154dp-366, 0x1.9920d9dae4dddp-84, 0.0, 0.0,
     0.0, 0x1.a9b971da5e8aap-992, 0.0, 0x1.eefb6556a11c6p-687, 0.0,
     0x1.99b6fd8b3b036p-233, 0.0, 0x1.c00d69a57fadp-868, 0x1.37c0b8a6b6a4p-654,
     0x1.109595e7cb6ddp-917, 0x1.fd03b3dbd8878p-311, 0x1.51ad1296e44c5p-742,
     0x1.b6433d01c501p-28, 0.0, 0x1.ff0e34d04d4fap-439, 0x1.e352a061f483ap-19, 0.0,
     0x1.4f19f82ca8adap-488, 0.0, 0x1.c81705d1f6eebp-943, 0.0, 0x1.7e0e86f761037p-919,
     0.0, 0x1.2bf3cdc4324f2p-678, 0x1.c1f9e9b64f399p-353, 0.0, 0.0, 0.0,
     0x1.4fd618a80590ap-2, 0x1.dcef8d9d98408p-266, 0x1.6982b69a6464fp-475,
     0x1.e2f675f91791bp-204, 0x1.f38c7bfe96823p-541, 0x1.8f280eeac416ep-734, 0.0,
     0x1.ec129b83eaa98p-895, 0.0, 0.0, 0x1.4fb7b7d446a81p-708, 0x1.1657d6e94025p-1016,
     0.0, 0.0, 0x1.a6de0c572e55bp-288, 0x1.689017591d823p-1018, 0.0,
     0x1.bf9c4ba237fb1p-151, 0.0, 0.0, 0.0, 0x1.d0733c13e0d3cp-449, 0.0, 0.0,
     0x1.5a3bfeda16bd1p-255, 0.0, 0x1.1bc0173ea8797p-457, 0.0, 0.0, 0.0, 0.0,
     0x1.e19ba24252d39p-432, 0x1.8d006c67c8ec8p-149, 0.0, 0.0, 0.0,
     0x1.365cbba5cbe78p-706, 0.0, 0x1.16feb304ded45p-546, 0.0, 0.0,
     0x1.7cfdc01129877p-758, 0x1.6a386edd53f8fp-197, 0x1.32be8695fb38dp-655,
     0x1.8eeb4cd52f87p-221, 0.0, 0.0, 0.0, 0x1.b017de2d8b30dp-747, 0.0, 0.0, 0.0, 0.0,
     0x1.6118c7fb4ed78p-345, 0.0, 0.0, 0.0, 0.0, 0x1.82f4df968284dp-571, 0.0,
     0x1.0e2456ddf135ep-356, 0.0, 0.0, 0.0, 0x1.c5434f3988d2cp-106, 0.0,
     0x1.4cc5b4693c791p-744, 0.0, 0x1.c6ca4cb7d221bp-442, 0.0, 0.0,
     0x1.50b821e910f9fp-608, 0x1.5eae8b5e8138cp-869, 0x1.0633e7677b754p-47,
     0x1.07a69147aa2fp-833, 0.0, 0x1.a6adbe68e1bfbp-730, 0.0, 0x1.6534a8d6b2c05p-310,
     0.0, 0.0, 0x1.315a04403fa4ep-578, 0.0, 0x1.2a080627550fap-422,
     0x1.159dbe6c863a8p-841, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ca0be157e3937p-799,
     0x1.ef58c1a073a25p-639, 0x1.ad187b63a0e0dp-522, 0x1.c186421bb69b8p-379, 0.0,
     0x1.7cb7f8c940422p-463, 0x1.d257cf01c1fb7p-256, 0x1.df4c623f646a8p-1003,
     0x1.98268f526465ap-74, 0x1.9258a00d2fd93p-91, 0x1.8684080bd3d3ap-361,
     0x1.8168c493957d7p-209, 0.0, 0x1.ab0ba94835377p-706, 0x1.27c4e802f37c7p-953,
     0x1.252a1e359e15ap-531, 0x1.24debc644b279p-226, 0x1.5a66b229c97afp-554, 0.0,
     0x1.477991eb61d22p-287, 0x1.e6e48a78eb64cp-871, 0.0, 0x1.97ec81054900dp-438,
     0x1.1afe94bdf0a23p-178, 0.0, 0.0, 0.0, 0.0, 0x1.c75a2937abe3ap-873,
     0x1.eb3b1b525efcep-585, 0.0, 0.0, 0x1.90fe94a7162a3p-440, 0x1.c5477d2eb8cddp-752,
     0.0, 0x1.9e098a52d6ac2p-947, 0.0, 0x1.7f7cb4ce08f65p-341, 0x1.ca5f535948092p-77,
     0x1.8c04915155c4cp-724, 0.0, 0x1.04fc0f8129924p-489, 0x1.dfc7c5a84de0cp-255, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.143f5057f1deap-826, 0x1.b5eb155bf6487p-685,
     0x1.637fc9db389c5p-552, 0.0, 0x1.54b3730026706p-476, 0.0, 0.0,
     0x1.8811603e429abp-914, 0.0, 0x1.9ccccf5bc7e56p-480, 0x1.f778ea1a70584p-149, 0.0,
     0.0, 0x1.912ba0a99f824p-234, 0.0, 0x1.44c6dec23017bp-164, 0x1.d56ebe6d14d2fp-365,
     0x1.a4656e035ea35p-372, 0.0, 0x1.4a17ca3da3dcap-138, 0x1.5b41c26e2e5c8p-1008,
     0x1.6ffbf95f36cd4p-104, 0.0, 0x1.560aacfce397ap-712, 0.0, 0.0,
     0x1.27146d1e0effbp-132, 0x1.0cb24ff3763dp-905, 0x1.c631af1ef79a4p-431, 0.0, 0.0,
     0.0, 0x1.457a033f9d3dep-557, 0.0, 0x1.b73595c90fcfdp-149, 0.0,
     0x1.8122a16ff6172p-55, 0.0, 0.0, 0.0, 0x1.bff94455ba80ap-606, 0.0,
     0x1.fb5ae7de345f7p-825, 0.0, 0.0, 0.0, 0x1.a5f7e0c137ae3p-973, 0.0,
     0x1.bf6b47682486dp-600, 0.0, 0x1.ffe8b7ea942fcp-585, 0.0, 0x1.c3abc6d5d9f8p-489,
     0.0, 0x1.434ba10993d8p-817, 0.0, 0x1.7b29185e78d4ap-895, 0.0,
     0x1.75ca0ec0c9765p-560, 0x1.ed2e99d13a1acp-282, 0.0, 0x1.ca0713ea00f3cp-665, 0.0,
     0.0, 0x1.8ffe0aeb122bap-448, 0.0, 0.0, 0x1.816582b1ab1a8p-579,
     0x1.e8abe64a977d3p-695, 0x1.396592c547f96p-727, 0.0, 0x1.ddbe9e5d1609dp-262, 0.0,
     0x1.c3f4c4b9c98bfp-988, 0.0, 0.0, 0x1.65809cf0e8447p-84, 0x1.ea3f26e534a86p-122,
     0.0, 0.0, 0.0, 0x1.0a09b1011ac91p-328, 0x1.e0e47e046775bp-878,
     0x1.c5acda7f97c86p-916, 0.0, 0x1.4ba605f8c986ep-261, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d65172802fb7ep-389, 0x1.4c527ad72cb18p-567, 0.0, 0.0, 0.0, 0.0,
     0x1.2fb10b9aeca54p-458, 0.0, 0x1.35e67095bafe6p-52, 0x1.36acdca860853p-72,
     0x1.f384db1925d8ep-264, 0.0, 0.0, 0.0, 0x1.c3438cabc6cc9p-630,
     0x1.c99c0c0c9b068p-558, 0.0, 0.0, 0.0, 0.0, 0x1.ce9debc6f5e69p-186,
     0x1.5834ac8c22593p-511, 0.0, 0x1.8005fd878811p-363, 0x1.768d8d5e25473p-250,
     0x1.b0a1f89cb44d8p-391, 0x1.5406fc0eb127p-561, 0x1.d16592727a46ap-318,
     0x1.aacea16d86e78p-541, 0x1.53d14f811bb3fp-264, 0x1.2fc1b0731e17ap-538,
     0x1.e4e1a7dbe4bdp-134, 0.0, 0x1.e2fce046f987fp-367, 0x1.39a8dae2bf9dcp-123,
     0x1.21bc7184bd138p-943, 0.0, 0.0, 0x1.0d6c89eec092ep-505, 0x1.2c093660ed16cp-670,
     0.0, 0x1.14b453e5d3ecfp-918, 0x1.87747d497d54bp-28, 0x1.ae272833cb838p-888,
     0x1.6a6cdd62fe25ap-379, 0.0, 0x1.cbdb5fffcce5dp-144, 0.0, 0.0, 0.0, 0.0,
     0x1.ef9fd1c29a51ep-499, 0x1.d96a7cae97725p-512, 0x1.2f2469a76b4d8p-987, 0.0,
     0x1.336a4172d2e1p-281, 0.0, 0x1.d10e147eb8c4cp-403, 0x1.05e535b165f2cp-719,
     0x1.82cca7204fc69p-654, 0x1.f9d5fe6bf71cep-146, 0x1.79267461f61bep-268,
     0x1.f1d078dd3c3dap-591, 0x1.a2dba4ef61d38p-194, 0x1.42f67efa068acp-772,
     0x1.cbaa24ff56013p-186, 0x1.37ba36caf7bbfp-125, 0x1.c45ac8fee170cp-882, 0.0, 0.0,
     0x1.9afd301ef4881p-278, 0x1.2deb0644a9cdep-233, 0x1.4982ff4bf2db2p-114, 0.0, 0.0,
     0x1.ea08a875093d9p-566, 0x1.c8e00a28ef91ep-912, 0.0, 0x1.97d024c5cb5dap-157, 0.0,
     0x1.5780be2da1461p-795, 0x1.ea3147bf9d131p-349, 0.0, 0x1.b52d358718767p-714,
     0x1.68d1cad845221p-269, 0.0, 0x1.f684dd1567f0ap-792, 0x1.6007e6587bcd2p-403,
     0x1.8ba0a047e9734p-3, 0x1.e6b08a8657c91p-874, 0.0, 0.0, 0x1.49453c94013abp-895,
     0.0, 0.0, 0x1.68c739b93db83p-941, 0.0, 0.0, 0x1.c1705e126014bp-309,
     0x1.c10cc705c312bp-501, 0.0, 0x1.6ee816b4665dap-63, 0x1.1f1a75428437cp-260, 0.0,
     0.0, 0.0, 0.0, 0x1.21f103da4462dp-618, 0.0, 0.0, 0x1.100e2a932e27fp-617,
     0x1.239255fd52cb5p-288, 0x1.4e61f1ab3969bp-748, 0.0, 0.0, 0.0,
     0x1.f5fa5cd6e1b36p-394, 0x1.06f500eeb796dp-98, 0x1.dc57e749da0d1p-684, 0.0,
     0x1.937a994a30469p-395, 0x1.39e020294afd4p-451, 0.0, 0.0, 0.0,
     0x1.f69d97bc3a3d7p-687, 0x1.abe88f46066ap-852, 0.0, 0x1.ad1c1516d4635p-495, 0.0,
     0x1.237353f3ac392p-61, 0.0, 0.0, 0x1.c36da8efdb4bbp-275, 0.0, 0.0,
     0x1.33a8a9bdf8174p-121, 0x1.333ffca112766p-589, 0.0, 0.0, 0.0,
     0x1.f74341830b57ep-393, 0.0, 0x1.201552e9bdcbep-139, 0x1.b3caf041223d7p-134, 0.0,
     0.0, 0.0, 0x1.babca69e64e03p-775, 0x1.e00fd54b3ee84p-298, 0.0,
     0x1.a81201dadff26p-78, 0x1.62744f4d36bap-695, 0.0, 0x1.6de5070606a48p-425, 0.0,
     0.0, 0x1.8ea4fc23b81c6p-134, 0x1.511f4935f70efp-849, 0.0, 0.0,
     0x1.862e1b6c60d32p-459, 0x1.a464db9a0bdf6p-920, 0x1.1973d0e4ed672p-770,
     0x1.15cef3b2b6eap-224, 0.0, 0.0, 0.0, 0.0, 0x1.e68bff14b162ep-972, 0.0, 0.0,
     0x1.999b4151f5ea9p-788, 0.0, 0.0, 0.0, 0x1.e6459051bdf75p-721, 0.0, 0.0,
     0x1.39d662790bc2dp-250, 0x1.e96caacc39da4p-49, 0.0, 0.0, 0x1.ae7f1803aa2b4p-936,
     0.0, 0.0, 0x1.5a92e8b0f0c3dp-765, 0x1.959010ba5b587p-840, 0.0, 0.0,
     0x1.5e66ce4433d51p-956, 0.0, 0x1.86585224b1e14p-899, 0.0, 0x1.45fb72435985p-377,
     0x1.cffe9e54162e5p-440, 0x1.75ffe9abff054p-166, 0x1.ef50d11314ab7p-479,
     0x1.22c29585b966cp-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e4905cfc661cp-18,
     0x1.848e354e6ee0cp-489, 0x1.473b88004d16ap-20, 0x1.fea7ee2a24f64p-154, 0.0, 0.0,
     0.0, 0x1.928f77c1bec75p-330, 0.0, 0x1.e630204d9df1ep-396, 0.0, 0.0,
     0x1.99cb4b806af91p-4, 0x1.82fa536387a62p-364, 0.0, 0.0, 0x1.96cc8bf9349d5p-1016,
     0x1.c030eebb79354p-146, 0x1.3931aab93cd3fp-737, 0.0, 0x1.92534c95a8d53p-499, 0.0,
     0.0, 0.0, 0x1.864f43315c22cp-337, 0.0, 0x1.b0961651b8b7ep-568,
     0x1.c9c7949cda35dp-1004, 0.0, 0x1.9f6dd49bc9d0ep-435, 0x1.051baf32c105ep-386,
     0x1.d73e77d5233e9p-824, 0x1.7aef2599c87e2p-468, 0.0, 0.0, 0.0,
     0x1.bb34357c87356p-182, 0x1.3389047f312ebp-242, 0x1.486e3fa51ac9ap-211,
     0x1.28a1f13663077p-775, 0x1.a3ae2c2daad2ep-517, 0.0, 0x1.80acfc85272a3p-956,
     0x1.6b98dcbf517acp-355, 0.0, 0x1.08a5c13c861c2p-821, 0.0, 0x1.f3e99e8c12225p-467,
     0.0, 0x1.bd3cf62047017p-522, 0.0, 0.0, 0x1.db3277781b978p-762, 0.0,
     0x1.354dea5d7c8bdp-613, 0x1.8d9756250369ap-852, 0.0, 0x1.509011c5960d7p-178, 0.0,
     0x1.1ed232624be2cp-1012, 0x1.5816a8a8e189fp-123, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.43d7ab2f768ebp-755, 0x1.53dc1fb4d6c0cp-715, 0x1.0858b9dcc47cep-518,
     0x1.66af07b8ff265p-798, 0.0, 0x1.cc4d22c45b024p-678, 0x1.dfb0e58f0dd76p-998,
     0x1.42e306f664838p-1022
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
            tmp1 = Sleef_finz_log2d2_u10kvx(tmp0);
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
    printf("Sleef_finz_log2d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_log2d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
