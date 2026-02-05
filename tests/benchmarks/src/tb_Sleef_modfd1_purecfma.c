/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_modfd1_purecfma.c --function Sleef_modfd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision sleef_sd2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.bfc2ed8baf4ep-720, 0x1.15bb9f125f257p-397, 0.0, 0.0, 0.0,
     0x1.278e85a954af3p-347, 0x1.10f01fe59fb31p-608, 0.0, 0x1.b6872638eeaccp-276, 0.0,
     0.0, 0x1.cf2384de2e7f2p-569, 0.0, 0.0, 0.0, 0x1.821402c78bc7dp-789,
     0x1.67f692790776ep-68, 0x1.aace42c671c14p-934, 0.0, 0.0, 0x1.4d4812c303c55p-360,
     0.0, 0x1.855f6325022e4p-1022, 0x1.781b26b9f0908p-856, 0x1.6021a14846dcap-824,
     0.0, 0.0, 0x1.324ee31c8e124p-548, 0x1.2c15e57ccf96dp-573, 0.0,
     0x1.f679b146a3642p-321, 0.0, 0x1.ed385b67313adp-63, 0.0, 0.0,
     0x1.300d7451f32adp-47, 0.0, 0x1.2b4545f9a646ep-840, 0.0, 0x1.60516279a57c4p-803,
     0x1.ceb09c02be753p-942, 0.0, 0x1.802bd510c768ep-123, 0x1.c101b8cbc4f78p-739, 0.0,
     0.0, 0x1.1cbf8fc36201p-242, 0x1.720bada051e87p-197, 0x1.94f49bfa15ddp-129, 0.0,
     0x1.bd3c43ab261aap-330, 0x1.5be61b0763502p-867, 0x1.e674d4d68dcc9p-312, 0.0,
     0x1.976f12224880dp-112, 0x1.7d32dfa23df7ap-109, 0x1.f96350a96ece1p-194, 0.0,
     0x1.24065b6db13bep-1015, 0x1.d02b4e2c60e8bp-592, 0x1.347002d38dae8p-890, 0.0,
     0x1.0c5787d4daffap-584, 0x1.faffcd58d8db1p-13, 0.0, 0.0, 0.0,
     0x1.ca10e53e31d45p-595, 0x1.cad738dfd2ecdp-249, 0x1.35d95a794c693p-553, 0.0,
     0x1.eae959a5b096ep-448, 0x1.ff2ab88e54f59p-582, 0.0, 0x1.abd77a61409cp-925,
     0x1.85e91d7afbf8fp-331, 0.0, 0x1.9915ae5895d7ap-846, 0x1.521371de738a8p-976,
     0x1.45e38b6b530c8p-371, 0x1.d7f534188fed5p-721, 0x1.62b487363572ap-491, 0.0,
     0x1.ce211a3255d3ap-978, 0x1.4b50cde69e09ap-773, 0.0, 0.0, 0x1.ef31b80af827ep-555,
     0x1.bd80506905394p-878, 0.0, 0x1.0fd0fbfdef1b5p-584, 0x1.b18223366474ep-678,
     0x1.04c19ff2b1664p-451, 0.0, 0x1.e1037b2906e37p-358, 0.0, 0.0, 0.0,
     0x1.e1405d5132d9ep-885, 0x1.0bd65925f42efp-484, 0x1.94eb958e4bce4p-834, 0.0,
     0x1.47663b2003e58p-806, 0x1.d1a0afa82c6f7p-125, 0x1.d84c1d40497cbp-273,
     0x1.72c8756e1d0cap-468, 0x1.52a73dd4a6059p-794, 0x1.811ce55b63893p-54, 0.0,
     0x1.582cc41492e14p-11, 0.0, 0.0, 0.0, 0x1.12161492e2eb5p-387, 0.0,
     0x1.7be2d99d3054fp-869, 0x1.6f32abd6e5392p-830, 0.0, 0x1.b673df2e45185p-433,
     0x1.ab5f1e026bb75p-169, 0x1.70de479b0099ep-869, 0x1.9bccc4f22c6f1p-321, 0.0,
     0x1.70f3bc3cf5806p-311, 0x1.7484c522372e5p-466, 0x1.3fd28f2f4c11cp-2, 0.0,
     0x1.abd9574d5cdaep-327, 0.0, 0x1.94db7e22e1ffp-637, 0x1.67737630cc18cp-981,
     0x1.0024e25afd1bcp-372, 0.0, 0.0, 0.0, 0x1.66d5394cb289ap-517,
     0x1.cd0d7081b5ec5p-235, 0.0, 0x1.7708150470c9cp-819, 0.0, 0.0,
     0x1.7a5c54238dda1p-177, 0x1.d20504d12fac1p-770, 0x1.8b63dbb473c08p-578,
     0x1.3d1c56dec957ep-588, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e45556dc51b03p-84,
     0x1.03fcd814effefp-685, 0.0, 0x1.f7d171b5af0b5p-387, 0.0, 0x1.43fbedd3e10e4p-286,
     0.0, 0.0, 0.0, 0x1.f433cc910ae29p-177, 0.0, 0.0, 0.0, 0x1.c9df1cacf0f98p-720,
     0x1.78ded3d527a0ep-171, 0.0, 0.0, 0.0, 0x1.3e58eff802f1p-236, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e42362f6c935p-135, 0.0, 0x1.35c4ee6c40891p-843, 0.0, 0.0, 0.0,
     0x1.9621e7183c2c7p-310, 0.0, 0x1.9d51b59273b15p-41, 0x1.c8e426e5f0552p-666, 0.0,
     0x1.880545b026fc6p-812, 0x1.0b31b71f235cdp-242, 0x1.6b1e6db7f73b9p-805,
     0x1.d217da8d371b8p-931, 0.0, 0.0, 0x1.dd9a9af6ddcbcp-79, 0.0,
     0x1.85da8197ecbdbp-202, 0x1.8b6d8abaf013cp-402, 0.0, 0.0, 0x1.4be39fc385098p-832,
     0x1.69e71ec50608cp-797, 0.0, 0.0, 0.0, 0x1.ff3935580f3bep-879,
     0x1.093e4defb2eap-317, 0.0, 0x1.dc91b24d2a3fap-235, 0.0, 0.0,
     0x1.98b02490f1f95p-443, 0x1.6e93976e683dap-167, 0x1.1bfb5eb606deep-88, 0.0,
     0x1.6f9c177dc2dacp-997, 0x1.cfaeca172be29p-864, 0x1.4b1e6f1af627fp-219, 0.0,
     0x1.2951e0a48cacap-478, 0.0, 0.0, 0.0, 0x1.ea4d32d69289cp-201, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.144724f6371b2p-477, 0x1.5c7d67fe1ff07p-298, 0x1.b4a00bf1ac2a5p-270,
     0.0, 0x1.75fde5c50442bp-354, 0.0, 0.0, 0x1.983fd3323a4a9p-403,
     0x1.7e495e666ad7p-771, 0x1.6f5a131306f72p-389, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7d0beb2f48ce4p-825, 0x1.2231fdc3abe69p-748, 0x1.d52b0b050364ap-386,
     0x1.4be1507ff11e3p-652, 0.0, 0x1.9c493948f893fp-83, 0x1.a8abad8ed3aa2p-543,
     0x1.e1ed7418e97cdp-175, 0.0, 0x1.dfec022ddaed1p-843, 0.0, 0.0,
     0x1.1e2c95c606d21p-344, 0x1.ddb97433251dfp-360, 0.0, 0.0, 0x1.b9634ec8293fap-639,
     0x1.bd4b50a099d33p-461, 0x1.83fc0098b8d4fp-792, 0x1.eb275c2fe0d83p-652,
     0x1.adf561207cd17p-141, 0.0, 0x1.45fa8e9edc755p-471, 0x1.775c56671c5f6p-727, 0.0,
     0.0, 0.0, 0x1.4a65975877bap-689, 0x1.4b5b71b254362p-712, 0x1.27a5e8e152ffap-847,
     0x1.910f5dad00c43p-623, 0.0, 0.0, 0.0, 0.0, 0x1.7af9c72165c3bp-349, 0.0,
     0x1.a3475040c6935p-2, 0x1.30274257bf654p-796, 0.0, 0x1.daccac171caf9p-159,
     0x1.46a515a67116cp-365, 0x1.3b59cab14e8a5p-816, 0x1.0f93ad903abc9p-166,
     0x1.4bf4af98e24c7p-944, 0.0, 0.0, 0.0, 0x1.b3378b5c50c6cp-368, 0.0, 0.0, 0.0,
     0.0, 0x1.731f2d5ea87dep-872, 0.0, 0.0, 0.0, 0x1.bdf760b21593ap-708,
     0x1.9c57b6ea0093fp-960, 0x1.83cf618cc3e3cp-493, 0x1.87e621b70692cp-343,
     0x1.b3eb4fc3a3622p-195, 0.0, 0.0, 0x1.da71b79920287p-593, 0.0, 0.0,
     0x1.066a03f54166cp-532, 0x1.3b0ac4737efb6p-281, 0.0, 0x1.42fbcee47cabep-648, 0.0,
     0.0, 0.0, 0x1.def23ee1ee571p-998, 0x1.b95a1c9a2434ap-915, 0.0, 0.0, 0.0,
     0x1.03ea5d8319ba1p-449, 0x1.76f386b4cc815p-38, 0x1.0784e0d40616cp-414,
     0x1.014271a9f71a7p-105, 0.0, 0x1.e3c47550e781cp-979, 0.0,
     0x1.b02d543bf0fd5p-1022, 0.0, 0x1.d2e3124b95933p-578, 0.0,
     0x1.0afcaa34b0449p-754, 0.0, 0x1.a1278cdbf2a59p-418, 0.0, 0.0, 0.0, 0.0,
     0x1.7e30d5f9a94dep-28, 0.0, 0x1.62dd6985f31ep-576, 0.0, 0x1.d665fd8f44c2p-404,
     0x1.ad8c986dbdcfdp-155, 0.0, 0x1.c6e532f9a3573p-365, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9c83b3bfa55a2p-848, 0.0, 0x1.7a5174695b46ep-875, 0.0, 0.0,
     0x1.80cf49b283959p-191, 0x1.f42d7e740126ap-236, 0x1.cb9ed49437b1ap-861, 0.0,
     0x1.6dfea8bea6ab5p-605, 0x1.b0f02c75c92cep-634, 0.0, 0x1.4d76c5c19bfa9p-2,
     0x1.7f943e958ebedp-479, 0x1.654adad36a12p-449, 0.0, 0.0, 0x1.d46f5cb2e039ep-20,
     0.0, 0x1.d6815103f5992p-991, 0.0, 0x1.3bfeefefc6d53p-964, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a0c46e5ab1195p-125, 0.0, 0.0, 0x1.99237bdc7fb8ep-852, 0.0,
     0x1.692035a05dae5p-298, 0.0, 0.0, 0.0, 0x1.e2652560f592dp-123, 0.0,
     0x1.884df4c008339p-416, 0x1.bf92fac802bdfp-215, 0.0, 0x1.38fe66b77590ap-441,
     0x1.7d7d9c7782d5fp-989, 0x1.e82afed3a9c0fp-967, 0.0, 0.0, 0.0, 0.0,
     0x1.4296fe158694dp-796, 0x1.592b56c27120cp-263, 0x1.14d6bde8e0f36p-651, 0.0, 0.0,
     0x1.a77da601aade4p-526, 0x1.02a028965728dp-783, 0x1.e7a16ffd3b96ap-138, 0.0, 0.0,
     0x1.3374cfd38d21cp-601, 0x1.69d916576be3dp-339, 0.0, 0x1.30659aa45ca49p-40,
     0x1.ad45b4e481149p-521, 0.0, 0x1.f4074aa98f416p-27, 0.0, 0.0,
     0x1.51ce6cc819036p-118, 0.0, 0x1.cc5796950a333p-321, 0x1.01f6d17d3f2dbp-88,
     0x1.6c8a966b64b3ep-261, 0.0, 0x1.cf5ca7586af0dp-620, 0.0, 0x1.a0b84431e3e7fp-292,
     0.0, 0.0, 0.0, 0x1.1d2daae868a4dp-259, 0x1.03c1ad70585a8p-615,
     0x1.635f26d0e662p-727, 0.0, 0x1.ac1aa3c2a2106p-971, 0x1.7c815d50e6ecap-105, 0.0,
     0x1.f7118856b78cbp-572, 0.0, 0.0, 0.0, 0x1.30989aae381p-646,
     0x1.4c3a6ea3b650ap-105, 0x1.2ccfca8a537dfp-302, 0.0, 0x1.36d25ae469fdcp-373,
     0x1.7926dd4610e8p-321, 0x1.348dab5b0c643p-555, 0.0, 0.0, 0.0,
     0x1.87bcf3224e578p-663, 0x1.7d0d3ba439f0fp-598, 0x1.d90a59249d97cp-184, 0.0,
     0x1.30804feb46d59p-743, 0.0, 0x1.8e442353de4ccp-545, 0.0, 0x1.5bee7d0651ad1p-293,
     0x1.ac6e6b8c81ec4p-211, 0x1.4818b0f011921p-827, 0.0, 0.0, 0x1.99cf804c53ff7p-490,
     0.0, 0x1.f4257af039097p-824, 0x1.c412c743054f7p-734, 0x1.acbf3d3e161d5p-243,
     0x1.2c0e848e9aa87p-223, 0x1.14a60ed34d276p-97, 0x1.5c7fdbdaf2b0bp-1003, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.731dae52038e3p-533, 0.0, 0.0, 0x1.21eb138a20d55p-600,
     0x1.82e17d413ad0ap-1006, 0x1.3459efe47e46p-535, 0.0, 0x1.8ab85388df1c8p-115,
     0x1.d15f37625f7ebp-272, 0.0, 0x1.da8028df5ce9ep-496, 0x1.e597660486a08p-611,
     0x1.cd9b6a8139532p-433, 0.0, 0.0, 0.0, 0x1.40a8247f5446ep-265, 0.0,
     0x1.29db24eba4552p-87, 0.0, 0x1.8db74473af49fp-273, 0.0, 0.0,
     0x1.8fa024fe9bc42p-102, 0.0, 0x1.13334d0855a71p-756, 0x1.9494ba8e6c55bp-961,
     0x1.31462f50ab094p-886, 0x1.a198a62edb34dp-368, 0.0, 0x1.e7d3f9032e5d1p-568, 0.0,
     0.0, 0x1.fb1276aaeb43bp-781, 0.0, 0x1.0d85f51bc46f9p-871, 0.0, 0.0, 0.0,
     0x1.6a0f7241a52f7p-376, 0.0, 0x1.1c7b828464374p-496, 0x1.a094134e3ee27p-223,
     0x1.59b756f97bb5p-721, 0.0, 0x1.3621aa728a769p-659, 0x1.49efeca6210a6p-458,
     0x1.c7e12d1c93cedp-435, 0.0, 0.0, 0.0, 0.0, 0x1.31a489cab5adcp-742,
     0x1.f46aed1ef671cp-970, 0.0, 0x1.489da3b27017bp-242, 0x1.19150718fc0d5p-565, 0.0,
     0x1.f699e6186466cp-284, 0x1.164a762864d4ap-154, 0x1.61f2d688d7c79p-549, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a07ce71fe2ca7p-818, 0.0, 0x1.fa8c32eac8c5bp-14, 0.0,
     0x1.ebef264cef71bp-332, 0x1.557a2856d0a9ap-424, 0.0, 0.0, 0.0,
     0x1.0c51fe68d4454p-222, 0x1.985537e94d34bp-449, 0x1.13c1441fc7182p-858, 0.0, 0.0,
     0.0, 0.0, 0x1.c1aebd2dfbaefp-500, 0.0, 0x1.fec69a8e5a2e7p-497, 0.0,
     0x1.e60323af119bdp-564, 0x1.5a1e844a307e4p-965, 0x1.0dc5799759522p-124, 0.0, 0.0,
     0.0, 0.0, 0x1.f959fdc56c46dp-492, 0.0, 0x1.5fc12dd3079edp-265,
     0x1.c51402a788188p-153, 0x1.43156f31236afp-827, 0x1.04fcfd330812bp-370,
     0x1.c195c74fd938bp-368, 0.0, 0.0, 0.0, 0x1.2fc6b9e24deccp-371,
     0x1.51054dd21b9bep-368, 0.0, 0x1.5f823eb1c9293p-430, 0.0, 0.0, 0.0,
     0x1.b9034d127a7c8p-995, 0x1.3f7855f2837aep-131, 0x1.133da699b65c8p-280,
     0x1.d7d603bcfc06bp-796, 0x1.404b1df6a8cebp-44, 0x1.0aa2342c81ca7p-743, 0.0, 0.0,
     0x1.f8af256d25f22p-243, 0x1.f877f6aeb223p-614, 0.0, 0.0, 0x1.1f37f56ca9cd6p-336,
     0x1.dbbf67bb61c68p-763, 0.0, 0x1.82c72aa093b53p-361, 0x1.edb2c41d62bd9p-851,
     0x1.93492f54a9a32p-444, 0.0, 0x1.1d98b4fe0381fp-411, 0.0, 0x1.951b114e73df8p-851,
     0x1.0a2abe0c4ebaap-73, 0x1.419482ae48883p-792, 0.0, 0.0, 0.0, 0.0,
     0x1.6a70baee401adp-670, 0.0, 0x1.20331afd5b4fep-910, 0x1.45a8aff06868dp-265, 0.0,
     0x1.8172f7be9ae77p-935, 0x1.bcb8cadc47cd7p-556, 0.0, 0x1.ed78b68d2485fp-526,
     0x1.006b36a495cf3p-767, 0.0, 0.0, 0x1.6c0d115e60ce5p-570, 0x1.49750f3149c9ep-407,
     0x1.fe27932b0f681p-221, 0x1.97261b6e899d1p-646, 0x1.4510df9f0fbb4p-696,
     0x1.f73a9249aebc2p-726, 0x1.c45dec3ebd15cp-358, 0x1.a382eee3662bep-514, 0.0,
     0x1.dbdf1854d8baap-194, 0x1.1322941dbef98p-937, 0x1.545ffc06b381cp-533, 0.0,
     0x1.4e75e598d7279p-911, 0.0, 0x1.61613f6851661p-557, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9feca2c8581d6p-551, 0.0, 0.0, 0x1.0807ee41d1b89p-367,
     0x1.eeffccb8d73f9p-758, 0x1.153be1ba60482p-317, 0.0, 0x1.34cead42a0811p-686, 0.0,
     0.0, 0.0, 0x1.b46b67eccc649p-980, 0.0, 0.0, 0.0, 0x1.d27ec1620f94dp-199,
     0x1.916389d187c85p-120, 0.0, 0x1.86978d2b34cc8p-112, 0x1.d585e77ae398ep-299, 0.0,
     0x1.2a592baa81404p-721, 0.0, 0.0, 0x1.ce5f24d3cb51ap-627, 0.0,
     0x1.ad60bb5430d5ap-762, 0.0, 0x1.659d5d87f437bp-271, 0x1.ac6544d4a21bap-493, 0.0,
     0x1.b408e776361a7p-17, 0.0, 0x1.239a9bad766d7p-680, 0x1.a5c0c52ead09ep-5,
     0x1.a02c107cf4a01p-608, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7c274b8b78013p-30,
     0x1.8a26a2128e1a3p-763, 0x1.dc24f8d0fc478p-945, 0x1.5825a326081adp-37,
     0x1.84f6b500bf549p-636, 0x1.a79464cb08181p-915, 0x1.28783c55649d8p-555, 0.0, 0.0,
     0x1.940ff72555658p-164, 0.0, 0.0, 0x1.15fe3991024cfp-312, 0x1.5c0af5e3c9119p-672,
     0.0, 0x1.5a616b654bb11p-268, 0x1.d8ddcf49642afp-151, 0.0, 0x1.5f6d2dd21a08p-517,
     0x1.ed8b489c09fa5p-191, 0.0, 0x1.5e45b861e4223p-737, 0x1.3266fbb5a7a2fp-888,
     0x1.02d906530114dp-607, 0.0, 0x1.823fe4bad3594p-182, 0.0, 0x1.30e5722a888b1p-61,
     0x1.f6636993ccbddp-589, 0x1.f62ada46bac11p-954, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b9a6d0ed8e305p-289, 0.0, 0.0, 0.0, 0x1.937b9de31dc07p-334, 0.0,
     0x1.6ff8d19ad4ef8p-182, 0x1.aa9f3378313ebp-991, 0x1.d272f2681769bp-85,
     0x1.1d227b29b399ap-435, 0.0, 0x1.db79ab4babe89p-997, 0.0, 0x1.ebabec209d3ep-625,
     0x1.05bfbdc535871p-282, 0x1.06ca317f7a67dp-595, 0x1.e31fa4cd277a8p-579,
     0x1.058fda37726bfp-615, 0x1.0d70454030bd4p-64, 0x1.ef742fed007e6p-62,
     0x1.633c1600d873ap-553, 0x1.1200a1680dc72p-925, 0.0, 0x1.92f0cd7448869p-686, 0.0,
     0x1.394a0ad7667c9p-477, 0.0, 0.0, 0x1.6acc40253de8ap-602, 0x1.55edc20cd3a5dp-454,
     0x1.6fd30e25f962ap-795, 0x1.6471708525d69p-280, 0.0, 0x1.6ba0a96a40191p-237,
     0x1.ac22a693b1b5fp-902, 0x1.68d0636512085p-611, 0x1.eb025ffce173p-84, 0.0,
     0x1.918d157a0124bp-149, 0.0, 0.0, 0.0, 0x1.d31a45f45823bp-623, 0.0,
     0x1.1a2bcdc0473cp-291, 0.0, 0x1.488227e7c86b2p-685, 0.0, 0x1.bd453431f9dddp-884,
     0.0, 0x1.526eaafd26f4ap-671, 0x1.6a9c1dc20bd07p-854, 0x1.7c382506d3e1dp-243, 0.0,
     0x1.f48aeacb6658fp-709, 0x1.1fb17f05ccb15p-122, 0x1.f2799708470bcp-513,
     0x1.d51c0bea97297p-121, 0x1.2b5e029ce90e3p-67, 0.0, 0.0, 0x1.7b6b1f47bd762p-442,
     0x1.86c9493d79afap-757, 0.0, 0.0, 0x1.52329aec1e2afp-612, 0.0,
     0x1.fc85592bf2f4dp-242, 0.0, 0x1.9e1f06f59e975p-584, 0x1.1d8b6d3f37123p-904, 0.0,
     0x1.fbed359d1edffp-365, 0.0, 0.0, 0.0, 0x1.d61f2192600b5p-945,
     0x1.d47f4325e9c38p-514, 0x1.270defbdeb023p-435, 0x1.d6624a3f6dcdcp-340, 0.0,
     0x1.a3724802a6ebbp-653, 0.0, 0x1.c86ad4e75f11cp-921, 0.0, 0x1.0d101eaa9495fp-271,
     0x1.d6f228c5fb177p-202, 0.0, 0x1.66461071de20bp-715, 0x1.703907c627105p-782, 0.0,
     0x1.84fbfb1067be8p-184, 0x1.4a059c55bf584p-955, 0x1.91e8bf7c8a463p-629, 0.0,
     0x1.b0d56879fd0cdp-416, 0.0, 0x1.7bd13c41dfb9dp-350, 0x1.8b57a5c070605p-490,
     0x1.0c1ebfbfcdb4fp-201, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3bf3be9cbd8f5p-598, 0.0,
     0x1.9530b1b4dbaadp-354, 0x1.6bedad99233c4p-58, 0.0, 0x1.43286b2b6906p-398,
     0x1.69b855fc1f1edp-663, 0x1.9a3c50b227737p-191, 0x1.3a9fee4f6f231p-443, 0.0, 0.0,
     0x1.066d7872ae2f3p-890, 0.0, 0.0, 0x1.ebf89698fc7d8p-916, 0.0, 0.0, 0.0,
     0x1.50dd09f7723ep-52, 0.0, 0x1.602fefa84ccabp-19, 0.0, 0.0, 0.0,
     0x1.30301da9c7054p-404, 0.0, 0x1.68a73b538832p-580, 0x1.1a04a68734509p-699, 0.0,
     0x1.f62f22e1da4fbp-34, 0.0, 0x1.7088dfbef1a5ap-237, 0x1.5362eb8f9514bp-356,
     0x1.97c28c22525e5p-827, 0x1.5ecd284b6e48cp-377, 0x1.b0f9b93183facp-851, 0.0,
     0x1.d8e5a898bf48cp-570, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.60fd8f2d5582bp-201,
     0x1.d031e35d8366cp-636, 0.0, 0.0, 0x1.85d0c0e61189bp-39, 0.0, 0.0,
     0x1.4ce9818607969p-679, 0x1.d418a50b1eeaap-237, 0.0, 0x1.d06ab95f9e645p-944,
     0x1.20ed19f001a59p-538, 0x1.8f1267ee32b3ep-58, 0x1.7e13c0a523ed3p-315,
     0x1.7dcdf56f95161p-157, 0x1.4d8bfaca9446cp-572, 0x1.df122c4c6ba3dp-701, 0.0, 0.0,
     0.0, 0x1.83b2606824402p-571, 0x1.a52c636f7e49cp-985, 0.0, 0.0, 0.0, 0.0,
     0x1.328e449866404p-235, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f64228f5aca96p-267, 0x1.36ae37b4bd9fap-285, 0x1.2f3640068269bp-342,
     0x1.35a4b1277ec59p-399, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.89e000ef82ed7p-516, 0.0,
     0x1.362ede21bad8fp-377, 0.0, 0x1.1cc6e11b01a3bp-880, 0x1.158e524eeec01p-724,
     0x1.cdbdf90eb8c57p-439, 0x1.d9124b8138e06p-566, 0.0, 0.0, 0.0,
     0x1.1b1117cef026p-990, 0x1.3f7a231de2d1fp-828, 0x1.591c6bd1e8c29p-735,
     0x1.663b0d6e953f6p-487, 0.0, 0.0, 0x1.c26a3c3c77ab9p-395, 0x1.190e24b93ba3ap-119,
     0x1.f2afa7cc88424p-635, 0.0, 0x1.fd267bb100fc5p-202, 0.0, 0x1.084054826f60ap-34,
     0x1.d359db579d0c7p-645, 0x1.7796ff705e298p-740, 0.0, 0x1.e3990c26c4ed8p-462,
     0x1.e586e70b9647ep-508, 0x1.f2d4ab940f6dfp-250, 0.0, 0x1.3bd222757cfe3p-803,
     0x1.46dbe2d0cbb52p-224, 0.0, 0.0, 0.0, 0x1.3187bb182bb53p-699, 0.0, 0.0,
     0x1.59b91b722d8bbp-355, 0.0, 0x1.870a0e73f104dp-249, 0x1.eefb547c8b567p-528, 0.0,
     0x1.b9bf931abbe2cp-674, 0.0, 0.0, 0.0, 0.0, 0x1.b274c3a8cc6c5p-652,
     0x1.3a8ac899de2f6p-662, 0x1.f10b4258fc05p-1008, 0x1.34c1d2369ce5p-713, 0.0, 0.0,
     0x1.3867d69ac93b8p-1016, 0x1.715e9807f6cc7p-153, 0x1.61c442ed44225p-527,
     0x1.0fdbd16cb8295p-338, 0.0, 0.0, 0x1.2d0b9bf9e96p-367, 0x1.05b0238906671p-839,
     0.0, 0x1.f6449e4ae7ddap-380, 0x1.1128902f2edc3p-624, 0.0, 0x1.a27d4afa92823p-775,
     0x1.3c6df71e6149cp-57, 0.0, 0.0, 0x1.1fa96a2ffb7e1p-492, 0.0,
     0x1.d60a9f1831ddap-855, 0x1.5e64b851d71ddp-109, 0.0, 0x1.6c41d6b2345fbp-587,
     0x1.4b36840aa6061p-427
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_modfd1_purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
    }
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_modfd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_modfd1_purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
