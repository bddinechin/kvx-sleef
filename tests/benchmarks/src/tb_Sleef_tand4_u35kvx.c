/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tand4_u35kvx.c --function Sleef_tand4_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 4 --function-input-vector-size 4 --bench \
 *     --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0.0, 0x1.df04d614d8edp-91, 0x1.f3e024b07c14fp-358, 0x1.72f6df99a1c44p-817, 0.0,
     0.0, 0x1.4e517e97891abp-908, 0x1.5cd5c3c10511fp-263, 0.0, 0.0,
     0x1.ffa5422325d1fp-924, 0x1.4025866861802p-894, 0x1.b96ea643db78dp-579,
     0x1.b3a584c49f133p-901, 0x1.597bc09593a5bp-420, 0x1.379fccfb1a825p-775, 0.0, 0.0,
     0x1.bb7c8a5e6c841p-237, 0x1.89eb4c846973ep-363, 0x1.3d72aef4430fep-586,
     0x1.27fbbb9b26075p-1018, 0x1.5385114437824p-90, 0x1.d6b68b3c67735p-392, 0.0,
     0x1.a59285bdc45d2p-344, 0.0, 0.0, 0.0, 0.0, 0x1.4530deb0615edp-23, 0.0,
     0x1.9e4af0fe830e4p-585, 0x1.145e3e3156c6p-711, 0x1.0a6374d467b1ep-667, 0.0, 0.0,
     0x1.ddc4fec081d16p-891, 0.0, 0x1.bc46e730bcbacp-230, 0x1.b9b38a2ef7124p-833,
     0x1.b373f2cd2c3a2p-416, 0.0, 0.0, 0x1.6e9e9a102c1ddp-583, 0.0, 0.0,
     0x1.e9cf391f52fbfp-28, 0x1.7a93f124bd2adp-785, 0.0, 0x1.e01d396084c1p-706, 0.0,
     0.0, 0.0, 0x1.67f97e1d9399bp-759, 0x1.9df96ef9e476cp-444, 0.0, 0.0, 0.0,
     0x1.9b9e380895bdbp-244, 0.0, 0.0, 0x1.c6fce212e96c1p-946, 0.0,
     0x1.2a77b20c71945p-776, 0.0, 0.0, 0x1.f9ddcb2d9c3edp-111, 0x1.d13d490c1bc44p-837,
     0x1.2cf86eca40379p-359, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.303c276760efep-659, 0.0,
     0x1.bef4e894802f1p-1011, 0.0, 0x1.21d345688ec2dp-391, 0.0, 0.0, 0.0,
     0x1.f87ada54481ffp-885, 0.0, 0.0, 0.0, 0.0, 0x1.521232d80956bp-424, 0.0,
     0x1.759120b456f0dp-216, 0x1.9f5e9250ba5fap-1000, 0.0, 0x1.1f9eeb4ac697dp-298,
     0x1.d2c9d090217c2p-325, 0x1.04d095d97b287p-944, 0x1.87eeb34bdf6d5p-870, 0.0,
     0x1.3a12f564fade6p-962, 0x1.1534334454caep-870, 0x1.391d3ed6edc35p-995,
     0x1.061c57a6a92dp-876, 0.0, 0x1.5c3cc401fbbc2p-890, 0.0, 0.0,
     0x1.4df96cb0e8efdp-568, 0x1.743efcbad694bp-987, 0.0, 0x1.e31357c557ab2p-996,
     0x1.2d53fa3f42affp-520, 0.0, 0x1.1a127921b0bbp-363, 0.0, 0.0, 0.0, 0.0,
     0x1.e0ecd7e199705p-500, 0.0, 0.0, 0.0, 0x1.0fef7ba657c16p-249, 0.0,
     0x1.7440df4afd0efp-228, 0.0, 0.0, 0.0, 0.0, 0x1.35128e03aa7ffp-362, 0.0, 0.0,
     0x1.e331f5d109cefp-821, 0.0, 0x1.0ef61cc4628f9p-326, 0x1.07ec519f7e4fep-907,
     0x1.7d54292fb094ap-527, 0x1.5927d529f6abbp-57, 0.0, 0.0, 0.0, 0.0,
     0x1.135e865df5244p-702, 0.0, 0x1.c8cb0a39657a2p-935, 0.0, 0x1.12b320dbd1125p-383,
     0x1.15a8ecb12900fp-60, 0x1.c8e7a4563c9d3p-248, 0x1.79928a0ac4777p-535,
     0x1.85610b49cdfc4p-72, 0.0, 0.0, 0.0, 0x1.322df16d9e78bp-787, 0.0, 0.0, 0.0,
     0x1.748aa338cb52bp-739, 0x1.5233798672f1bp-407, 0x1.25c43d932d943p-1016, 0.0,
     0.0, 0x1.a762bf5f0183p-394, 0x1.c2db2f26598a9p-696, 0.0, 0x1.212e29bb5419fp-3,
     0.0, 0x1.c01465556833ap-698, 0.0, 0x1.80e0a9158e7fdp-712, 0x1.70ddbf72e9955p-548,
     0.0, 0.0, 0x1.6d379395944d5p-65, 0.0, 0x1.5a18288b26e32p-188, 0.0,
     0x1.758863e9164c8p-523, 0x1.e831b1be67b57p-983, 0.0, 0x1.2e48a73ce581cp-20, 0.0,
     0.0, 0.0, 0x1.be7a347e937d1p-880, 0x1.ec80ac4689dc8p-602, 0x1.9a563fe533643p-293,
     0x1.4b9acc435c06fp-505, 0x1.1dab91c7333f4p-739, 0.0, 0.0, 0x1.858a9add78aecp-692,
     0x1.4fcd1b64410d2p-922, 0.0, 0x1.2f0b508f4f2d9p-729, 0x1.087764e03bda3p-940,
     0x1.babfcb29c3cd5p-8, 0.0, 0x1.5886db57e1988p-79, 0.0, 0x1.6c9372b6ccda1p-134,
     0x1.e1a0dfea96b48p-518, 0x1.d86c7b877fe57p-572, 0.0, 0x1.9cbc1c8a81d19p-83, 0.0,
     0x1.3fd1805b8f39ap-210, 0.0, 0.0, 0.0, 0.0, 0x1.2507a93445794p-42, 0.0, 0.0, 0.0,
     0x1.98896db82c254p-348, 0x1.2ce34f381e1d6p-224, 0x1.add2ba4cb79c7p-701, 0.0,
     0x1.0b1bb5c57dcb6p-365, 0.0, 0.0, 0x1.1d934fafcbe3p-308, 0x1.534a2043eae8fp-462,
     0.0, 0.0, 0x1.caa470c04ea5ap-32, 0.0, 0x1.d5e04a3ed159ep-729,
     0x1.93bfbfa035073p-487, 0.0, 0.0, 0x1.dad55d13135d2p-521, 0x1.124098a763fc6p-499,
     0.0, 0x1.f341ed2660107p-841, 0x1.0d7b92601c9f4p-432, 0.0, 0.0, 0.0, 0.0,
     0x1.1183676a44331p-603, 0x1.a6822beefc273p-475, 0x1.a1ad56ca81d2ep-4, 0.0, 0.0,
     0x1.250987116516ap-358, 0.0, 0x1.59a6d1463073ap-799, 0.0, 0x1.79495391d15e3p-87,
     0x1.ff9f04c8fe8f7p-8, 0x1.cadd5e4b7047bp-218, 0x1.4e79d0d2bfd99p-789, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.633a271c525d9p-928, 0x1.090eed8543146p-917, 0.0, 0.0, 0.0,
     0.0, 0x1.ad612ceeacfb8p-752, 0x1.cdece2bbb3ee7p-954, 0.0, 0.0, 0.0,
     0x1.8ee51cacdb50ap-377, 0x1.abee43eb2a031p-813, 0x1.6e0a821170b1bp-122,
     0x1.abf0170bcc91ep-523, 0.0, 0.0, 0x1.dde5881a71cd4p-865, 0x1.16c0aa64c4617p-497,
     0x1.0363810f21ea5p-291, 0.0, 0x1.6b7757912786ap-237, 0x1.24446a8e384d3p-178,
     0x1.d5adb9f349bbep-1, 0x1.f938e994b01b2p-410, 0.0, 0x1.b7a42cde3d683p-978,
     0x1.2e818a3f0e63bp-1022, 0x1.e8a816e38aa9ep-707, 0.0, 0.0, 0.0,
     0x1.f95f8d5eaecdep-412, 0.0, 0x1.ee582d44c54c8p-69, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.07ea41b8bc76fp-300, 0x1.bf01853d6a241p-11, 0x1.8a8340ba01352p-461, 0.0,
     0x1.d4198907ce0c1p-568, 0.0, 0.0, 0x1.faf19f785f7e1p-362, 0.0, 0.0,
     0x1.8c85b30409fa3p-647, 0.0, 0.0, 0.0, 0.0, 0x1.9583567272fb3p-704, 0.0,
     0x1.ab850fba54d5dp-161, 0x1.f8c23d27e8d38p-773, 0x1.0850711d9f803p-742, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.451c1c4c0e8d9p-540, 0.0, 0x1.674ea182591d1p-163, 0.0,
     0x1.aaa29cfaaece9p-304, 0x1.9699b35bd8bd3p-547, 0.0, 0x1.ea34d76f67d91p-761,
     0x1.96544c38df06p-38, 0.0, 0.0, 0.0, 0x1.311c8bb6699a5p-882, 0.0, 0.0,
     0x1.e3c217041b47dp-592, 0.0, 0.0, 0x1.d85f99b1fbb01p-325, 0.0,
     0x1.473b443480e84p-104, 0.0, 0.0, 0.0, 0x1.0587de48276b6p-377,
     0x1.fc46eacb8f882p-344, 0.0, 0.0, 0.0, 0x1.bd7ddc8c60314p-224,
     0x1.d224d88d711a8p-993, 0.0, 0.0, 0x1.e397ef804dc4bp-488, 0x1.0b81929961023p-842,
     0.0, 0.0, 0.0, 0x1.b8e000094c2a5p-912, 0.0, 0x1.d3cb555c40cdap-928, 0.0,
     0x1.499cd4ada111ep-79, 0.0, 0.0, 0x1.1f705df6ea311p-811, 0x1.91670eadc3d82p-840,
     0x1.3345a1068d916p-865, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.87286f6570ff6p-940,
     0.0, 0.0, 0x1.0a21c7fb5891ap-754, 0.0, 0x1.79616dac76a79p-361,
     0x1.2b1e71db66672p-996, 0.0, 0x1.82c5ba101d3d2p-48, 0x1.4924512eb4055p-931, 0.0,
     0.0, 0.0, 0x1.3befea0ea66e9p-344, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.311ea60cccc28p-357, 0.0, 0.0, 0.0, 0x1.946399695b436p-873, 0.0, 0.0,
     0x1.e068c4b709e51p-6, 0.0, 0.0, 0.0, 0x1.f78c885dc5cd1p-879,
     0x1.51f57b01537cep-964, 0x1.89fbbb4c534d4p-538, 0.0, 0x1.ab8e4d7b2a75ep-893,
     0x1.1913ffc4199bfp-907, 0.0, 0x1.4f365550fae2fp-770, 0x1.0575a37f38c82p-117,
     0x1.8115f80741028p-88, 0x1.e813917d5c644p-730, 0.0, 0x1.7b1ee7adc1bbcp-417, 0.0,
     0.0, 0.0, 0x1.09b75c6b23ab6p-851, 0x1.d3bb7a2cd142cp-1003, 0.0,
     0x1.b595ad5183b2dp-762, 0.0, 0x1.4ac54ef90efbap-893, 0.0, 0x1.adb12c36346bap-960,
     0.0, 0x1.5fdbdb4c3ad2cp-674, 0.0, 0.0, 0x1.112524c8d876p-608,
     0x1.3cd12b45fb11dp-1012, 0x1.5838018631a9ep-400, 0x1.9038fa1f9ba7fp-672,
     0x1.65e226ca197ap-126, 0.0, 0x1.2fbf740a842e2p-35, 0.0, 0.0,
     0x1.7f942861059b8p-963, 0x1.1d8fd9bf4570ep-23, 0x1.97dd1dba79402p-953, 0.0, 0.0,
     0.0, 0.0, 0x1.763e64df62236p-372, 0.0, 0.0, 0.0, 0x1.57c10d087b7edp-466, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aab9d7d811b17p-148, 0.0, 0x1.1b04b74d49b5ap-867,
     0x1.e83be84977e9ep-307, 0.0, 0x1.9a6730bb60d9ap-435, 0x1.ae64dc8b5843fp-522,
     0x1.b52b926c38ee7p-832, 0.0, 0.0, 0x1.fdd00e197cb1dp-478, 0x1.7faac303953cfp-406,
     0.0, 0x1.baa84ea44b2dcp-675, 0.0, 0.0, 0.0, 0.0, 0x1.9a77e71a0b45ap-959, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e50eadbb624b1p-761, 0x1.5f0d1cef75487p-439, 0.0,
     0x1.537b7a8bdc52fp-238, 0.0, 0x1.760514b3e7fccp-605, 0.0, 0x1.a0e4175070da8p-64,
     0.0, 0.0, 0x1.3fd368d9eb6fcp-746, 0.0, 0x1.bf23151c64521p-919, 0.0, 0.0, 0.0,
     0x1.0bde7146ebee7p-981, 0x1.38130633bd66dp-629, 0.0, 0.0, 0x1.3fcf163d189a5p-888,
     0.0, 0x1.70a6dd8c94fadp-579, 0x1.71b4e0e16b54ap-416, 0.0, 0x1.713471a4b1468p-824,
     0.0, 0.0, 0x1.13e18a1917211p-127, 0.0, 0.0, 0x1.9ac409271f1fap-313, 0.0, 0.0,
     0.0, 0x1.3dc2f179500bfp-138, 0.0, 0x1.a02dc1744dcp-448, 0.0,
     0x1.b45fe8ae67072p-617, 0x1.38196e7c28348p-119, 0x1.7ea1771e3b58dp-205,
     0x1.c61666c03122bp-387, 0.0, 0.0, 0.0, 0x1.8126be04c0fadp-274,
     0x1.b705d7f61436cp-162, 0.0, 0.0, 0x1.51a3a37be5357p-844, 0x1.98c7e27bcc9cap-232,
     0x1.eefb75dfd325cp-680, 0.0, 0.0, 0.0, 0x1.2a3807e900239p-918,
     0x1.21c2acb5cf471p-145, 0.0, 0x1.48c7ba7b72659p-945, 0x1.fa613152a70cp-186, 0.0,
     0.0, 0x1.fac0ca9839363p-677, 0x1.0f41cb8329ae1p-768, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c1c5726e35852p-868, 0x1.49f14a5a15613p-683, 0x1.59b352f2f833bp-764,
     0x1.02340583fd119p-721, 0.0, 0.0, 0.0, 0.0, 0x1.3390dc817ae28p-37, 0.0,
     0x1.793f5d55953afp-10, 0.0, 0x1.13301a3da09b4p-806, 0.0, 0.0, 0.0,
     0x1.641e24a60f345p-964, 0.0, 0.0, 0x1.d8a9126aad14cp-132, 0x1.8e98809f52d71p-289,
     0x1.acd05306967c3p-924, 0x1.047d91eacd8b9p-676, 0.0, 0x1.05bb35d04f38ap-734,
     0x1.a20667f7f9a19p-803, 0x1.1d1f00bc8f302p-846, 0.0, 0x1.aaa18f73b6b0dp-996, 0.0,
     0.0, 0x1.669fd004ff4b6p-623, 0.0, 0.0, 0.0, 0x1.a8e5de7dc9654p-84,
     0x1.f7d5206921caep-603, 0x1.4569dea199e0bp-640, 0.0, 0.0, 0x1.d7df9a16df8b1p-753,
     0.0, 0x1.32411e4105dp-613, 0.0, 0x1.a2e320f1b3309p-464, 0.0, 0.0, 0.0, 0.0,
     0x1.2ba4d427bfc37p-832, 0.0, 0x1.83349b11ff07cp-552, 0x1.4c8c93febef09p-280, 0.0,
     0x1.25a53a1c4a6e4p-641, 0x1.b09810eec0b2cp-232, 0x1.11262026863ep-318, 0.0,
     0x1.5bdd675c4a236p-465, 0.0, 0x1.a14f2ce6c9cd4p-440, 0.0, 0.0,
     0x1.be6b4d44add88p-492, 0x1.b09e5327e0528p-681, 0.0, 0.0, 0x1.5a4ba90d334b1p-489,
     0.0, 0.0, 0x1.f35dd6ea740c8p-741, 0.0, 0x1.901b368c4d87bp-216, 0.0,
     0x1.716eb04350df3p-792, 0.0, 0.0, 0x1.db61be0a6b6c9p-267, 0x1.c9c13bc77119fp-963,
     0x1.acfb27a702889p-186, 0x1.94cb7473cf04dp-228, 0.0, 0.0, 0x1.0ca73c0a55297p-556,
     0.0, 0x1.89f0abe963e72p-38, 0.0, 0x1.79e0163e65e42p-661, 0.0, 0.0, 0.0,
     0x1.ef6873a4ebae3p-220, 0x1.f7864598cf14p-684, 0.0, 0.0, 0x1.44a3654d508bdp-629,
     0.0, 0x1.f2da6b7b2ba66p-126, 0x1.abaa89bec1e5cp-630, 0.0, 0.0,
     0x1.e6f95aa917105p-856, 0x1.bf20ab899e75ep-228, 0.0, 0x1.49f55d994604fp-894, 0.0,
     0x1.bb7386e73fec1p-374, 0.0, 0x1.acd053c863464p-455, 0x1.43c085d634556p-206, 0.0,
     0x1.47d9f7aab815dp-219, 0.0, 0.0, 0x1.487dae7ae73e6p-442, 0x1.8e0cff4bd8fdep-932,
     0x1.aab939fff4901p-620, 0x1.de715989f6be4p-318, 0.0, 0.0, 0.0,
     0x1.f3db8a491fb7fp-511, 0.0, 0x1.a2a6c70bba27ep-336, 0x1.be3531bf1cd5bp-213, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.0369ba2457fdep-937, 0.0, 0x1.f2ed962832183p-544, 0.0,
     0x1.85e102472eecp-818, 0x1.8d672f3ef83fp-433, 0x1.9321007ef8f18p-724, 0.0, 0.0,
     0x1.e8b2b64076be9p-875, 0.0, 0x1.d49211a1aefa9p-934, 0x1.b4c5ff4f4dacep-483,
     0x1.4544d2cb2b38ap-493, 0x1.a1c68cf1cb68cp-205, 0x1.5452850c41a6fp-479,
     0x1.b5fa01c6d8952p-177, 0.0, 0x1.530b6deb8d2b1p-799, 0.0, 0.0, 0.0, 0.0,
     0x1.338f504ed6b45p-254, 0x1.615cd5598a5b7p-198, 0x1.65dcbfa89943bp-37, 0.0, 0.0,
     0x1.1d74534cb42fbp-903, 0x1.0dda70d18400bp-64, 0x1.097bd9958e52ap-115,
     0x1.ab5f0548e62e2p-352, 0x1.9403d8921d856p-524, 0.0, 0x1.624c1dc8bfc17p-90,
     0x1.884e4875a0341p-109, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae6164b4dc6bbp-965,
     0x1.530bd0df02efp-959, 0x1.35bb15e5642fbp-347, 0.0, 0x1.c59bd787403fbp-814, 0.0,
     0.0, 0x1.3f98825fe3a98p-300, 0.0, 0.0, 0x1.fea6b2d4c2549p-8,
     0x1.6d50ad7e51d28p-705, 0.0, 0.0, 0.0, 0x1.37b6b3f027849p-381,
     0x1.89d432e6dc0acp-450, 0x1.c28c027ea6c39p-233, 0.0, 0.0, 0.0,
     0x1.d4cb530034894p-212, 0x1.99d94f8731d43p-795, 0.0, 0x1.e1b2bf1314109p-592, 0.0,
     0.0, 0.0, 0x1.1f1c11f881cdcp-870, 0.0, 0x1.0f543c176aa3fp-816,
     0x1.581c217143c47p-8, 0x1.763453fbabc3cp-823, 0.0, 0x1.955bad7df201fp-1006,
     0x1.6e1730e0f76acp-101, 0x1.496d16b018dd3p-228, 0.0, 0.0, 0.0,
     0x1.10a62dd3d9ea1p-42, 0.0, 0x1.3e7f44b85dea9p-528, 0x1.0435ccc699394p-230,
     0x1.1d949b4269e02p-922, 0.0, 0x1.bf8bfab742ffcp-910, 0.0, 0x1.b095b34e39065p-226,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5f001917b7f29p-857,
     0x1.cb5bb360ab8eep-735, 0x1.92473f9aaff0dp-916, 0.0, 0.0, 0x1.172ca6b9c402cp-419,
     0.0, 0.0, 0.0, 0x1.b37e156376152p-1007, 0.0, 0x1.f39efa9607596p-951,
     0x1.4a2d9fd2abd0dp-153, 0.0, 0x1.5d01ebb6fa99dp-875, 0.0, 0.0,
     0x1.3c48e2a6ff242p-593, 0x1.50bfb2d553bfap-378, 0.0, 0x1.cb784a7c24a53p-1017,
     0.0, 0.0, 0x1.d03c8bbf0f864p-625, 0.0, 0x1.55ebf92cc9f3fp-476, 0.0,
     0x1.70a07bbd997f4p-392, 0x1.29f47e23f4805p-961, 0.0, 0x1.34a982356e7f7p-480,
     0x1.f627bec40a9ecp-501, 0.0, 0x1.2007415ac65dp-486, 0.0, 0x1.9fdc3e56185a2p-467,
     0.0, 0x1.5626529e8d068p-821, 0x1.8b8f3090265d8p-422, 0x1.a09132bb3b45dp-34,
     0x1.d7d1ded03eb12p-295, 0x1.9db6db48428b9p-732, 0.0, 0x1.93614ab0efe94p-292, 0.0,
     0.0, 0x1.69c48582df04ap-570, 0.0, 0.0, 0x1.ed31dc829dd57p-981, 0.0,
     0x1.1745ce207705bp-1018, 0x1.c904ff9446c2cp-946, 0.0, 0x1.d9034ce85c7c4p-839,
     0.0, 0x1.487c5978f052cp-986, 0x1.c1ca9e9976ba9p-421, 0.0, 0x1.3d6c412df4408p-213,
     0.0, 0x1.35065f91493ebp-488, 0.0, 0.0, 0.0, 0x1.901824a30bc18p-315,
     0x1.bc47c59ea31a9p-134, 0.0, 0x1.d348f5b1d9362p-581, 0x1.2a8d5e47d4541p-633,
     0x1.8961d1db3e68p-475, 0.0, 0.0, 0.0, 0.0, 0x1.c1d93af4e0106p-196,
     0x1.112d225c7e22cp-965, 0.0, 0.0, 0x1.17f63dfa0f221p-963, 0x1p0, 0.0, 0.0, 0.0,
     0x1.429b4ef0014bp-210, 0x1.2df08162a6645p-764, 0x1.5f1f3e55f0437p-534, 0.0, 0.0,
     0x1.34bf4e4b4a65cp-417, 0x1.5e585a446a067p-246, 0x1.cea5c2fa0e9eep-617,
     0x1.bed343f2f90c5p-322, 0x1.40f5c4a31b0b3p-179, 0.0, 0.0, 0x1.85d30209e5532p-967,
     0x1.8bea85c81458ep-351, 0x1.b8528e4017bbp-992, 0.0, 0.0, 0x1.c186406557acep-180,
     0x1.da109b9a01777p-842, 0x1.b43b0914bf051p-123, 0x1.294cdd5645e86p-624, 0.0,
     0x1.7bf1680436ea2p-764, 0x1.5ecb9d55f17dap-378, 0x1.d5493e9006ee2p-432,
     0x1.b0f8ebc82122dp-982, 0x1.0295157c62e4ap-157, 0.0, 0x1.5bddc63a77a0ap-609, 0.0,
     0x1.591b8c72a5bb1p-170, 0x1.78d160fd95c19p-688, 0.0, 0.0, 0.0,
     0x1.5567c857966ffp-963, 0x1.479b0bcad87adp-38, 0x1.458a09e7c8ac9p-609,
     0x1.321a2029159a6p-668, 0.0, 0x1.cc998ba720b64p-139, 0.0, 0x1.b3d82de4704efp-772,
     0x1.53d2a6680e339p-427, 0x1.b21ac383a780cp-650, 0x1.8458feb73f6c7p-876,
     0x1.f87da23403335p-11, 0x1.897a466531a12p-925, 0x1.d0b84c732c211p-447,
     0x1.b9211dcd390d5p-663, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2a9087a6b3205p-245,
     0x1.1b98f00e31f7fp-610, 0x1.4314f306d7368p-219, 0.0, 0x1.27a0cccb5ecdcp-894,
     0x1.6cb8c4f1f287bp-227, 0x1.d50f449b6fd4p-952, 0x1.28457c09000bap-813, 0.0,
     0x1.c591942604488p-646, 0.0, 0x1.0699b43fe48bbp-489, 0x1.be14026e104bcp-152,
     0x1.28e9e9b728a39p-284, 0x1.8d936edce4133p-41, 0x1.9da291e6c72c3p-209, 0.0,
     0x1.65eaa726d1e51p-299, 0x1.0fa56c70855ffp-83, 0x1.a4382ee99464cp-662,
     0x1.a57edb0bd2e1p-285, 0.0, 0x1.3c999ae566e9cp-127, 0.0, 0x1.0aa4a511560ebp-844,
     0x1.c49b4284283d8p-488, 0.0, 0x1.99844205c19fdp-703, 0x1.5777a6733c4f9p-872,
     0x1.990001c369971p-623, 0x1.9fc142753027dp-503, 0.0, 0x1.c228099668007p-351,
     0x1.92e6385e0ba09p-728, 0x1.574cc5b0575c3p-97, 0x1.2c52c71ea6842p-912,
     0x1.c2095fd37bff3p-922, 0x1.c6b6ccec5180fp-408, 0.0, 0.0, 0x1.d196e95d55b08p-833,
     0x1.0d3c5bf661fdcp-449, 0x1.245eeed9091fap-694, 0.0, 0x1.b1afb1c2fc3e9p-505,
     0x1.85e2fec49693cp-730, 0x1.c0e3d045c8113p-668, 0x1.a345bb63ca3adp-484, 0.0,
     0x1.4d07ed56de65dp-924, 0x1.c03ac45fbe192p-300, 0x1.9aa9e522ad46ap-704, 0.0, 0.0,
     0.0, 0.0, 0x1.0121c99b17f8p-171, 0.0, 0x1.513b84a92d5f5p-754, 0.0,
     0x1.c33836e330232p-554, 0x1.5e75b1304c2fp-799, 0.0, 0.0, 0.0, 0.0,
     0x1.60c4e677a765fp-336, 0.0, 0.0, 0x1.a8aeb4f522ecdp-259, 0.0,
     0x1.d5163321f3a6dp-470, 0x1.c30e08175e1ddp-920, 0x1.0ae7e79960f6dp-344,
     0x1.eb1c11977bf76p-344, 0.0, 0.0, 0x1.7733836a8b489p-166
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_tand4_u35kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
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
    printf("Sleef_tand4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tand4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
