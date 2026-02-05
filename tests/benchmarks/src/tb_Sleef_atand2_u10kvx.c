/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand2_u10kvx.c --function Sleef_atand2_u10kvx \
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
     0.0, 0x1.50f043fc47f88p-751, 0x1.3b4c97f663da2p-55, 0x1.47c153e1c9beap-770,
     0x1.30fd0eb2ac273p-510, 0x1.271524b4e6d04p-209, 0.0, 0.0, 0x1.bbfca566c865bp-435,
     0.0, 0.0, 0x1.635413c75d082p-227, 0x1.290d39a14acc9p-322, 0.0,
     0x1.a5afdcb88675fp-722, 0x1.21e6c8b495737p-198, 0x1.c13e9bdad4804p-497,
     0x1.ea75a1a8de638p-470, 0.0, 0x1.904d86175a4fcp-733, 0x1.958f7286b8742p-260,
     0x1.ec35fd289e1c7p-102, 0.0, 0x1.10304c841115bp-737, 0.0, 0.0,
     0x1.6cf4fefe37f44p-57, 0x1.83baa9e3f8ba7p-710, 0x1.1061f5f142273p-520, 0.0,
     0x1.cd24eb05cbd0ep-420, 0.0, 0x1.0747ed434c981p-375, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.09e325032511p-386, 0x1.92f805e85b7fp-842, 0.0, 0x1.72fde81b1fb8bp-562,
     0.0, 0.0, 0.0, 0x1.ab03ed0bd5396p-7, 0.0, 0x1.7844553807771p-772,
     0x1.e0948b07d39dp-373, 0.0, 0.0, 0x1.8a46fd07123f8p-982, 0.0,
     0x1.c571f33ab4119p-570, 0.0, 0.0, 0x1.cebff02eebd1fp-700, 0x1.30c7d7dffdfe2p-347,
     0.0, 0.0, 0x1.af0079e9a95b3p-995, 0x1.5fd8506a965e3p-402, 0x1.2c398f4802556p-947,
     0.0, 0x1.97be7da9d40ecp-784, 0.0, 0x1.e7a95e2581006p-561, 0.0,
     0x1.c87bdef14b49ap-391, 0.0, 0x1.6fcf650a2bf6bp-536, 0x1.0a4d130678269p-690,
     0x1.7d46c2164f207p-485, 0.0, 0.0, 0.0, 0x1.592ad89a0bc54p-879,
     0x1.74dd133aad044p-758, 0.0, 0x1.e2f7bd970f33p-230, 0.0, 0.0,
     0x1.3e91f3bed1ba7p-1001, 0x1.60af4a27fee6fp-312, 0.0, 0x1.fa79c4bb6e094p-881,
     0.0, 0.0, 0.0, 0.0, 0x1.443d61b91dbe2p-445, 0x1.5c7e8caf065e1p-343,
     0x1.5cb959811f1dcp-75, 0x1.8fb4ea774d14ap-437, 0x1.6effd500290a1p-205, 0.0, 0.0,
     0x1.9ce6cbcbbaef5p-642, 0.0, 0.0, 0x1.91de4a202ed63p-529, 0x1.39bfb5fb66258p-820,
     0.0, 0x1.32a9b02e3e0f9p-902, 0.0, 0.0, 0x1.b316173eb58ccp-816,
     0x1.909c215ec51d4p-260, 0.0, 0.0, 0x1.18d6922ac63bfp-695, 0x1.852202cc5a5fbp-920,
     0.0, 0.0, 0x1.709632b985184p-591, 0.0, 0x1.a7f706cf4213ap-67, 0.0, 0.0, 0.0,
     0x1.bf661595896f3p-877, 0.0, 0x1.5ab874714b8efp-355, 0x1.7cd1b35188774p-745, 0.0,
     0.0, 0x1.39d7ca6d86462p-649, 0.0, 0x1.96c0faa2e0e05p-928, 0.0,
     0x1.fa482643cc85p-447, 0.0, 0.0, 0x1.b720558e4eaa8p-327, 0x1.def8d302100d7p-559,
     0x1.af773c54db71fp-133, 0.0, 0x1.b5e2fe629b0c3p-651, 0x1.f0ab3365d5d4dp-572, 0.0,
     0x1.0565168917ef7p-730, 0.0, 0.0, 0.0, 0x1.b9c9696856df9p-494, 0.0, 0.0, 0.0,
     0x1.6cb5c57efcbccp-25, 0x1.11222479bd4d9p-62, 0x1.7b92f8d0325a8p-705,
     0x1.71b8eac19d852p-379, 0x1.61cf114317497p-559, 0.0, 0x1.727d595b5c52ep-669, 0.0,
     0x1.d9fbc225d308ep-478, 0x1.c7446d627a02ep-731, 0x1.cc525cbb74f37p-537, 0.0,
     0x1.b7c99ff60581bp-336, 0x1.41c282aeffb1dp-275, 0.0, 0x1.91b81afc8a438p-222,
     0x1.897ce6ff0d8e1p-88, 0.0, 0x1.175216d2999b8p-572, 0.0, 0x1.dfbe24c171781p-480,
     0x1.18176407e9d7cp-560, 0x1.e8d2905eee439p-640, 0.0, 0.0, 0x1.e9c01ddffc077p-665,
     0.0, 0x1.dab9ec8781ad1p-366, 0x1.8015adb30ff0cp-702, 0x1.72f70fbd9933ep-401,
     0x1.a10f288d14428p-135, 0x1.68b61308b658bp-653, 0.0, 0.0, 0x1.5714b2001c867p-242,
     0.0, 0.0, 0x1.0db06f09c516p-724, 0x1.97f918655859dp-903, 0x1.c4c26084e4f59p-706,
     0x1.b12a3bb62b59dp-69, 0x1.38a0f0b7038acp-850, 0.0, 0x1.0fcd4082f8047p-301,
     0x1.969e8a78941a2p-230, 0x1.ef79583b90bffp-735, 0.0, 0x1.9ba3d197409b3p-689,
     0x1.a90cae47a504dp-680, 0x1.e6211e70be6d2p-945, 0.0, 0.0, 0x1.a9655aafc9b12p-72,
     0x1.369dfcabad176p-559, 0x1.857be4fc8db32p-19, 0.0, 0.0, 0x1.75bb14e09bec7p-868,
     0x1.d9b1ff8f334edp-848, 0.0, 0.0, 0.0, 0x1.cfd89120283bbp-363, 0.0, 0.0, 0.0,
     0x1.60376195ce0eep-337, 0x1.059cb2ffb40b1p-66, 0.0, 0x1.678e9ec23f863p-839, 0.0,
     0x1.8c287e7c31891p-809, 0.0, 0x1.8dd08c855741ap-624, 0.0, 0x1.25db1010306a1p-432,
     0x1.e6d9e3b264399p-880, 0.0, 0.0, 0x1.fb66ba3ccab7ep-857, 0x1.924e8ed6e5425p-995,
     0x1.910563019d544p-278, 0x1.83c0b205b193bp-649, 0x1.4f4b0fc40ffdcp-100,
     0x1.db20e881c186dp-731, 0.0, 0x1.0551d89c64255p-81, 0x1.7aacd54e0d647p-177,
     0x1.7c06c3b1f3d31p-60, 0x1.16506e89716bfp-693, 0x1.d340d5f111e07p-210, 0.0,
     0x1.d052eaf5b0075p-829, 0x1.03d9abf022844p-369, 0x1.05939723e9aafp-287,
     0x1.5a87cee46ec36p-531, 0x1.0a08ca50bd14cp-288, 0.0, 0x1.b1ee918336952p-970, 0.0,
     0x1.cfb56da6dc286p-27, 0.0, 0.0, 0.0, 0x1.66b48cef6562cp-685, 0.0,
     0x1.85ed4b8d5788p-390, 0.0, 0x1.8d006430d4451p-472, 0x1.8cda192a96773p-444,
     0x1.5b428f9962e55p-514, 0.0, 0x1.78833f7663b31p-283, 0x1.9a62d6f73a94ap-556,
     0x1.6963262bfd1a4p-270, 0.0, 0.0, 0.0, 0.0, 0x1.49de4c4ff8983p-365,
     0x1.75e7925ccd993p-822, 0.0, 0.0, 0x1.a8b0519c2bb7ap-153, 0.0,
     0x1.d94f97d0a8277p-247, 0.0, 0.0, 0x1.f6677748504fp-799, 0.0,
     0x1.cd2370f16747ap-483, 0.0, 0.0, 0x1.0cd79d4c4faf1p-858, 0x1.a48bc1d1e2cb9p-934,
     0x1.38fd6d3ec7902p-808, 0.0, 0x1.79349b6a2e75p-20, 0x1.fb488413be799p-28, 0.0,
     0x1.dab96d4b12664p-139, 0.0, 0x1.7979f1983c078p-547, 0.0, 0x1.cd58b022b8734p-458,
     0.0, 0x1.7e47de6e126ebp-196, 0x1.4ce0726d103b1p-442, 0.0, 0.0,
     0x1.b9836f032b481p-264, 0.0, 0x1.990e157997d16p-801, 0.0, 0x1.50398c2d638f6p-807,
     0.0, 0x1.bf51939b61af2p-775, 0x1.f8c1027af8f67p-478, 0.0, 0.0, 0.0,
     0x1.2d8abcad7ef3dp-1, 0x1.86ee1c7798769p-875, 0x1.da55d91ef1f3ap-435, 0.0, 0.0,
     0x1.ba9b5f9bd2b37p-291, 0.0, 0x1.32924f39998bap-983, 0x1.cb01f1e0269eap-260,
     0x1.9dfe31cb31187p-716, 0x1.fb3a9866f736p-1011, 0.0, 0x1.47ba930310b65p-679, 0.0,
     0x1.cd0bdae37310cp-765, 0x1.4efda0a660738p-986, 0.0, 0.0, 0x1.7c53179f72debp-932,
     0.0, 0x1.cd01a8a0d64c6p-219, 0x1.64d44f10b088dp-782, 0x1.3897986a57d76p-929, 0.0,
     0x1.d00bb6fd2e672p-288, 0.0, 0x1.b89aabcebe0bep-479, 0x1.b532386d8c15fp-720, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7f25ce35f2987p-931, 0x1.78420f21ecfa2p-381, 0.0,
     0x1.c3c3f83320161p-37, 0.0, 0.0, 0x1.5b2030bfb80c5p-395, 0.0, 0.0,
     0x1.48c8c73a4689dp-1006, 0x1.d0064c05ca81bp-170, 0x1.a5bca1ddedb13p-570, 0.0,
     0.0, 0x1.ec875536a6bbap-240, 0x1.e3deb269638b6p-600, 0.0, 0.0, 0.0,
     0x1.29566e68baf0dp-998, 0x1.f4a5c65adf9a6p-915, 0x1.a687662a3c7c1p-737, 0.0, 0.0,
     0x1.3ec7e0f468a6dp-437, 0.0, 0x1.78dc9510c8de2p-753, 0.0, 0.0, 0.0,
     0x1.d6c84329bd7dbp-977, 0.0, 0.0, 0x1.61bf87ea58d51p-613, 0.0,
     0x1.c8b75fd0e912p-246, 0x1.92e54293cb38ap-767, 0.0, 0x1.79c07f713bba8p-665, 0.0,
     0.0, 0.0, 0x1.18694d2944e95p-148, 0x1.bb2ba8c2298b2p-142, 0.0,
     0x1.9adc5ad1c23fp-497, 0x1.91cfb40154b45p-893, 0.0, 0x1.32093a840edefp-498, 0.0,
     0.0, 0.0, 0x1.188e406d29fdcp-263, 0x1.0fbc766c84b06p-52, 0x1.0963ae29fc73fp-330,
     0.0, 0x1.62e8b20de1bcp-3, 0.0, 0.0, 0x1.76046ee765f66p-337,
     0x1.b6a31846d1055p-72, 0.0, 0.0, 0.0, 0x1.b5177d9cbb1dfp-722, 0.0, 0.0, 0.0, 0.0,
     0x1.7bf897019cc32p-592, 0.0, 0x1.03c16d53b799ap-737, 0.0, 0x1.d6171c9046d02p-908,
     0.0, 0.0, 0x1.afb1bbc30ed92p-381, 0x1.901b26d1b3c77p-466,
     0x1.636617f64ef1ap-1009, 0.0, 0.0, 0x1.5f04ed77aba11p-992, 0x1.3121b30474197p-94,
     0.0, 0.0, 0.0, 0.0, 0x1.6adb79a4ca1dbp-13, 0.0, 0.0, 0.0, 0x1.fc2917b14c1a9p-130,
     0.0, 0.0, 0x1.db8bbb7030eb4p-383, 0x1.862c605e8f3cdp-45, 0.0, 0.0, 0.0, 0.0,
     0x1.25caf31fb5168p-1014, 0x1.c030e4080646ap-319, 0.0, 0.0,
     0x1.2296c5600c91ap-836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.507f089e802cbp-519,
     0x1.34a8c6936fa29p-524, 0x1.17e443bc63aa8p-120, 0x1.385b058e2b6d3p-528,
     0x1.2a256b77941d3p-10, 0x1.17c1f8fdcb5dp-62, 0x1.709054ea1b673p-526, 0.0, 0.0,
     0x1.08e846db392e4p-688, 0.0, 0x1.b0df88bcc3102p-227, 0.0, 0.0, 0.0,
     0x1.5a3c141e6bbb8p-993, 0x1.9f24b641dea9ep-137, 0x1.19f1505bceda6p-222,
     0x1.f1bdd169f87a8p-125, 0x1.4577c4033d253p-300, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06e1d8a07e3a7p-34, 0.0, 0x1.24341aa00ddp-382, 0.0, 0.0, 0.0, 0.0,
     0x1.a15e4cc148e52p-536, 0.0, 0x1.3adb43bc63a91p-70, 0.0, 0.0, 0.0, 0.0,
     0x1.38998d0512e92p-243, 0x1.4f8c628e14524p-538, 0.0, 0.0, 0.0, 0.0,
     0x1.d9d9315e6c13dp-687, 0.0, 0x1.0fe8de78a8ef8p-371, 0x1.fea853943e58p-560,
     0x1.666ec8083b30ap-198, 0.0, 0x1.c3d58a44182edp-386, 0x1.119fc7852394p-721,
     0x1.ee986cdf60f39p-144, 0x1.47d5cdc27781p-710, 0x1.7525b6b39ec71p-860,
     0x1.c2b9d13a955c6p-325, 0x1.06bac120c62abp-475, 0.0, 0.0, 0.0, 0.0,
     0x1.496ca0f172aep-98, 0.0, 0x1.5cbb2e57d907ap-729, 0.0, 0.0,
     0x1.4887d0e365788p-530, 0.0, 0.0, 0x1.28747c0dda5bp-185, 0.0,
     0x1.a2d68c56d9dc7p-1005, 0x1.02c0e4c08267fp-250, 0.0, 0x1.5bf455aeb2663p-287,
     0x1.008f8bcb5159ap-892, 0.0, 0x1.dd0ffab7746dp-477, 0.0, 0x1.be74d4f9ca772p-499,
     0x1.37cd558832e4cp-837, 0.0, 0.0, 0x1.226a0eacf306dp-394, 0x1.14ce48ab1bf96p-151,
     0x1.e169c48366a98p-1021, 0.0, 0x1.dc999926865d7p-500, 0.0, 0.0,
     0x1.0f3a3371eb4f1p-744, 0x1.0df7fdd0a2eb5p-191, 0.0, 0x1.68979b0fe36efp-794, 0.0,
     0x1.436796c5aa935p-434, 0.0, 0.0, 0x1.06c337d2ac1a4p-984, 0x1.90904cb1f33b7p-214,
     0.0, 0x1.e00b6ba136ae5p-535, 0x1.b0530462b07eep-976, 0x1.17b9c55f981d3p-449, 0.0,
     0.0, 0.0, 0.0, 0x1.ea43e1383cb7ap-806, 0x1.b20d328839d1fp-936, 0.0, 0.0,
     0x1.83e85ee911788p-212, 0x1.332ccaa0a2c95p-113, 0.0, 0x1.b1af89f2f2186p-261, 0.0,
     0x1.b090314c14607p-822, 0x1.926e0e75e8c42p-709, 0.0, 0x1.a559cab179c7ap-610,
     0x1.5eaf438874a9ap-255, 0x1.5ca369dced38dp-596, 0.0, 0x1.c91efa300440ep-751, 0.0,
     0x1.93e43b13941e4p-551, 0.0, 0x1.40d47576d9221p-861, 0x1.44520ee27480fp-274, 0.0,
     0.0, 0x1.462f7b65d344p-439, 0x1.1d8a2d3495cfcp-150, 0x1.e785a170c1785p-1005,
     0x1.700b4083d5267p-56, 0.0, 0x1.9046c306df4dp-236, 0.0, 0.0, 0.0,
     0x1.a54b79e0cf11bp-728, 0.0, 0x1.899ce4f538a58p-217, 0x1.cb8515e567cdap-816,
     0x1.24fcb656e5115p-841, 0.0, 0x1.35558ab64a251p-715, 0.0, 0.0,
     0x1.88d55a9936b87p-385, 0x1.dc615b0e55a96p-947, 0x1.f9788f1240ee9p-588,
     0x1.fad48a30566c6p-221, 0x1.ec2088c4cf6fap-571, 0.0, 0x1.f08c7e70f655bp-157, 0.0,
     0x1.abe1880a40484p-642, 0x1.200c205321553p-913, 0x1.82bedfdaed10bp-15, 0.0, 0.0,
     0.0, 0x1.e7898c055980ap-751, 0x1.743e5a12aadc4p-364, 0.0, 0x1.77d282ce72fbp-964,
     0x1.f9975ac5dd987p-573, 0x1.e78f62b340c67p-920, 0.0, 0x1.4710e4d1ce749p-214,
     0x1.7b3e481b849efp-757, 0x1.312dacc516b74p-285, 0x1.cf4eaddbf7dfp-263, 0.0,
     0x1.54b25b26db7a4p-529, 0x1.4cd5d62e339fbp-892, 0.0, 0.0, 0x1.bf0b2eac26d07p-661,
     0x1.d7d5c67ccbdacp-89, 0x1.23d169149af6bp-158, 0x1.14bb653e63b3dp-280,
     0x1.113e62d491956p-232, 0x1.d75262976764ap-188, 0x1.3059791a72db5p-144,
     0x1.64602561d4397p-884, 0x1.9e32e3f93121dp-75, 0x1.395618e87cdcap-966, 0.0, 0.0,
     0x1.904bc6f514b2ep-358, 0.0, 0.0, 0x1.16254ec05b776p-242, 0x1.d835429396d0fp-8,
     0x1.1a1693fe492fep-979, 0.0, 0.0, 0x1.06c33e1d8ec44p-154, 0x1.384fbd23e98c8p-550,
     0.0, 0.0, 0.0, 0x1.5fdc4f5e0bac5p-514, 0.0, 0x1.ac0349905af08p-454, 0.0,
     0x1.bc8352d3d219ep-938, 0.0, 0.0, 0.0, 0x1.e1956aa09f62dp-293, 0.0,
     0x1.83a89b956e1f6p-393, 0x1.60a8786f2cf9fp-54, 0.0, 0.0, 0x1.81c8d8f17c0ddp-677,
     0x1.694c055612948p-49, 0x1.2523de41f7a33p-598, 0x1.8783bbb9a890ep-961, 0.0, 0.0,
     0x1.3688f67734baep-848, 0x1.a620fe0d49501p-52, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4584bf40bf437p-118, 0.0, 0.0, 0.0, 0x1.149cf9d71f386p-215,
     0x1.4dfba9f9313dfp-648, 0.0, 0x1.23c99ba6c9f39p-119, 0.0, 0.0, 0.0,
     0x1.e6b8f8a82a966p-106, 0.0, 0.0, 0.0, 0x1.9e621ce93f426p-957, 0.0,
     0x1.52c50f16a6bbdp-386, 0x1.f7908b10a456cp-899, 0.0, 0x1.05e1e4f1d8c5ep-993, 0.0,
     0x1.e8e8640a3675bp-682, 0x1.304eba29eee17p-61, 0x1.7487fe195b86bp-982, 0.0,
     0x1.15be1a0127c5ap-920, 0x1.cd1537b05757fp-373, 0.0, 0x1.8197bacfcfe93p-455, 0.0,
     0.0, 0x1.04457ce60c811p-684, 0x1.1ea26fc0729d7p-92, 0x1.6c7dff818ebafp-843,
     0x1.cbe6acaab5ea3p-805, 0x1.ac4764ffde969p-449, 0x1.f54044919bccfp-287,
     0x1.3b32b99145033p-579, 0x1.6c41a61bc2ca5p-88, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5e7f3097900f9p-967, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8d863dbb6a2f9p-237,
     0x1.71247653b15f1p-112, 0.0, 0.0, 0x1.e3a708acec281p-803, 0.0, 0.0, 0.0, 0.0,
     0x1.78947884e02dfp-41, 0x1.7595a7e6ddb1ep-120, 0x1.386753a55d888p-689,
     0x1.76433833fbe38p-139, 0.0, 0.0, 0x1.91038398980c6p-653, 0.0, 0.0, 0.0,
     0x1.af2f60fd4b3edp-744, 0x1.a7f4bf845e9b5p-505, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.05bcfb619206ep-383, 0x1.c2fa3cade9245p-917, 0x1.949924a1070c7p-574,
     0x1.8425492cb9c94p-475, 0.0, 0.0, 0x1.3661041cb5143p-281, 0x1.fa04850cb5d99p-863,
     0.0, 0x1.a255199475112p-316, 0x1.d326a47bb6a19p-585, 0.0, 0.0, 0.0,
     0x1.41641e8f06ed1p-739, 0.0, 0.0, 0x1.f86b84186f19p-221, 0.0,
     0x1.733784d88fea2p-441, 0x1.4c7466d9b4ea8p-949, 0.0, 0x1.ad27128dfe5bfp-986,
     0x1.cdff28d807db8p-313, 0x1.f37ab3272190fp-106, 0.0, 0x1.03d173aa9526p-734, 0.0,
     0.0, 0.0, 0x1.fec72fce63d4dp-172, 0x1.e04a0c30af1a4p-867, 0.0,
     0x1.6c4f8ce108e6dp-410, 0.0, 0x1.bc62773ec80fap-818, 0x1.5bbe107625d9ap-554,
     0x1.2bc1cc1cf625fp-572, 0.0, 0x1.88f3d632b0928p-128, 0.0, 0.0,
     0x1.639094da6888bp-512, 0x1.ce449340996acp-69, 0.0, 0.0, 0.0,
     0x1.38d08a6eb1db8p-965, 0x1.278e1cdd1adb7p-325, 0.0, 0.0, 0.0, 0.0,
     0x1.9dc43f1324fcap-268, 0x1.89125e2f0e84cp-39, 0x1.c4b9eddd0709cp-79,
     0x1.153d73e87282ep-96, 0.0, 0.0, 0x1.9fff80b0688ebp-452, 0x1.be39c6cd7ab85p-908,
     0x1.835dfe9dbdd68p-531, 0x1.55f747209efa2p-860, 0x1.090f4697d8b67p-515, 0.0, 0.0,
     0x1.697e325b8dde8p-691, 0.0, 0.0, 0.0, 0.0, 0x1.10ce05fee5993p-1007, 0.0,
     0x1.fb036ed4794d7p-106, 0x1.e68cd79d9a844p-202, 0.0, 0x1.7f6b0681de34p-468, 0.0,
     0x1.1ecc8be1b3411p-21, 0x1.918488f0bacd2p-366, 0x1.c3faddbfd5ef8p-379,
     0x1.86ce6dced79ep-644, 0.0, 0.0, 0x1.131e1f817c315p-660, 0.0,
     0x1.e7ee0fbb3d9dfp-200, 0.0, 0.0, 0.0, 0x1.bd9292b8fcca5p-320,
     0x1.60c55dbc92edfp-6, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4be2244f654d1p-11, 0.0, 0.0,
     0x1.4a162e8a1564ap-158, 0.0, 0x1.a4f93469184c7p-343, 0.0, 0x1.1f20892322b1bp-266,
     0x1.4eb951ff4d56p-422, 0x1.a1b6f8eb78bb4p-6, 0x1.ed24aa27a6be1p-323,
     0x1.2a23d94c9cc4cp-310, 0.0, 0x1.56126df552c73p-981, 0.0, 0x1.38f658e05b93fp-170,
     0x1.680f9394cb06ep-378, 0.0, 0x1.6bd6c5e41fb0fp-284, 0.0, 0x1.9a655febe097ep-843,
     0x1.e09f12579cfcep-206, 0x1.e1c70c00c98b4p-891, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e71d596550b62p-908, 0.0, 0.0, 0x1.2de6a72cfd976p-190, 0x1.3bb3a0fb9af0fp-713,
     0.0, 0x1.b7fd8f2a5de9bp-173, 0.0, 0x1.84199486bbf79p-124, 0x1.6f79100b08207p-4,
     0.0, 0x1.dacfdaf96bd22p-781, 0.0, 0x1.0906fe1e1508ap-437, 0.0,
     0x1.96375dfeff114p-545, 0.0, 0.0, 0.0, 0x1.089b132236ae7p-362, 0.0, 0.0,
     0x1.a09cfaa8ca2d2p-982, 0.0, 0x1.3470ba7172862p-741, 0x1.4119ff1671ed2p-27,
     0x1.86cd69b29dc65p-826, 0x1.8404b553bd24cp-890, 0.0, 0.0, 0x1.b508811c8fa5cp-328,
     0x1.e35207d77b3dbp-700, 0.0, 0x1.000054f54eccbp-220, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c0b61354b6f78p-316, 0.0, 0.0, 0.0, 0.0, 0x1.cbc78cad4972dp-378, 0.0,
     0x1.2de5cf48cb44p-909, 0x1.5910d5164cd94p-647, 0.0, 0x1.84cf5e2c33c52p-145, 0.0,
     0.0, 0x1.19f8745ed5c3fp-884, 0.0, 0.0, 0x1.8fd1af0e6b45ep-570,
     0x1.aeff10b3978acp-225, 0.0, 0x1.b5b4fbc9c973dp-518, 0.0, 0.0,
     0x1.2e137e514cfccp-444, 0.0, 0.0, 0x1.6454a9392a4a5p-532, 0.0, 0.0,
     0x1.5f912d9b539c7p-644, 0x1.dee7e1144c878p-139, 0.0, 0.0, 0.0,
     0x1.d5ac8ad059467p-277, 0x1.89292005e905p-391, 0x1.a946ca1a6523ep-126,
     0x1.de98ecf6a3ec2p-290, 0.0, 0x1.f9cabe54d0232p-1014, 0x1.79c7a24d2bf1cp-625,
     0.0, 0.0, 0x1.62ae138f27f66p-726, 0.0, 0.0, 0.0, 0x1.ed4320f4fdc74p-337,
     0x1.a9b02b3bc4393p-650, 0x1.6096acfcba82dp-247, 0.0, 0x1.144868a75fa68p-844, 0.0,
     0.0, 0.0, 0.0, 0x1.14f61eac6b1fbp-24, 0.0, 0x1.0b4874cd0b82ep-393,
     0x1.853d430a774a4p-980, 0.0, 0.0, 0x1.c4f8b083a9eb2p-464, 0x1.32bcd497bcc89p-655,
     0x1.4a80841181cd6p-981, 0.0, 0x1.defebfca122adp-958, 0.0, 0x1.53452dcc8f275p-676,
     0.0, 0.0, 0x1.914f60e96f31bp-797
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
            tmp1 = Sleef_atand2_u10kvx(tmp0);
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
    printf("Sleef_atand2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_atand2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
