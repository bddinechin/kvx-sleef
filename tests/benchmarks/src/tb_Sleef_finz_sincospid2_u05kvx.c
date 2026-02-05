/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid2_u05kvx.c --function \
 *     Sleef_finz_sincospid2_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_float64x2_t_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef_float64x2_t_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef_float64x2_t_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0x1.fdfd1a4360d32p-368, 0x1.8c6b0ab8823bbp-471, 0.0, 0.0,
     0x1.54c9d5422e739p-440, 0.0, 0.0, 0.0, 0.0, 0x1.5469bc186933cp-440, 0.0, 0.0,
     0x1.9973cd9ae7d1cp-718, 0x1.d76e0e34709a2p-96, 0x1.6820032bb47cbp-690,
     0x1.0b62f8c73ff69p-126, 0.0, 0.0, 0x1.efaff4c075a59p-229, 0x1.f4fe66460e7fap-854,
     0x1.c8a1e7fe1b978p-502, 0x1.cb17d32d41809p-756, 0.0, 0x1.bc76351b7e22fp-658,
     0x1.d9f4cd70a2904p-725, 0x1.3c33d24bfd3a5p-422, 0x1.4529b86bcbe2ap-165,
     0x1.752ba7f580906p-364, 0x1.deebceadf753cp-389, 0.0, 0x1.bb05eed517136p-396, 0.0,
     0.0, 0.0, 0.0, 0x1.68f8100476ec5p-847, 0x1.c9f8d20062071p-328,
     0x1.637ee141b3801p-800, 0x1.e3c656eabdaf5p-791, 0.0, 0.0, 0x1.ed4b63cd1baa6p-335,
     0x1.cac845a378b39p-310, 0x1.fd59618591619p-657, 0x1.fb439ff017036p-781, 0.0, 0.0,
     0x1.e82710df4a638p-897, 0x1.808ca4d7ab57fp-1014, 0.0, 0.0,
     0x1.a2aca1fa23818p-102, 0x1.f7760e5c9b96bp-559, 0x1.4dc18914a6351p-479,
     0x1.b8e2fcb93bbe9p-969, 0x1.1d974c8a39fdp-714, 0x1.da971587cbf85p-918,
     0x1.1e8d5b34c731cp-101, 0.0, 0x1.060c4c53246b8p-945, 0.0, 0x1.3618dcb3dd07dp-983,
     0.0, 0.0, 0.0, 0.0, 0x1.45e9b7c3c93bbp-661, 0x1.ef03a76279fdp-887, 0.0, 0.0, 0.0,
     0.0, 0x1.0a2b4954e6536p-879, 0x1.36e2a2e9dcd07p-995, 0.0, 0.0, 0.0,
     0x1.563e2650844fap-451, 0.0, 0x1.b3f9491949e1cp-49, 0.0, 0x1.08b32278c6202p-825,
     0x1.be4e19ea0db37p-901, 0.0, 0x1.8e292c67e910dp-602, 0x1.293ae5c171a7ap-440, 0.0,
     0x1.4cb15e069889bp-423, 0x1.a61cd74a902bfp-717, 0.0, 0x1.ec157f1ce9087p-747,
     0x1.5bd918d6765b6p-1003, 0x1.7d70e156be152p-233, 0x1.3fbf51022648p-524,
     0x1.c000ede1c2bb9p-22, 0x1.52903e4054d04p-22, 0x1.cc39e8a2299c7p-35,
     0x1.dca49b88e2bd2p-864, 0x1.1c520c5de014p-734, 0.0, 0x1.384b2e69ae687p-530,
     0x1.6d1984b36d027p-508, 0.0, 0.0, 0.0, 0.0, 0x1.9ca61be6fa8bcp-892, 0.0, 0.0,
     0x1.c1bf0871a9744p-736, 0.0, 0x1.1d6bfdcefb669p-502, 0x1.11b4f7aef2cd7p-519,
     0x1.c0a7bf7bc821ap-691, 0x1.be9bb4d2cfb88p-78, 0x1.1f8ac6a2fa958p-481, 0.0, 0.0,
     0x1.6d69919057424p-110, 0.0, 0x1.074f0a19777ap-195, 0x1.f2dda35e3f09p-87,
     0x1.4b4ea9fd4dffcp-528, 0x1.d93bbb2bc1d57p-715, 0x1.41d3dc6605edcp-590,
     0x1.56a5880ba65abp-526, 0.0, 0x1.c191e974f692ap-586, 0.0, 0.0, 0.0, 0.0,
     0x1.90e9efabb47cap-927, 0.0, 0x1.fd88bc0ddb88p-996, 0.0, 0.0,
     0x1.0761c38412b47p-796, 0x1.5eb5c28dbef9p-969, 0.0, 0x1.9502707013ea8p-518, 0.0,
     0x1.14738a8f3c0dfp-488, 0x1.07fe847f9522ep-258, 0.0, 0.0, 0x1.8fff173d19643p-787,
     0x1.f0fd178f89142p-271, 0.0, 0x1.ed9b2a8de5cb9p-845, 0.0, 0.0, 0.0,
     0x1.23af7aa3a0eddp-530, 0x1.481b285df40fp-367, 0.0, 0x1.8a87d442f2992p-675, 0.0,
     0x1.8fb74c621aa76p-338, 0x1.51ab7afd4b06bp-999, 0.0, 0x1.f060c89673a48p-586, 0.0,
     0.0, 0.0, 0x1.db88aedf1720dp-988, 0.0, 0x1.83128606ad5d3p-163, 0.0,
     0x1.ccaabb5fe6daap-482, 0.0, 0.0, 0.0, 0x1.fbee414643acep-964, 0.0, 0.0, 0.0,
     0x1.f710bf63b32e5p-180, 0x1.dda84456411eap-927, 0x1.ab694127b4eafp-177,
     0x1.94b4bc438ed51p-233, 0x1.2cd2ac15bf034p-462, 0.0, 0.0, 0.0, 0.0,
     0x1.229664cec7c46p-776, 0.0, 0.0, 0.0, 0x1.6fcf96db64f85p-455,
     0x1.5cfdf3f0dbfeep-154, 0.0, 0x1.438c12b853d95p-234, 0.0, 0.0, 0.0, 0.0,
     0x1.382702a6cc1dcp-730, 0.0, 0x1.450b2b9dba388p-939, 0.0, 0.0,
     0x1.f54ac6138006fp-990, 0.0, 0.0, 0x1.c9d55af9fe59cp-995, 0x1.a5dc20da3283bp-65,
     0x1.09df013188189p-953, 0.0, 0.0, 0.0, 0x1.ecf9abe235cdap-162,
     0x1.0bb949164637ep-733, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.47991cfdd182bp-756,
     0x1.43307609eb939p-423, 0x1.b022549f5a90bp-961, 0.0, 0.0, 0x1.cc5b90c18d027p-266,
     0x1.1a089822ae502p-360, 0x1.6bfe2201cd5adp-741, 0x1.ab306b0f2baebp-775, 0.0,
     0x1.c38659d131607p-961, 0.0, 0x1.5bd9e81df2004p-383, 0x1.9358e17ef2aa8p-262, 0.0,
     0.0, 0x1.a22cd3eb3b52ep-407, 0x1.3a204e0d3a584p-669, 0x1.619c251ceecdep-589, 0.0,
     0.0, 0.0, 0.0, 0x1.4593698de7f8fp-599, 0x1.aafd1e3be34fap-553, 0.0, 0.0, 0.0,
     0x1.0abd2bdd757bbp-208, 0.0, 0.0, 0.0, 0.0, 0x1.795e1f534c1b6p-59, 0.0, 0.0, 0.0,
     0x1.59fa19c2f86c6p-266, 0x1.c7b443574f8bap-641, 0.0, 0.0, 0x1.9ed6a39990491p-154,
     0.0, 0x1.07f70d6f55acdp-24, 0x1.c896073a1bbb9p-921, 0.0, 0x1.e71199c20cc2bp-735,
     0.0, 0.0, 0.0, 0x1.40e07fccba21dp-15, 0x1.b00c3836a8a68p-642, 0.0, 0.0, 0.0,
     0x1.b035d49f3c97p-912, 0x1.e1db87f1241afp-707, 0x1.1008bc2ac43c9p-957,
     0x1.1faf2764f9bc5p-539, 0.0, 0.0, 0.0, 0x1.0312dc79115e5p-287, 0.0, 0.0, 0.0,
     0x1.4f7ba02f1a2c2p-136, 0x1.07ac45f5bd56cp-108, 0x1.759ce24cc5638p-896, 0.0, 0.0,
     0x1.cb38f539b62eep-255, 0.0, 0x1.6387f1ba3a0e8p-123, 0.0, 0.0,
     0x1.fc84259ae824fp-115, 0x1.390f8144ae31cp-375, 0x1.7dd80f86aae14p-217,
     0x1.e126a290a225dp-15, 0x1.f023de58be33cp-931, 0.0, 0.0, 0x1.510a3cf538802p-963,
     0.0, 0x1.36ba196892816p-454, 0.0, 0x1.13408ec778ba7p-882, 0x1.7429a5664b825p-866,
     0x1.1a1e0a80fcdb5p-350, 0.0, 0x1.fc37ad6905765p-641, 0.0, 0x1.458ac4e8f65e9p-322,
     0.0, 0.0, 0.0, 0x1.dc5576cb13733p-731, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a3554936439ap-840, 0.0, 0x1.c834a1e4ab21p-796, 0x1.e157333c0f358p-567, 0.0,
     0x1.9b78621a563f6p-218, 0x1.e35a2654ed4abp-426, 0.0, 0.0, 0x1.7ec781b413bacp-907,
     0.0, 0.0, 0.0, 0.0, 0x1.20d98af13dac8p-301, 0x1.f55c5a4774adbp-666,
     0x1.c6a44c3b84064p-809, 0.0, 0x1.993bd96fef6b7p-394, 0.0, 0.0, 0.0, 0.0,
     0x1.e2ca80c14c781p-369, 0.0, 0x1.1640f166d428dp-199, 0.0, 0x1.0861013485d8p-679,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d6075daab2174p-413,
     0x1.bf27fcd71a3f5p-441, 0x1.e80b207f7a981p-268, 0.0, 0.0, 0x1.5ac487f70fcbp-1005,
     0x1.547f0665276efp-898, 0.0, 0x1.1577c2330df04p-437, 0.0, 0.0, 0.0, 0.0,
     0x1.c57080cdd14ap-341, 0x1.662a69cb7dabap-884, 0.0, 0x1.faf13cae33e5ep-560, 0.0,
     0.0, 0.0, 0.0, 0x1.0ee83448b5b32p-697, 0x1.1d3a151450ddp-312,
     0x1.5ddb3c13c1e27p-808, 0.0, 0x1.0a23eca0e7697p-73, 0.0, 0.0,
     0x1.6ba0c46b9785bp-634, 0x1.5a99d6d11b2ccp-975, 0.0, 0x1.cca3c5295c072p-667,
     0x1.3ca133ef7591bp-59, 0.0, 0.0, 0x1.0ecaaf47af5a5p-157, 0.0, 0.0, 0.0, 0.0,
     0x1.4e2527532cc71p-389, 0.0, 0x1.0323275dbd16p-95, 0x1.ccb01236f515fp-579,
     0x1.2af0874f7f74cp-55, 0.0, 0.0, 0x1.e7708697d9d22p-500, 0x1.10f89bcd3b04fp-299,
     0x1.23481121d6775p-169, 0x1.a07425211fbd3p-56, 0x1.7f5277fedf556p-932,
     0x1.1e4bbe9cb5c05p-209, 0x1.f7bb9893dfe81p-352, 0.0, 0x1.d96b4516b1693p-968, 0.0,
     0x1.6a979a8d7cab4p-494, 0x1.a063d10221563p-807, 0.0, 0x1.0154e49a1aeacp-387,
     0x1.d2c4f2127c917p-709, 0x1.62ea0e616db02p-707, 0x1.f87d50757e12dp-780,
     0x1.ef1e127a57d22p-768, 0.0, 0x1.c3a5ffbe24c8p-390, 0x1.1f95608928e4dp-233, 0.0,
     0x1.6d78cb76dcb4cp-465, 0x1.a3891c26b5548p-770, 0x1.a0656b2ed6de1p-238, 0.0, 0.0,
     0.0, 0x1.a4fc43fa83a64p-549, 0.0, 0.0, 0.0, 0.0, 0x1.67ea1d9d720d6p-811, 0.0,
     0.0, 0x1.c496152e4eda2p-221, 0x1.a1d7c1830ffd4p-238, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fcaaec3f4c409p-554, 0x1.59511801e98b8p-407, 0x1.539a8c08671ddp-871, 0.0, 0.0,
     0x1.cedbcdeaf1423p-119, 0x1.d0f02d0034f5ep-1008, 0.0, 0x1.25d8e97a6ea5cp-546,
     0.0, 0.0, 0.0, 0x1.de0a86c8d8449p-397, 0x1.438883d0dba1ep-33,
     0x1.d2d3080b5e0b1p-162, 0.0, 0x1.2179106b46ab4p-651, 0x1.17cf3701a794cp-203, 0.0,
     0.0, 0.0, 0x1.cb761b7756b36p-549, 0.0, 0.0, 0.0, 0x1.24d32287bca76p-44,
     0x1.7c3818381d35bp-797, 0x1.15fc84588a5a6p-975, 0x1.51bd1c06e8a63p-447,
     0x1.f129b775e01dap-886, 0x1.02f401bb9c54p-617, 0x1.a7e61463ffea8p-289,
     0x1.623bc0a95f3fdp-256, 0x1.c8468ab4c23a7p-141, 0x1.fdfc4d1c9e73bp-4,
     0x1.88c3084996b54p-610, 0.0, 0x1.218f85091eef6p-188, 0x1.6a092ad4e17b3p-632,
     0x1.4fce463ee44fdp-652, 0x1.be013c15d8eb3p-388, 0.0, 0x1.4d44f28fbdfd8p-872, 0.0,
     0x1.492c7b9a47d13p-697, 0.0, 0.0, 0.0, 0.0, 0x1.8c8b4af20b271p-560, 0.0, 0.0,
     0x1.8029a486e08a2p-913, 0x1.037a753173bep-537, 0x1.bc394e3f08848p-880, 0.0,
     0x1.25c202375af76p-606, 0.0, 0.0, 0x1.00defa8832f43p-128, 0.0,
     0x1.0d2bfda6ab285p-158, 0.0, 0.0, 0.0, 0x1.3322c72e59271p-870, 0.0,
     0x1.9d38393871d8ap-960, 0.0, 0x1.d9618e9023326p-187, 0x1.a07b06fdb4ca2p-601,
     0x1.172d28577950cp-513, 0.0, 0x1.9808b3990b10ep-268, 0x1.aa3fafe84eb0dp-1009,
     0.0, 0.0, 0.0, 0x1.feb8ac765bd0ap-276, 0.0, 0.0, 0x1.95a52c5811db5p-784,
     0x1.46a68461bd073p-719, 0x1.782d6957aaf6cp-3, 0x1.3188396d740e4p-664, 0.0,
     0x1.ca7dc99948c85p-894, 0x1.ceb99cd1b26f5p-943, 0x1.fffac9c516ef2p-664,
     0x1.c166103cf99bbp-730, 0x1.608fa0a869249p-506, 0x1.fdf708d97396ap-628, 0.0,
     0x1.62d665acba571p-536, 0x1.aad554f7fc0f5p-528, 0x1.ae4aa48b72c54p-461, 0.0, 0.0,
     0.0, 0x1.1eb75f482117ep-118, 0x1.c39cae92b4e56p-450, 0x1.77b8ea0f0f0e7p-978, 0.0,
     0x1.d33e55ea4f559p-105, 0x1.1343503b3f328p-948, 0x1.ca425fc1b3e3dp-275, 0.0,
     0x1.d298d79a6950fp-550, 0x1.eaf2d09b8b887p-450, 0.0, 0x1.58b15ffffdff4p-865, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dcb7790f48544p-879, 0x1.3d413bd53fa42p-460, 0.0, 0.0,
     0x1.d2cc5a340013ap-780, 0x1.989093c5ef1f9p-122, 0.0, 0.0, 0.0, 0.0,
     0x1.b7b2c01ec4058p-683, 0x1.d8adf9ea2e9dcp-705, 0.0, 0x1.261364042430ep-229,
     0x1.8b3148f59c30bp-703, 0x1.304568a3d66a5p-531, 0.0, 0x1.2570ff7d39949p-19, 0.0,
     0.0, 0.0, 0x1.9692051787c02p-274, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1a91a5f89b5a2p-260, 0x1.55f45b48cb11bp-452, 0.0, 0x1.efd551362e986p-169,
     0x1.b99e4824674a5p-1006, 0x1.042aaf738f46bp-79, 0x1.41efc1cf62318p-263,
     0x1.3a0e6499d151ap-60, 0x1.510b9d1f836aep-760, 0.0, 0x1.15e242144877p-447,
     0x1.ff62ccddab18cp-582, 0x1.57c51697b0fbp-194, 0.0, 0x1.cc0310307b30cp-72, 0.0,
     0x1.472baebc2efep-217, 0x1.a65ae41bdb00bp-173, 0.0, 0x1.2d9be552f73eap-796,
     0x1.e380356d7c2dep-669, 0.0, 0.0, 0.0, 0.0, 0x1.905549c5f916cp-129, 0.0,
     0x1.e56bbb2606648p-777, 0.0, 0x1.473506d2d5b56p-468, 0x1.94bf29924348fp-518,
     0x1.e14d39cdd35f7p-433, 0.0, 0.0, 0.0, 0.0, 0x1.2dc1f7a59492fp-180, 0.0,
     0x1.e131a59cacef7p-838, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6819b630e9aedp-959, 0x1.4afbaf7f2cb2bp-669, 0x1.cf1af6066ccfep-949, 0.0, 0.0,
     0x1.a88c52d4f4bc5p-110, 0x1.0100238145a19p-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd663c1ed4c1p-633, 0.0, 0x1.49f8635ce07d6p-93, 0.0, 0x1.759a80bb7e3ffp-207,
     0x1.0129c49629eacp-308, 0.0, 0.0, 0.0, 0x1.bb8f5bccb87e1p-541,
     0x1.b1c521c0a162dp-821, 0x1.a6f4b4cf611f8p-592, 0.0, 0x1.ae5d0e6252991p-445, 0.0,
     0x1.a594eb778b5c9p-29, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a17bb8077d384p-813,
     0x1.75b2de1f73893p-137, 0x1.bc2201f692c11p-390, 0.0, 0.0, 0x1.b779cf653186cp-295,
     0.0, 0x1.f97eab5251eb4p-298, 0.0, 0.0, 0x1.057952edb90f9p-258, 0.0, 0.0, 0.0,
     0x1.4093d1ba3d0e3p-494, 0.0, 0.0, 0x1.e9829c00ce501p-837, 0.0,
     0x1.2ac7ae652ce8dp-971, 0.0, 0x1.412ebfe330e13p-711, 0.0, 0x1.ea65f4042b0f8p-80,
     0x1.a2397fa1f6004p-267, 0x1.32a3f3301cb78p-860, 0x1.c205f42b58051p-594,
     0x1.7693c38efb0c8p-254, 0x1.0478afefb758dp-381, 0x1.01eae50884a4fp-45,
     0x1.f0f1ae6b2e6fdp-681, 0x1.4c2e97772fecap-289, 0.0, 0x1.78d03f76b892ap-806,
     0x1.ca25f8818e663p-487, 0x1.1f758e81020abp-419, 0.0, 0x1.2bb673ab51094p-332,
     0x1.52633ad1c07e8p-67, 0.0, 0.0, 0x1.93d7ff1961577p-331, 0x1.a7db54c1301cp-584,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dd78837b9aeaep-389, 0.0, 0.0, 0.0,
     0x1.8a728aec3cd31p-139, 0x1.67f1ed1995c4ep-707, 0x1.230d8f85ee925p-802,
     0x1.f6e5a21949a0dp-959, 0.0, 0.0, 0.0, 0x1.aa5c4df919fd6p-286, 0.0,
     0x1.11c10dcde02d1p-231, 0x1.5fb9216b0d1a9p-1000, 0x1.cb61ed9a6b0cfp-236,
     0x1.b0aacd4810925p-21, 0x1.88c470abbbcep-886, 0x1.5e692b9c213dep-136, 0.0, 0.0,
     0.0, 0x1.4269135eb7p-26, 0x1.ce4c3ec91f668p-314, 0x1.c8ee59af01ad8p-989, 0.0,
     0x1.d2d3faa78039p-654, 0x1.b3676c3d4f984p-238, 0x1.aa20562dea465p-831, 0.0,
     0x1.c1516493382e2p-741, 0.0, 0.0, 0.0, 0x1.9f472081d948dp-587, 0.0,
     0x1.e934d70886389p-533, 0x1.239d588e200adp-548, 0.0, 0.0, 0x1.fb45f34c3a07bp-417,
     0x1.4c204f3278f4cp-5, 0x1.8e06692fb2823p-218, 0x1.78293ab29f784p-770,
     0x1.91ee4ce0c21dp-478, 0x1.45f564a814583p-476, 0x1.be000d7425e5dp-56,
     0x1.bed6d584f5c41p-642, 0x1.53aefcc693fb6p-184, 0x1.0769c9c51c44ep-942, 0.0, 0.0,
     0x1.b2a70c5704bap-627, 0.0, 0.0, 0x1.702ed69a312f8p-457, 0x1.355bd8895aedbp-354,
     0.0, 0x1.c29023e9e8c11p-86, 0x1.95a3158a727f4p-245, 0x1.9ce7df03d2dc3p-634, 0.0,
     0.0, 0x1.456f42d1dc0e9p-1004, 0x1.2195b0fa2c222p-724, 0x1.591be1a1c6afcp-80,
     0x1.b6bdd591f0684p-124, 0x1.af8cba5e86f4ep-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cf0e916e23cf8p-871, 0x1.a0c3af9024f16p-586, 0.0,
     0x1.111345cd1e2c9p-79, 0.0, 0.0, 0x1.b6579e798281fp-140, 0.0,
     0x1.60b97e8c14dbep-733, 0x1.9d21e0eb361c7p-57, 0x1.f219e0e0c7821p-903,
     0x1.ab3e49a33b02bp-928, 0x1.6639598f34bfdp-899, 0.0, 0.0, 0x1.210c5cf610ef7p-440,
     0x1.04f0b0154e4b2p-422, 0x1.b8406c78541bep-104, 0x1.22ab1c4bacf41p-932,
     0x1.6336af06aa9b8p-577, 0.0, 0.0, 0x1.5d4f10cba820fp-162, 0x1.fe7a8830f051ap-7,
     0x1.92767cf52ac4p-463, 0x1.2749b1275c23p-677, 0x1.e0f63675c11cfp-673, 0.0, 0.0,
     0x1.a45ec23622899p-256, 0.0, 0.0, 0x1.c12b9b82a4817p-761, 0x1.2a5c80cdba36ap-166,
     0x1.5fe171496c11p-374, 0.0, 0.0, 0.0, 0.0, 0x1.3dc3e2244011cp-92, 0.0, 0.0, 0.0,
     0x1.35f8452875eb9p-72, 0.0, 0x1.a92850e02390ap-701, 0x1.034a6680d9248p-59, 0.0,
     0.0, 0x1.44eb5feb6d5f8p-556, 0.0, 0.0, 0x1.6da218874c9b4p-837, 0.0, 0.0, 0.0,
     0.0, 0x1.212be3f9ecedap-889, 0.0, 0x1.bfe4a641e3492p-87, 0.0,
     0x1.00deee04f1abcp-362, 0.0, 0x1.ebea472edb9f7p-174, 0.0, 0x1.376f3eae3370ep-992,
     0x1.56e33a8b56c17p-157, 0.0, 0.0, 0x1.3774f15aa0f49p-832, 0x1.e95e7795e664ep-653,
     0.0, 0x1.1772c17c9c128p-597, 0.0, 0x1.635814279b6d6p-144, 0x1.32b78178d1e12p-531,
     0x1.1fceb2cc20a46p-973, 0x1.46931ba2df653p-26, 0x1.521df9854adfbp-861, 0.0,
     0x1.588eb1f321885p-896, 0.0, 0.0, 0.0, 0x1.50f80c65dd028p-997, 0.0,
     0x1.233f20643fde2p-146, 0.0, 0.0, 0x1.d417dde7b3c4cp-659, 0.0, 0.0, 0.0,
     0x1.b7f3b198cbc3p-539, 0x1.f22142a4f8775p-327, 0.0, 0x1.2409758d031a9p-886, 0.0,
     0.0, 0x1.8fe518995facep-799, 0.0, 0.0, 0x1.4a03529d15aeap-753, 0.0, 0.0,
     0x1.c6cad29f00c1ap-264, 0.0, 0x1.e19ccc58b3b93p-643, 0x1.585a821e0d9bcp-207, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.06180e8b51207p-83, 0x1.1e63a1177051dp-869, 0.0, 0.0,
     0x1.fbfb061fb20d2p-345, 0.0, 0.0, 0x1.36ccbcbf5bc28p-349, 0x1.5b4cc9e8e1d2bp-396,
     0x1.73147f123537ap-858, 0.0, 0x1.98a4fd7af18cap-45, 0.0, 0x1.3830007b3ecdp-745,
     0.0, 0.0, 0.0, 0x1.10fbbef846fa9p-6, 0.0, 0x1.44e54c16901eap-334, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.a7c4a3eb8a92dp-485, 0x1.cae9cd0e4e468p-462,
     0x1.d175238149ddcp-103, 0x1.8c7a15e5508dap-696, 0x1.be1af76da5bb9p-848, 0.0, 0.0,
     0.0, 0x1.3553e67d9712bp-795, 0.0, 0x1.7a61a8b010d61p-518,
     0x1.0be2fac569ad2p-1019, 0x1.4068cbf9302a6p-55, 0x1.892a0a6b1d95ap-773,
     0x1.965e848be3823p-991, 0x1.00d0817969235p-622, 0x1.e42cb4088a3b9p-39,
     0x1.6bedc76cf49c8p-684, 0.0, 0.0, 0x1.842133e9a12f8p-351, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ac89fc0da6b69p-566, 0x1.3bb93b5012662p-291, 0.0, 0.0,
     0x1.e9d7e9a31dab8p-647, 0.0, 0x1.c536ed1cfff2fp-506, 0.0, 0.0, 0.0, 0.0,
     0x1.a0b57ee8006a7p-404, 0.0, 0x1.78354db145969p-911, 0.0, 0x1.f6f9939fa42c6p-456,
     0x1.0d5483bc7caf8p-878, 0.0, 0.0, 0x1.1b044467d4ef7p-514, 0.0, 0.0, 0.0, 0.0,
     0x1.0c53e9174da94p-721, 0.0, 0x1.ffc1673169d2p-187, 0.0, 0.0,
     0x1.706a3fb2996ap-57, 0x1.cbb03e94b98ecp-578, 0x1.adc560793b15dp-198, 0.0,
     0x1.1e17d469d47efp-97
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_float64x2_t_2 global_bench_acc;
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
        Sleef_float64x2_t_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef_float64x2_t_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef_float64x2_t_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef_float64x2_t_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_finz_sincospid2_u05kvx(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_float64x2_t_2) {.x=tmp4, .y=tmp7});
            local_acc = tmp8;
            tmp9 = i + INT32_C(2);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = local_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = local_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_float64x2_t_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sincospid2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincospid2_u05kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
