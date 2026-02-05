/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_coshd1_u35purecfma.c --function \
 *     Sleef_finz_coshd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0x1.165f192c2636dp-207, 0x1.adac72511093fp-185,
     0x1.7dc14af0edad4p-820, 0x1.59357cc598fdfp-464, 0x1.aa34ab2b6f0c1p-232,
     0x1.747237a208e08p-854, 0.0, 0x1.7ddf097af1c34p-689, 0.0, 0x1.44163aa2e05bep-365,
     0.0, 0x1.739cfe01bc38dp-569, 0x1.adff1774f7dadp-313, 0.0, 0x1.87388c887e49p-965,
     0x1.4b6a5ed1f5f44p-111, 0.0, 0x1.b5500a3632bc5p-273, 0x1.a0a62d0d5fa06p-793,
     0x1.0376dbb4ecf6fp-476, 0x1.000815f128c6fp-519, 0.0, 0x1.541cd765cfe25p-403,
     0x1.9c1c7b2a75fdbp-548, 0.0, 0x1.d30ded40d6f4ap-550, 0.0, 0.0,
     0x1.521574ed5e468p-271, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.667e61ced1e35p-286,
     0x1.738f9b025b0dcp-814, 0.0, 0.0, 0.0, 0.0, 0x1.b21c8032fe57fp-666,
     0x1.97de9b1ed8fc7p-484, 0.0, 0.0, 0x1.d29d4d7cd1809p-708, 0x1.c010ae09c9a68p-701,
     0x1.bbfec2dd73b8p-42, 0.0, 0x1.d600309cd14a7p-954, 0.0, 0x1.1b45fe3dd6689p-465,
     0.0, 0x1.1c2e5f4825fbcp-32, 0.0, 0x1.276128440c431p-245, 0.0, 0.0,
     0x1.92e4b67663e4fp-291, 0.0, 0x1.3e6c1de16e8e2p-890, 0.0, 0.0, 0.0, 0.0,
     0x1.a0e7dbdc8ba9bp-688, 0x1.5aeda929984a1p-585, 0x1.b0b39d6812e73p-669, 0.0,
     0x1.b829eb6db2a2p-519, 0x1.97d3d26177694p-84, 0x1.9869beb613b6dp-362, 0.0, 0.0,
     0x1.9e6e7cda55698p-317, 0.0, 0x1.c22fa0872b9fbp-844, 0.0, 0.0,
     0x1.17072a1f3bedp-346, 0.0, 0x1.42c060cccbe26p-739, 0.0, 0.0, 0.0,
     0x1.4367eaad0bdc7p-988, 0.0, 0.0, 0x1.8e7981e957949p-116, 0.0,
     0x1.352cfad000513p-648, 0x1.62e4c3f3e2ef9p-78, 0x1.8189099fca1b2p-526, 0.0,
     0x1.924d90ca90b3fp-280, 0x1.024147612cdd3p-612, 0.0, 0x1.64f162fb3f217p-429, 0.0,
     0x1.a80771b14b779p-702, 0x1.27ecdb4c87367p-922, 0x1.59581bfacca8cp-661,
     0x1.4810a2bfa2f78p-152, 0.0, 0.0, 0x1.8229232c51137p-655, 0.0,
     0x1.f6bb2def3e31dp-1015, 0x1.a13b6c995f5bep-794, 0.0, 0x1.9a57887295b69p-983,
     0.0, 0x1.4f9ef754cbcadp-766, 0x1.ece0c6ed6b9ecp-96, 0x1.0bbba35a4678cp-98, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.4e48dcd2cbbdp-883, 0.0, 0.0, 0.0, 0x1.10bc63e31db53p-273,
     0.0, 0.0, 0x1.46cf5382190cp-407, 0.0, 0x1.b8b64b2aa77dp-1007,
     0x1.2fe5dbbf21577p-724, 0.0, 0.0, 0x1.65e7f85c330f1p-622, 0x1.d8ad559768a31p-197,
     0.0, 0.0, 0x1.b00dbf2063a82p-41, 0x1.1fb84432cc833p-371, 0.0, 0.0, 0.0,
     0x1.318ba45dc1324p-693, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3882c8970ca07p-151, 0.0,
     0.0, 0x1.252d9bcba44c6p-374, 0x1.eade494418ba3p-41, 0.0, 0.0, 0x1p0, 0.0, 0.0,
     0x1.1035413b22deep-260, 0x1.78da0ec337b2fp-182, 0x1.791a727f476f2p-647,
     0x1.aa7315976ab61p-34, 0x1.32926a8405cd7p-472, 0.0, 0x1.c585dad7f941fp-766,
     0x1.d019564dc710dp-47, 0x1.2ba5ea6bd98ccp-40, 0.0, 0.0, 0.0,
     0x1.62f53046f20eap-832, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.673d484c66e99p-697,
     0.0, 0.0, 0.0, 0x1.b6fa414fa3c0dp-683, 0x1.04c7c28181155p-79, 0.0,
     0x1.085f7de635702p-7, 0x1.2f0db9a1b62a2p-739, 0.0, 0.0, 0x1.28158814b1945p-625,
     0.0, 0x1.82162d5d35bacp-554, 0x1.cf2a502065913p-607, 0x1.4383d10b9b9cfp-861,
     0x1.fb2478eb12455p-669, 0x1.db55e252e7691p-673, 0.0, 0.0, 0.0, 0.0,
     0x1.2b4d67e63a68cp-615, 0x1.10785f0dca5d4p-566, 0.0, 0.0, 0x1.e33c9e5c23b96p-688,
     0.0, 0.0, 0.0, 0x1.66a809c0e6d87p-858, 0.0, 0.0, 0.0, 0x1.77b750cbd39dep-435,
     0x1.40b4f5812b0d6p-460, 0.0, 0x1.eb50535d71a7ep-108, 0.0, 0x1.696c04d6e1c46p-216,
     0x1.1aebecbc3ba3cp-224, 0.0, 0x1.285aa4f59548cp-620, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f5c3397167d76p-86, 0.0, 0.0, 0.0, 0.0, 0x1.acf36ca596099p-31,
     0x1.df86c5ccd0edap-626, 0x1.2b4c5a3aa079dp-24, 0x1.904a21c5098edp-991,
     0x1.f9019e85965fap-402, 0x1.3bacd258a9726p-873, 0x1.8e52e2f2d226fp-550,
     0x1.42552eeafcbdcp-55, 0.0, 0x1.def11ee0c3ae4p-316, 0.0, 0x1.24e842f7b75f5p-429,
     0.0, 0.0, 0.0, 0x1.c043c69a119bep-743, 0.0, 0x1.1040d35f9643p-339, 0.0,
     0x1.d85afe399589p-458, 0.0, 0x1.a012bb6ee0fd5p-596, 0x1.8f87b8f7600bep-778, 0.0,
     0.0, 0x1.73963333202a4p-330, 0.0, 0x1.f4d423e48fe4ep-718, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.2d6748a0ea924p-227, 0.0, 0.0, 0.0, 0x1.a5a8fad374e44p-988,
     0.0, 0.0, 0x1.4fe30738f9574p-64, 0.0, 0.0, 0x1.1ff2940f6c6dap-409, 0.0, 0.0,
     0x1.0943d12af94ep-202, 0.0, 0x1.0f80741fb341p-709, 0.0, 0.0,
     0x1.211ea1d79b905p-52, 0.0, 0.0, 0x1.36622bec16658p-886, 0.0, 0.0, 0.0,
     0x1.3f4ac80dbfe49p-883, 0x1.963d8b57b8d42p-528, 0x1.556c48386f84bp-829, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c817d7681ed5ep-155, 0x1.18f4693641f2cp-205, 0.0,
     0x1.2d970bdfdd817p-392, 0.0, 0x1.859a4131a64ecp-821, 0.0, 0x1.8856ae17e2ddfp-604,
     0x1.0c991c6a92ed6p-556, 0.0, 0x1.7dfd636842343p-629, 0.0, 0.0,
     0x1.0ab261bc118e3p-617, 0x1.6417a11e2d3d8p-10, 0x1.16871509da687p-723,
     0x1.c81890cbf18c4p-301, 0.0, 0.0, 0.0, 0x1.9df2a32ba50edp-772, 0.0, 0.0, 0.0,
     0x1.19de203369fb1p-368, 0x1.c187d2226e878p-212, 0x1.6f8a9c32b155ap-986, 0.0,
     0x1.3a572b799f58bp-498, 0.0, 0.0, 0.0, 0.0, 0x1.7fd17037442bep-455, 0.0,
     0x1.856223467115fp-625, 0.0, 0.0, 0.0, 0x1.38b8121f1e089p-651, 0.0,
     0x1.0b29dcc9853abp-330, 0x1.3fb12dd76dc91p-178, 0.0, 0x1.7b7e9f97e4c2dp-396, 0.0,
     0x1.70bb08334677p-445, 0.0, 0x1.3e4c1d388d361p-779, 0x1.94c634c55f333p-1010, 0.0,
     0.0, 0x1.e2274657b08e9p-747, 0.0, 0.0, 0.0, 0.0, 0x1.10711bc08f691p-680, 0.0,
     0x1.cf93ddc0d8abcp-438, 0x1.a4aa70c460298p-139, 0x1.1730d781fa80bp-313, 0.0, 0.0,
     0.0, 0x1.c45f9e60ef7cbp-518, 0x1.9f5cf1e321ee7p-8, 0x1.eb395ba31d8a8p-751,
     0x1.c2de4cc0d21ffp-235, 0x1.71a3425f89b8dp-798, 0.0, 0x1.4c8f418a0cb39p-1002,
     0.0, 0.0, 0.0, 0x1.b86dd7b7661f3p-561, 0x1.a73a1cf0f9f2dp-251,
     0x1.2a2478ed4adb1p-128, 0x1.7b249a0b2b08fp-42, 0.0, 0.0, 0x1.de73bc6c816d7p-265,
     0x1.9bf49621797cp-888, 0x1.94e9b63c6b02fp-823, 0.0, 0.0, 0.0,
     0x1.a89d61e81e3a5p-822, 0x1.bfb3738da0b28p-779, 0x1.020d9896251a5p-1013,
     0x1.4dfc05f290742p-331, 0x1.425f6092be93ap-119, 0x1.443328dbf5f8bp-471, 0.0, 0.0,
     0.0, 0x1.a301395f49cb6p-713, 0x1.252c371d158eap-539, 0.0, 0x1.2045f1c6591e7p-349,
     0.0, 0x1.a35edc3f6039p-707, 0x1.09e1af3ebb82bp-451, 0x1.915078a9977bbp-17, 0.0,
     0.0, 0x1.790ce0208aed8p-154, 0.0, 0.0, 0x1.e58eb7cd43358p-888, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.999314975342dp-247, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ee2e56ecc3e35p-540, 0x1.140e3c4466b7ap-912, 0x1.d8fa25533c613p-218,
     0x1.93073f2628eap-861, 0.0, 0.0, 0.0, 0.0, 0x1.843a41047e219p-133, 0.0, 0.0,
     0x1.4707e07b1529cp-1009, 0.0, 0x1.1736f706d1976p-341, 0x1.161aebe3087a8p-999,
     0.0, 0.0, 0.0, 0.0, 0x1.5c5712c11698dp-327, 0.0, 0.0, 0.0, 0.0,
     0x1.a8624721425a8p-658, 0.0, 0x1.3b58d1ea1105fp-99, 0x1.193e37d14ac2dp-903,
     0x1.61b3a494dd002p-76, 0.0, 0x1.4c900e148a8b7p-925, 0.0, 0x1.4600cc9d48cfdp-731,
     0.0, 0x1.e60a12c90a295p-815, 0x1.a82329418fdf5p-913, 0.0, 0.0,
     0x1.5667aa6d59288p-259, 0x1.98872d978efdfp-140, 0x1.8f3ab7dd1af4ep-115,
     0x1.2e25d080beecp-283, 0x1.acdcd50ab301bp-77, 0x1.aaff63772e481p-483, 0.0,
     0x1.f444486e01425p-347, 0.0, 0.0, 0x1.034463949474bp-299, 0x1.a5f535ce083a2p-717,
     0x1.b5cb68cc09adp-314, 0.0, 0x1.0c0348260ee7fp-875, 0x1.61ed4ed1ddf57p-622,
     0x1.8de95f9a681edp-328, 0.0, 0.0, 0x1.ed879f1fab651p-74, 0x1.5423c61224503p-695,
     0.0, 0.0, 0.0, 0x1.ba1f700165efep-229, 0.0, 0x1.090eb0ebe8fccp-963, 0.0, 0.0,
     0x1.8a08219949f15p-799, 0x1.6e70aef98f8afp-1018, 0.0, 0.0, 0.0,
     0x1.26e0229ce53a2p-278, 0.0, 0x1.5dbef3c2aedf5p-308, 0x1.f7627a93f9a1dp-219, 0.0,
     0x1.06fde492f8e9ep-635, 0x1.39ae64ca2504p-307, 0.0, 0.0, 0x1.5af0b8d7864a7p-56,
     0x1.00027256908f3p-339, 0x1.b98b7bcdc00c6p-818, 0.0, 0x1.645c1f224ba97p-90, 0.0,
     0x1.02e1ec82f4c86p-88, 0x1.c0f1f3780912ap-20, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0e1aa626743bp-338, 0.0, 0x1.6c57c4abceb7cp-101, 0x1.ccdfb9c889463p-139, 0.0,
     0x1.480cee87051cp-1008, 0x1.53d9d8a31548cp-494, 0.0, 0x1.de25aef28686ap-990,
     0x1.04cfc0c725f81p-899, 0.0, 0.0, 0x1.4de41284426bfp-51, 0.0, 0.0,
     0x1.eb97886ee4b23p-513, 0x1.4c6c954e6c85p-560, 0x1.2839efba615c6p-234, 0.0,
     0x1.803aded5edea5p-303, 0.0, 0x1.51efa55a1a25cp-806, 0.0, 0.0,
     0x1.a2bf565da6ac1p-211, 0.0, 0x1.00c53b0dab9c4p-428, 0.0, 0x1.5df6350d72a42p-604,
     0.0, 0.0, 0.0, 0x1.e9d9452b0151bp-54, 0.0, 0.0, 0x1.f644fab5f974ap-18, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.243c841eb8ecap-230, 0.0, 0.0, 0.0, 0.0,
     0x1.94c7291797ed2p-351, 0x1.aea5ba7ea636ep-347, 0.0, 0x1.272afed987375p-135, 0.0,
     0.0, 0x1.a554093b35de7p-440, 0x1.4f91fd08671bcp-86, 0x1.bfd3538c4f75dp-536,
     0x1.8fcd73f27ea2dp-1006, 0.0, 0x1.513bcd5bb6e91p-945, 0.0,
     0x1.2f0aa06b9271p-1015, 0.0, 0x1.240bfc1240ab5p-625, 0.0, 0.0,
     0x1.31b7389e9c2dfp-476, 0x1.5144a78cff1a5p-305, 0x1.91435731f0d9ep-636, 0.0, 0.0,
     0x1.7c7a902c46be5p-663, 0.0, 0x1.dfa25b67c3398p-366, 0.0, 0x1.b390fcdcaf068p-609,
     0x1.fae28a76deef2p-875, 0.0, 0x1.ec1d5d9815673p-635, 0.0, 0.0, 0.0,
     0x1.6fb5e921e3d6p-424, 0x1.be0ad692c1a4p-143, 0x1.066487e402b67p-243, 0.0,
     0x1.b3140811e29d7p-331, 0x1.e33631c560693p-938, 0.0, 0.0, 0.0,
     0x1.cdbbe83465f6cp-689, 0x1.0318499680bf6p-492, 0x1.f04153974f1e1p-752,
     0x1.218e3119bd4eep-755, 0.0, 0x1.ab73c5b6946dbp-560, 0x1.51234f1517fc7p-301,
     0x1.bf67ffdf13845p-387, 0x1.66a7a03024b88p-891, 0x1.a6e058cc5c773p-824, 0.0,
     0x1.31dfb59a6a069p-543, 0.0, 0x1.790b7c1ab4aecp-966, 0x1.fdd48b9806b84p-1016,
     0.0, 0.0, 0x1.2c1f9b1810d1fp-258, 0x1.7e78519c7c35dp-322, 0x1.2ace35730b113p-225,
     0.0, 0x1.791b277db7d1p-1022, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.164b1b5c1c2b6p-218,
     0x1.87e19ea5d02d8p-190, 0x1.834fa0700b5aep-659, 0.0, 0.0, 0.0, 0.0,
     0x1.62d1e70baf323p-594, 0.0, 0x1.93cc1be640125p-816, 0.0, 0x1.886cd849d913ap-725,
     0x1.ff1c5fa0ce269p-469, 0x1.bda95ec72e065p-358, 0x1.4254adbcbe78p-98, 0.0,
     0x1.75546e782ed87p-118, 0x1.86bd71fc4a055p-349, 0x1.0170302b90ae8p-974,
     0x1.c0e5c505aee35p-533, 0.0, 0.0, 0x1.9e46ff6c8b6adp-298, 0x1.773ad499531dep-901,
     0.0, 0.0, 0x1.e471ac48f19eap-526, 0x1.1b3c222102264p-359, 0x1.cceacba2bf5b5p-776,
     0x1.debb8732f4c9p-172, 0x1.2adc0e70eb388p-431, 0.0, 0.0, 0.0,
     0x1.7901856481f4cp-639, 0.0, 0.0, 0.0, 0x1.acf46ab64f6fcp-531, 0.0, 0.0, 0.0,
     0x1.abb61f7f4181bp-581, 0x1.1d31776c8c491p-593, 0.0, 0x1.8b635bb2dc169p-230, 0.0,
     0x1.3b91b157ecb19p-288, 0x1.37ed56a57de54p-229, 0.0, 0x1.9aa77901b0c52p-690, 0.0,
     0x1.f04933206e2f1p-1006, 0x1.4397525dfb888p-738, 0.0, 0x1.3527919fcd211p-95,
     0x1.f70ea18f81107p-446, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc6bf48370d03p-208, 0.0, 0x1.6a889d05212e7p-196, 0x1.447035308ead2p-911, 0.0,
     0x1.ee3e43aaa9fa7p-33, 0x1.d3906f1ae55fbp-444, 0x1.5e33f829450ap-641,
     0x1.551dc94862981p-106, 0.0, 0x1.7ca4863b0a57p-461, 0x1.d16f8549d9bp-704, 0.0,
     0x1.2407eed366cc9p-998, 0x1.bb57dc16d78a4p-584, 0x1.8a34e27936a17p-187,
     0x1.fe625f92f3d78p-982, 0x1.7559636c8baf2p-926, 0x1.98ad354d6932bp-878,
     0x1.0cec4c510db62p-709, 0.0, 0x1.983bb3b082334p-385, 0x1.fea9a1a2ffca8p-397,
     0x1.fbfcb9a45f392p-144, 0.0, 0.0, 0.0, 0x1.0f38147927e08p-659,
     0x1.fc671216c66b6p-630, 0x1.9b653c5b438b6p-528, 0x1.db9a61d22a9f4p-442, 0.0,
     0x1.421bf044be2aap-410, 0.0, 0x1.bc9b7bfc713a4p-130, 0x1.52be95b60b9d1p-938, 0.0,
     0x1.b0f7d5a3f2b1fp-541, 0x1.1481274920378p-874, 0.0, 0x1.1f5242a55217dp-17, 0.0,
     0.0, 0.0, 0x1.2ad5f8e024bdfp-500, 0x1.068c3b7530038p-379, 0x1.497eb04a692dp-19,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e26ba32b4e395p-587, 0.0, 0.0, 0.0,
     0x1.51e9268d46751p-458, 0.0, 0.0, 0x1.82d5ca9c2e499p-525, 0x1.c4b37889507fep-512,
     0.0, 0x1.95f672665f581p-730, 0x1.e0d0ce93b8aa8p-182, 0.0, 0x1.2f688bb91037fp-804,
     0.0, 0x1.04231baff1f26p-764, 0.0, 0x1.d6bce7ff83b6cp-787, 0.0,
     0x1.c6ab7a0c33818p-953, 0x1.f66dafad5ac34p-548, 0.0, 0.0, 0.0,
     0x1.0234d3177cd9dp-394, 0.0, 0x1.75b95f946af44p-1022, 0.0,
     0x1.a7149ca0bc61cp-329, 0x1.3d3c26c6ab285p-28, 0.0, 0.0, 0.0, 0.0,
     0x1.41d30539ddc9p-961, 0.0, 0.0, 0.0, 0.0, 0x1.8b45184559531p-629,
     0x1.dfbb2a7d06d32p-456, 0x1.4f35f49c16cdep-683, 0.0, 0.0, 0x1.10e5f8e3a9de2p-105,
     0.0, 0.0, 0x1.8451d1cf8428dp-70, 0x1.45875a9a20567p-41, 0x1.7e747c3961c93p-911,
     0x1.31cb2cbeee0e9p-70, 0.0, 0.0, 0x1.26f29d8188d55p-32, 0x1.56288a61c5ee4p-449,
     0.0, 0x1.c791e4263f00ep-217, 0x1.c73ae58905a21p-386, 0.0, 0.0, 0.0,
     0x1.04db3d2064512p-856, 0.0, 0x1.2cc14e08af766p-218, 0.0, 0x1.a29661c0a6cbbp-178,
     0.0, 0.0, 0x1.8b8ca7c36abcfp-784, 0x1.0f444f23d1676p-505, 0.0,
     0x1.f8bb3799231f1p-287, 0x1.efdc05315c538p-60, 0.0, 0.0, 0.0,
     0x1.852c58376ac2ap-671, 0.0, 0x1.174a53940c8f4p-684, 0x1.c648dcfc910a5p-234,
     0x1.e24780d52bb54p-170, 0x1.15f946a76fe01p-711, 0x1.d3f799b87a8edp-647,
     0x1.4167902e44646p-224, 0x1.f6d5a4f11b751p-949, 0.0, 0x1.3401cb82a8487p-334, 0.0,
     0x1.3db093805d3adp-628, 0x1.41fb3778fe18bp-536, 0x1.72e965b69966ep-13, 0.0,
     0x1.ffe75a4bd771cp-290, 0.0, 0.0, 0x1.7d2dd6fdceb5p-838, 0.0,
     0x1.26729cc09893cp-83, 0x1.90aa0de4fbf9cp-311, 0x1.8b4cdffac44b7p-553,
     0x1.cf804f5ea0373p-333, 0.0, 0x1.60adcecd9a993p-137, 0x1.27154de2eaf9ap-340, 0.0,
     0.0, 0x1.05f7f9667360fp-369, 0x1.c181f0a7adfd2p-1018, 0.0, 0.0, 0.0,
     0x1.8a522a818b87fp-260, 0x1.b40f69b53dbb9p-186, 0x1.5451adef34834p-452,
     0x1.812f7276cbdd6p-114, 0.0, 0.0, 0x1.eb87f58eb28f9p-156, 0x1.5067d4f4662b6p-3,
     0x1.4c10c1c16a31ap-926, 0.0, 0x1.d5d11c5a5bb7p-108, 0.0, 0x1.83824de11ddf9p-313,
     0.0, 0.0, 0x1.045ebf2b25c6cp-81, 0.0, 0.0, 0x1.c0eb575791022p-287, 0.0,
     0x1.319964cf70094p-550, 0.0, 0x1.e39d9385f2a6dp-390, 0x1.be4e31fb1f027p-55, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.cb938291de775p-493, 0x1.58c5a9b0192efp-334, 0.0, 0.0,
     0x1.e1d33f4c378aep-302, 0x1.f259bcd944066p-227, 0x1.7a59fe2bc9537p-208,
     0x1.c9561d64933abp-133, 0x1.3f39ec26f71aep-704, 0x1.15a7237dd4b67p-398, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.87b459069fa2cp-817, 0.0, 0x1.d4511b723437bp-199, 0.0,
     0.0, 0.0, 0x1.64d8f5a40be7ap-460, 0x1.93ae28a883ce4p-307, 0x1.013e76ed03055p-2,
     0x1.2441635cbcfcap-796, 0.0, 0.0, 0x1.fd5aceeeb4f41p-1005,
     0x1.7fa0f84e9c033p-955, 0x1.9da8bcc152b3ap-423, 0x1.a8387d60fe079p-775,
     0x1.13d1e0a829102p-62, 0x1.1f8bb18f47b47p-961, 0.0, 0x1.81e411496be83p-56, 0.0,
     0x1.e4a2e73709509p-846, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.983e8800c5f0cp-53, 0x1.7adea776b5fd4p-766, 0x1.451d6cb1236b3p-209,
     0x1.31b5b86a5d7e4p-580, 0.0, 0.0, 0x1.9038469c770b1p-351, 0.0, 0.0,
     0x1.26bc95002658ap-188, 0x1.4007285d541b2p-215, 0x1.f9c50789c7bacp-994, 0.0,
     0x1.eadcd8b2bde37p-432, 0x1.8d5cdb3d1203fp-345, 0x1.b22790b811423p-382,
     0x1.79907d01eeeap-121, 0.0, 0x1.a0a72f79122ebp-31, 0x1.d6808b2687624p-698,
     0x1.33d2a7c2b7a1bp-112, 0x1.5543897b2273ep-1, 0x1.552fc91fc5b7bp-436,
     0x1.ccd6e09c6352ep-716, 0x1.bf8bff51f14dfp-397, 0x1.435f01b2e851dp-21,
     0x1.0b7e163fd5242p-441, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7cd729af1c33p-44,
     0x1.e1ecb2af62962p-717, 0.0, 0x1.bcd6d61e88395p-236, 0x1.1870552ebcee8p-206, 0.0,
     0.0, 0.0, 0.0, 0x1.98cbf6675a259p-682, 0x1.6df4124b4d6cp-940, 0.0,
     0x1.6cac881080084p-409, 0x1.f024a69299784p-923, 0x1.f23b5bc3e050ep-912,
     0x1.5ee38d1114c86p-564, 0x1.619877701f6dfp-645, 0.0, 0.0, 0x1.20e70fcecaf9bp-862,
     0x1.57481c771cc73p-93, 0.0, 0.0, 0.0, 0x1.3be740a198c7fp-690,
     0x1.67e28999cb3d1p-847, 0x1.f9539d8fe7f6ap-361, 0.0, 0x1.4d891bb98afd6p-801, 0.0,
     0.0, 0.0
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
            tmp1 = Sleef_finz_coshd1_u35purecfma(tmp0);
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
    printf("Sleef_finz_coshd1_u35purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_coshd1_u35purecfma bench acc %la\n", global_bench_acc);
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
