/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhd2_u10kvx.c --function Sleef_atanhd2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0x1.344e354c9f548p-1012, 0.0, 0x1.386369d9b7ecbp-7, 0x1.336b5a56c3f4cp-1001,
     0x1.e5b5e904e0adap-205, 0x1.5ff58015b9362p-304, 0.0, 0.0, 0.0,
     0x1.8eeb0cb960c59p-887, 0.0, 0.0, 0.0, 0x1.a24ed4877d1acp-443, 0.0,
     0x1.66c8aef927132p-1022, 0.0, 0.0, 0x1.eb619e623b2cdp-193,
     0x1.d5040a5eb2814p-294, 0x1.9dbd1b06f265fp-594, 0.0, 0x1.e69a7bc1741d6p-85,
     0x1.f8cb9ee97dcfap-556, 0x1.0faae24ce6694p-765, 0x1.a5fcbb6fa8889p-930,
     0x1.1a610c2abf334p-26, 0x1.f831c0d1b3477p-603, 0.0, 0x1.d2da53f844cbdp-1001, 0.0,
     0.0, 0x1.7cf4dca487129p-827, 0x1.63bccd9ccf41cp-155, 0x1.47ec5cf92867ep-531, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d84ba695b405ep-999, 0x1.98178036d9778p-832, 0.0,
     0x1.f190ce51b4a5ep-330, 0.0, 0.0, 0x1.7cf58d8b3fc1ep-958, 0x1.64f85f9eaa49ap-998,
     0x1.41c109dff87f4p-88, 0x1.961b7ea689e64p-110, 0.0, 0x1.24145caa5c1dcp-98,
     0x1.aef512a2037bep-636, 0x1.d4242f78de858p-357, 0.0, 0.0, 0.0,
     0x1.ccffcb4b4a83dp-426, 0x1.aa3a11fbd0bdfp-301, 0.0, 0x1.ca69bbdc19e5cp-928, 0.0,
     0.0, 0.0, 0.0, 0x1.4aa9bf4199617p-166, 0x1.3b4d48905a8e4p-768,
     0x1.6b15e54c67b5fp-634, 0.0, 0x1.6e259e05f40a4p-497, 0.0, 0x1.167d840a9784ap-350,
     0.0, 0.0, 0.0, 0.0, 0x1.420145e273315p-188, 0.0, 0.0, 0x1.c41107b2c91e7p-170,
     0.0, 0.0, 0x1.f3737de5badbcp-845, 0.0, 0x1.6f1e5348d79c2p-238,
     0x1.2917aba393ac7p-74, 0.0, 0.0, 0.0, 0.0, 0x1.29eb20af9e2cbp-602,
     0x1.69197de841093p-70, 0x1.79e90148f95c9p-778, 0x1.ded79c3932539p-918,
     0x1.87f67bc3e461p-332, 0.0, 0.0, 0.0, 0x1.f173042f469aap-103,
     0x1.3e0c7816dfc33p-498, 0.0, 0x1.65425ec59eefep-661, 0x1.b3980871487ebp-770, 0.0,
     0.0, 0x1.e76d4bb1938d2p-602, 0.0, 0.0, 0.0, 0.0, 0x1.cdafc5be747c8p-376,
     0x1.6a4cdd82392c2p-858, 0x1.7826d1e757606p-515, 0x1.0281b39cced39p-648, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.037bb8259c8b5p-966, 0.0, 0.0, 0.0, 0x1.b83898a67a3dcp-976,
     0.0, 0.0, 0.0, 0x1.6a1cf61c7a194p-474, 0.0, 0.0, 0x1.f75e254eb19c2p-92,
     0x1.86828a16eefd7p-595, 0x1.d97d3587322dfp-366, 0.0, 0.0,
     0x1.f1b3b89953cc9p-1012, 0x1.c58ea4717a512p-710, 0.0, 0.0, 0.0,
     0x1.01f4c6166cd0cp-828, 0x1.43bdf5044c3cfp-385, 0x1.a058a19ab1961p-899, 0.0, 0.0,
     0x1.d17f6df110784p-374, 0.0, 0.0, 0.0, 0.0, 0x1.445beb12fe2dfp-283,
     0x1.af27076db2152p-636, 0x1.94488d3017fcbp-377, 0x1.1a4317e3c2c68p-517, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4ddeba8b90c4dp-805, 0x1.085d7334d21c4p-162,
     0x1.381a351d4afd8p-104, 0x1.62fa1773bf8c5p-912, 0.0, 0x1.2bb2b8b98d1d4p-66, 0.0,
     0.0, 0x1.ed0244bdfe2dep-185, 0.0, 0.0, 0x1.88ae19900f5c8p-239, 0.0, 0.0, 0.0,
     0x1.ca3aeec4eaa0bp-756, 0.0, 0x1.1fabd1fe25cb8p-921, 0.0, 0.0, 0.0, 0.0,
     0x1.78846d87c3c14p-721, 0x1.3f4032a0d1ac1p-511, 0.0, 0x1.64ba05047dc23p-785,
     0x1.81f881467146ap-285, 0x1.3a66f6746dc7bp-119, 0x1.cdbbe6833ac16p-800, 0.0,
     0x1.b0eb71310c955p-314, 0.0, 0.0, 0.0, 0x1.abdadebb59dd3p-46, 0.0, 0.0, 0.0, 0.0,
     0x1.318573585a8c3p-856, 0.0, 0x1.10a3f3af01f7dp-680, 0x1.13fbebabc334ap-355,
     0x1.5f1563b6b3395p-880, 0x1.72d6bbf62726bp-765, 0.0, 0.0, 0.0,
     0x1.cf1835973c07ap-500, 0.0, 0.0, 0.0, 0x1.8126420f9108cp-339, 0.0, 0.0, 0.0,
     0x1.27e4790e84f44p-972, 0x1.a221b5f94d483p-788, 0.0, 0.0, 0.0,
     0x1.7d977971d1602p-374, 0.0, 0x1.820dc4117896ep-108, 0.0, 0x1.b3645e13e6029p-221,
     0.0, 0x1.4646cdb00aef6p-897, 0x1.35b58bf4624dap-367, 0.0, 0x1.67434d7294929p-142,
     0.0, 0x1.d6f72ac613449p-800, 0.0, 0x1.fc9557cbb8997p-52, 0x1.7ded5025ae93fp-71,
     0.0, 0x1.d651b8b074157p-744, 0.0, 0.0, 0.0, 0x1.bd9652e98742p-747, 0.0,
     0x1.e315afacc0b38p-795, 0.0, 0x1.cae896320b9e1p-831, 0x1.6ee0d66b30fcap-714, 0.0,
     0x1.1d57619cd1c29p-233, 0.0, 0.0, 0x1.71ba9f817c9bap-509, 0x1.b5d64a28ba8p-608,
     0x1.adf7097aad81dp-890, 0.0, 0x1.6b7778c12518cp-174, 0.0, 0.0,
     0x1.f00b7f7aae04ep-547, 0x1.88a816997e243p-289, 0.0, 0x1.a66cb853b83c3p-955,
     0x1.aa26caf0d8e55p-319, 0.0, 0.0, 0x1.2b1b3ef36f6e4p-979, 0x1.913c36edb47b6p-312,
     0.0, 0.0, 0.0, 0.0, 0x1.b857f8b3a4feep-846, 0.0, 0x1.486633d269a6fp-718,
     0x1.e546b9461ea77p-26, 0.0, 0.0, 0x1.b727a8157005p-948, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4fba9126103bfp-1008, 0.0, 0.0, 0x1.18ad16acceeacp-720,
     0x1.6ee2045894f3ap-8, 0x1.5e54b59fd2d74p-337, 0.0, 0x1.b912898fd3938p-949,
     0x1.3b82bc3387427p-799, 0x1.8fc2800ab1ec5p-142, 0.0, 0x1.1d469f936387dp-686,
     0x1.e59f3a4534745p-703, 0.0, 0.0, 0.0, 0.0, 0x1.39b5965a0e61fp-8,
     0x1.bade28714969ap-854, 0x1.5bdf8fbd0b189p-993, 0.0, 0x1.0036890b2f858p-76, 0.0,
     0x1.674173fe57f33p-850, 0x1.25a60bbbb52edp-115, 0.0, 0x1.7dc6bf78c9a6fp-863, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.196502ca6f36fp-938, 0.0, 0.0, 0x1.5988e6d3d99fep-59,
     0x1.300e3e023d7b2p-395, 0x1.105b18481afd9p-501, 0x1.91d1de4d6189p-54,
     0x1.b9e75bc7c4a98p-298, 0x1.9c82c9c18e79ap-105, 0.0, 0x1.ada8d3432002ep-971, 0.0,
     0.0, 0x1.ec1ef7d05bcdfp-365, 0x1.e8330553021p-843, 0x1.16bcff0ddb662p-466, 0.0,
     0.0, 0.0, 0.0, 0x1.7ddf7836aa7d1p-241, 0.0, 0.0, 0.0, 0x1.010985d57e04ep-850,
     0.0, 0x1.266c7e3c9a5f6p-190, 0x1.6dfa9d97d67acp-596, 0.0, 0.0, 0.0, 0.0,
     0x1.4ec45fd850b01p-606, 0x1.808f26a0ecbebp-403, 0x1.6e546f21a0393p-477, 0.0,
     0x1.255eac4fa5748p-110, 0x1.874943c363318p-598, 0.0, 0x1.55047726598dbp-172,
     0x1.5b4eaa9aab4e8p-76, 0x1.1a455c5606a08p-674, 0x1.c462bf7aca76ep-839,
     0x1.86cadaebe4a55p-41, 0.0, 0.0, 0x1.c3187ef24b742p-915, 0x1.791287a1847f4p-416,
     0.0, 0x1.ceab344558d6ep-854, 0x1.9a93db2ca2adcp-419, 0.0, 0.0,
     0x1.10a6dc4345b6dp-921, 0.0, 0.0, 0.0, 0x1.e7a9f877d22e4p-323,
     0x1.453d0b65234afp-946, 0x1.4b9a2056427d2p-697, 0x1.a96de26abba07p-420, 0.0,
     0x1.4bced1376fe04p-729, 0.0, 0x1.8ce9d2d38baa2p-938, 0.0, 0x1.52ae7ddf70419p-941,
     0x1.e76064c284ba1p-824, 0.0, 0.0, 0.0, 0x1.333e6a69b4195p-754, 0.0, 0.0,
     0x1.76e8034800c4ap-692, 0x1.a191ace6c45e1p-651, 0.0, 0x1.a6339b6458ae1p-495, 0.0,
     0x1.589b304beced7p-38, 0x1.3a97733b7ef86p-665, 0x1.6241ae5fa9befp-852,
     0x1.795969860fa4p-157, 0x1.7569d55440ef1p-701, 0x1.f89d48e398754p-419, 0.0, 0.0,
     0x1.a84bc22125c36p-562, 0x1.0f5a083d2d87bp-878, 0x1.b9949932155b6p-479, 0.0, 0.0,
     0.0, 0x1.598e23b3b4301p-782, 0.0, 0.0, 0x1.53293b8f7785p-195, 0.0, 0.0, 0.0, 0.0,
     0x1.692d957327904p-274, 0x1.104cbad219dadp-36, 0x1.04626efa7033ep-187,
     0x1.592f21bf0072fp-345, 0x1.c901f442b0ap-295, 0.0, 0.0, 0x1.4c0ca3583e519p-196,
     0.0, 0.0, 0.0, 0.0, 0x1.838b881c0a7b5p-351, 0.0, 0x1.80e11ea2f38c7p-209,
     0x1.75d65e8263fdbp-343, 0.0, 0.0, 0x1.46e6c880c7106p-98, 0.0,
     0x1.d00566ea84b0fp-919, 0x1.37de4b9872524p-245, 0.0, 0x1.86f7e19f88c4cp-278, 0.0,
     0x1.d4d4c2f4f2af9p-138, 0x1.5aa5dde6599cdp-530, 0.0, 0x1.314b940db17f2p-874, 0.0,
     0x1.5a1f86acc95cdp-444, 0.0, 0x1.707625f11febcp-378, 0x1.47c2d6b837fefp-102,
     0x1.bb7bcd09b8343p-112, 0.0, 0x1.55bc55a16dd7ap-512, 0.0, 0x1.7c48b2cfdd946p-772,
     0.0, 0.0, 0x1.150594a94076ap-872, 0x1.e831effb1702bp-184, 0.0,
     0x1.b46b5195f5a15p-544, 0x1.be687ff93350ap-798, 0.0, 0x1.934965efe8829p-538, 0.0,
     0x1.6e88425c53e21p-195, 0x1.d52eb39d9b637p-424, 0x1.2a09bbc2239f2p-879, 0.0,
     0x1.2615c8d7fb649p-916, 0.0, 0x1.5827a242242bap-957, 0x1.1b687c75c398ap-826,
     0x1.61dcf058e807cp-548, 0.0, 0x1.b1f0b402342c6p-31, 0.0, 0.0, 0.0,
     0x1.36a1a9196446bp-296, 0.0, 0x1.4f4ffaceb608p-493, 0.0, 0x1.3625a5451a45fp-3,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6726008a14b3p-219, 0.0, 0x1.e687a151a0117p-212,
     0x1.4a945a76c4e4dp-777, 0.0, 0x1.f060387b7e8acp-966, 0.0, 0x1.52a5bd647d6a2p-648,
     0x1.e2950511eb74ep-543, 0.0, 0x1.70ae1f2abba06p-732, 0x1.1f0d3591d721bp-187,
     0x1.440178e59513dp-21, 0.0, 0.0, 0.0, 0x1.ca28f0bead5d6p-155, 0.0,
     0x1.63c0dba30502bp-560, 0.0, 0.0, 0x1.ac9136ff8ead1p-546, 0x1.ad3e7faca91fbp-571,
     0x1.1729b70bd781ap-720, 0.0, 0x1.f94edc42d7a8fp-59, 0x1.7f28af20fcaeap-951,
     0x1.85d0b5de3e17p-38, 0x1.02d97136dead4p-404, 0x1.847fa902077c1p-110,
     0x1.25d1480886372p-567, 0x1.ce41ee70f882fp-841, 0x1.785f6b77f3c5dp-1007, 0.0,
     0.0, 0x1.83e812c924137p-518, 0.0, 0.0, 0x1.0f26708680493p-141,
     0x1.c3dd0785a7aeap-285, 0.0, 0x1.8114294171254p-332, 0.0, 0.0,
     0x1.2114b6b6589ccp-779, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6ee3ce12d1d7ap-484,
     0x1.58f30b3f03042p-338, 0x1.8a742603520b4p-867, 0x1.a43c7801f980cp-3, 0.0,
     0x1.3d751f734bb44p-917, 0x1.fcb3701e2f14ep-173, 0.0, 0x1.bbda5925d286bp-241,
     0x1.04bd802b20691p-654, 0x1.add84dad986d6p-214, 0x1.7247ba7e1dd45p-926, 0.0,
     0x1.c38315179e3d3p-483, 0.0, 0.0, 0.0, 0x1.6268a1cbc475fp-906, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a991bdfd819ebp-239, 0x1.fa79d100c00bbp-136, 0x1.f442c4ee28626p-131,
     0x1.f75cb2dcc0124p-915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fac839481c82p-760, 0.0,
     0.0, 0x1.8c5bdf0873dccp-424, 0x1.fe91e44836e8dp-474, 0x1.9f3318868b64ep-126,
     0x1.24427e57a3c22p-861, 0.0, 0.0, 0x1.52d6c1b80c9cp-693, 0.0,
     0x1.824abc59d3cf6p-416, 0x1.acc3e3a615a4ep-177, 0x1.6cec5da5f17c8p-975, 0.0,
     0x1.317bb76914584p-63, 0x1.d3e051c8cbfccp-8, 0.0, 0.0, 0x1.de0bfb69f22bp-658,
     0x1.d42a956c760e4p-901, 0.0, 0x1.20096d510383fp-591, 0.0, 0.0,
     0x1.2bdc91fa47536p-290, 0.0, 0x1.b496ce7bdb6f5p-695, 0x1.757025f160f1bp-742,
     0x1.2a78d6635eb6ep-708, 0.0, 0x1.77f6c823af287p-539, 0.0, 0x1.770dd9e617b4bp-568,
     0x1.f262d3eee9e01p-207, 0x1.5d95cf0823587p-435, 0.0, 0x1.d359094922619p-814, 0.0,
     0x1.39ba2a3114a62p-211, 0x1.c03a2ff2eb64bp-531, 0.0, 0x1.36b93fbac6641p-989,
     0x1.2099f0c6b7ad5p-863, 0.0, 0x1.702eaf969e1adp-348, 0x1.b11dcf73029e5p-839,
     0x1.ecf8ffd106d92p-442, 0x1.35289d0cadff3p-103, 0x1.2fc9e8384e004p-872,
     0x1.31ef5a35d3293p-463, 0x1.1274bc53083fbp-580, 0.0, 0x1.90807268b883dp-310,
     0x1.37ba10044274cp-395, 0x1.550995b22158ap-275, 0.0, 0x1.2f041ff80fcb6p-178, 0.0,
     0.0, 0x1.0e88e23b2361bp-582, 0x1.2cc31549baae8p-919, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.718a05b31ae9ep-629, 0.0, 0x1.022bce337a1fcp-721, 0x1.07b33330982fdp-577,
     0.0, 0x1.6c0352d6785b4p-908, 0x1.44b483619e2e9p-82, 0x1.402c7360a3f79p-287, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b08694050b3bap-384, 0x1.3dc519b3104bp-706, 0.0,
     0x1.d02bb2736f83p-831, 0.0, 0.0, 0x1.b9df0ff4a78a5p-776, 0x1.35323666b04edp-50,
     0.0, 0.0, 0.0, 0x1.e239a5e6d304fp-954, 0x1.b8370049c9b83p-432, 0.0, 0.0,
     0x1.db180a1eba2b6p-337, 0.0, 0x1.b425e1754b0d7p-19, 0.0, 0.0, 0.0,
     0x1.1371b8ae27b16p-323, 0.0, 0x1.8fd4ed611d91ep-202, 0.0, 0.0,
     0x1.f4dc3f030d83dp-404, 0x1.7f698fa8a4d27p-309, 0x1.95b8515a00283p-423, 0.0,
     0x1.c7456bb8c8eb9p-779, 0.0, 0.0, 0.0, 0x1.cd5cf406584dbp-1017,
     0x1.9d4045787dd21p-26, 0x1.f2738f3b89d31p-1020, 0x1.3a7458dec32p-615,
     0x1.7c7b4acf192b9p-352, 0x1.5eed2f19d529p-127, 0x1.141a1ff351698p-337,
     0x1.16d8c69225d89p-789, 0x1.f0166df37d665p-806, 0x1.644dd9d2ab852p-492, 0.0,
     0x1.c0ed0521a5aecp-1002, 0.0, 0x1.9fed0829c696dp-95, 0.0, 0.0,
     0x1.4cdb52998407dp-301, 0x1.a2879379d9b61p-834, 0x1.0e9bcaa402d4dp-503,
     0x1.91709d74fc8d6p-391, 0.0, 0.0, 0x1.0647e3de244ccp-69, 0.0, 0.0, 0.0,
     0x1.490ceed72565p-794, 0.0, 0.0, 0x1.ff594ec233eb4p-782, 0x1.280992e93ebd3p-952,
     0x1.746dfab95891ap-516, 0x1.510f6120b5b42p-101, 0x1.01e68867b8068p-494, 0.0,
     0x1.2c7796ac73784p-354, 0x1.4fad8b11799c3p-75, 0x1.6d10f248e528ap-941,
     0x1.0c666d38701a2p-679, 0x1.efb8cccb33b21p-606, 0.0, 0x1.29d9f9adff426p-279,
     0x1.e9ae57de38dbcp-389, 0x1.2ab04bfb6ffe6p-654, 0x1.26dbc9ee96adbp-429,
     0x1.944ce7fe94b78p-405, 0.0, 0x1.55189bb9c10b4p-25, 0.0, 0x1.96aacc07d3135p-211,
     0.0, 0.0, 0x1.50588066d206p-976, 0.0, 0x1.ca216708c073dp-715, 0.0, 0.0,
     0x1.3e5059555a192p-694, 0.0, 0x1.67d945c6c19b2p-378, 0.0, 0x1.a5063a7f3416cp-437,
     0.0, 0x1.ed7f1efb62e9ap-321, 0x1.0c93274596feep-565, 0x1.138add2d969d3p-600,
     0x1.e94596df28952p-237, 0x1.7379ece634ca8p-71, 0x1.d5e818b0ba43ap-832, 0.0, 0.0,
     0x1.66cdd12385086p-643, 0.0, 0x1.56ccc687eb597p-805, 0x1.7412b7b580341p-550, 0.0,
     0.0, 0.0, 0.0, 0x1.93d1670683c4cp-906, 0x1.c9ff5d23c931p-391, 0.0,
     0x1.a394250259412p-379, 0.0, 0x1.0103c25b4aeaap-184, 0x1.0a9df08ee1eadp-631,
     0x1.734d3fa5f8388p-130, 0.0, 0x1.931e9ffabdd26p-796, 0.0, 0.0,
     0x1.63d0fb1942287p-228, 0.0, 0.0, 0.0, 0x1.57e3ff6970343p-520, 0.0,
     0x1.6dca9c813f934p-550, 0x1.41e0eca0e48e6p-851, 0.0, 0x1.d1cac128644cbp-145, 0.0,
     0x1.6c411f7f37fdap-570, 0.0, 0x1.39317c369782fp-298, 0x1.edf656e50936fp-652,
     0x1.27b94408387c8p-317, 0x1.ca06b237974f1p-998, 0.0, 0.0, 0x1.9091307ed1643p-399,
     0.0, 0.0, 0x1.6e6677eb7224dp-338, 0x1.53569fa1750c2p-437, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9f006ab51e3f4p-953, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8bdea0cf08902p-98, 0x1.16a1134618d55p-786, 0.0, 0.0, 0.0, 0.0,
     0x1.dbcadf9ef9318p-326, 0.0, 0x1.c5a789ff95395p-113, 0.0, 0.0,
     0x1.eedee48b2b93ep-2, 0.0, 0.0, 0x1.14cfd0d04582bp-954, 0.0, 0.0,
     0x1.b00479bcd5f22p-305, 0x1.a869450fa14c5p-219, 0.0, 0x1.4123b7928e9fap-565,
     0x1.b92f86968a7eap-614, 0.0, 0.0, 0.0, 0.0, 0x1.65be54a2cdd19p-526,
     0x1.05888ba950bc4p-111, 0x1.544422d383335p-555, 0.0, 0x1.ec91a492f17b2p-816, 0.0,
     0x1.e084eef3b51ffp-751, 0.0, 0.0, 0x1.1a335bbf8d843p-245, 0x1.aa51f15e9e205p-437,
     0x1.52eec6c18044bp-906, 0x1.e3ab97f8af2a9p-1000, 0x1.d1bdc3f94c7adp-638,
     0x1.c7e370a178732p-222, 0x1.d01bfb7a55705p-936, 0.0, 0x1.62cb6362d6c1ap-13, 0.0,
     0.0, 0.0, 0.0, 0x1.d3d880568504p-645, 0.0, 0.0, 0x1.1c2550a1454d2p-825, 0.0,
     0x1.9ac79d4ea9401p-189, 0x1.1e57f21d1dfc8p-680, 0x1.95d3034b4cba3p-588, 0.0, 0.0,
     0x1.a5a2d6bb17d4ep-981, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73520f7c5f13fp-774,
     0x1.80ac8c77b97adp-876, 0x1.69469d0957c72p-96, 0.0, 0x1.a62271e65b671p-938, 0.0,
     0x1.0fcc4572b2bb4p-122, 0x1.b2461440331c4p-862, 0x1.12198feeebbaep-562,
     0x1.5513704bbb6a8p-449, 0x1.53635bae26cd1p-955, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c645346971193p-354, 0.0, 0x1.c6714cdfbefc1p-860, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.791fc08d9d903p-519, 0x1.4b8f969d7ccaap-392, 0.0, 0.0, 0.0, 0.0,
     0x1.6608e61770009p-236, 0.0, 0.0, 0x1.36c3be32f961ep-897, 0x1.a460b11684de2p-80,
     0x1.2a41e03264418p-963, 0x1.a98953abd98ddp-740, 0x1.3e116b2efde28p-1021, 0.0,
     0x1.c7a06830533bdp-90, 0x1.c1dd7d732ee61p-998, 0.0, 0.0, 0.0,
     0x1.1546b9c8a8134p-736, 0.0, 0.0, 0.0, 0x1.ba9d4d0f82345p-920,
     0x1.0e1a1ada7ce3p-88, 0x1.c2b5b85042754p-630, 0.0, 0x1.287469df7d23p-74,
     0x1.f82a4689101d9p-813, 0x1.dc033c309409cp-97, 0.0, 0.0, 0x1.f6195922dd76ep-261,
     0x1.dd257cac2efd2p-222, 0x1.a2328a0ed0a01p-279, 0.0, 0.0, 0x1.c6ca1f0f2b1c6p-334,
     0.0, 0.0, 0.0, 0.0, 0x1.54a87d1f81272p-988, 0.0, 0.0, 0.0, 0x1.42fa44cf7d06p-142,
     0x1.2fe5180e84c0ep-121, 0x1.c2f8cf98118a1p-169, 0x1.fb71988c2d737p-22,
     0x1.3f9867b4de8e7p-151, 0.0, 0x1.7272fdaee4032p-161, 0.0, 0.0, 0.0,
     0x1.430833fa641ep-642, 0.0, 0.0, 0x1.46a132e010cb6p-17, 0.0,
     0x1.8faa0356c4f4cp-577, 0x1.fab3fe1e95cb7p-780, 0x1.17976c4118f41p-411,
     0x1.89cc637a20a6bp-953, 0x1.59afbeaad92ep-994, 0x1.1f392696db71ap-467, 0.0,
     0x1.aefacf0c84c0ap-552, 0.0, 0x1.ad5ce74e6335cp-372, 0.0, 0x1.33d8de0f9e01p-124,
     0.0, 0.0, 0x1.c7f662ea6164cp-648, 0x1.a745b608a3476p-691, 0x1.b981511b893d2p-389,
     0.0, 0x1.71e5c50b2f904p-410, 0x1.ba46a265c5fb9p-922, 0x1.0e3bfd756efdap-760,
     0x1.ae88d84c1eeb4p-813, 0.0, 0x1.d3f57b0994355p-190, 0.0, 0.0,
     0x1.fe5945c1b072cp-293, 0x1.6959933a67b63p-95, 0.0, 0.0, 0x1.d30c4d42d6cdbp-116,
     0x1.ee2134c71d663p-68, 0.0, 0x1.21880bae6613cp-606
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
            tmp1 = Sleef_atanhd2_u10kvx(tmp0);
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
    printf("Sleef_atanhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_atanhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
