/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tanhd4_u10kvx.c --function Sleef_tanhd4_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
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


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.89d408923333p-412, 0.0, 0.0, 0x1.14122c52cb695p-548, 0x1.e37f045c6234p-978,
     0x1.6bdaf862eca5fp-480, 0x1.4fd276ea9fa56p-486, 0.0, 0.0, 0.0,
     0x1.8b00982d8fe4fp-32, 0x1.c306899c4daeep-326, 0x1.6d33b90f9adbap-1001,
     0x1.1571fde5c04bap-880, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.45e5e5f43b17ap-575, 0.0, 0x1.b6210a5857156p-296, 0.0, 0.0,
     0x1.6a9a477b6294bp-497, 0x1.6828959b03b07p-84, 0x1.9c6b95f0ffb5cp-158,
     0x1.47fbe166664e1p-895, 0.0, 0x1.31549f393fdebp-529, 0.0, 0x1.3372acd7feae1p-555,
     0.0, 0x1.79c9ca14873dbp-772, 0x1.cc71fde26e2a3p-483, 0x1.dcdfbf2215d87p-1003,
     0x1p0, 0x1.164906d11a4f7p-541, 0.0, 0.0, 0.0, 0x1.fc1cf9c5ff036p-956,
     0x1.b44072ff8b47ap-236, 0x1.f87adb104cb7p-840, 0x1.d487cd6d40d5dp-187,
     0x1.4b06e98ff507dp-839, 0.0, 0x1.819708b55837fp-903, 0x1.5dc4169597b0fp-738,
     0x1.734e45b436d13p-253, 0.0, 0.0, 0x1.5cee183333b76p-509, 0x1.c083d7b420819p-476,
     0.0, 0.0, 0x1.d04a8059321bbp-315, 0x1.434ea3f81c08p-605, 0.0,
     0x1.e6b0fa4441ccfp-759, 0x1.6f38141038b17p-501, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d4d57de46b412p-352, 0.0, 0x1.eea9ba4b90531p-884, 0x1.c1dc96708a6fp-494,
     0x1.948e22d376d59p-773, 0.0, 0.0, 0x1.cbf61bec86f93p-87, 0x1.23d967c4ab552p-262,
     0.0, 0x1.d70bc2b01e241p-564, 0x1.6f21d599bde78p-48, 0.0, 0.0, 0.0,
     0x1.372246ed84397p-286, 0x1.f00cb3f73c52cp-602, 0.0, 0.0,
     0x1.808dba3a8b4b3p-1005, 0.0, 0x1.3830ee44bd7a9p-270, 0x1.d504795fcc8adp-457,
     0x1.29a94cdcdefb8p-910, 0.0, 0x1.00456e4c7bd64p-427, 0x1.9542b1598916dp-659,
     0x1.cbfbbf24d3f82p-740, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5a6f162aa6056p-80, 0.0, 0.0, 0x1.202aefa4fe1a1p-480, 0x1.2e2b05a8fa14p-149,
     0x1.9f5b4a05d7423p-51, 0.0, 0x1.267827da56f1bp-511, 0x1.6c18494e5c90ep-424,
     0x1.a4a3d3ad73c59p-150, 0.0, 0x1.3d74c99ae5ba5p-886, 0x1.9a62d4fcecba9p-602, 0.0,
     0x1.737b3e8f3c953p-652, 0x1.34e8647c4e336p-504, 0x1.ca7f0028689f2p-954, 0.0, 0.0,
     0.0, 0x1.dc8606eca21d7p-877, 0.0, 0x1.61055d79753c8p-27, 0.0, 0.0, 0.0,
     0x1.338a5a020c2d6p-179, 0.0, 0x1.13de7ca416edep-636, 0.0, 0.0, 0.0, 0.0,
     0x1.b295968ecbdaap-768, 0.0, 0x1.360b725d5d1b2p-965, 0x1.9baaf5ed06664p-612,
     0x1.c280b5284bb6cp-652, 0x1.ea2c2761ece23p-618, 0.0, 0.0, 0x1.9c1b29fd46ffep-986,
     0x1.83204c7f37242p-252, 0.0, 0x1.69c78014859dep-217, 0x1.52fee01db27d1p-127,
     0x1.f666c44bbc326p-668, 0x1.40282131bd6d8p-508, 0.0, 0x1.a0ff50e43b1c9p-459, 0.0,
     0.0, 0x1.80e1c50b91f5fp-526, 0.0, 0x1.42bda156aa79ep-590, 0.0, 0.0,
     0x1.756720eeed256p-919, 0.0, 0x1.d7dfe56d0e8afp-663, 0.0, 0.0,
     0x1.d0b7405e4cca8p-194, 0x1.277793be3a2f9p-414, 0.0, 0x1.2a570de0400e4p-500, 0.0,
     0.0, 0.0, 0x1.fdc3efc23438ep-180, 0x1.d6c69b4cc4c17p-173, 0.0, 0.0, 0.0,
     0x1.48b12cc85ddbdp-196, 0.0, 0.0, 0.0, 0.0, 0x1.889194711adc2p-852,
     0x1.dc450d023ec07p-229, 0.0, 0x1.0c0b232aced81p-975, 0x1.1c3b93a92d722p-771,
     0x1.90900787cc646p-1007, 0x1.d5230ba6514dap-336, 0.0, 0.0, 0.0, 0.0,
     0x1.5fd563fdfea34p-554, 0.0, 0.0, 0.0, 0x1.0e815178eded8p-801,
     0x1.bf85f54d81848p-874, 0.0, 0.0, 0x1.6f8de84d35716p-925, 0x1.de063cf3d807ep-466,
     0.0, 0.0, 0.0, 0.0, 0x1.a12286903135dp-248, 0.0, 0x1.fc900b47f8969p-657, 0.0,
     0x1.1b05b022341cdp-457, 0x1.6fe7bf0f40683p-581, 0x1.566925c1a1e96p-632, 0.0, 0.0,
     0.0, 0x1.00f4621e8d8c4p-845, 0.0, 0x1.5a5dc3603dc91p-627, 0.0,
     0x1.53ca6edf31962p-73, 0.0, 0x1.c5f039d5da21ep-330, 0.0, 0x1.2263c77b4f803p-380,
     0x1.c949f07a9996fp-440, 0x1.049e5bad29243p-878, 0.0, 0.0, 0x1.c881c7a1f3b07p-504,
     0.0, 0x1.c03aec5178654p-848, 0.0, 0.0, 0.0, 0x1.a81b88aefa302p-932, 0.0,
     0x1.429649cb7194bp-804, 0x1.0af89c35a53fap-728, 0.0, 0x1.f00f8193d56ecp-339,
     0x1.7121c054460eep-197, 0x1.daa8306097d11p-551, 0.0, 0x1.5aad1740ea72bp-936, 0.0,
     0.0, 0x1.bac186e198182p-346, 0x1.ba3199e2cf2ebp-11, 0.0, 0.0, 0.0, 0.0,
     0x1.24f77c6b8ae4dp-846, 0x1.93862445e5aa1p-199, 0x1.dd143f9e0f168p-521, 0.0,
     0x1.afa5e1d630b85p-981, 0x1.f6f04717f4867p-402, 0x1.3774ae59a47c8p-144, 0.0,
     0x1.c01d821e434cap-701, 0x1.60345ff598ce2p-264, 0.0, 0x1.1ba41fe26e994p-44,
     0x1.319fb4b9e12f4p-683, 0.0, 0.0, 0x1.aeaf6aa4bfa62p-324, 0.0,
     0x1.302a2b62fc429p-42, 0.0, 0x1.6bcb5d770d55cp-296, 0.0, 0x1.d75ff549eec67p-462,
     0.0, 0x1.64ad04b6efa28p-93, 0.0, 0x1.e6f60bbefd9adp-331, 0x1.f5727102f8f6ep-569,
     0x1.c50cd706b31c7p-851, 0.0, 0.0, 0x1.aa66206bb277cp-801, 0.0,
     0x1.0e6d53d1b400bp-416, 0x1.fc20727c06898p-613, 0x1.5fc61a937bdf2p-30, 0.0,
     0x1.9e174e4ab38c5p-927, 0.0, 0.0, 0x1.bde265bae6684p-386, 0.0,
     0x1.0ac6b5661d64dp-783, 0x1.94f480f7b32bdp-71, 0.0, 0x1.6d42f597a9efp-823, 0.0,
     0.0, 0x1.5fb94727b9314p-1001, 0.0, 0.0, 0x1.aca63019446a8p-1020,
     0x1.a76056500a84p-851, 0.0, 0.0, 0x1.5446b94fef0f4p-591, 0.0,
     0x1.7cdb277b4b86fp-302, 0x1.95196d6d5b373p-697, 0.0, 0.0, 0.0,
     0x1.be6b490b402c2p-480, 0.0, 0x1.fd67702125825p-852, 0.0, 0.0, 0.0,
     0x1.269c315a2e0c1p-444, 0.0, 0x1.efea9e0c4c877p-967, 0x1.038e3f907bb96p-454, 0.0,
     0x1.f37805790bb48p-252, 0.0, 0x1.174875f7a6b95p-1018, 0x1.e56218c7567c5p-877,
     0.0, 0.0, 0.0, 0.0, 0x1.ffcb261b90a63p-906, 0x1.27936a45c9172p-521,
     0x1.9e5414edd1e58p-752, 0.0, 0x1.0fa06d63332bdp-546, 0x1.86ec4aeb2c96bp-893, 0.0,
     0x1.6c0037af1948cp-940, 0.0, 0x1.fa8f701d435ecp-474, 0x1.14c0c26960e38p-473,
     0x1.fb07cea594855p-572, 0.0, 0.0, 0.0, 0x1.936b473453911p-571,
     0x1.11f099a6f095cp-907, 0x1.ae6c97004bc94p-773, 0.0, 0x1.8964c3588d55dp-923, 0.0,
     0.0, 0x1.a44e9e425ecdap-1013, 0x1.13d57f8f6b8ebp-670, 0x1.8ff1cc1632e27p-89, 0.0,
     0x1.6e5b488d8578p-452, 0x1.1a474020a3ef8p-225, 0x1.ce4dc45755612p-264,
     0x1.ad5ead76bbb58p-700, 0x1.70d65de69d2f4p-868, 0.0, 0x1.e3d29708a36c3p-440, 0.0,
     0x1.09c85c252a6abp-829, 0.0, 0x1.574d77a690c83p-145, 0.0, 0x1.a1a04af748763p-873,
     0x1.58ab44c63b1d3p-916, 0x1.b92d081a4c7bap-266, 0x1.6cbd5f507177p-897, 0.0, 0.0,
     0x1.5959a3e0a48dep-805, 0.0, 0x1.621212ab8416ap-1018, 0x1.7561b573f6fa7p-995,
     0.0, 0x1.96c94ec467f3ap-719, 0.0, 0x1.2f804a1d50bd9p-933, 0x1.02fa1ff393339p-768,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e672157c6e28p-708, 0x1.6792d07dbca7dp-511,
     0x1.90fb0d2d50bb5p-119, 0.0, 0x1.bbd9c12662917p-1013, 0x1.6add435838b48p-865,
     0.0, 0x1.ef4ecf60a729cp-206, 0x1.0031354d1dd76p-891, 0.0, 0.0,
     0x1.3879f65561091p-364, 0.0, 0.0, 0x1.da1fd4ba0a9fcp-40, 0x1.bcbc3bad090ddp-901,
     0.0, 0.0, 0.0, 0x1.31f8d92685577p-766, 0.0, 0.0, 0.0, 0x1.5b9c7400cb5acp-192,
     0.0, 0x1.30630fc214067p-733, 0.0, 0x1.30f13393fe82fp-691, 0x1.e51b38dde17dcp-465,
     0x1.959f29848300cp-280, 0.0, 0x1.0c0f7a0417424p-195, 0x1.669895065e52cp-298, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.59e95d9737f74p-37, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e4c8e84e1dc69p-70, 0x1.890bf0818713fp-44, 0.0, 0x1.b125064e9b573p-814, 0.0,
     0x1.e2ca9f36f4963p-534, 0x1.2280fd7eb28a2p-959, 0.0, 0.0, 0.0,
     0x1.03c65571f39fcp-728, 0x1.f6c06e9ec7bfbp-472, 0x1.cd47450b29e1ap-724,
     0x1.8edc954f650a2p-79, 0.0, 0.0, 0.0, 0x1.550e8259b36dep-505, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.429d0b55d85p-812, 0x1.7c3ea61de8016p-855, 0.0, 0.0, 0.0, 0.0,
     0x1.bc4d0e9c091fap-216, 0x1.47cd65403cd9cp-593, 0.0, 0.0, 0.0, 0.0,
     0x1.0c92007457425p-945, 0x1.2c0da0db89a3p-252, 0x1.402a04a6e18d1p-437,
     0x1.6af73add8060dp-180, 0.0, 0x1.4b5195e6a7634p-96, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.28cb29dd36dbdp-981, 0.0, 0.0, 0x1.26beb69f3baf5p-395,
     0.0, 0x1.cd495f40beb03p-893, 0x1.3a20adda280dbp-306, 0x1.9546c1f36214cp-83, 0.0,
     0.0, 0x1.8116d30db0b99p-304, 0.0, 0x1.cc38a27a58ec6p-369, 0.0, 0.0,
     0x1.44cdecbf126eap-351, 0.0, 0.0, 0.0, 0x1.52054f6b3f39fp-33,
     0x1.da0a928bee5e2p-67, 0.0, 0x1.809cfd4bf1eabp-791, 0x1.b29a7fab001ap-792,
     0x1.f93648e21c75fp-39, 0x1.21b616bd85672p-138, 0x1.1c552e3dccfc5p-442,
     0x1.c73658fa5e1adp-59, 0.0, 0x1.b5668afcc6096p-491, 0x1.e60fac15b7c08p-759,
     0x1.51123b729167bp-379, 0x1.28ff44437112dp-878, 0x1.a7730c67886p-874,
     0x1.a430bf17a7154p-33, 0x1.1ff0e7c40a17p-531, 0x1.bb3d554ac82d1p-799,
     0x1.a3012b5930d76p-137, 0.0, 0.0, 0x1.40aa99b5fcc6p-791, 0x1.74aab182a72e2p-576,
     0x1.968379b6ef1f9p-510, 0x1.1657fadb86a51p-173, 0x1.5b4d5497fc381p-687, 0.0, 0.0,
     0.0, 0x1.8c606b679d0a6p-764, 0x1.7824d77d7ebaep-658, 0.0, 0.0,
     0x1.9bb9518d10217p-213, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cddbd2191e116p-644,
     0x1.64a872cf80729p-43, 0.0, 0x1.285d2f8627ddap-572, 0x1.577a81f3dc402p-856,
     0x1.d8d8fe50181a7p-64, 0x1.fb8b62e03392dp-551, 0x1.dd2fc52f1ce42p-357, 0.0, 0.0,
     0x1.f5125ff1cc2b1p-94, 0.0, 0x1.c453433fe9a9ep-293, 0.0, 0.0,
     0x1.071c0a269ed22p-863, 0.0, 0x1.cd593389db466p-63, 0x1.9bb248f057415p-439, 0.0,
     0x1.24949d1aaf7e2p-195, 0x1.d6402bd7b534ep-839, 0.0, 0x1.c5c194ffb6299p-60,
     0x1.5f82d6be315f6p-373, 0.0, 0x1.07f78c39af238p-838, 0.0, 0x1.d669a965570bep-213,
     0.0, 0.0, 0x1.a78cb93fb834ep-514, 0x1.f6e50266fefcp-608, 0x1.007e9977d6091p-347,
     0.0, 0.0, 0x1.1727863999d9dp-995, 0x1.1bb9c8cc0917ep-887, 0.0, 0.0,
     0x1.98f71dd187d74p-335, 0.0, 0x1.b7b9b01c0d97dp-411, 0.0, 0x1.d693631be90fbp-928,
     0x1.672cb15cb2f97p-293, 0x1.26d8bed4974a2p-423, 0.0, 0x1.1651190ad9561p-759, 0.0,
     0x1.642261c4477bbp-220, 0x1.c87d82b784135p-1004, 0x1.6b59b224baf47p-270,
     0x1.0cb4201a2a94fp-892, 0x1.75afc7ed6277cp-201, 0.0, 0x1.754ce44ed2565p-604,
     0x1.5f038369f1818p-174, 0x1.611caacf99394p-970, 0x1.85d3e9ed2c0fcp-261, 0.0, 0.0,
     0x1.e733847de6886p-366, 0x1.9acefca561369p-612, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c39a32dcbe697p-630, 0.0, 0x1.b7968d55096e6p-638, 0x1.c20f0356b337ep-464, 0.0,
     0x1.e72df3b110572p-161, 0x1.d6b79eca9bc4p-109, 0x1.f962421684574p-284, 0.0, 0.0,
     0x1.586c7152209cbp-773, 0.0, 0.0, 0.0, 0.0, 0x1.6579f2b54ffc4p-834, 0.0,
     0x1.641df17494314p-397, 0.0, 0.0, 0x1.b39a9a785b53bp-74, 0.0,
     0x1.16f1f3d5cc642p-795, 0x1.1263b2ab02badp-701, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.86d434d7f156fp-767, 0x1.8bb0f4631108fp-43, 0.0, 0.0, 0.0, 0.0,
     0x1.c3af454ca034cp-952, 0x1.ae6eed1c45d9dp-984, 0x1.70a11e34c2eebp-931, 0.0, 0.0,
     0x1.a24edda41396cp-734, 0.0, 0.0, 0x1.5d99ef5dd5719p-630, 0x1.09610a39397adp-519,
     0x1.65e04e847e322p-128, 0x1.1d32ec66f5384p-46, 0x1.8f3c8da04199p-1000, 0.0, 0.0,
     0.0, 0.0, 0x1.e1e8aa2c53417p-920, 0.0, 0.0, 0x1.ffb7a2e35673ap-596, 0.0,
     0x1.40f864445aa88p-155, 0x1.73ae6efb6e7bbp-426, 0x1.4002907dcacdp-664,
     0x1.eb50b9bea88dfp-535, 0x1.e7634bf50124fp-881, 0.0, 0.0, 0.0,
     0x1.07a73dc4aa4d1p-163, 0x1.7e757044a8c33p-745, 0x1.a4b79a6515b87p-426, 0.0, 0.0,
     0.0, 0x1.f38e411d4ba59p-436, 0x1.1c6d64055b411p-385, 0.0, 0.0,
     0x1.cdaa4cfed4f6ap-939, 0.0, 0x1.30394245c8d88p-491, 0.0, 0.0, 0.0,
     0x1.0c6b38b62faf6p-58, 0.0, 0x1.0b74e92111b4p-500, 0.0, 0x1.69934443578ep-1006,
     0.0, 0x1.1a2f7dd9e7833p-181, 0x1.cd073934c57d2p-872, 0.0, 0.0,
     0x1.b4480a815843p-594, 0x1.99769d298697ep-824, 0.0, 0x1.0c66b72f60b01p-706,
     0x1.7e758166dfa1p-588, 0.0, 0x1.f253fff395d97p-673, 0.0, 0x1.8035fb288b965p-8,
     0x1.52a9dfdd3cda6p-527, 0.0, 0x1.4b04eac0b6606p-141, 0.0, 0x1.983260314815bp-913,
     0x1.652cedb5340d7p-527, 0.0, 0x1.5df14f003a623p-912, 0x1.c12ca06bb3285p-642,
     0x1.dddc7b7a490a6p-826, 0x1.ac5cc7a1da5f1p-737, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.921c203a27504p-732, 0.0, 0x1.ef8c939c95e26p-809, 0.0,
     0x1.7a670e6478273p-154, 0.0, 0x1.2bef728eab0f4p-377, 0.0, 0.0, 0.0,
     0x1.17481d3908711p-795, 0x1.2317080287af9p-639, 0x1.b4a5f647f1e47p-1022,
     0x1.c06924c0d95b7p-88, 0x1.9b84705502456p-806, 0x1.d49b0a3a84687p-898, 0.0, 0.0,
     0.0, 0x1.e3912d1f25a1dp-782, 0x1.0343cc1aab061p-761, 0.0, 0.0, 0.0,
     0x1.d2b5b1fe711d9p-743, 0x1.076da4a25fc7p-139, 0x1.8eea540ddaa6p-322, 0.0,
     0x1.9e40e09e9437fp-944, 0x1.b451f16925137p-349, 0.0, 0.0, 0.0,
     0x1.c66cef1636998p-821, 0x1.31f0c689e9b07p-478, 0x1.cf655661dfa5ep-871,
     0x1.b9aa5e33a232cp-419, 0.0, 0.0, 0.0, 0.0, 0x1.612362f5ff9cbp-920, 0.0, 0.0,
     0x1.e5c58a223c922p-941, 0.0, 0x1.779c0daeb53f1p-612, 0.0, 0.0,
     0x1.950da056ef357p-9, 0x1.1c26c10622c11p-599, 0.0, 0.0, 0x1.dad7f24141948p-716,
     0.0, 0.0, 0x1.f0d87132a2d1dp-93, 0x1.a182a815252b5p-390, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.d5a9ff91d2fdp-871, 0.0, 0.0, 0x1.255a8786cc4f5p-63, 0.0, 0.0,
     0.0, 0x1.948041e2154ccp-485, 0x1.f33df1da18688p-655, 0.0, 0x1.52b05e7b9590dp-729,
     0.0, 0x1.bc0334e901927p-704, 0x1.678cc56cd306ep-654, 0x1.be4f3439fd874p-1016,
     0x1.a0e1dbb5fd6c5p-671, 0x1.2a8002fe462b3p-531, 0x1.576bcbc4cda4cp-295,
     0x1.99ccd88cc1f94p-736, 0.0, 0.0, 0x1.65a14b3699a86p-264, 0x1.b5c843a8d8804p-771,
     0.0, 0.0, 0x1.2363536632ea7p-255, 0.0, 0x1.d552f125558dcp-208,
     0x1.8aff3c3e3f3e4p-534, 0x1.1a37ccd7ac29dp-35, 0.0, 0.0, 0x1.78fe7397a998dp-110,
     0.0, 0x1.b3151b1528e8bp-818, 0.0, 0x1.fc21fbcbf004fp-437, 0x1.b440c342d3316p-441,
     0.0, 0x1.cadca1da32b22p-273, 0x1.0cceff123d0f2p-941, 0x1.4faccfa653aa9p-722, 0.0,
     0x1.ac9cf0474741ep-734, 0.0, 0x1.59741d673722dp-200, 0.0, 0x1.8cd4a8a5e08ebp-348,
     0x1.541b2c3c5ceep-859, 0x1.5880dbe949a51p-272, 0.0, 0.0, 0x1.13d8562857c38p-606,
     0x1.d39ed99bdf4cbp-738, 0x1.9d7037e6e4322p-481, 0x1.a50941c45bc42p-105, 0.0,
     0x1.ec0fbf1b82f6fp-955, 0.0, 0x1.21252433c02e7p-361, 0x1.820a47cbe7cc2p-1022,
     0x1.508fdd1b072b4p-322, 0x1.ca7be952d39cdp-240, 0x1.2b63151e2b218p-983,
     0x1.22977fb684ba9p-552, 0.0, 0x1.3e0fc2a34024fp-622, 0x1.18c11b3c40e58p-762,
     0x1.016b288c4873dp-427, 0.0, 0.0, 0.0, 0x1.0e0ad043c01d1p-639, 0.0,
     0x1.c4eba6009a3b9p-878, 0.0, 0x1.ceaa443578aa3p-539, 0.0, 0.0, 0.0,
     0x1.1a9e286191c63p-297, 0x1.78643857d5169p-16, 0.0, 0x1.3cb0ce6f37afp-762,
     0x1.8cc255251102p-520, 0x1.1dec728086a3ep-950, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08bf27b85300dp-191, 0x1.f55fb014f7799p-487, 0x1.e682feea3d8c3p-495,
     0x1.b0e9a451a50a4p-457, 0.0, 0x1.7b214ebb88a17p-831, 0x1.220cb8346a48p-846, 0.0,
     0x1.e4fdfb5bb631ap-793, 0.0, 0x1.cb9eb4204f4b3p-182, 0.0, 0x1.5b3264ca45c2dp-292,
     0.0, 0x1.e58663dcfe49dp-757, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d45bf8945ef6p-286, 0x1.e237eeceeb546p-368, 0x1.e15a26498d4a5p-442,
     0x1.16cf49f317108p-422, 0.0, 0.0, 0.0, 0.0, 0x1.b14908df500ddp-109, 0.0,
     0x1.15b13495d0504p-307, 0.0, 0x1.1258dbcab6b4cp-281, 0.0, 0.0, 0.0,
     0x1.b5a825ffade66p-350, 0.0, 0x1.d81541a312546p-607, 0.0, 0.0, 0.0, 0.0,
     0x1.29188ebe31b64p-319, 0x1.2f37a1707eb69p-732, 0.0, 0x1.9344a0b802aebp-481, 0.0,
     0x1.d1b6c18b9da9cp-182, 0.0, 0x1.b08c0929e2e95p-934, 0.0, 0x1.a3db5b9a7a939p-147,
     0x1.5b31295925d42p-801, 0x1.c77ea99286b8dp-287, 0x1.122c802986477p-721, 0.0,
     0x1.1af75a4d78dedp-381, 0.0, 0.0, 0x1.06218e0af0d6ap-434, 0.0, 0.0, 0.0,
     0x1.7e2b4e83b80d9p-413, 0.0, 0x1.fd7a599ffc855p-62, 0.0, 0.0,
     0x1.8f073de61c7dep-305, 0x1.112a8812c7bbfp-660, 0x1.6f54fdf909af5p-98, 0.0,
     0x1.1f7cbe3711024p-938, 0x1.643b63a3a146ep-554, 0.0, 0x1.5c24b0692e686p-357,
     0x1.e83cf5cb388c1p-977, 0.0, 0x1.cf94c7f8186adp-604, 0.0, 0x1.9b82e139472aep-789,
     0.0, 0x1.10e8163b3b5a9p-926, 0x1.a6b02df928ddcp-856, 0x1.dd43b705285d2p-413,
     0x1.4a5b2c73d2a6ep-940, 0x1.a1869ce3d5d0ap-298, 0.0, 0.0, 0x1.f70044e85be7cp-8,
     0x1.4a5b8c2b8af6p-271, 0x1.2103d3156751dp-1018, 0x1.028b45a575f53p-521,
     0x1.886db9d24da85p-136, 0x1.957f9c32bf25cp-390, 0x1.a61f378956c8ep-67,
     0x1.0a3aa7817835ep-940, 0.0, 0x1.3fcc5d655d2dap-252, 0x1.21830b22be342p-677, 0.0,
     0x1.fe6f9c76a65fp-419, 0x1.27b25c5b6f342p-390, 0.0
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
            tmp1 = Sleef_tanhd4_u10kvx(tmp0);
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
    printf("Sleef_tanhd4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_tanhd4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
