/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_logd2_u35kvx.c --function Sleef_finz_logd2_u35kvx \
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
     0.0, 0x1.6a2ba6c5031f8p-96, 0x1.9adda93b2b37cp-258, 0.0, 0.0,
     0x1.dad4e84000bc5p-303, 0x1.ef758a223dbf5p-840, 0.0, 0.0, 0.0, 0.0,
     0x1.173d51c253bebp-241, 0.0, 0x1.14d984ba9fea6p-875, 0.0, 0x1.5b8abc6801a41p-424,
     0.0, 0.0, 0x1.612eea9db9402p-320, 0x1.bdca1e2a7d63cp-595, 0.0,
     0x1.7fec2277edea4p-388, 0.0, 0.0, 0.0, 0.0, 0x1.6099a23313c2ap-379,
     0x1.b217834325786p-812, 0.0, 0x1.729c7fa42f998p-283, 0x1.089bc744079afp-650, 0.0,
     0x1.254fa0a11e18dp-329, 0x1.e9b307a7e855bp-384, 0x1.d507f268bbe43p-538, 0.0, 0.0,
     0x1.5cb6259990dccp-346, 0x1.10ff9382a8132p-121, 0x1.503a8c7b9858ep-463, 0.0,
     0x1.794473766e554p-387, 0x1.ce054585692bp-210, 0.0, 0x1.eb0af98522a35p-636, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.def4b31a1b996p-649, 0x1.d3a1f795340fap-216,
     0x1.b564196948edbp-765, 0.0, 0x1.8dbfa767c7a31p-185, 0x1.bfa79fd1aeef5p-55, 0.0,
     0.0, 0.0, 0x1.be5a606f32ff8p-65, 0.0, 0.0, 0x1.51c8c701deefep-408, 0.0,
     0x1.7a734d2c19102p-251, 0.0, 0x1.b3696ae5d7168p-275, 0x1.2872f5c1f6474p-204,
     0x1.8d6785657f862p-459, 0.0, 0x1.40cdfc00d2213p-193, 0x1.d9ed4b361eeb4p-110,
     0x1.18dfadb768cbp-318, 0x1.08213712f2908p-639, 0x1.f3393933a8fb7p-273, 0.0,
     0x1.bc8254e591af9p-717, 0.0, 0.0, 0.0, 0.0, 0x1.9adf400118c38p-768,
     0x1.e07c11436442ep-516, 0.0, 0.0, 0x1.098a09f616a83p-868, 0.0, 0.0,
     0x1.bc794e3a97362p-687, 0x1.46acb070ea16bp-802, 0x1.52407aa839112p-340,
     0x1.58fe2dfb51178p-305, 0.0, 0x1.1def981ec66cdp-299, 0.0, 0x1.ed814a81e7ce7p-337,
     0x1.8355c22152f3dp-32, 0.0, 0x1.2a14168a4eccdp-939, 0.0, 0.0,
     0x1.990e2fb902f6cp-879, 0.0, 0.0, 0.0, 0x1.4373dfe4ab2d6p-935, 0.0, 0.0,
     0x1.9ec6165ba5639p-951, 0.0, 0.0, 0x1.8f2a654df27c1p-1006,
     0x1.8bbefbe6f989ep-111, 0.0, 0x1.c943cf1f9bcd9p-255, 0x1.165fb9ff4e4fp-602, 0.0,
     0.0, 0.0, 0x1.729a4b8de3f6fp-412, 0.0, 0x1.8d886f78c9f63p-511, 0.0,
     0x1.04515947ab50bp-673, 0.0, 0.0, 0x1.0d0f13701e03p-281, 0x1.d36391f3a3af9p-895,
     0x1.73324bf76e7adp-788, 0x1.5db3c704e5d55p-532, 0x1.d3a7ea13679a3p-824,
     0x1.fe08836d967f9p-716, 0.0, 0x1.a0c8f46a92be3p-249, 0x1.6ce5d86ff72afp-81,
     0x1.00518de6ef538p-393, 0.0, 0.0, 0.0, 0.0, 0x1.36332a4b1b9bfp-118,
     0x1.f468e92aa39e1p-358, 0x1.4fdd3a351eb1bp-671, 0x1.41bce3c53a5a7p-33, 0.0,
     0x1.809b8b7f36b85p-478, 0x1.8b7c5b2460607p-331, 0x1.c5c71f6034195p-21,
     0x1.0849ebebc0a4ep-913, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a6b7af6eb82ap-232,
     0x1.e4ce6f8122772p-954, 0.0, 0.0, 0.0, 0x1.58bf2e4afd47p-732,
     0x1.e847b90c47172p-59, 0x1.e70ccd119f8c9p-252, 0.0, 0.0, 0.0,
     0x1.38e64321f0dcfp-346, 0.0, 0x1.de9a3007a2dbep-610, 0.0, 0x1.1afbeaa529746p-401,
     0x1.1568b7d805f06p-481, 0x1.b2977fa3a0ccdp-66, 0x1.455781715652fp-781,
     0x1.132655c511833p-219, 0.0, 0.0, 0x1.83bc5db44b8aap-783, 0x1.1859c7090da19p-265,
     0x1.046bc4d695e97p-23, 0x1.3710ba0817519p-199, 0x1.5e0fb97cf76c5p-182, 0.0, 0.0,
     0.0, 0x1.a8a5541d9a57dp-235, 0x1.e677c457c5386p-765, 0x1.c333b4e7d5384p-506,
     0x1.e53b73cfc0e87p-581, 0.0, 0.0, 0x1.98977b7999847p-384, 0.0,
     0x1.c6d7de28a8435p-171, 0x1.01d1c6a73e34dp-1007, 0.0, 0x1.b2e5bc2c32b49p-265,
     0x1.6c1f63ca15dfbp-726, 0x1.573013f964e68p-367, 0.0, 0x1.40ff980ea12e2p-398,
     0x1.cc6dd3d05f832p-161, 0x1.07d6bd1873006p-383, 0x1.364cd3dac0cddp-116,
     0x1.8ebf8fe6709e8p-62, 0.0, 0.0, 0.0, 0x1.dd02854cd47bbp-678, 0.0, 0.0,
     0x1.f9fc7f3bde0b9p-76, 0.0, 0.0, 0.0, 0.0, 0x1.01b7cc77ee2d5p-933,
     0x1.7f717b67af627p-584, 0x1.cf5f95a0cdbe1p-894, 0.0, 0.0, 0x1.4e821ffe64071p-895,
     0x1.fc19c492249b3p-120, 0.0, 0.0, 0x1.4300720e85d7dp-272, 0x1.19a6f4b4b7d2ep-522,
     0x1.19596f7e3c1ebp-876, 0.0, 0x1.15e64ed6ebe7cp-302, 0.0, 0x1.86742852d1e17p-415,
     0x1.e67edf96855abp-984, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2dc264ba95c29p-224, 0.0,
     0x1.a9135f993e72ap-669, 0.0, 0x1.8b4eefbe21a6bp-10, 0.0, 0x1.cfe782abb4885p-931,
     0x1.9e44ad97b5c71p-928, 0x1.a8aeb88a93fc2p-494, 0.0, 0x1.dc10be0d2f5b2p-196, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.10e987b674336p-689, 0x1.2b49fc8286eefp-61, 0.0,
     0x1.9649e59cf089fp-213, 0x1.6c0bfb7387401p-425, 0x1.39d26a8f65d22p-382, 0.0,
     0x1.e163b994ba359p-890, 0x1.9fba08e1faee2p-44, 0x1.42071c94d8933p-489,
     0x1.9a4fa9390f90dp-176, 0.0, 0.0, 0.0, 0x1.b427df8557d92p-759, 0.0,
     0x1.d969bedc8dbafp-413, 0.0, 0x1.bbf85d8ec8015p-241, 0.0, 0x1.c18686d3f20c9p-852,
     0.0, 0x1.a5c9acb22730ap-155, 0x1.a14e2b971d37ap-590, 0x1.ed9d6960f85a3p-602, 0.0,
     0.0, 0.0, 0.0, 0x1.78f5555c76286p-261, 0.0, 0x1.91f3619809e16p-978, 0.0,
     0x1.7066cfdaca909p-96, 0x1.e9eb74adf1204p-465, 0.0, 0x1.47928dbdb1ddfp-859,
     0x1.02ea8dc8a643bp-712, 0.0, 0.0, 0.0, 0.0, 0x1.b2097de823e3p-229,
     0x1.311e868a1a59ep-955, 0.0, 0.0, 0.0, 0.0, 0x1.71596fb0c13f9p-646,
     0x1.15633e2ecc60fp-102, 0.0, 0.0, 0x1.9db8ac9323468p-885, 0x1.2144db5900eb2p-843,
     0x1.eb8dc7b4f3eep-540, 0x1.3c9e43a646d24p-850, 0x1.4caaf4a513f32p-105,
     0x1.609f7380ff86fp-972, 0x1.0260631db623ep-582, 0.0, 0x1.2d6fd1684de5p-852, 0.0,
     0x1.29444b6b9ca43p-203, 0x1.76079a939e82bp-630, 0.0, 0x1.4ca781824b9b4p-279, 0.0,
     0x1.cf809c497234bp-641, 0.0, 0.0, 0x1.18558365ecc82p-453, 0x1.a59d9da88b46ep-780,
     0.0, 0.0, 0.0, 0x1.dfd1c7f22623p-742, 0.0, 0x1.a8800aebf36a9p-410,
     0x1.54573f42e6a32p-741, 0x1.dae91149be8d5p-585, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49c434b3847ddp-234, 0x1.b1915dd72548fp-289, 0.0, 0x1.11830f58b78c4p-738, 0.0,
     0.0, 0x1.be22a5e53db0dp-130, 0.0, 0x1.054668ca94a2fp-108, 0.0,
     0x1.a9e9e8b81c3dp-957, 0x1.f3a6fae747d57p-945, 0.0, 0.0, 0x1.465332f63c312p-1017,
     0x1.8ecec232486c1p-472, 0.0, 0.0, 0x1.82f13768d24d5p-661, 0.0,
     0x1.27be173cf0d61p-237, 0.0, 0x1.50f8ebabd4217p-747, 0.0, 0.0,
     0x1.79c32887cc5f1p-859, 0.0, 0x1.09f2afcc13e2fp-890, 0x1.a4b0c3a42d27dp-256,
     0x1.59c254df75415p-128, 0.0, 0.0, 0x1.c87239c3325f4p-235, 0.0,
     0x1.d150a0ef3f4d8p-786, 0.0, 0.0, 0.0, 0x1.ee89634ea2141p-600, 0.0, 0.0,
     0x1.3a7f05888c5f5p-560, 0.0, 0.0, 0x1.25b842947f649p-986, 0x1.43d229980bf88p-500,
     0.0, 0.0, 0x1.c6132f084d27ap-793, 0.0, 0x1.896cabe543b5dp-888, 0.0,
     0x1.9d5f490c07716p-526, 0x1.b8163be10e41dp-415, 0.0, 0x1.e1b0f729e79fdp-1020,
     0x1.0d99a3441e9e3p-956, 0x1.b3895b606d7cp-141, 0.0, 0x1.338dd416047b6p-523, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c78c2dbd381f5p-260, 0.0,
     0x1.40c90624fbc44p-1009, 0x1.1e0de6e34a598p-656, 0x1.3996e5fb8af57p-66, 0.0,
     0x1.3371b96f65647p-567, 0x1.3f72bf75a9b57p-831, 0x1.c4271c22ce364p-805,
     0x1.e95d5c3dec1d7p-690, 0x1.37fe7619c101p-369, 0x1.6fd027f7caf1bp-499,
     0x1.33cc2836c2387p-628, 0x1.1d9808519d78cp-309, 0x1.99b80a461a573p-112, 0.0, 0.0,
     0x1.8619935dfaa7dp-417, 0x1.9f2dbceeffc86p-247, 0x1.89c65db31421bp-760, 0.0, 0.0,
     0.0, 0x1.ab7943ffef80bp-690, 0.0, 0x1.55b8183d71804p-909, 0x1.d6aeb93cdb748p-187,
     0x1.cba2348c80e14p-352, 0.0, 0x1.cd2cbfa158d1cp-311, 0x1.28cdeb0685f16p-197, 0.0,
     0x1.9f57e694742f8p-366, 0x1.23e21e04d5451p-594, 0x1.e549ba8741cb6p-44, 0.0, 0.0,
     0.0, 0x1.6a6bf8b4e677ep-813, 0.0, 0.0, 0x1.a67e2acbdc4afp-384,
     0x1.fa84943162d8cp-596, 0x1.0dedecff3d0e3p-64, 0x1.b22dc6f0e3b1cp-5, 0.0, 0.0,
     0x1.2b676aac978cfp-700, 0.0, 0.0, 0.0, 0x1.0f1a34e01af7cp-287,
     0x1.6b4cb43a7230bp-734, 0x1.dd071c4c77cbbp-774, 0x1.b6e330af418f7p-773,
     0x1.e42c2e5fffaa1p-485, 0x1.175fa02aae5p-715, 0.0, 0.0, 0x1.8a8aa0a8716cep-93,
     0x1.39213976e2486p-737, 0x1.ba2d853114315p-379, 0x1.fa4aed2ed87b2p-318,
     0x1.ce660504d7efcp-404, 0.0, 0x1.cf4d949e182ccp-668, 0x1.25f6516ebed1cp-44,
     0x1.8c5c29771e00dp-238, 0x1.59ca4345b4abfp-646, 0.0, 0.0, 0x1.b1b8464eb88c3p-160,
     0.0, 0.0, 0x1.d20ca6fbfe7fbp-425, 0.0, 0x1.df935f5fd265ap-793,
     0x1.479b63cd832e7p-687, 0x1.987a391ee0a0bp-798, 0.0, 0x1.a63a1a5dda536p-276, 0.0,
     0x1.ee65a15d88b2ep-533, 0x1.b3856373bb8dap-3, 0x1.c1c1c960b5072p-768,
     0x1.0083d7f76be08p-309, 0x1.306012cc45491p-343, 0.0, 0x1.4d659e0fa979ep-923, 0.0,
     0.0, 0x1.41ea75ecf1b45p-794, 0x1.92f8387e9fa43p-635, 0.0, 0.0,
     0x1.58be8147f5228p-264, 0.0, 0.0, 0x1.27e00c7eecc2dp-1002, 0x1.677511bc2fa45p-6,
     0x1.ea81fddbc80ccp-327, 0.0, 0.0, 0x1.fefe70c2c6c3ep-123, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9e3cf1ed127f1p-251, 0.0, 0x1.99f5ca74dc8acp-227, 0.0, 0.0,
     0x1.878ea068d33dcp-380, 0x1.c3a45d3058a0bp-689, 0.0, 0.0, 0.0,
     0x1.733f9a2e2381fp-250, 0x1.a2b12dbfb1f5cp-211, 0.0, 0.0, 0x1.5eb1f9db98e7p-329,
     0.0, 0.0, 0x1.f4818375b17f8p-500, 0.0, 0.0, 0x1.3cafe9d2de4c2p-621,
     0x1.bdc7517339219p-787, 0.0, 0x1.65e0b978314adp-40, 0x1.0e03aeeda24bbp-583, 0.0,
     0x1.033dd00d059a2p-305, 0.0, 0x1.c9f8a73314103p-373, 0.0, 0x1.a0108c86ceb13p-119,
     0x1.1ab92760f655p-332, 0.0, 0x1.e4d5e4ddff39p-561, 0.0, 0.0,
     0x1.f7b9a23c3839ap-358, 0x1.9e1868abe57a3p-882, 0.0, 0x1.cae24d481d8f9p-638, 0.0,
     0.0, 0x1.2bf329b27ba17p-596, 0x1.5c8e0e7a27adap-1, 0.0, 0x1.ac4153632dfdap-838,
     0.0, 0.0, 0x1.96f4165719bdfp-2, 0.0, 0x1.979cb28993955p-554,
     0x1.09394b43515abp-253, 0x1.450b6c2fab044p-98, 0.0, 0x1.a0fc3130af963p-676, 0.0,
     0x1.3808dad6368fcp-517, 0x1.166462bd7a72cp-436, 0.0, 0.0, 0x1.320ab722c8b3bp-635,
     0.0, 0.0, 0x1.eb975ebfb7864p-364, 0x1.d44894ec48c8bp-393, 0x1.9c18de8e33828p-877,
     0.0, 0x1.c540c5c1fc3abp-596, 0.0, 0x1.6c87342a247acp-1003,
     0x1.d131edaea49cdp-441, 0x1.18c7f2afe3fb9p-130, 0x1.8c6f572613a52p-973,
     0x1.0607895f6e446p-933, 0.0, 0x1.26c4e3a428237p-300, 0x1.901346c04b28cp-573,
     0x1.f1f22e93302fap-404, 0x1.b9d735b40dd91p-112, 0.0, 0x1.42b56c4b87e7ep-706, 0.0,
     0x1.2e0fc5327e856p-270, 0.0, 0.0, 0x1.9eb62c90819c2p-168, 0x1.e444b5844fcfcp-498,
     0x1.8ad6166dc5f8fp-854, 0.0, 0x1.e7d4a46968c41p-822, 0x1.3bf145212bb0bp-779, 0.0,
     0x1.47247919a758dp-211, 0x1.d71ede77dc5a4p-726, 0x1.d2e74695107f9p-652,
     0x1.e3c019bd998fep-761, 0.0, 0x1.dfe1e82ed7311p-127, 0x1.1c0caadf7e0a2p-70,
     0x1.b31b0553b9b1dp-129, 0x1.90942a5c998d6p-945, 0x1.f0734c4c00b77p-729, 0.0,
     0x1.dacd84b907232p-538, 0x1.bc3cc2405fa1dp-157, 0.0, 0.0, 0.0, 0.0,
     0x1.a120aa85de644p-793, 0x1.387a0d9101079p-795, 0.0, 0x1.63b60a12697dap-44, 0.0,
     0x1.fa428133db283p-662, 0.0, 0.0, 0.0, 0x1.cdb9d506cc73ep-400, 0.0, 0.0,
     0x1.2e1d5416db6abp-514, 0.0, 0.0, 0.0, 0x1.872f56b52472cp-17,
     0x1.97605df6f3de3p-448, 0x1.13d7947c0cc3p-12, 0x1.76c721ae48cf2p-850, 0.0,
     0x1.41b55d79acb84p-373, 0x1.c576177ca87p-785, 0x1.963335eb2c73dp-667,
     0x1.5fb1a2d53978ap-36, 0x1.a3af2935af625p-353, 0.0, 0x1.462c582a0a9e8p-567,
     0x1.cb29b73aa1202p-513, 0.0, 0x1.d05a7af8753c4p-445, 0.0, 0.0,
     0x1.d9297869138bbp-245, 0x1.944411b4ccf3bp-298, 0.0, 0.0, 0x1.43d61d8b025d6p-626,
     0x1.94461233b783bp-169, 0.0, 0x1.0cb189c007783p-670, 0.0, 0.0,
     0x1.cb2d917bce031p-367, 0.0, 0.0, 0x1.b141ee9e6e6e2p-310, 0.0,
     0x1.3e859d4c63d37p-366, 0.0, 0.0, 0.0, 0x1.3bd1483ae6036p-264, 0.0, 0.0,
     0x1.32a9214eaaaedp-424, 0x1.9b9df63871328p-556, 0x1.26c93830c5804p-490, 0.0,
     0x1.4835e58799c23p-321, 0x1.677735dfb1689p-626, 0.0, 0x1.13f40f1f52023p-135,
     0x1.42417ad00d46fp-385, 0x1.97243f4bee63fp-416, 0x1.2532f60b25ab6p-942,
     0x1.8737055b47914p-129, 0x1.b1b14cf7a8699p-379, 0x1.8d86c9c4fe49fp-373,
     0x1.ee9277bbc396cp-934, 0.0, 0x1.b1a898f393bcap-937, 0x1.144c7b8b019c2p-25,
     0x1.5696b1235d059p-226, 0x1.d16c9a28ed437p-721, 0x1.2fc02076ec14fp-742,
     0x1.55b55a6f348f6p-159, 0.0, 0.0, 0.0, 0x1.f8bdddb7be3e9p-547, 0.0, 0.0, 0.0,
     0x1.c2a7ca638c93ap-536, 0x1.aa5ac47fc1cfbp-620, 0x1.948e6eaf23a7bp-829,
     0x1.d507cd2d1b835p-833, 0x1.105bb52409cafp-309, 0x1.3308d0ecf6d6ap-1001, 0.0,
     0x1.c83517ef9c528p-458, 0.0, 0x1.595f83f8731e7p-616, 0.0, 0x1.d400ddcb8e6ap-256,
     0x1.1132904a799dcp-581, 0.0, 0x1.9867bb0d3c142p-1003, 0x1.b049255198f39p-524,
     0.0, 0x1.d5477856dde98p-254, 0.0, 0.0, 0.0, 0.0, 0x1.2f2a64ab3d55ap-109, 0.0,
     0.0, 0x1.010d20cbf5eb3p-739, 0.0, 0.0, 0.0, 0x1.ca4af0ad4f91ap-378, 0.0, 0.0,
     0.0, 0x1.6aaa16e5c31e1p-747, 0x1.d761f64ad56fap-118, 0.0, 0x1.9e078d079231p-985,
     0x1.f7630a822723dp-509, 0.0, 0.0, 0.0, 0x1.cc49576ee1ba9p-854, 0.0,
     0x1.f483cf19b9b17p-772, 0x1.ab2c8fe597981p-725, 0x1.4247c35fabc47p-696, 0.0,
     0x1.9b1f7c2a5455ap-182, 0x1.42d3e457de1b3p-828, 0x1.a3107a6c5be82p-572,
     0x1.26a69c0a81d49p-249, 0.0, 0.0, 0.0, 0x1.00b08841cbf45p-132, 0.0,
     0x1.966aef6981802p-190, 0x1.d1919c799cd62p-151, 0x1.b31cd68beb783p-962,
     0x1.43754a91fc98ap-734, 0x1.a334fe0c57ed1p-807, 0.0, 0.0, 0.0, 0.0,
     0x1.7b79d8418b7ecp-339, 0.0, 0.0, 0x1.84ea86a9064p-349, 0x1.7b72c8970de71p-534,
     0x1.c9312fa411147p-240, 0.0, 0.0, 0x1.f4c5a23597bf3p-268, 0x1.8ed90c46a816ep-650,
     0x1.5e24202c6cdb6p-171, 0.0, 0x1.e96ad8f0da703p-503, 0.0, 0x1.d819e3b9d1912p-279,
     0x1.5837ce7a8ae71p-461, 0x1.fc0e986f1ff79p-237, 0.0, 0x1.d335a9bacbb6ep-28, 0.0,
     0.0, 0x1.bde2adab07e7dp-526, 0x1.7fce9d1a944c6p-931, 0.0, 0x1.4c59a9f633e98p-346,
     0.0, 0.0, 0.0, 0x1.f212e9f2e3522p-577, 0x1.f39324cf533c3p-958, 0.0,
     0x1.8a4863c27da4cp-66, 0.0, 0.0, 0x1.653c9d09774fcp-211, 0x1.d1c35577e8d5bp-284,
     0x1.b770167958bd7p-190, 0x1.b52ae235b6a71p-361, 0x1.b67c2c3d034cap-201,
     0x1.964c9f446a1f4p-722, 0x1.cf1a639b3c03ap-105, 0.0, 0.0, 0.0, 0.0,
     0x1.46d62a44a6761p-933, 0.0, 0.0, 0.0, 0x1.cdcc0a732488ep-984, 0.0,
     0x1.089e14ce5b074p-176, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d5e2165c60bfp-472, 0x1.6328cc0af39d8p-1006, 0.0, 0x1.f3426498a2638p-170,
     0x1.0c2257ca4db8dp-19, 0.0, 0.0, 0x1.c48a27eb6cf7ap-890, 0.0,
     0x1.eda9419918e47p-727, 0.0, 0.0, 0x1.716767d7b865cp-593, 0.0,
     0x1.54508926441eep-71, 0x1.dca4497226704p-836, 0x1.1261ea954c1a9p-885, 0.0, 0.0,
     0.0, 0x1.e6d2fc7a281b6p-27, 0x1.87eb8d2d65b8cp-276, 0.0, 0.0,
     0x1.542127b768b0bp-423, 0.0, 0x1.bd72c18823caep-493, 0x1.ac92d4d0796bdp-764, 0.0,
     0.0, 0.0, 0x1.dcfe6329ab0b3p-589, 0.0, 0x1.b70a163d92a29p-558, 0.0, 0.0,
     0x1.2807de1ea5678p-513, 0x1.73e67fd801286p-283, 0x1.7826e4cae8a3cp-880,
     0x1.eeeec4085ff77p-168, 0x1.bbaa26595a6a3p-775, 0.0, 0x1.c5423589ee2ddp-255,
     0x1.ab2bf9fe4b016p-548, 0.0, 0x1.e46d3c2137744p-482, 0.0, 0.0, 0.0, 0.0,
     0x1.626fbc0a8abdcp-664, 0.0, 0.0, 0x1.bf1110eab65f5p-160, 0x1.429305c743bep-727,
     0.0, 0x1.bf3525fdf0e3cp-150, 0.0, 0x1.1d7054f0c34fap-790, 0.0,
     0x1.a86cd61c7c002p-564, 0.0, 0.0, 0.0, 0x1.f7ef1857b003fp-489,
     0x1.e09fd6cdf9afdp-287, 0.0, 0.0, 0x1.29597f9a7b971p-100, 0x1.c52c34fcf317bp-146,
     0.0, 0x1.6bc4e2321d183p-931, 0.0, 0.0, 0.0, 0x1.99db5c4e7568p-36,
     0x1.ed41bf717e967p-259, 0.0, 0x1.11c9264772017p-576, 0.0, 0.0, 0.0, 0.0,
     0x1.fc352e503f8f1p-368, 0.0, 0.0, 0.0, 0x1.56877c4cd4d5dp-59,
     0x1.58172c66ce978p-293, 0x1.015a1a88309c7p-1013, 0.0, 0.0, 0.0,
     0x1.7a35813ee459ap-945, 0x1.0cf5600984532p-939, 0.0, 0.0, 0.0,
     0x1.957187ca06e49p-837, 0x1.42995fbfdf82ep-973, 0.0, 0x1.a59c5356aad9dp-458,
     0x1.ad094cf809badp-423, 0.0, 0x1.292a4cec4b9e1p-959, 0.0, 0.0, 0.0,
     0x1.b204fa879709cp-558, 0.0, 0.0, 0x1.3f860fdc6223cp-992, 0.0,
     0x1.8696712fcb647p-886, 0.0, 0.0, 0x1.bf07e538f9544p-228, 0x1.674058f0877dcp-795,
     0.0, 0x1.c3dfc8cdf2598p-491, 0.0, 0.0, 0x1.c6fc90898475bp-138, 0.0, 0.0,
     0x1.dc65cf12cee92p-46, 0x1.1b8f52794dcd7p-534, 0.0, 0.0, 0.0, 0.0,
     0x1.adde44de10709p-480, 0.0, 0x1.290f72d16725p-57, 0x1.b87d266b51fd8p-223, 0.0,
     0.0, 0x1.ee1d623bf152cp-42, 0x1.5bbfdb435c593p-770, 0.0, 0.0, 0.0, 0.0,
     0x1.a6814f2c4cd1ep-162, 0.0, 0x1.280c16d7c9e52p-276, 0x1.d9b46d5980508p-194,
     0x1.863530bdf587fp-337, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.993dd0b7e2df9p-71,
     0x1.df77fc56fdf6fp-758, 0x1.a1c9e7e08308fp-408, 0x1.04f7198acc8c3p-16, 0.0, 0.0,
     0x1.897451e55de1dp-878, 0.0, 0x1.713758f1035ecp-574, 0x1.b5af8e08f057dp-702,
     0x1.b6eadc7658f44p-430, 0.0, 0.0
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
            tmp1 = Sleef_finz_logd2_u35kvx(tmp0);
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
    printf("Sleef_finz_logd2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_logd2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
