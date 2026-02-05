/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_floord4_kvx.c --function Sleef_finz_floord4_kvx \
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
     0.0, 0.0, 0.0, 0.0, 0x1.d363c6b03a5dcp-888, 0.0, 0x1.57e73147f1bap-673,
     0x1.76746ffd6928p-933, 0x1.a9a2895d72461p-208, 0.0, 0.0, 0x1.75c77a04a74acp-834,
     0x1.ed0bd22fd8646p-17, 0.0, 0.0, 0x1.9ef05dd2b2ee9p-440, 0x1.aca5d37105f37p-86,
     0x1.45595cf5947e3p-930, 0x1.bc8768a993f8dp-967, 0x1.76b5fa290e893p-928,
     0x1.658c4eaf06fe3p-929, 0.0, 0.0, 0.0, 0.0, 0x1.ba2db05be25b4p-755,
     0x1.3ef9bfcda5441p-574, 0.0, 0x1.6d843c62b671ap-234, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5c8c7bc181fd5p-541, 0.0, 0x1.df9df751701p-174, 0x1.ee180abf378e2p-344,
     0.0, 0x1.67b2bf2180633p-376, 0x1.3d63b4aeb5199p-383, 0.0, 0x1.463d650d6ddf4p-35,
     0x1.e3de421e9a09ep-447, 0.0, 0.0, 0x1.eeb7159ba6435p-284, 0x1.3c97b8200da95p-97,
     0x1.8ef5024ae052p-345, 0.0, 0x1.e301c2e1c680dp-1019, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.da9e2bfc3f41ep-472, 0.0, 0.0, 0.0, 0.0, 0x1.8d96a99df49ecp-691,
     0x1.d9d4d80a9e897p-862, 0.0, 0.0, 0x1.f6c8a3cc7de41p-879, 0x1.69716f5a5712ep-295,
     0.0, 0x1.b1f8bc474af57p-514, 0.0, 0.0, 0.0, 0x1.b70343a005fe9p-18,
     0x1.d33ff11257526p-376, 0.0, 0.0, 0x1.1c0f8a3f2d25bp-772, 0x1.925c49d7088b8p-361,
     0x1.6b3e13e9cde0fp-1007, 0.0, 0.0, 0x1.d72a5a65dfaf4p-1010, 0.0, 0.0, 0.0, 0.0,
     0x1.8170541dcc648p-483, 0.0, 0.0, 0x1.669e57dbfb1fcp-547, 0x1.a424f0803576cp-334,
     0x1.a1ef32772dc09p-566, 0.0, 0x1.5133136abdb3ep-215, 0.0, 0x1.0f559161722ecp-70,
     0x1.074251cd26886p-381, 0.0, 0.0, 0.0, 0x1.f014e530f0caap-738, 0.0,
     0x1.6ecd6d3350424p-896, 0.0, 0.0, 0x1.88a29b01bc12fp-961, 0x1.ec34816269891p-206,
     0.0, 0x1.8e130b673bdacp-442, 0.0, 0.0, 0x1.c4805122ec504p-501, 0.0,
     0x1.35bd8ef40e838p-568, 0.0, 0x1.a59f06930250dp-246, 0.0, 0x1.cb6cf6c75ed62p-84,
     0.0, 0.0, 0.0, 0x1.b098d24c3a3fap-126, 0.0, 0.0, 0x1.c033176076ceap-875,
     0x1.c782e1a289c56p-7, 0x1.6183cd288868ep-846, 0.0, 0.0, 0.0, 0.0,
     0x1.e31c30b80e29ap-587, 0x1.9dd4b321c8b72p-199, 0.0, 0x1.a86b63b931d9bp-512,
     0x1.2b962825741cfp-34, 0x1.caf52604fe7edp-584, 0.0, 0.0, 0.0,
     0x1.c7451986801f5p-188, 0x1.163f3be7a5e5dp-616, 0.0, 0x1.5b2523d20adep-991,
     0x1.3a24fd6e3e8e7p-353, 0.0, 0.0, 0.0, 0x1.acc0f8f78a031p-918,
     0x1.16d3e73cc1952p-792, 0x1.82276e2409e71p-55, 0x1.cbe9565510315p-667,
     0x1.037e9fd0aedf9p-873, 0x1.577fee21aeabep-945, 0.0, 0x1.7d2db71fc478ep-890,
     0x1.23468ab4525e2p-665, 0.0, 0x1.34d292b079e8p-282, 0.0, 0x1.f734069600dbcp-671,
     0.0, 0.0, 0.0, 0x1.ef2424a6b8621p-605, 0x1.bf48ddd6808dbp-230, 0.0, 0.0,
     0x1.95e2c1e38bc49p-751, 0x1.366d8b84a7772p-724, 0.0, 0x1.47c5200b48259p-509, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd63c5fd8501ep-867, 0x1.32663a281640cp-974, 0.0,
     0.0, 0x1.04ed2de9bf19ep-817, 0x1.cbbcf7a2bc953p-531, 0x1.7cb73460c4d71p-566,
     0x1.0f67bb74a958ep-639, 0x1.1f36ca5fbf105p-113, 0x1.295b6a77e8dfep-741,
     0x1.9b2a53d1517f4p-106, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.33449335b6858p-527, 0x1.344cceb2db52fp-737, 0.0, 0.0, 0.0, 0.0,
     0x1.62d8a41bdd8b8p-161, 0.0, 0.0, 0x1.31f7c8f1f4704p-775, 0.0, 0.0, 0.0,
     0x1.2d826bf3cebcdp-259, 0x1.fa5605d6ddf28p-236, 0.0, 0.0, 0.0,
     0x1.435d971bd0552p-910, 0x1.6818957107588p-269, 0.0, 0.0, 0x1.e7d7d9ad8d9b1p-19,
     0.0, 0.0, 0x1.c9fded7ec7f19p-731, 0x1.d23be09173c08p-11, 0.0,
     0x1.8a1036abae77p-592, 0x1.498d9c3d2ec9dp-217, 0.0, 0x1.af0fb2d04e89dp-159,
     0x1.012eb900450a8p-156, 0x1.aebc203a31d88p-202, 0x1.8e0d30662accap-495, 0.0,
     0x1.0f8df9f6b42eep-490, 0.0, 0x1.b5cef14bb822fp-783, 0.0, 0.0,
     0x1.3cb01e5fe8904p-669, 0x1.438b0609f4c06p-322, 0x1.cd99d0f924729p-509, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1e984c83a4fd6p-790, 0.0, 0.0, 0x1.a558bbdb673e2p-398, 0.0,
     0x1.e1e3cd4a597ffp-827, 0x1.861086d1cb374p-92, 0.0, 0x1.caea3cc8128p-27,
     0x1.d62391c77ca83p-831, 0.0, 0.0, 0x1.14882753cbb8p-645, 0x1.775bbceea4926p-816,
     0x1.22b119e6476b8p-770, 0x1.e701fce927e4p-252, 0.0, 0.0, 0.0,
     0x1.b86ea0a1cc0dap-146, 0.0, 0x1.470c72a622156p-604, 0x1.f658af51ac5e2p-417,
     0x1.318f0e7c433e7p-814, 0x1.d3636552fbc49p-743, 0x1.485a36796983bp-859, 0.0,
     0x1.ba1e55033313p-232, 0.0, 0x1.8b5c72e60ec74p-662, 0.0, 0x1.c6a0e026360f3p-490,
     0x1.fca8fc15d477p-533, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08c75ceee175p-354,
     0x1.cbad08b465fe2p-884, 0.0, 0x1.7b9204eae64a7p-407, 0x1.f6613e76ffdcbp-356, 0.0,
     0x1.f20f00ef5786p-393, 0x1.f022718710899p-510, 0x1.07297bbadf6ddp-34, 0.0,
     0x1.d8686870c70cfp-790, 0x1.c414dcfcfe645p-777, 0x1.93d5937e490b4p-14,
     0x1.43e7f65ef78aep-490, 0x1.c56c6a282927p-735, 0x1.5ebd08eb4a34bp-503, 0.0,
     0x1.c8c6fb6f2341p-103, 0.0, 0.0, 0x1.baf6d178c7932p-333, 0x1.29fa0fb37be5ap-883,
     0x1.9874b999829d7p-325, 0.0, 0.0, 0x1.4a17c08e19e8bp-219, 0.0, 0.0,
     0x1.1ddcc9fba52fap-852, 0.0, 0x1.7c618f5c6ee24p-395, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d181b58b5057fp-436, 0.0, 0x1.a7af64aa7cad4p-511, 0x1.cde1add10e641p-282,
     0.0, 0x1.df0e9b6d9c066p-887, 0x1.c24a167217fdbp-128, 0.0, 0.0, 0.0,
     0x1.441da160ef7bp-58, 0x1.24d4af15de006p-602, 0.0, 0x1.13e06db2f9d03p-226,
     0x1.3e1ea42c0f41dp-65, 0.0, 0x1.2de0aaa4cfc9p-915, 0x1.40789a556ca61p-646,
     0x1.f377d583245d8p-502, 0.0, 0.0, 0.0, 0x1.2514c50c91a0bp-225,
     0x1.d728972b43205p-230, 0.0, 0x1.a5246b17b1367p-281, 0x1.a9c2932d67559p-770, 0.0,
     0.0, 0x1.e169c799afc2dp-831, 0.0, 0x1.ccc3b17cf28d8p-6, 0.0,
     0x1.dbb4c2c5ed354p-872, 0x1.884fb99973944p-224, 0.0, 0.0, 0.0,
     0x1.4d32e4cda240fp-206, 0x1.186b95a8124bfp-612, 0.0, 0.0, 0x1.23c70ba04fb61p-134,
     0x1.1a7f69ddefbcfp-345, 0x1.1996695390117p-990, 0.0, 0.0, 0.0,
     0x1.365b2f4d28f0cp-582, 0.0, 0.0, 0x1.3beb83e95f018p-632, 0x1.c5a690a73eccdp-707,
     0x1.f4b3bef5417a9p-653, 0.0, 0x1.9dde92e9c26abp-768, 0x1.ec7ad970d83e7p-949,
     0x1.d10ebc2afc746p-784, 0.0, 0.0, 0x1.2f2f868e06b8ap-475, 0.0, 0.0,
     0x1.565ee227c2e39p-694, 0.0, 0.0, 0x1.00c3d04fbb7c3p-577, 0x1.2b03d332a1318p-675,
     0x1.0b765210c3402p-965, 0x1.d5487f7635a76p-219, 0x1.8b4d1ba8d9cf4p-313,
     0x1.e4a322c031461p-236, 0.0, 0x1.ce86acf08412bp-381, 0x1.376e7ed27ac3cp-596,
     0x1.b940d31fa0c81p-740, 0.0, 0x1.0b6e756be82d5p-839, 0x1.ea90793a99a6bp-951, 0.0,
     0x1.cc222422a41eep-129, 0.0, 0x1.dec653cac9dffp-445, 0x1.0aa3f1b4abc98p-369, 0.0,
     0.0, 0x1.81e81f27b296dp-751, 0x1.ef3b49167edfcp-517, 0x1.f7b1f10bc0b62p-585, 0.0,
     0.0, 0.0, 0x1.cdbd3c9002f2fp-794, 0.0, 0.0, 0x1.e49b052f345e1p-228,
     0x1.955da366183a9p-1003, 0x1.ca0007577611cp-257, 0x1.89c97965511bep-724, 0.0,
     0x1.29a75fdd3f724p-583, 0x1.2b682b494f745p-409, 0.0, 0.0, 0x1.de28705ba5e1cp-344,
     0x1.0911281cd7499p-941, 0x1.a1b4e727a0ef7p-153, 0x1.eb060f0583794p-198,
     0x1.c7da4971b1b4bp-455, 0.0, 0x1.241603abda6dfp-564, 0.0, 0x1.1f9fb0365a691p-425,
     0.0, 0x1.b10e3a5bad76bp-646, 0x1.95c337ffc04c1p-38, 0x1.220c0c67583b5p-55,
     0x1.d19e4816e0d57p-519, 0x1.6deca0f8c35d9p-306, 0x1.da1a9d544fa99p-582,
     0x1.524106bad5d01p-137, 0.0, 0x1.33973fb84b93cp-353, 0.0, 0x1.7308d8c3cde08p-833,
     0.0, 0x1.42d202069f1d1p-272, 0x1.f007aed586b28p-1019, 0x1.0a7daa188fdf7p-215,
     0x1.30ebd9c2e8f26p-842, 0x1.612aea750f5e5p-859, 0.0, 0x1.3dc4a03dabbf1p-926,
     0x1.1100bb09fc122p-768, 0x1.73edd818ff55p-659, 0.0, 0x1.821aaad006941p-62,
     0x1.db042e2003403p-666, 0.0, 0.0, 0.0, 0.0, 0x1.b9943b6fd81c4p-176, 0.0,
     0x1.ca4738fd36e4cp-504, 0.0, 0x1.fa7858c70262cp-511, 0.0, 0.0, 0.0, 0.0,
     0x1.d9bb8d61b78f8p-434, 0.0, 0.0, 0.0, 0x1.ec5f43e200923p-48, 0.0, 0.0,
     0x1.27501a79b6f43p-368, 0x1.8bcac5c8747efp-340, 0.0, 0.0, 0x1.1f68bbdd64d59p-818,
     0.0, 0x1.698b059f84858p-20, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58726176e2932p-443, 0.0,
     0.0, 0x1.93dd25645e67cp-393, 0x1.cc5348b565d6ep-772, 0x1.fd9e0ebcea454p-83,
     0x1.a9cb5b3f61a74p-1022, 0.0, 0x1.2e188a7dead19p-170, 0x1.30e5ef36855e1p-905,
     0.0, 0.0, 0.0, 0.0, 0x1.a3bcab6f8c865p-930, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.96731da55f222p-209, 0.0, 0x1.4b9fd72b49afp-396, 0x1.31365ca549652p-678, 0.0,
     0x1.810f38732dce1p-597, 0.0, 0x1.853c2437d2548p-345, 0x1.9078d3779b964p-165,
     0x1.06d69ecac1a3p-501, 0.0, 0x1.87485b67c795ep-26, 0.0, 0.0,
     0x1.70bd330671ab9p-880, 0x1.6c5ced8ef1708p-184, 0x1.830b2f5af6a26p-257,
     0x1.959ce245dd253p-601, 0x1.219a779879865p-945, 0x1.62d0d91b9945bp-100,
     0x1.0f96b18b6f645p-204, 0x1.f17c37341156ep-451, 0x1.1b5972e1cdb86p-705,
     0x1.3b5bbb773b94dp-94, 0.0, 0.0, 0x1.bd2e16ebe7108p-472, 0x1.ff9e9002140bp-986,
     0x1.1fb20b58588e5p-63, 0x1.dddcc0665240dp-821, 0x1.accb9882c322fp-750,
     0x1.810ff9c795c8dp-989, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.815b89290ce17p-986,
     0x1.e8e2ec0a92f16p-569, 0.0, 0x1.a48799fde780ap-744, 0x1.66c695929e1c3p-966, 0.0,
     0x1.40a3edb46a59ep-731, 0.0, 0.0, 0.0, 0.0, 0x1.4589d2bd3ad88p-373, 0.0,
     0x1.e2ab872c2684bp-580, 0.0, 0x1.661f8a898756fp-674, 0.0, 0.0, 0.0,
     0x1.dbc4fbfbfcdabp-315, 0.0, 0.0, 0x1.3472673448037p-264, 0x1.16e69a3125f09p-567,
     0.0, 0x1.697164d6f0f5fp-792, 0x1.4e514bdf6a382p-43, 0x1.336432d67b26bp-810, 0.0,
     0.0, 0.0, 0x1.96c24d27ce32p-101, 0.0, 0x1.1545a93a1cb18p-746,
     0x1.216528cf45603p-947, 0x1.0516fd9877162p-562, 0.0, 0.0, 0x1.399b9e591b71ep-9,
     0x1.7d2dda58e36dfp-618, 0.0, 0x1.d2a65b4f0f048p-471, 0x1.fb843f1c62811p-242, 0.0,
     0.0, 0x1.b179d6a4ab255p-501, 0.0, 0.0, 0x1.f88c24e3e02f7p-817,
     0x1.9c87b3dddaf6p-916, 0.0, 0.0, 0.0, 0x1.ddee7773e7a88p-194,
     0x1.9edba04b179f2p-259, 0.0, 0.0, 0x1.698965e2bddd6p-801, 0x1.cc8c3323f1ccap-577,
     0.0, 0.0, 0.0, 0x1.e5df30992a881p-354, 0.0, 0.0, 0x1.2c06ec17e7b26p-700, 0.0,
     0.0, 0.0, 0x1.c4516fed768f7p-750, 0x1.308db348a5df3p-526, 0x1.bbd4655237c23p-759,
     0.0, 0.0, 0.0, 0.0, 0x1.fc8b3de5e13fep-945, 0.0, 0.0, 0x1.ff2e3c1a0613ep-453,
     0.0, 0.0, 0x1.14bbd9d0dbdccp-815, 0x1.46d18f1f0b296p-183, 0x1.de5b48e0ce6e6p-885,
     0.0, 0.0, 0x1.d07b91dfe2b5ap-994, 0x1.78daacd064c1bp-694, 0.0,
     0x1.640095859e24ep-789, 0x1.9ab33f2f1a5e1p-506, 0x1.1748911ae9cf3p-811,
     0x1.e76e2aadd3024p-769, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d201fd82bf191p-937, 0x1.2de3623fb2925p-56, 0.0, 0x1.13edf70d09bc9p-370,
     0x1.d0dbee9a97d62p-41, 0.0, 0x1.eeda80e231949p-116, 0x1.f18fa6ac3b065p-576, 0.0,
     0.0, 0.0, 0x1.8bbeb849702f8p-587, 0.0, 0x1.59e25a283f6d8p-158, 0.0,
     0x1.05f5b2ba4871ap-150, 0.0, 0x1.ea678224a6f97p-627, 0.0, 0x1.951b0a67d612ep-531,
     0.0, 0.0, 0x1.a51fc17a3012cp-507, 0x1.017bcb8e2edc2p-197, 0x1.1972e5415174fp-986,
     0.0, 0.0, 0x1.1bb6a4779ba38p-624, 0.0, 0x1.02546f29c8879p-180,
     0x1.1e46e5d737777p-77, 0x1.1f442b86a1b15p-439, 0.0, 0.0, 0.0, 0.0,
     0x1.6c1d4d6a032f3p-451, 0.0, 0.0, 0x1.32428a3d637f2p-817, 0.0, 0.0, 0.0,
     0x1.7345a2aa3fa3bp-97, 0.0, 0.0, 0x1.42665988c3af3p-1022, 0x1.497a245119f4dp-522,
     0x1.1d79848724456p-318, 0x1.89346eb304ef6p-643, 0.0, 0x1.f924f89b490e1p-553, 0.0,
     0x1.9bb860fcc100bp-197, 0.0, 0.0, 0.0, 0x1.4ccd4b5c4beb7p-380,
     0x1.434fe6d6b08b7p-604, 0.0, 0x1.26cbe38a41418p-224, 0x1.8f04428032cd3p-52,
     0x1.3f5bc44c3e326p-619, 0.0, 0x1.827c9e9f7b50bp-141, 0.0, 0x1.8ebd3c501900bp-7,
     0x1.fa4b6cfb25dcap-736, 0.0, 0.0, 0x1.ab3e596464bdp-51, 0.0,
     0x1.35739fc010a1p-814, 0.0, 0.0, 0x1.6507abf33f47fp-497, 0x1.b6c60b56d05edp-1021,
     0x1.31f9d68f9d23dp-962, 0.0, 0x1.61b8f8ced8787p-954, 0x1.398c9f50ed575p-336, 0.0,
     0.0, 0x1.f430e33063f65p-994, 0x1.e7f7e8bc8f83dp-891, 0.0, 0x1.0fc6417a5f7f4p-445,
     0.0, 0x1.03b0503edd18dp-27, 0.0, 0x1.cf588efef1899p-582, 0x1.62d262f147398p-501,
     0.0, 0x1.1b78b739c054ap-198, 0.0, 0.0, 0.0, 0x1.f114ce0ea219dp-594,
     0x1.27013c030ba2cp-108, 0x1.da01fabd824b2p-656, 0.0, 0x1.b9157fb0a1b26p-152,
     0x1.a97b9bd887d19p-720, 0.0, 0x1.c2c36ce1372e8p-602, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.5f688912a15f9p-627, 0.0, 0.0, 0x1.9def4e2ed041cp-694, 0.0, 0.0,
     0x1.6134bcb061c05p-212, 0x1.7f7cbf5264446p-242, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e499cdee53305p-34, 0x1.cdd7deb79dbb3p-869, 0x1.8895fd407a46ep-1004, 0.0,
     0x1.764741d34c47ap-690, 0x1.fb54b87e6c908p-469, 0x1.b05cf560c85dcp-992,
     0x1.3a64737876a42p-130, 0x1.e852fb9b7c309p-567, 0.0, 0.0, 0.0, 0.0,
     0x1.03d4234242458p-18, 0.0, 0x1.3136cde31242fp-91, 0.0, 0x1.778d92b3fe555p-825,
     0x1.16b7e41676a17p-664, 0.0, 0x1.cf5ac96b08b7bp-239, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.857fbde45c818p-519, 0x1.66b342635b091p-878, 0x1.39affde017276p-234,
     0x1.4b02208d51555p-648, 0.0, 0.0, 0x1.3f54478c2b9f4p-5, 0.0, 0.0,
     0x1.98887d755af7fp-946, 0x1.a3843adfbe8bap-237, 0x1.a144eeac08a6dp-930,
     0x1.b77c7587d1073p-646, 0x1.820d91d8a8a7cp-202, 0.0, 0x1.01497b4217e69p-631, 0.0,
     0x1.5a2e266a5c116p-259, 0.0, 0.0, 0x1.99d1fb3341d57p-606, 0x1.84c60e569f0cdp-533,
     0.0, 0.0, 0x1.7df58279b64f7p-212, 0.0, 0.0, 0.0, 0x1.456f095cb6794p-564, 0.0,
     0x1.fc9db72b34db9p-280, 0x1.05f6bac130023p-163, 0x1.bc3fb69a432cp-546,
     0x1.c0b2daaa37a4fp-245, 0x1.450aa73c00204p-329, 0.0, 0.0, 0.0, 0.0,
     0x1.21fab248c00e5p-473, 0x1.bb57dafa509fep-278, 0.0, 0.0, 0.0,
     0x1.4079306dbf729p-231, 0x1.fa3ba4ad83871p-570, 0x1.d73b12e991079p-583,
     0x1.c22a6428cea89p-473, 0.0, 0x1.186c252c02a78p-627, 0.0, 0.0,
     0x1.ad1530a50741bp-333, 0.0, 0x1.24ecaec5a8736p-413, 0x1.0d39be7c9c5f9p-693,
     0x1.25bbf4a8f1cf6p-816, 0x1.a692156adc7d6p-840, 0.0, 0x1.723f4e2686977p-392, 0.0,
     0.0, 0x1.361392e85d555p-533, 0x1.9c5ec468e8197p-110, 0.0, 0x1.f0dd31e77f783p-102,
     0.0, 0x1.85af287136f53p-832, 0.0, 0x1.c73af07d324ffp-505, 0x1.a99a4506d2eafp-990,
     0x1.5d46559130019p-631, 0x1.a65adb5ebcf5dp-305, 0.0, 0.0, 0x1.31cd1495ce9a7p-713,
     0x1.6ea6a4cead0ccp-461, 0x1.0121ad016c8fdp-711, 0x1.5650367c7e625p-823, 0.0,
     0x1.235e1e357d60fp-68, 0.0, 0x1.8b804d6a71acep-218, 0.0, 0x1.c574a10bed994p-766,
     0x1.046451f9922e3p-79, 0x1.56db153370dcap-149, 0x1.57d1bdcb04549p-384, 0.0, 0.0,
     0.0, 0.0, 0x1.9b47ac578118cp-594, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b4998cfb062bcp-671, 0.0, 0x1.c7c427dd2d24p-936, 0x1.0b17872aa63bp-305,
     0x1.a419b9a624a75p-507, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.242fbe7b15e8fp-723, 0x1.0021bb8e9aee2p-1002, 0x1.30d9191a12547p-522, 0.0,
     0.0, 0.0, 0x1.6697c2e96819p-608, 0x1.b460e82dd4629p-515, 0x1.3cad758ddfd93p-464,
     0.0, 0x1.67d7cdc902084p-1005, 0x1.94d070b3e2a19p-610, 0x1.909356c7e2cap-200,
     0x1.b485c3963c2a1p-498, 0.0, 0.0, 0.0, 0.0, 0x1.4d5c22bf449cap-609,
     0x1.fb640b6e4087ep-201, 0x1.6c07d30a19bfdp-114, 0.0, 0x1.c4bda03f304cdp-773,
     0x1.9e8c84560c6dbp-587, 0.0, 0.0, 0x1.eadc9583410cp-975, 0x1.95d92c813f2f8p-134,
     0x1.c39968d67534fp-762, 0x1.571ef3e5615c3p-237, 0x1.98153ffb8c03bp-896,
     0x1.280a47048e49fp-1015, 0x1.bff062f4fb6c3p-169, 0x1.82b9a3ec2484ap-1004, 0.0,
     0.0, 0x1.207ccc694743fp-740, 0.0, 0x1.ec7119e1be0a1p-63, 0.0, 0.0,
     0x1.159e277c54c87p-927, 0.0, 0.0, 0.0, 0x1.aafaac91f093ap-203,
     0x1.23a0c99801488p-543, 0.0, 0x1.313cfd04680fap-247, 0.0, 0.0,
     0x1.96d1f685c44e1p-797, 0x1.3fa0dc1f35ebep-107, 0.0, 0.0, 0.0,
     0x1.f3bbe11fdf5aep-539, 0.0, 0.0, 0x1.63d374339eb61p-377, 0.0, 0.0, 0.0,
     0x1.e4defcf954997p-818, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fa05c8f67952dp-278, 0.0, 0.0, 0x1.34fe443fc896dp-827, 0.0,
     0x1.8cfa243e66fe1p-962, 0x1.3b565b5994f8bp-767, 0x1.1e45059a76ac4p-899, 0.0, 0.0,
     0x1.1a59dab10e505p-497, 0x1.51793adef389fp-193, 0.0, 0x1.689bfa3c6520bp-654,
     0x1.27cfcc7d72a83p-322, 0.0
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
            tmp1 = Sleef_finz_floord4_kvx(tmp0);
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
    printf("Sleef_finz_floord4_kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_floord4_kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
