/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_sincosd2_u35avx2128.c --function Sleef_sincosd2_u35avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef___m128d_2 external_bench_wrapper_cst = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
static const Sleef___m128d_2 external_bench_wrapper_cst1 = {.x = {0.0, 0.0},.y = {0.0, 0.0}};
volatile Sleef___m128d_2 external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.2450b8a2b6f95p-285, 0x1.dd1a0507edb1dp-879, 0x1.55b27d055df34p-892, 0.0,
     0x1.50e626ccba759p-194, 0.0, 0.0, 0x1.6e14eb92f3f8cp-266, 0x1.ab6f192e260fcp-687,
     0x1.80dfa1fb449d6p-383, 0.0, 0x1.3b7eb6d2be868p-489, 0x1.24eb263c6fa3ep-947, 0.0,
     0x1.d1b4884752f2dp-747, 0.0, 0.0, 0x1.ec00a4e3f103ep-217, 0.0,
     0x1.d099bad15490ap-674, 0x1.02c09dfad86cep-42, 0x1.f8bed7416830fp-273,
     0x1.df9d52ab74669p-610, 0x1.81a0d9d97ae15p-421, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bbfd7d2382455p-474, 0.0, 0.0, 0x1.48059d96919eap-193, 0.0, 0.0,
     0x1.f27651303fa0fp-385, 0.0, 0.0, 0x1.991ce93c6600dp-48, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a9ee1c7992474p-333, 0.0, 0.0, 0x1.3befc8eff5c19p-289,
     0x1.19a80ed7d4ff9p-630, 0x1.4aba0f644665ep-60, 0.0, 0.0, 0x1.b11e592659e7dp-454,
     0x1.fa745f2719d4ap-61, 0x1.b4717db7c424bp-242, 0.0, 0x1.863d4707f7c49p-60, 0.0,
     0.0, 0.0, 0.0, 0x1.2c8e9cc1f23aep-764, 0.0, 0x1.6d0acdb613a3ep-375, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.54e1c00fcb0cdp-145, 0x1.f60c89b439448p-537,
     0x1.73e39502cf7e6p-563, 0.0, 0.0, 0x1.2d93458b70fbbp-304, 0x1.6939d7383eaf6p-964,
     0x1.d401ccbb91b15p-233, 0.0, 0x1.c723717918a6ap-774, 0x1.226846788602ep-872,
     0x1.07d24e1f37bb5p-443, 0x1.9990a5f794cd4p-438, 0.0, 0.0, 0.0,
     0x1.6f1c18d92643cp-708, 0.0, 0x1.6d4853ec42de8p-891, 0x1.3ac470754f1dap-901,
     0x1.c65e5519fd6ecp-313, 0x1.8b6144012c34cp-45, 0.0, 0.0, 0.0,
     0x1.e63b1813bcfd1p-143, 0.0, 0.0, 0.0, 0.0, 0x1.3f2ca4cf4af1ap-950, 0.0,
     0x1.a2c5a443023a8p-138, 0x1.1681353bd6a01p-556, 0x1.564b12668d6dp-221,
     0x1.5fa4526ff83d3p-569, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.176ee2798da33p-670, 0x1.c4d1c711add25p-873, 0x1.89f500156ff38p-434,
     0x1.9c6bbc2c181ddp-967, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.69af4e29c6391p-447, 0.0,
     0x1.7997cac974b74p-400, 0.0, 0.0, 0x1.bc68f84459631p-900, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9732926d8663cp-454, 0.0, 0x1.8baf375c391d6p-682, 0.0,
     0x1.11ee8747fecbcp-530, 0x1.1ed1c5ecd40e9p-217, 0.0, 0.0, 0x1.a31dd4e6c55e8p-399,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd6f13d7c130ap-217, 0x1.948a5d848b4bap-393,
     0.0, 0.0, 0x1.dd830f1efd21cp-403, 0x1.daf086c116533p-403, 0x1.2043c20b31fe8p-728,
     0.0, 0.0, 0.0, 0.0, 0x1.0e820b5d6f2eap-464, 0x1.ae2e8eb3af73bp-208,
     0x1.d8b4d9a67c845p-120, 0.0, 0.0, 0.0, 0x1.8ccf235115f98p-700, 0.0,
     0x1.ef06db9564926p-323, 0.0, 0x1.32e77b895f0b5p-393, 0.0, 0x1.0924e45aa5e54p-207,
     0.0, 0x1.4217cefdb0654p-983, 0.0, 0x1.cb7bd2a59fa08p-495, 0.0, 0.0, 0.0, 0.0,
     0x1.79034dbad4acdp-854, 0x1.cce3f719e124ap-57, 0.0, 0.0, 0.0,
     0x1.b04eec44cf427p-613, 0x1.ef79e9351c811p-859, 0.0, 0x1.ff61e3d7b493ep-618,
     0x1.37433eec6d7f1p-379, 0.0, 0x1.2bbccf09a700dp-54, 0x1.95e74e7c1f838p-332,
     0x1.470f2c63a1cbcp-906, 0.0, 0.0, 0x1.1c5a353dfc3eap-76, 0.0, 0.0, 0.0, 0.0,
     0x1.1948e833ca913p-194, 0x1.09b8db070ce8dp-872, 0x1.4e467c89a04b4p-358,
     0x1.39a78747e2f17p-204, 0x1.e52c5e1a8b3c7p-106, 0.0, 0.0, 0x1.14ab9884df54bp-152,
     0x1.f0e6b60b6dee3p-1009, 0x1.2983adee6e863p-592, 0.0, 0.0, 0.0, 0.0,
     0x1.fe5089a786ee3p-466, 0.0, 0.0, 0x1.d6183bb3811d4p-471, 0.0, 0.0,
     0x1.2347ba6218e49p-689, 0.0, 0.0, 0.0, 0x1.e70e7ab7b996p-420,
     0x1.b27c4c9383367p-269, 0x1.ccebe55931f8cp-309, 0.0, 0.0, 0x1.36954237c3904p-300,
     0x1.f6ec04f144e14p-699, 0.0, 0.0, 0x1.5ef0adefd0b08p-607, 0x1.e50c7d2f2d986p-466,
     0.0, 0.0, 0.0, 0x1.8f926bf9732c2p-264, 0.0, 0.0, 0x1.49c7085f858d1p-485,
     0x1.bf78a34a6694ap-728, 0.0, 0.0, 0x1.8cec05f2d617bp-640, 0.0, 0.0, 0.0,
     0x1.93632d709ea29p-573, 0.0, 0.0, 0x1.42e3673a462e7p-976, 0.0,
     0x1.52142ddd71f5cp-101, 0.0, 0x1.7b35e86ecc0b9p-433, 0.0, 0.0, 0.0,
     0x1.e224265f38e5p-1014, 0.0, 0x1.9e9091e1f7b1cp-447, 0x1.ba9a0045e4053p-410, 0.0,
     0.0, 0.0, 0x1.9da2dee100526p-595, 0x1.495681c9eabd1p-183, 0.0, 0.0,
     0x1.af50cb5c45e2cp-645, 0x1.d023c6d57e4cp-758, 0x1.ecec33c852d47p-836, 0.0,
     0x1.d1aec6a05d54cp-79, 0x1.a4e88e74df3e4p-208, 0.0, 0x1.83b5ed0d4e2d4p-589,
     0x1.8856498f523f3p-95, 0.0, 0x1.9ef5e0ad9c70ap-794, 0x1.d518f4bd641b8p-562,
     0x1.f4327891b9982p-273, 0.0, 0x1.b8d566fd9d5ep-341, 0x1.8d28ba9a198dep-170,
     0x1.65c847617688ap-81, 0.0, 0.0, 0.0, 0x1.f1b0d4d28cf6p-265,
     0x1.60e3ced946abep-223, 0x1.8286a05e8b891p-962, 0x1.80c7223b481d7p-1, 0.0,
     0x1.cbe1d22ca377dp-97, 0.0, 0x1.e11575e19e7c6p-874, 0.0, 0.0, 0.0, 0.0,
     0x1.6c92020518f99p-687, 0x1.226f67e818584p-659, 0.0, 0x1.b643121c6cddep-323,
     0x1.4a3cc1bc266aap-589, 0x1.e63f358c99be1p-861, 0.0, 0.0, 0.0,
     0x1.7d85dd27b0392p-119, 0x1.f7c7560d62ad9p-321, 0x1.2d1a11dfff712p-512,
     0x1.4232c0130e4a7p-375, 0x1.2173376ac224ap-179, 0x1.70f47ef10392cp-647,
     0x1.285640edcddedp-163, 0x1.09eca75ffe331p-130, 0.0, 0x1.d7f8453736ed8p-944,
     0x1.1588b1c982f39p-743, 0x1.0c7534a4e9212p-356, 0x1.90cd9829a10d2p-867,
     0x1.368a2852281d4p-100, 0x1.2336eea03d15fp-758, 0x1.c19c59eeca016p-824, 0.0,
     0x1.dfb46169892cbp-899, 0.0, 0x1.ed05d3e1c6c8p-617, 0.0, 0.0, 0.0,
     0x1.cf4e5e9955e5bp-206, 0.0, 0x1.cb0d26141ecc7p-580, 0.0, 0x1.98cdc47ae60b9p-864,
     0x1.5f27921ccb0f3p-1002, 0.0, 0x1.eaec894142c3fp-198, 0.0,
     0x1.a87031986b54fp-355, 0.0, 0.0, 0x1.920ae8eb4044fp-43, 0x1.01a09b7a33ef9p-368,
     0x1.ce8f025dd86f7p-861, 0x1.5f09b6823e14ap-299, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.26f357e480607p-475, 0x1.17b9db2abf06dp-388, 0x1.4c3b6bea239fep-176,
     0x1.0808c60d8a54ep-678, 0.0, 0.0, 0.0, 0x1.cc698dd35647bp-684, 0.0,
     0x1.a5944b1d08bf7p-44, 0.0, 0.0, 0.0, 0.0, 0x1.9a583d49fdf6bp-380,
     0x1.cf79e2109b70cp-991, 0.0, 0x1.ad76eb9baebe4p-774, 0.0, 0.0,
     0x1.6657f8d2204eap-559, 0.0, 0x1.1290d5ed9dbb8p-811, 0x1.95fdf6d96cab6p-315, 0.0,
     0x1.420bdf36a468cp-91, 0.0, 0.0, 0.0, 0x1.ca89e1bfe6287p-733,
     0x1.8a24d1aca02adp-418, 0.0, 0x1.bed6f3b28f5fcp-616, 0x1.a75a4146b8bb7p-27,
     0x1.978bb8e75f0b7p-583, 0x1.b4f6d7dffa1c4p-926, 0x1.8e7c7265bcd93p-461,
     0x1.eca94f7302274p-982, 0x1.04c833b5ed714p-422, 0.0, 0x1.4024b6d192b5p-887,
     0x1.ec91b07fbdf5bp-396, 0x1.51307a74375fp-37, 0.0, 0.0, 0.0, 0.0,
     0x1.8e0baf16d733ap-105, 0.0, 0.0, 0x1.7bed8566898b2p-627, 0x1.f514994b9fca1p-872,
     0.0, 0x1.ec0291e68f9afp-690, 0x1.c4eab8608f94cp-662, 0.0, 0x1.4804225d60c4ep-92,
     0.0, 0.0, 0x1.7fe7910c97c1p-393, 0x1.fb8bd02f57527p-339, 0.0,
     0x1.cb429c6e80cb1p-421, 0x1.d23412a8b31a3p-694, 0x1.fdc2e32563897p-243,
     0x1.1e8cba7403fdep-322, 0x1.dad3f1ca2a12dp-55, 0x1.da3500068a649p-413,
     0x1.b870ada7e2a36p-551, 0x1.d2a23b35aa401p-374, 0.0, 0x1.e0227d16b349ap-315, 0.0,
     0x1.e5e43aa7a5399p-590, 0x1.4d6096ddd9537p-853, 0x1.18b8e3d10604ap-526, 0.0, 0.0,
     0x1.07061a0b043a5p-988, 0.0, 0.0, 0x1.9de3edd54260fp-47, 0x1.324e68599b0eap-805,
     0.0, 0x1.17fc056c5865fp-730, 0x1.4f79400a6a9d4p-558, 0.0, 0x1.abfa7d8a56f47p-756,
     0.0, 0x1.c585ba515db9p-426, 0x1.e99c506b4e395p-754, 0x1.422633dadf7b6p-230,
     0x1.00cd844deb547p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8d91986126be9p-446, 0.0, 0.0, 0x1.376464d71f5f6p-445, 0x1.730f32bc1c27bp-544,
     0.0, 0x1.ebc0753aa9a6ap-661, 0.0, 0x1.3c057d7cd361p-176, 0.0, 0.0,
     0x1.3d155f0da06fdp-93, 0.0, 0x1.e1665a6c5182fp-869, 0.0, 0x1.b724617f44ec9p-597,
     0.0, 0.0, 0.0, 0x1.1d5f1513a0801p-13, 0.0, 0.0, 0x1.e640d475e4728p-403,
     0x1.a12e61454ac7cp-903, 0.0, 0.0, 0x1.ea505bbd09dbcp-34, 0.0, 0.0,
     0x1.dbdbc7e970841p-474, 0x1.e9811d6187b0fp-776, 0x1.fc8c68768bc4bp-741, 0.0, 0.0,
     0.0, 0.0, 0x1.95390c0f71aaep-862, 0.0, 0x1.e3660b14f913ap-177, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.75ccc58762dcap-118, 0x1.afaa182007ecdp-166,
     0x1.b9c3133281b5bp-747, 0x1.4f813cc3caep-550, 0.0, 0x1.f8fa89793e567p-1018, 0.0,
     0x1.749a2968b8658p-775, 0x1.cec614e8723fp-478, 0.0, 0.0, 0x1.7a0e599b920c1p-950,
     0x1.29e6093def378p-866, 0.0, 0x1.ed791ee2846dbp-488, 0x1.4846ee774ff28p-737,
     0x1.0ac3237e7b956p-44, 0x1.e535b72c046bfp-470, 0.0, 0.0, 0.0,
     0x1.ea5e17f10efe1p-295, 0.0, 0x1.3d762f1c4fb5bp-442, 0.0, 0x1.e2ed710078296p-787,
     0.0, 0.0, 0x1.7aaed49746446p-930, 0x1.340e57614129p-182, 0.0,
     0x1.cc9b065c3fb53p-769, 0x1.588464adff889p-171, 0x1.2297254bc5cc9p-895,
     0x1.73ece527dc35dp-520, 0x1.8293c6f27c70bp-281, 0.0, 0x1.54f1c7b5b82e1p-829, 0.0,
     0x1.ef62cabb6478fp-281, 0.0, 0x1.c45b6885d00dp-302, 0x1.9bc7547769e41p-321,
     0x1.f2e2600400c2cp-986, 0.0, 0.0, 0x1.d41173682f521p-292, 0.0,
     0x1.0cbb0f2a0d126p-533, 0.0, 0x1.ec3a4dd9b1ef4p-135, 0.0, 0.0,
     0x1.d7db38bc14612p-173, 0x1.1f2c065a2c326p-529, 0x1.89d31e6f142ffp-487,
     0x1.c5e1bd2221db3p-666, 0x1.458af150e69e9p-788, 0.0, 0.0, 0.0,
     0x1.752962e8bf373p-238, 0.0, 0.0, 0.0, 0.0, 0x1.c87ff1bd04a03p-625, 0.0,
     0x1.8b8e5a512f5e3p-453, 0.0, 0.0, 0x1.650d00f5bdb56p-74, 0x1.612e251099573p-449,
     0x1.99fca24e80e2bp-744, 0.0, 0.0, 0.0, 0x1.32b814e6ec14fp-525,
     0x1.c8d6ab579a3ep-708, 0.0, 0.0, 0x1.9829a3f028735p-742, 0x1.cc2e4915651ap-115,
     0.0, 0.0, 0x1.22ac409e06d8p-224, 0x1.39ae54378539bp-844, 0x1.e2ed083a3357ep-21,
     0x1.73c4c6541466cp-759, 0x1.3cc2b4e36ff19p-96, 0.0, 0.0, 0x1.68c67e4c16359p-1015,
     0x1.0f2f7f5dec597p-953, 0x1.568c26459656p-84, 0.0, 0.0, 0x1.8859d1d0ea7eap-218,
     0x1.c145ef5e93585p-167, 0.0, 0.0, 0.0, 0.0, 0x1.16d5ed19e5bb3p-1017, 0.0,
     0x1.a707e6f543cbbp-991, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae03a2d1941ap-610,
     0x1.e379d41ece422p-956, 0x1.0e2c7971639f7p-577, 0.0, 0x1.0554dc8c2f0b3p-224,
     0x1.4b8d6190bc86dp-945, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ae9b66ba1100dp-864,
     0x1.1d1e84c972792p-249, 0x1.4c9990c65411ep-94, 0.0, 0x1.c7eeb79497cbdp-165,
     0x1.ed518e425d6a1p-252, 0.0, 0.0, 0x1.c6bf033ba27cep-466, 0.0,
     0x1.f5fa466eb943fp-480, 0.0, 0x1.1646b48613ae2p-571, 0.0, 0x1.b71c56f142c2cp-568,
     0.0, 0.0, 0x1.72ee0a77b7a99p-21, 0x1.eae9996df2faep-58, 0x1.6a5664c7fe7c6p-139,
     0.0, 0x1.35d60246b3ef8p-895, 0.0, 0.0, 0x1.d8adeda3d4df6p-109, 0.0,
     0x1.86e1cf7cc28eep-682, 0.0, 0.0, 0x1.b421ae8b19f98p-637, 0.0,
     0x1.635614e1a467p-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6c67cdad9bed5p-430, 0.0, 0x1.2d1b3c099c73dp-787, 0.0, 0.0,
     0x1.90f3dd1ccb809p-124, 0.0, 0.0, 0x1.14936b254ce9fp-349, 0x1.ecdc1a4bff1e2p-1,
     0.0, 0.0, 0.0, 0x1.5738e9560968bp-86, 0x1.6843828212f37p-269,
     0x1.800cf7de8fc25p-1019, 0x1.12a775c08a54dp-170, 0.0, 0.0, 0.0, 0.0,
     0x1.50143afb912cfp-562, 0.0, 0x1.98af0c88b093p-980, 0x1.86828c4bf46fp-114, 0.0,
     0.0, 0x1.6c3568b63177fp-585, 0x1.29a4b949aff0dp-960, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.c708d68046d32p-395, 0.0, 0x1.e566eadf66093p-785, 0.0,
     0x1.e06366af611b2p-648, 0x1.f6623a4876342p-731, 0.0, 0.0, 0.0,
     0x1.f57fce132f31fp-780, 0x1.48a6301dffe53p-558, 0x1.5d3ce71e32ebbp-469, 0.0, 0.0,
     0.0, 0x1.30ae805484ae5p-693, 0x1.4423e38e85bd7p-843, 0x1.14b1ecbfedd73p-376,
     0x1.ee2c362ce8b6p-366, 0x1.34a0b70113ea9p-235, 0x1.5bd710bb15016p-455, 0.0, 0.0,
     0x1.a4f1a61be1ap-8, 0x1.128b5ff206d69p-82, 0.0, 0.0, 0x1.ef4bf042d536fp-584, 0.0,
     0x1.1131751b58cc9p-269, 0x1.35fcbeba0a072p-745, 0x1.da6b26a44ea6cp-635,
     0x1.e4d6f7ab80efcp-903, 0x1.690fcd28b573fp-83, 0.0, 0x1.8c0a6c165ca36p-862, 0.0,
     0x1.8a7d9e5123d84p-656, 0x1.d050e5fda60a4p-485, 0x1.2a80e6674fb73p-936, 0.0, 0.0,
     0x1.9374c1745888cp-657, 0x1.535aa1f582487p-55, 0x1.2c13586907f65p-497,
     0x1.5b6d984c70a18p-40, 0.0, 0.0, 0x1.832376c7347dfp-228, 0.0,
     0x1.f0941a1faebfep-668, 0x1.4577faaf35012p-709, 0x1.c350a6795233ep-981,
     0x1.144f676df47a6p-819, 0.0, 0.0, 0x1.6c436d025430ap-333, 0x1.865a709e669p-935,
     0x1.bbff0acd391ddp-964, 0x1.097f9a5f703ebp-236, 0x1.2fb368630f028p-829,
     0x1.a6abcfa437311p-881, 0.0, 0.0, 0x1.b96bc8c3d53f9p-968, 0x1.a7c8ffc2d6d0fp-208,
     0.0, 0.0, 0x1.968324a6ab7afp-478, 0x1.b3330c8646aafp-424, 0.0,
     0x1.ac99f248333aep-887, 0x1.25cb9722caa47p-597, 0.0, 0x1.881b30b6cc8bep-88, 0.0,
     0.0, 0.0, 0x1.6e9337168a711p-555, 0x1.24894309da8d9p-164, 0.0,
     0x1.ad62e683b377cp-534, 0x1.e378ee0045fe1p-366, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91525e269529ap-832, 0.0, 0x1.1d8d2f4f51bb9p-893,
     0x1.719ff9c9863bbp-73, 0x1.cd406f68b0753p-25, 0x1.4fc34a62a12f1p-790,
     0x1.bae158edc3c47p-1015, 0.0, 0x1.43304bec3e7fdp-845, 0.0, 0.0,
     0x1.2cf8b5f18fb71p-187, 0x1.0412ff03fbaf6p-635, 0x1.6f944197783ecp-730, 0.0, 0.0,
     0.0, 0x1.d8f5b720a684ap-373, 0.0, 0.0, 0x1.bccc232657dp-245, 0.0, 0.0,
     0x1.871821fd26b0ap-238, 0x1.84008c96071e9p-737, 0.0, 0.0, 0x1.e0e68f4b24eb3p-821,
     0x1.7f393bb876c7p-80, 0x1.faf8c26446cb6p-605, 0x1.ba3f2f751d41dp-138, 0.0,
     0x1.c2fd5a6650022p-771, 0x1.b16f3389ce50bp-74, 0x1.04904e7d23801p-42, 0.0,
     0x1.f5f5cd65a3865p-388, 0.0, 0x1.75c38c312be28p-112, 0x1.b36d882643c75p-821,
     0x1.4906cc4a16d97p-243, 0x1.8f071e5467ea2p-795, 0x1.0ca3e0e9c7be3p-797,
     0x1.af19fad0628f7p-577, 0x1.92635543e90c2p-456, 0x1.35d818215fef1p-827,
     0x1.ffb0a759b14fp-244, 0x1.0a2e87594a2c2p-635, 0x1.0ea9a09c2406bp-240, 0.0,
     0x1.1392d30a8dcd7p-108, 0.0, 0.0, 0x1.b6c4cd0dfcfe3p-276, 0.0,
     0x1.f5e3397102182p-81, 0.0, 0x1.bf5965273b05p-596, 0x1.639aee43c6805p-28,
     0x1.bc4eb08d0a2b8p-767, 0x1.c9c7490e72f66p-8, 0x1.b54b7ee96e335p-104, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b12cdfdce7eb7p-901, 0x1.6581bdaecca51p-875, 0.0, 0.0, 0.0,
     0x1.603ed8874068p-281, 0.0, 0.0, 0x1.61f157ba42ae2p-70, 0.0, 0.0, 0.0, 0.0,
     0x1.5e52d4ed5d5d9p-971, 0x1.4536d51e4eefdp-333, 0.0, 0x1.45f07ce700664p-193, 0.0,
     0x1.d32370f20ca89p-411, 0.0, 0x1.0ad206fe23ca9p-955, 0x1.d785ca3ea5216p-43,
     0x1.8d2f40e67939ap-768, 0x1.8535a222f59d5p-562, 0x1.b0f1d264bd602p-987,
     0x1.6684db796ff48p-804, 0x1.c2dbbb44f15c2p-267, 0.0, 0x1.fdd5d1000f02bp-228,
     0x1.f5ef4fd052c33p-919, 0x1.b2ef5845bb43ep-874, 0x1.5bdc6eb2d8bfbp-61, 0.0, 0.0,
     0x1.a0661ece43756p-535, 0.0, 0x1.172404113ee51p-367, 0.0, 0.0,
     0x1.c269bddb715e7p-508, 0x1.a8bf55541f92p-666, 0.0, 0.0, 0x1.77987815a59fp-291,
     0x1.b85692093879ep-315, 0.0, 0.0, 0.0, 0x1.9fb70d8d5e0a9p-330, 0.0, 0.0,
     0x1.85c7da3a44f89p-608, 0.0, 0x1.360719dc147eep-968, 0.0, 0.0,
     0x1.4a5fad45b9b76p-899, 0x1.efd24ef6a594cp-902, 0.0, 0x1.80530967f7922p-963,
     0x1.d1957c7b26fcp-742, 0.0, 0.0, 0x1.07139e2d26a5p-965, 0.0,
     0x1.53c2ee02b2dfbp-508, 0x1.c7e7aa2029ea1p-26, 0.0, 0.0, 0x1.05bbbc04ff553p-262,
     0x1.e254157901ebp-569, 0x1.9a6035a8a1653p-246, 0x1.e49e0815cbd54p-115,
     0x1.6f9cad83397a9p-915, 0.0, 0x1.09c8c56a1731cp-572, 0.0, 0x1.24c1230008361p-507,
     0x1.0cbc4343d79a8p-795, 0.0, 0x1.dd0522c5d31d2p-911, 0.0, 0.0,
     0x1.8606abaf1710dp-890, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00e3c8e5a8c1ap-945,
     0x1.3960c11ffa4bp-300, 0x1.7ed034b46d86ep-443, 0x1.12b9ce0100e35p-164, 0.0,
     0x1.4d0fffb948844p-444, 0.0, 0x1.5e1901a8018adp-505, 0.0, 0x1.74a0bc978c89p-70,
     0x1.6e6ff25fc4788p-1019, 0x1.27ae96d7b7f7dp-51, 0x1.7a6e448f641f3p-653, 0.0, 0.0,
     0.0, 0x1.bde54d7f64039p-490, 0x1.06322ee720666p-323, 0.0, 0x1.ac23861d33a24p-789,
     0x1.61ca585e6b70ep-8, 0x1.026a5eff46fc8p-56, 0.0, 0x1.c7b911d05b179p-945, 0.0,
     0.0, 0x1.cc192162ce231p-709, 0.0, 0.0, 0.0, 0x1.bb78cbfa16286p-909,
     0x1.5bcb4e661421ep-916, 0x1.e213afeaaac43p-643, 0x1.5e0734e843778p-758,
     0x1.d0c031878e381p-794, 0.0, 0.0, 0x1.829dc1cf5683cp-105
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef___m128d_2 global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    global_bench_acc = external_bench_wrapper_cst;
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        Sleef___m128d_2 local_acc;
        int32_t i;
        ml_double2_t tmp0;
        ml_double2_t tmp1;
        ml_double2_t tmp2;
        ml_double2_t tmp3;
        ml_double2_t tmp4;
        ml_double2_t tmp5;
        Sleef___m128d_2 tmp6;
        int32_t tmp7;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1002));){
            ml_double2_t tmp0;
            Sleef___m128d_2 tmp1;
            ml_double2_t tmp2;
            ml_double2_t tmp3;
            ml_double2_t tmp4;
            ml_double2_t tmp5;
            ml_double2_t tmp6;
            ml_double2_t tmp7;
            Sleef___m128d_2 tmp8;
            int32_t tmp9;

            memcpy(&tmp0, ((ml_double2_t*)(external_bench_wrapper_input_table_arg0+ i)), 16);
            tmp1 = Sleef_sincosd2_u35avx2128(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = local_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = local_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef___m128d_2) {.x=tmp4, .y=tmp7});
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
        tmp6 = ((Sleef___m128d_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    {
        uint32_t cycles_hi = 0, cycles_lo = 0;
        asm volatile (
            "cpuid\n\t"
            "rdtsc\n\t"
            "mov %%edx, %0\n\t"
            "mov %%eax, %1\n\t"
            : "=r" (cycles_hi), "=r" (cycles_lo)
            :: "%rax", "%rbx", "%rcx", "%rdx");
        tmp1 = ((uint64_t) cycles_hi << 32) | cycles_lo;
    };
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_sincosd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sincosd2_u35avx2128 bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
