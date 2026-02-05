/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp2d4_u10kvx.c --function \
 *     Sleef_finz_exp2d4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.6df2fd839d9b3p-426, 0.0, 0.0, 0.0, 0x1.70966f309668ep-458, 0.0,
     0x1.b151d724d09f4p-483, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30dc721ff3ac2p-999, 0.0,
     0x1.12800564ebecp-573, 0x1.1a594b5b9c505p-251, 0.0, 0.0, 0x1.497c8f7233b94p-883,
     0.0, 0x1.dab0fcc5e796ep-953, 0.0, 0x1.7f11fb8794b77p-171, 0x1.ca1b0564dbc9dp-281,
     0x1.3a02fa45b26bap-375, 0.0, 0.0, 0x1.0fd5aad2c6db1p-353, 0x1.953b8098c17aep-634,
     0.0, 0x1.00ab59f6714f7p-695, 0x1.8f6324449ead6p-246, 0x1.bf7cebb11af13p-384,
     0x1.01529195ce3e3p-57, 0.0, 0x1.01c7960b71c28p-363, 0x1.ec46e5e75f917p-529,
     0x1.fa1ab6eaf13c6p-15, 0x1.4a7325d64457p-498, 0.0, 0.0, 0.0, 0.0,
     0x1.013cd5bc0b64cp-825, 0x1.efe5ae51f70d6p-43, 0.0, 0x1.817b58aff5ec8p-971, 0.0,
     0.0, 0x1.c376808fc8dc7p-985, 0x1.98737b41c71e4p-133, 0.0, 0.0,
     0x1.ce4bade5f45dep-127, 0.0, 0x1.046dc9b46e4edp-296, 0.0, 0x1.ce83cbe21560ap-334,
     0.0, 0x1.33e0c00ad3601p-845, 0x1.766801f77c2f1p-415, 0x1.fdc56f31644bbp-290,
     0x1.a5bd9cc15303fp-174, 0x1.cbe59f392a1c6p-42, 0.0, 0.0, 0x1.02dd3fb77b644p-538,
     0.0, 0x1.57700d76321b6p-510, 0x1.4d447d46ad708p-646, 0.0, 0.0, 0.0, 0.0,
     0x1.349a4ba49c1adp-589, 0.0, 0.0, 0x1.b4efefb7c27bap-376, 0x1.0579e0709e75dp-911,
     0x1.403bb99420ecap-21, 0.0, 0x1.28501e69b79c5p-304, 0x1.ed93110cba9c5p-518,
     0x1.33862e0d05ddap-581, 0x1.6b2909be39363p-62, 0x1.e08fac999ff73p-51, 0.0,
     0x1.524449325f4d3p-197, 0.0, 0.0, 0x1.86cb8cd709feep-288, 0x1.3019ac5916639p-417,
     0.0, 0.0, 0.0, 0x1.7b593d2b65e91p-880, 0.0, 0x1.afc74d3ec966ap-573,
     0x1.070fcc0b59477p-551, 0x1.199019782f994p-137, 0x1.6d635637ae4b1p-689, 0.0, 0.0,
     0.0, 0x1.b417ee7de17cep-890, 0x1.7579919f8bccbp-359, 0x1.adee7e5502298p-579, 0.0,
     0.0, 0x1.3b9ac7a9de337p-471, 0x1.6ff3c481ecd3bp-688, 0x1.bf1632619211cp-751, 0.0,
     0x1.49d0e5da34434p-458, 0.0, 0x1.8bb475a0ce2f3p-510, 0x1.6aa5b598bb0ebp-703,
     0x1.2f635834c1082p-433, 0x1.1f13e39165fep-409, 0x1.855fa3d84b13dp-897, 0.0, 0.0,
     0x1.f7d3b4708e9d1p-111, 0.0, 0x1.b635bba916597p-426, 0x1.c133a03dd4a5fp-888,
     0x1.a84ed47feff7p-997, 0.0, 0.0, 0.0, 0x1.50eda12fc8f51p-434, 0.0, 0.0,
     0x1.65c81f38e2d59p-183, 0.0, 0.0, 0x1.3b999ab429204p-243, 0.0,
     0x1.455f206ea926fp-379, 0.0, 0.0, 0.0, 0.0, 0x1.f6aabef059ef1p-712, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f712e64c6d72ap-922, 0.0, 0.0, 0.0, 0.0,
     0x1.2f19814b253e4p-328, 0x1.a558a3c912bdfp-47, 0x1.b47944636a87cp-923,
     0x1.ec97d17e8f924p-433, 0.0, 0x1.751a45a21f9dcp-567, 0.0, 0x1.2e06cb68ce12fp-396,
     0x1.645bf6def4c6cp-291, 0x1.eb81656cbcc42p-656, 0x1.d778b6c794925p-474, 0.0, 0.0,
     0x1.5f477ce5e0965p-902, 0.0, 0.0, 0x1.f9b86985eb4d3p-146, 0x1.693d6b83dfb42p-190,
     0.0, 0.0, 0.0, 0.0, 0x1.8d2c99503046bp-962, 0x1.c771a0dd75d94p-157,
     0x1.b54c3ba3cd25bp-492, 0x1.373761010d47cp-609, 0.0, 0.0, 0x1.b094a76d24dc2p-461,
     0.0, 0x1.7b9423988a211p-697, 0.0, 0.0, 0x1.2fe541071c496p-663,
     0x1.ce726aeb67c6ap-439, 0.0, 0.0, 0x1.397c1866975fap-660, 0x1.05bf4b80d2e41p-554,
     0.0, 0x1.be4b081541a53p-220, 0x1.649d71e4dae58p-274, 0x1.9496f3ad151b8p-960,
     0x1.555626724b736p-225, 0.0, 0.0, 0x1.f0b9ed60d8c8p-4, 0.0,
     0x1.508f0485ae9aap-495, 0x1.0b388cb7c8031p-154, 0x1.ec37b055c89e9p-908,
     0x1.53874cbf1fd7bp-283, 0x1.5d4adb694f1ffp-524, 0x1.48dbb68e0baf4p-106,
     0x1.56a818ba80a75p-826, 0.0, 0x1.de9c323896816p-482, 0.0, 0.0,
     0x1.1ab87fb42720bp-403, 0x1.87bfcfcdd38ccp-795, 0x1.74efa177eb95p-55,
     0x1.ed769071e6efcp-668, 0.0, 0x1.c1a29a6039d54p-210, 0x1.6ace4d822c00cp-248,
     0x1.c8eecb0aa6bfap-967, 0.0, 0x1.a36aa9b7eb465p-851, 0.0, 0.0,
     0x1.0f6041e72b4bcp-27, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.022494803a4edp-198, 0x1.e7e33e2429814p-491, 0x1.3192547721ea7p-621, 0.0,
     0x1.b8b907e5fd71dp-315, 0x1.731c14ba92e7dp-526, 0x1.97a60ffbe32bbp-869,
     0x1.7e7e69f844778p-493, 0.0, 0.0, 0.0, 0x1.9a3c7e06d8241p-893,
     0x1.8b9c8a911e5d1p-535, 0x1.4e2cac1823372p-1018, 0.0, 0.0, 0.0,
     0x1.abfb6b5a2f857p-814, 0.0, 0.0, 0.0, 0x1.4463acfc91ff1p-60,
     0x1.a7a06f56f8391p-336, 0.0, 0x1.5a6edc14a99cdp-429, 0.0, 0.0,
     0x1.50a380004fc96p-967, 0x1.1d209474c49e4p-901, 0x1.1b6d38a5c4603p-786,
     0x1.c1b40efc549dep-84, 0x1.d003bbaad851fp-633, 0x1.9221e5bff3f5cp-863, 0.0,
     0x1.e6262498c0cb5p-656, 0x1.6222c6772e86bp-909, 0.0, 0x1.111e7ab56b718p-174,
     0x1.4fd12e8b3bb77p-172, 0x1.30227296494cep-315, 0x1.5720b4ca3ca3fp-150,
     0x1.9efec441e4ee3p-399, 0.0, 0x1.2968e85fc10a8p-529, 0.0,
     0x1.34bc69a8cbd5ep-1017, 0x1.df8034beb25d9p-259, 0x1.dfaeb945daeb8p-775, 0.0,
     0.0, 0.0, 0x1.36f885c0ba866p-927, 0x1.a2c82a58990e7p-272, 0x1.92d946581f593p-649,
     0x1.b1cfbf56e96e9p-104, 0x1.51b7824e773dbp-969, 0.0, 0.0, 0x1.6144b588ceaf1p-511,
     0x1.1fb479280262ap-97, 0x1.68e10b1ae9f85p-161, 0.0, 0x1.2fe9248e8c8b2p-632, 0.0,
     0.0, 0.0, 0x1.5e1f7dbe14ff1p-555, 0.0, 0.0, 0x1.837f7faf4939p-880,
     0x1.0a275680cdb0dp-565, 0.0, 0x1.57eeca04a008fp-247, 0.0, 0.0,
     0x1.d1707256fc845p-170, 0x1.baf7a12e3fef1p-457, 0x1.d8a5b45952757p-253, 0.0, 0.0,
     0.0, 0x1.f57599966b9b3p-665, 0x1.a176cde34054fp-733, 0.0, 0.0,
     0x1.84a73fc530594p-343, 0x1.2451caac6772fp-663, 0x1.357b309573c11p-169, 0.0, 0.0,
     0.0, 0.0, 0x1.73a35bd6d1b34p-224, 0.0, 0x1.d1918ac6d699cp-227,
     0x1.5fa8d732f559cp-366, 0x1.631795e739e19p-71, 0.0, 0.0, 0x1.0da250118485p-310,
     0.0, 0.0, 0x1.37b96655674b3p-576, 0x1.997771ad4e2d2p-683, 0.0, 0.0, 0.0,
     0x1.1df0125e548c6p-218, 0x1.8d98a40e6b703p-443, 0.0, 0.0, 0x1.ebc7bcbe088b7p-935,
     0x1.6ad9353ea67ebp-576, 0.0, 0.0, 0.0, 0x1.46335b83b9493p-513, 0.0, 0.0,
     0x1.c265ef7257126p-401, 0.0, 0.0, 0.0, 0x1.ad55820bac5ddp-150,
     0x1.5ebf059cac37bp-155, 0.0, 0x1.53da52c5dadd9p-677, 0x1.fe2450d9fc1b4p-799, 0.0,
     0.0, 0.0, 0x1.6d6dc918f2047p-639, 0.0, 0.0, 0x1.4e08a9958930bp-483, 0.0,
     0x1.066f60ff2bf83p-834, 0x1.993db3ab11d8fp-1007, 0x1.7c3fd44ba7535p-155,
     0x1.b28a709bc6f56p-271, 0.0, 0x1.a61320644452fp-803, 0.0, 0.0, 0.0,
     0x1.efaaae3e06029p-322, 0.0, 0.0, 0x1.9cf005377200ap-651,
     0x1.9800b94e609eap-1007, 0.0, 0.0, 0x1.e137ef09315ap-619, 0x1.1633e95dcd7a2p-34,
     0.0, 0x1.cc9a607b89fd8p-708, 0x1.9923007549f74p-300, 0.0, 0.0,
     0x1.50e62584b78ffp-715, 0.0, 0.0, 0.0, 0.0, 0x1.d8a9689f906a7p-936,
     0x1.10ede40ef7213p-357, 0x1.0001920cdfa4ap-726, 0x1.a952e2487ce85p-549,
     0x1.ec36911868102p-613, 0.0, 0.0, 0.0, 0.0, 0x1.c944ae1179a4dp-493,
     0x1.48b1ebf8aa023p-986, 0.0, 0.0, 0.0, 0.0, 0x1.89910672234d1p-316, 0.0, 0.0,
     0.0, 0.0, 0x1.a8e7ab021afc8p-831, 0.0, 0x1.644fe94326e38p-274,
     0x1.68eec459900f8p-515, 0.0, 0.0, 0x1.ebefba0605126p-598, 0x1.53c6b8ae696d4p-406,
     0x1.6d0ab8931d59p-528, 0x1.07bc1bd37f8cbp-324, 0x1.259595f4d1b3ep-344,
     0x1.cd264031e21cbp-170, 0x1.ff69739de5906p-550, 0.0, 0x1.55ab11afc38ep-868,
     0x1.162d89067a0c7p-514, 0x1.263cffeb942c3p-752, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08393f37f289bp-993, 0.0, 0.0, 0x1.d752e1136bc5cp-900, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9fa1f595f14c8p-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.128a4c8201ce3p-638, 0.0, 0.0, 0x1.ff965cd24bb5dp-141, 0.0,
     0x1.c8a007b64c44bp-308, 0.0, 0.0, 0x1.c009976dd1d61p-232, 0.0,
     0x1.9ab08aea67f3ap-408, 0x1.2b8eb42b8377ep-372, 0x1.2c51f55fc96fbp-280,
     0x1.0efd868118c5ep-737, 0x1.345d6dc7cc87ap-553, 0.0, 0x1.1a7c6d4aa3a78p-316,
     0x1.b8a3b00033a8p-593, 0.0, 0.0, 0.0, 0x1.7498673f5de3cp-898, 0.0,
     0x1.c0fe066d5e167p-128, 0.0, 0x1.1ab14b4fe91ccp-151, 0.0, 0.0, 0.0,
     0x1.0dfe8b9c5f8d2p-980, 0x1.0c63f6332f599p-60, 0.0, 0x1.20174cddc848p-579, 0.0,
     0.0, 0x1.db72200af5566p-136, 0x1.d3c1b53466ec1p-1002, 0x1.6ad805bf31c8ep-326,
     0x1.c9585ccf8a315p-1018, 0.0, 0x1.3548b659bf4aep-310, 0.0, 0.0, 0.0,
     0x1.61b9e61c89072p-884, 0.0, 0x1.20382c466abf9p-512, 0.0, 0x1.f9876a5acab65p-571,
     0.0, 0x1.cea8c01c271p-940, 0.0, 0x1.f0edba9cf3c6fp-701, 0.0, 0.0,
     0x1.c70d6bd06dc78p-497, 0.0, 0x1.a779b64bdcc3dp-681, 0x1.3d2f01637e3ap-836, 0.0,
     0.0, 0x1.6bc6f037544f6p-290, 0.0, 0.0, 0.0, 0x1.38c8bffb2f4f5p-96, 0.0,
     0x1.2ed8ebd6e3289p-707, 0.0, 0.0, 0.0, 0.0, 0x1.f11b8b23a596p-877,
     0x1.4fff308e3acefp-120, 0x1.2072487594c4fp-302, 0x1.04b92255d892fp-610, 0.0, 0.0,
     0x1.2c542ad692259p-899, 0x1.0b7478557b479p-733, 0.0, 0x1.b156176a5aebdp-315,
     0x1.0596df497d6fcp-592, 0x1.9f22de3eebb18p-8, 0x1.058f591a3cd61p-451, 0.0, 0.0,
     0.0, 0.0, 0x1.eec1b9de53ebcp-416, 0.0, 0.0, 0.0, 0x1.c83abbcc1ab03p-396, 0.0,
     0x1.564cd9ece45c9p-94, 0x1.896f4319a2e2bp-289, 0x1.a3c4ea651723fp-117, 0.0,
     0x1.d2afb61c8b20ep-630, 0x1.4eee5a8f22a2fp-49, 0.0, 0x1.54a0a2a9f7f17p-796,
     0x1.3e1698b662be5p-901, 0.0, 0x1.98ca6605a7f8cp-535, 0x1.51bf96ac450fbp-1,
     0x1.2c31141140449p-260, 0x1.10cbef73f7fb2p-163, 0.0, 0.0, 0.0,
     0x1.196c2adb125a2p-526, 0.0, 0x1.a9288c178e0bcp-659, 0x1.d41b65ffe8b18p-243,
     0x1.c6ba8cff54305p-713, 0x1.675a0f3890937p-266, 0x1.59c946e16bd7fp-965, 0.0,
     0x1.49dc0266f8a22p-85, 0.0, 0.0, 0.0, 0x1.77c90d7bdf7acp-930, 0.0,
     0x1.b0e7356c9f0ep-107, 0x1.997b8dd30d1b6p-493, 0.0, 0x1.58ee4717684a8p-991,
     0x1.742b2f7866ab7p-35, 0x1p0, 0.0, 0x1.a33a7530ee61p-642, 0x1.afae5d55a11dp-269,
     0.0, 0.0, 0x1.a6c10290a0cbap-45, 0.0, 0.0, 0.0, 0x1.f69c0c3acd7cfp-113,
     0x1.d1706cdd602dbp-911, 0x1.4d7ec1278ee03p-760, 0x1.5a2e1889c879fp-368,
     0x1.72d65183a4acfp-524, 0.0, 0.0, 0x1.676f1673c3767p-36, 0.0,
     0x1.da8f82d40d076p-771, 0x1.b1efd554345c6p-513, 0x1.31a93f9b8b67ap-460,
     0x1.d4cc6d7aca68cp-39, 0.0, 0.0, 0x1.87595f4e3d3d2p-602, 0x1.b0934e914a9b6p-466,
     0x1.6e6e7dbc864d5p-380, 0x1.7dae5ed9cb5d2p-71, 0x1.e71b6fddace32p-410,
     0x1.8c9b611b76dccp-780, 0.0, 0x1.57845c796d4c2p-1014, 0x1.615ddcda1adb9p-44,
     0x1.44537837e8a5p-600, 0x1.d17e54691119dp-982, 0.0, 0x1.b121dd9a7fce2p-341, 0.0,
     0x1.c733fbb18ea7p-487, 0x1.dffd1b877d15ep-24, 0.0, 0.0, 0x1.75d79fa4d94c5p-494,
     0x1.a98e5c305ed25p-444, 0x1.8b1ff84e99f3ap-663, 0x1.c143c99ab44bcp-178,
     0x1.a24fcb6667cc5p-53, 0.0, 0.0, 0x1.fa7fafc5946b2p-962, 0x1.8750938278ecfp-14,
     0.0, 0.0, 0x1.b58f125db667ap-125, 0.0, 0.0, 0x1.7fa2686990efcp-135, 0.0,
     0x1.4a93e17dbd82dp-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ac43241ce0b57p-370, 0.0, 0.0, 0.0, 0x1.f4a1c22d51ec3p-585,
     0x1.8f37aace07e6bp-274, 0.0, 0.0, 0.0, 0x1.a9dadb4a7e741p-440,
     0x1.2210f765c0eaep-726, 0.0, 0.0, 0x1.2650c3cadaffep-57, 0.0,
     0x1.dfa3faa2d1fdp-525, 0.0, 0x1.329b752b5fd75p-986, 0.0, 0x1.0dbd470f4fd06p-728,
     0x1.a176f14cd7c5ep-730, 0x1.e56b17386d14bp-546, 0.0, 0x1.e9aeff4021893p-616, 0.0,
     0.0, 0.0, 0x1.85a97010cf15cp-461, 0x1.c5dd0971cdd1bp-611, 0.0, 0.0,
     0x1.3689230ea46eep-431, 0x1.f54843d611371p-34, 0.0, 0.0, 0.0, 0.0,
     0x1.36d1b4f7085efp-308, 0x1.b4b100feac1b6p-96, 0.0, 0x1.b962d01e00c71p-872,
     0x1.7611d8a06f4fdp-324, 0.0, 0.0, 0x1.4609a17c9054ap-724, 0.0,
     0x1.d829b34f16471p-46, 0.0, 0.0, 0.0, 0x1.aed1e2343361bp-888, 0.0,
     0x1.dbe83e542ba28p-464, 0x1.f6c90b9c1f91fp-759, 0.0, 0.0, 0.0,
     0x1.03fa8e4b9be8ep-315, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e501e4eecb0bcp-128,
     0x1.4e8ebd9b2655dp-629, 0.0, 0x1.2a93d2a70b1a2p-687, 0x1.d4e0b2374dbdbp-840,
     0x1.8ef5e77f9f946p-107, 0.0, 0x1.95e1db8081f03p-518, 0.0, 0x1.aef3cda0cce32p-813,
     0x1.9373ebdcbac37p-245, 0x1.de373b1012a49p-548, 0.0, 0x1.ac50bbd90ce91p-466,
     0x1.57429ffc6ebfp-48, 0.0, 0x1.92f1a865e85ap-764, 0.0, 0x1.8a3ff92226f8dp-97,
     0x1.3bc039d62332bp-1015, 0.0, 0.0, 0x1.dc6dde493024cp-982,
     0x1.ebd4b6bb635e1p-176, 0.0, 0x1.fdf596194284ap-978, 0.0, 0x1.c94aa4c6c6288p-293,
     0x1.98ad1b7afe7eap-385, 0x1.d076725c9b92bp-1007, 0.0, 0x1.26d453edceb05p-731,
     0x1.2117b884162bcp-244, 0.0, 0x1.f5a672f1e07abp-668, 0x1.69176e1179e5ap-611,
     0x1.6955072e61125p-93, 0.0, 0x1.acbbb56dd52e2p-344, 0.0, 0.0,
     0x1.55804fd17fa4cp-656, 0x1.7dd2585f144b1p-699, 0.0, 0x1.8bf5a31456fd7p-197,
     0x1.a05710bfc425bp-797, 0x1.9f4c4c7feb349p-856, 0.0, 0x1.64726cf7bd104p-231, 0.0,
     0x1.3d6ff86a5c2fdp-138, 0.0, 0x1.5bd59821cd65fp-759, 0.0, 0.0,
     0x1.3898082913fb2p-474, 0x1.347416955d05ap-547, 0.0, 0x1.bda8758ce1f17p-985, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.736207aaf88d5p-956, 0x1.19e2d076f9e3p-245, 0.0,
     0x1.1dea77e444dabp-943, 0x1.83550819dca43p-720, 0x1.88942d8666b3dp-968,
     0x1.18af2c9d7be33p-955, 0x1.b04f8376fcd03p-430, 0.0, 0x1.f735953885c66p-63, 0.0,
     0.0, 0x1.f9ef77e54aac5p-906, 0.0, 0x1.cc435a92dd639p-310, 0x1.a0605032752dbp-596,
     0.0, 0x1.2938941b9a2ecp-1014, 0x1.975973726b98bp-860, 0.0,
     0x1.8725fd3b03522p-257, 0.0, 0.0, 0x1.8cfd1f18f33b5p-315, 0.0, 0.0,
     0x1.9fcf0c38c66bbp-361, 0x1.4bec2f27f8f73p-172, 0x1.765a697f509a2p-241, 0.0, 0.0,
     0x1.969d494b0d46dp-880, 0.0, 0x1.bf4c5a6e98831p-514, 0x1.985f5be6c30c4p-344,
     0x1.dc774bd2d05ccp-641, 0.0, 0x1.de52820484705p-359, 0x1.69e6f4ced7e7cp-435,
     0x1.454f0e85885bfp-243, 0x1.6cb4c9174c0cbp-408, 0.0, 0x1.c8482aff0c76p-449,
     0x1.bddefd87b51c9p-813, 0.0, 0.0, 0x1.df4b2779c4e7dp-528, 0x1.4ff14baf28ba3p-417,
     0x1.70845f81ab331p-116, 0x1.fdab865f90521p-829, 0x1.70ad07633d6cp-387,
     0x1.a070e208e3268p-387, 0.0, 0x1.545e80e0df529p-324, 0.0, 0x1.65ac6c94a97d3p-372,
     0x1.1f09b89ddee65p-740, 0x1.6934aedc01faep-911, 0x1.9be0a42c816f9p-98,
     0x1.e03a05b2e4e7bp-197, 0.0, 0.0, 0.0, 0x1.323bbc93e38eep-502,
     0x1.dca2892de2a28p-320, 0x1.d5ae8e7d8f36dp-516, 0.0, 0.0, 0.0,
     0x1.6433a2bd11459p-112, 0x1.dcbeb3ed38104p-978, 0x1.038bece3f4544p-996,
     0x1.92540707765ebp-974, 0x1.f940f82eb1d5bp-120, 0x1.9fdf52b321bb9p-113, 0.0, 0.0,
     0.0, 0x1.a3fe6dee9615ap-614, 0.0, 0.0, 0x1.f7669ccea10cdp-306, 0.0,
     0x1.3be20e63d30bfp-816, 0.0, 0x1.849bb45b55468p-802, 0.0, 0x1.b62d4b7a3da5dp-325,
     0.0, 0x1.8e6700d527753p-970, 0.0, 0.0, 0.0, 0.0, 0x1.736d473898b22p-464, 0.0,
     0.0, 0.0, 0x1.0cd3e74e43456p-467, 0.0, 0.0, 0.0, 0.0, 0x1.c612073a6f8bap-919,
     0x1.f8d9d429c99d6p-408, 0.0, 0x1.d39107d1442ecp-507, 0.0, 0x1.0c942a56ab20fp-640,
     0.0, 0x1.7d41b0a6d4969p-6, 0x1.c782883d9100ap-893, 0.0, 0x1.9edb7626da516p-208,
     0.0, 0.0, 0.0, 0x1.a67e6a87094acp-303, 0x1.1dd2b944c71cdp-630,
     0x1.9031fbbda4247p-549, 0.0, 0.0, 0.0, 0.0, 0x1.518a7b9dfb944p-255,
     0x1.bae0ad1f26319p-729, 0.0, 0x1.12e15c6d5c46bp-614, 0.0,
     0x1.2363b344b2375p-1009, 0x1.3cca4d1b2310fp-251, 0.0, 0.0, 0.0, 0.0,
     0x1.68cfed4dcebd3p-915, 0.0, 0x1.ab875c14530cbp-158, 0x1.f2bcca488367ep-897, 0.0,
     0.0, 0x1.e98f2fabb66f8p-719, 0x1.fccfc56639cf3p-725, 0.0, 0.0, 0.0, 0.0,
     0x1.5c870c4c08035p-485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.73218476cf0a5p-429,
     0x1.1456f9649dee3p-687, 0x1.d64893944bb53p-735, 0x1.249adde395e97p-849, 0.0,
     0x1.e10dd4952ee32p-359, 0.0, 0.0, 0x1.a4dfc51b63444p-593, 0.0, 0.0,
     0x1.a44ab1ed94ac6p-938, 0x1.fb683c7271874p-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.72c493014fd04p-253, 0.0, 0.0,
     0x1.5bbdea0825773p-161, 0x1.30386985e7f93p-714, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.088a08f852eccp-336, 0.0, 0x1.0ae4e12673412p-69, 0x1.1b3f279d57589p-121,
     0x1.79c8c3c93717p-324, 0.0, 0x1.69391150f97e2p-534, 0.0, 0x1.a5ac9965f3b3fp-749,
     0.0, 0x1.625b6a049adfap-699, 0.0, 0x1.0ca8bf05ddcafp-941, 0x1.f59082541f058p-600,
     0x1.e570a46e2e7c3p-586, 0x1.60fe2a1a7dcc4p-13, 0x1.1c544f150696p-805,
     0x1.00b229c707654p-712, 0x1.d0b9191a14bdfp-698, 0x1.c86b558e25cf5p-313,
     0x1.63844449d00e4p-759, 0.0, 0x1.f9f407abeadecp-962, 0x1.213a4701dd107p-110, 0.0,
     0x1.e278183f096bp-465, 0x1.7d9ecb0587ac4p-965, 0x1.9217d214bc8a1p-951,
     0x1.bde95f273e05fp-346, 0x1.5fd7e314841acp-305, 0x1.72b1d5fe0040ep-809
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
            tmp1 = Sleef_finz_exp2d4_u10kvx(tmp0);
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
    printf("Sleef_finz_exp2d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_exp2d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
