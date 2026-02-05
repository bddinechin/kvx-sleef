/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atanhd1_u10purecfma.c --function \
 *     Sleef_atanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.9d7cb5fdcc054p-849, 0x1.d6b0b6cb5ed4bp-643, 0x1.ebfb8eb7b76bfp-969,
     0x1.bdd564053e1fcp-411, 0.0, 0.0, 0x1.26b6dbc86e9aep-580, 0x1.15bc22a86bedbp-835,
     0x1.d784048e3f345p-682, 0x1.7420eaf2e6692p-807, 0x1.bd9e141a7174ep-769,
     0x1.f8a363c976105p-549, 0x1.b7b8cdb48df13p-137, 0x1.7d7635e31150cp-995,
     0x1.d7b51a0fd21acp-331, 0x1.4441ea552463dp-809, 0.0, 0x1.b16a5058461e4p-659,
     0x1.f3b03ab1cae4ep-264, 0.0, 0x1.170e429dd827cp-356, 0x1.c61cbcb08c1dep-691, 0.0,
     0.0, 0x1.16a7b292a7602p-1008, 0.0, 0.0, 0.0, 0x1.917ae90bf0ec1p-14, 0.0, 0.0,
     0x1.1dcc702e0f02ap-960, 0.0, 0x1.dff4b071acf6bp-180, 0x1.d4501e6b5b428p-669, 0.0,
     0x1.3e515c8c071fap-106, 0.0, 0x1.cfe087ba90073p-257, 0.0, 0x1.3f837972375d3p-146,
     0.0, 0.0, 0.0, 0x1.74fe919041f39p-395, 0x1.10c61b4d8b559p-869, 0.0,
     0x1.367ec5e58b0d2p-944, 0x1.da077ceee392ep-118, 0x1.733c35f04d717p-398, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.68481f27a1ad6p-421, 0x1.e4b3cdc1a6046p-915, 0.0,
     0x1.cbe79cfee8a5p-459, 0.0, 0x1.03ca2b0427419p-579, 0x1.c99986a008c33p-543,
     0x1.903302873e917p-941, 0.0, 0x1.9130b572e71aep-794, 0.0, 0x1.0c25f6d2cd49ep-487,
     0x1.ac198e19f35e9p-471, 0.0, 0.0, 0x1.7c0ecc56d4984p-876, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.6e952caf3cfd1p-563, 0x1.1de487cbdadeap-909, 0x1.e080b8e5fe8dp-14,
     0.0, 0x1.e385460bc93d8p-117, 0x1.b27141ef8a9afp-502, 0x1.7c79c7caad108p-442, 0.0,
     0.0, 0x1.8a86ab9e3b342p-533, 0x1.18462d46ad4cep-472, 0.0, 0x1.1a3568bae75d5p-296,
     0x1.98fbad292d876p-522, 0x1.f19724e7bbb07p-59, 0.0, 0x1.7d3224fd5bd82p-233,
     0x1.213f90e60a09dp-674, 0x1.20092687d4fbdp-497, 0x1.117d5047cf652p-124, 0.0, 0.0,
     0x1.3ec023a87fc08p-892, 0.0, 0.0, 0.0, 0.0, 0x1.1217155811e64p-633,
     0x1.956f7e20a0bfdp-584, 0x1.359a2149b658bp-500, 0x1.66064454676b6p-434, 0.0,
     0x1.62be3dcc59fbbp-900, 0x1.a67a08d9c0baap-193, 0.0, 0.0, 0x1.4fb7d7a514c5dp-128,
     0x1.7e73b0126776ep-753, 0.0, 0x1.d757a49bc5d77p-655, 0x1.94d2c25eff15cp-176,
     0x1.4daf465f76abcp-210, 0.0, 0.0, 0.0, 0x1.4937fbc795feep-817,
     0x1.7d9fc323e9842p-184, 0.0, 0.0, 0x1.82a2902dd2b9ep-434, 0.0, 0.0,
     0x1.4d2064c9abd95p-765, 0x1.72584051e4f8ap-738, 0.0, 0.0, 0x1.ae3fb7927c232p-656,
     0x1.33bca27c21977p-374, 0.0, 0x1.ef8418d0cf88cp-345, 0.0, 0.0,
     0x1.fa3233a6595abp-824, 0x1.ba53b2655f369p-668, 0.0, 0x1.4a11650c462fcp-847,
     0x1.c10b20ad86a49p-302, 0x1.bd07df79772fep-584, 0.0, 0.0, 0x1.eecbe704317b7p-440,
     0x1.59c961c445bf6p-316, 0x1.2b730354e4738p-407, 0x1.b05600846df85p-195,
     0x1.2adf7be12caf5p-372, 0x1.5f580e8857ee6p-3, 0.0, 0x1.3fab5fc8aaec1p-905,
     0x1.cb37880bc199dp-92, 0.0, 0.0, 0.0, 0x1.e2b2334e1a2ddp-937,
     0x1.f4bd9cf38c213p-754, 0.0, 0x1.07a653669172cp-836, 0.0, 0.0,
     0x1.95644d94714f2p-966, 0x1.63cba72924facp-810, 0.0, 0.0,
     0x1.aa30f2248b171p-1012, 0.0, 0x1.6529acc1396a9p-165, 0x1.581409d350134p-604,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d1ceeac776b83p-856, 0x1.047e270dd526p-567,
     0x1.ed1ecf553ef2ep-308, 0.0, 0x1.8c7bddb03790dp-810, 0.0, 0x1.c4032d554104bp-468,
     0x1.76372fbdb1d44p-592, 0.0, 0x1.0f34c1de2ea41p-123, 0x1.9b98e8145d58cp-997, 0.0,
     0.0, 0x1.1ca894ec414a1p-23, 0.0, 0.0, 0x1.1ab6d0abd1031p-437,
     0x1.1108354763a1ap-243, 0x1.3d81303fbef3ep-309, 0x1.f0ec0919b9c2ep-467, 0.0,
     0x1.7496e2d819bb5p-102, 0x1.5a7926bd569bbp-75, 0.0, 0x1.4318b08b12423p-547,
     0x1.3fc7267ad940dp-796, 0.0, 0.0, 0x1.80ffef0421113p-654, 0.0,
     0x1.0219420d66a0dp-1014, 0.0, 0x1.f9306423c97bp-837, 0.0, 0.0,
     0x1.bcd10ecd4b647p-937, 0.0, 0x1.76c06720b708bp-835, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b1ead85fee24p-694, 0x1.33818d9198eb1p-843, 0.0, 0.0, 0x1.aed19433aeb61p-734,
     0.0, 0.0, 0x1.b7a1df0440f08p-299, 0x1.2cd23c0de13fep-819, 0x1.9dd024599b032p-852,
     0.0, 0.0, 0.0, 0.0, 0x1.8100112497a0ap-413, 0.0, 0x1.0c9c1a45d280ap-404,
     0x1.9f038b9c0f918p-127, 0x1.669623bd1535p-892, 0x1.79395dae16d94p-725,
     0x1.ad8de9aea7de3p-687, 0x1.8d385187bb39p-443, 0.0, 0.0, 0.0,
     0x1.5c34cb643856ap-750, 0.0, 0x1.46eecc0c1b93fp-368, 0x1.1c83b791f4cdep-820,
     0x1.82d1fe25b375ap-8, 0x1.c9cf5fa02b3f5p-116, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1p0,
     0.0, 0x1.bbb852890cb8bp-923, 0.0, 0.0, 0x1.8b9d6ff0849fp-917,
     0x1.65e0786c9578fp-453, 0x1.eb99afd8b3957p-959, 0x1.3b9c7394d8d9ap-92,
     0x1.d4e0c18497e5fp-603, 0.0, 0.0, 0.0, 0x1.2a4035d1155c3p-549,
     0x1.3083a56c72536p-999, 0x1.282b81b38449dp-392, 0.0, 0.0, 0x1.8980435c2668fp-884,
     0.0, 0x1.bd200f6d3ababp-221, 0x1.811f63762bd4cp-619, 0.0, 0x1.9bf01ff3c21d5p-313,
     0.0, 0.0, 0.0, 0x1.c90259847073p-726, 0.0, 0x1.f8c5c869fea73p-37, 0.0, 0.0,
     0x1.94ae97d318fap-180, 0x1.4725a07c42b3cp-727, 0x1.bd247af602471p-69, 0.0, 0.0,
     0.0, 0x1.9c04ad97c1a8fp-984, 0.0, 0x1.445ffdf9fdf27p-726, 0.0, 0.0, 0.0,
     0x1.4325ce19eb77ap-965, 0.0, 0x1.e4bdc4368f9cfp-639, 0x1.405dd997adbfdp-1021,
     0x1.91ebe1a69e1d7p-639, 0.0, 0x1.e73c750230b35p-510, 0x1.e721c0fe7d3dap-68,
     0x1.0498a005be78p-362, 0.0, 0x1.51737a9b067edp-664, 0.0, 0x1.e61b835231902p-478,
     0x1.f5f0a031345cbp-346, 0.0, 0.0, 0.0, 0x1.33bed419f4d84p-337,
     0x1.be1d24beb906p-488, 0.0, 0x1.bc3571075a85fp-145, 0x1.5ebfbe352a45dp-739, 0.0,
     0x1.7d4f99c55f051p-500, 0x1.96e8c6e5cbcaap-957, 0.0, 0.0, 0.0,
     0x1.5f48d4328a117p-675, 0x1.9b127cb232ed1p-401, 0x1.dad18b750a4f5p-1021,
     0x1.f2b215cc82c0fp-340, 0x1.2f4e9936e24f5p-333, 0x1.3ad2d7aa91b5fp-101,
     0x1.e20dd5be3e2c7p-341, 0.0, 0x1.9b29b775cf849p-799, 0x1.20bad26fc4f49p-840,
     0x1.380cd0c75f169p-955, 0x1.072ea89c5a25bp-921, 0x1.d67a27db0240cp-1,
     0x1.0d942c585662cp-530, 0.0, 0.0, 0.0, 0x1.f34cba41d040ap-635,
     0x1.a2b33311d90a8p-95, 0x1.a7978ad54280bp-601, 0.0, 0.0, 0x1.7a5f287100bebp-211,
     0.0, 0.0, 0.0, 0x1.a01552151e2b4p-690, 0x1.7025c68a32681p-1001, 0.0,
     0x1.fb9f9e25ded35p-8, 0.0, 0.0, 0.0, 0x1.b1f2589df66c9p-192, 0.0, 0.0, 0.0,
     0x1.d4cd47d312214p-1021, 0x1.2d8e2a9129a72p-974, 0.0, 0.0,
     0x1.87bd4bfa00c5fp-507, 0x1.1108510f25341p-32, 0.0, 0x1.be2a3d2e18035p-810, 0.0,
     0x1.c829a723c2212p-80, 0x1.5399766348998p-866, 0x1.6bb9243bf1fe9p-447,
     0x1.b2976dcd331b2p-972, 0x1.4b169b2c76148p-31, 0.0, 0x1.a127c729a7981p-246, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fbbf9733ce8d6p-1017, 0.0, 0.0,
     0x1.41a1417d63991p-228, 0x1.b3273ea8ae9c8p-550, 0.0, 0.0, 0x1.a3c582d957a3p-728,
     0x1.7df61ae0f7958p-787, 0x1.79ce14f641626p-496, 0.0, 0.0, 0.0,
     0x1.e93a7470c18b2p-425, 0x1.9fadb825bd31cp-300, 0x1.5b5f4463ddb1ep-712, 0.0,
     0x1.b1570084e1fep-400, 0.0, 0x1.7bbfb5887e53fp-105, 0x1.92f3bfa188862p-440,
     0x1.bd0624cd17c4dp-877, 0x1.3b1a5ade23dfcp-16, 0.0, 0.0, 0x1.63406554a414bp-149,
     0.0, 0x1.458c638d09386p-165, 0x1.46f3f46dd56a8p-497, 0x1.6529cfa8864aap-921,
     0x1.27a621e93d4a2p-563, 0x1.167251d011db4p-944, 0.0, 0x1.f652234aadcffp-199, 0.0,
     0x1.af1deb94bbe0dp-696, 0x1.613d21af7961p-879, 0.0, 0.0, 0x1.b8b95526f3bf9p-46,
     0.0, 0.0, 0x1.f2c0f881e4593p-904, 0x1.6ce117530db0ep-314, 0x1.d4f387c95201fp-180,
     0.0, 0x1.5671ac7352e05p-960, 0x1.fe3e0a5eaac3ep-957, 0x1.289df777196d7p-942, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e9376db6dc4fp-564, 0x1.7b71b514e146ep-591,
     0x1.ec3f07d94430ap-232, 0x1.d2c1dc30c34e6p-53, 0x1.8b0b3fd95abdcp-304,
     0x1.e346a484485f3p-1003, 0x1.d318828fc0e67p-98, 0.0, 0.0, 0.0,
     0x1.3cacaf108d7cep-743, 0x1.f98ea957bade6p-316, 0x1.029a9f79e2ca2p-833, 0.0,
     0x1.03596de549662p-950, 0x1.d49bb7485d094p-711, 0.0, 0x1.2e5d86dff7669p-44,
     0x1.4c38f25b2d9f5p-266, 0x1.e9e3bd2362e96p-462, 0x1.3c62abea86a05p-664,
     0x1.504ac07c0cbd9p-864, 0.0, 0.0, 0x1.9a282ced9941ap-170, 0x1.ce8b0476737abp-779,
     0.0, 0x1.098085b4ae31ap-106, 0.0, 0.0, 0x1.2a90a1ec23bd7p-48,
     0x1.e011e48af4cf3p-601, 0.0, 0x1.e1bd6ded0419fp-938, 0.0, 0x1.02b4221d478dbp-258,
     0.0, 0x1.2a10686e83e69p-57, 0x1.eae88388c1888p-239, 0x1.5451ad1dcf475p-764, 0.0,
     0.0, 0x1.166fa8e87ae31p-784, 0.0, 0.0, 0x1.3f3c5f7da617p-120,
     0x1.3446b3c12e916p-771, 0.0, 0x1.9fd78697d5a8p-564, 0x1.d982c69af2ea2p-784, 0.0,
     0.0, 0.0, 0.0, 0x1.31f239978bfc4p-877, 0x1.d61d093befbe2p-820,
     0x1.e760b8faae313p-196, 0.0, 0x1.5b507683f6f71p-96, 0x1.7b447bad73492p-784, 0.0,
     0.0, 0.0, 0x1.4fed7bb2a8e64p-599, 0.0, 0x1.6084e06787bedp-796,
     0x1.10ccfc2aab50ep-679, 0.0, 0x1.66c8c6a2c9671p-742, 0.0, 0x1.7b1b8568e766cp-639,
     0.0, 0x1.29a2300034502p-772, 0.0, 0x1.9526fe641b0b3p-148, 0.0,
     0x1.9976d068f84a8p-723, 0x1.eff4d1c1d7dd9p-966, 0x1.207e1b49cc7c7p-1014, 0.0,
     0x1.c0ac91cd09b99p-209, 0x1.2e4577f4a1e6ap-925, 0.0, 0x1.7521a285ffdf6p-50,
     0x1.fd2fdc8a4c564p-876, 0x1.974aca1524d87p-39, 0x1.4d80dffcf5a97p-106,
     0x1.c99d778a475b1p-640, 0x1.b966e7f2b9e53p-59, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.083fbe7b86074p-851, 0.0, 0.0, 0.0, 0.0, 0x1.f4fbb85bdec3fp-641, 0.0, 0.0,
     0x1.6fdba88578b6fp-184, 0.0, 0x1.34deec71e6401p-565, 0x1.da70a8cb89f88p-880,
     0x1.065b0054b734ap-659, 0x1.14596c3b8ddd9p-894, 0.0, 0.0, 0.0, 0.0,
     0x1.24bdaf4800231p-201, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c9503660adba9p-469,
     0x1.bdf01d7aca259p-371, 0.0, 0.0, 0.0, 0x1.9d89774bedb94p-78, 0.0,
     0x1.762440a7c21f2p-74, 0x1.baaf7bcbf4afap-296, 0x1.30070cb935d82p-987, 0.0, 0.0,
     0.0, 0.0, 0x1.afaf0bf645ea5p-125, 0.0, 0.0, 0x1.23bde84d3a3f9p-979, 0.0, 0.0,
     0.0, 0.0, 0x1.e235cffd91759p-488, 0x1.a345586fe99ecp-339, 0x1.0ffe6f8d07f05p-870,
     0.0, 0.0, 0x1.e771658c7e07bp-428, 0.0, 0.0, 0x1.a33b3616cbdf4p-667,
     0x1.ffde92095ad89p-863, 0x1.dcf77d75933acp-588, 0x1.5b8af89410a7cp-666, 0.0, 0.0,
     0.0, 0.0, 0x1.2c1a467614f5ep-698, 0x1.3b9c25409a11fp-936, 0x1.890951b55fbf6p-492,
     0x1.ca4aebac2f376p-84, 0.0, 0x1.d0675592d645dp-161, 0.0, 0.0, 0.0,
     0x1.d3f75539c6d6cp-907, 0x1.b6313894c8ab6p-68, 0.0, 0x1.2df26cb32f203p-761,
     0x1.d3ca7c87d4d2dp-696, 0x1.a9cba5f150f9bp-361, 0x1.3315d2404fe61p-369, 0.0, 0.0,
     0x1.f5ea07a53310ap-526, 0.0, 0x1.06912a12bc789p-318, 0x1.9f46cf8983ee3p-675, 0.0,
     0x1.b52215c2c0533p-236, 0.0, 0.0, 0x1.6e8269fac66e8p-328, 0.0,
     0x1.2bcaae7221a25p-952, 0x1.ac796133dfd1ep-812, 0.0, 0x1.0b03662a567a8p-240, 0.0,
     0.0, 0.0, 0x1.4b6582f2689efp-70, 0.0, 0.0, 0x1.709d99dae27f6p-179,
     0x1.0aa1bdecf5c17p-247, 0.0, 0.0, 0x1.71aa68d50ac37p-265, 0.0,
     0x1.154e8ded9fdcep-376, 0.0, 0x1.8e82fe339989ap-259, 0x1.8f6280a768c91p-251,
     0x1.5d2d91ce26e3cp-300, 0x1.ca47b8158d242p-909, 0.0, 0.0, 0x1.3c47c749688b9p-285,
     0x1.1e0d854f3851bp-405, 0x1.b81aac15e6ca6p-683, 0x1.77b24fc5444e4p-345,
     0x1.0b4a16a962233p-255, 0x1.1319b8a3fcb4ap-797, 0x1.62e990022bc38p-130, 0.0,
     0x1.e03f39d0d3826p-376, 0.0, 0x1.aefcac252ccc8p-382, 0x1.23eba816fe03ap-997,
     0x1.a04855cb81e12p-612, 0.0, 0x1.f92c11d20f10ap-410, 0x1.29ce765584213p-755, 0.0,
     0x1.b4557fd62b5a5p-571, 0.0, 0.0, 0.0, 0.0, 0x1.ee4096a3ae992p-194, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cfd258f8c669dp-1020, 0x1.9d0b783b77986p-902,
     0x1.2426c03f1f0c7p-1, 0x1.bb77427e3510fp-20, 0x1.d225a4ed83837p-447,
     0x1.425b3f19273edp-600, 0x1.a8c817b56fa8dp-452, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6f30f9b8c51ep-766, 0x1.c8a5ff0b7150ap-175, 0x1.7de2428d84a6ep-382, 0.0,
     0x1.068322b1acb59p-911, 0x1.bebaf2eec61fbp-927, 0.0, 0x1.0f23870579854p-444, 0.0,
     0.0, 0x1.2e31cd7d33541p-161, 0x1.b09844afef483p-758, 0x1.5982e3d8d7cd4p-552,
     0x1.a3bd71b0c445fp-984, 0x1.3a1f13eb7d1fap-156, 0x1.293468ab5d499p-288,
     0x1.03bd1b0733048p-877, 0x1.daac6943fc9aap-5, 0x1.ae6b23244b4c2p-23,
     0x1.0508a2fef8967p-921, 0.0, 0x1.942029dcd176dp-47, 0x1.7bc7c938049a9p-1004,
     0x1.478756a297f93p-132, 0x1.6e8efba39838ap-581, 0.0, 0x1.aac272ed41a9ap-152,
     0x1.823991f70249bp-770, 0.0, 0x1.6ce57bea9edb5p-967, 0x1.990f5ae2e2a86p-259, 0.0,
     0.0, 0.0, 0.0, 0x1.e572cba193bf9p-136, 0.0, 0.0, 0.0, 0x1.a9b3cf8cbf617p-302,
     0.0, 0x1.505a3549a9ce5p-254, 0.0, 0.0, 0x1.b597de2662d8p-144,
     0x1.7e86ffe7e9eb7p-364, 0.0, 0x1.500a7ff4cc256p-94, 0x1.5cf3d3a7cbce3p-894, 0.0,
     0x1.1b9f9092e5b11p-878, 0.0, 0.0, 0x1.e0557383a6cdep-791, 0x1.548433c36a30fp-949,
     0.0, 0x1.6e8d920ad7169p-354, 0x1.fd6a7da636a41p-395, 0.0, 0.0,
     0x1.a0ee203d5dad2p-746, 0x1.897c7d24a0dabp-451, 0x1.da1782525a4d1p-362,
     0x1.9ff2b12a38859p-581, 0.0, 0x1.446512441ab4fp-629, 0x1.e2deeeb4c336cp-911,
     0x1.493196f8cf24cp-87, 0x1.fd60a111556ap-37, 0.0, 0.0, 0x1.e9f7845d568d8p-558,
     0x1.793cdb06535f9p-924, 0x1.d8071d845c0edp-632, 0.0, 0x1.72f27addbe053p-731,
     0x1.1b28b260b6aeep-30, 0x1.615b5d9f040afp-751, 0x1.47a727edb375ap-843,
     0x1.2c7985730c233p-3, 0.0, 0.0, 0.0, 0.0, 0x1.71edd508e069ep-957,
     0x1.7fa65edf475c1p-808, 0x1.bfd7cfc12cd62p-783, 0.0, 0.0, 0x1.3ac9819dc6e11p-52,
     0x1.33861bfc266acp-406, 0.0, 0x1.4405051148e02p-965, 0.0, 0x1.7eabd8b9994b3p-821,
     0x1.e8f80e8f331fp-1022, 0.0, 0x1.6cfc04df4e545p-470, 0.0, 0x1.2c901ab736003p-365,
     0x1.0240c639b0e0bp-708, 0x1.7b6f74d59841bp-116, 0.0, 0x1.f7be3d3778e18p-637, 0.0,
     0x1p0, 0x1.0cd38d275520cp-680, 0.0, 0.0, 0x1.5ee60210848a8p-292, 0.0,
     0x1.229aece2daf2dp-574, 0.0, 0x1.dcf0239eccfd1p-804, 0.0, 0x1.6427caee87da2p-852,
     0x1.05217b3c9c76cp-794, 0.0, 0x1.3742d288ee3d6p-197, 0x1.d7aeda98083dbp-787,
     0x1.b65fc642e0567p-557, 0.0, 0.0, 0x1.e5551dbced3acp-267, 0.0,
     0x1.4676613a34e75p-302, 0x1.371634a3b5feep-756, 0x1.d94ac60a68211p-53, 0.0,
     0x1.e1fe9ca9ea184p-498, 0x1.ddc02f84cdabcp-321, 0x1.6e32e776ec0c8p-532,
     0x1.fc0f387bb5fbcp-887, 0x1.5c1bd7325c6d3p-344, 0.0, 0.0, 0.0, 0.0,
     0x1.59458b8e26126p-777, 0.0, 0.0, 0.0, 0x1.ba9ceec156928p-827,
     0x1.d575162897a1fp-989, 0x1.a1be8696aeb46p-1022, 0.0, 0x1.9817f0fc63799p-486,
     0.0, 0.0, 0.0, 0x1.41ce93bdc8c9cp-447, 0x1.3019438567668p-39,
     0x1.bedbd8cf29aa9p-205, 0x1.bd1a3c9a33faap-636, 0x1.0c757cd2a522bp-2,
     0x1.c05e8168aa46ep-176, 0x1.02ea02ae5d0d3p-901, 0x1.663396fe2441cp-303, 0.0,
     0x1.0880bd988f504p-308, 0x1.7176267d15a8cp-142, 0.0, 0.0, 0.0, 0.0,
     0x1.bbe108db07f83p-606, 0x1.5b6e3a1aae473p-8, 0x1.9439bf5b39a24p-365, 0.0, 0.0,
     0x1.37fa3b8f45eb7p-11, 0.0, 0.0, 0.0, 0.0, 0x1.68bcfa61371d4p-419,
     0x1.ece61131e3acp-191, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.405c9df2ae076p-308,
     0x1.394cd9f48321fp-988, 0x1.e91e68064663dp-641, 0x1.1c9c9ce85675p-83,
     0x1.389ab9e1e044cp-142, 0.0, 0.0, 0.0, 0x1.f0450c2be8ddcp-645, 0.0,
     0x1.af3a39db4f5fp-72, 0.0, 0x1.982626ebfc97fp-416, 0.0, 0x1.bc4add7ebcb0fp-762,
     0x1.74d9f9886a964p-586, 0x1.6a60261e25793p-986, 0.0, 0x1.27b857565f816p-631, 0.0,
     0.0, 0.0, 0x1.eed8c8261597p-355, 0x1.cdd1dfebf68e2p-128, 0.0,
     0x1.ae849ab6fbdcp-636, 0.0, 0x1.b896b2cc8d4f4p-507, 0x1.dc6b720a2fb5p-41,
     0x1.ce3079492a784p-780, 0.0, 0x1.f4d243fd23496p-545, 0x1.938510ddac039p-811, 0.0,
     0x1.294fd76c47961p-244, 0.0, 0.0, 0x1.b48f0b5623027p-287, 0x1.0cc958c7b9d57p-66,
     0.0, 0.0, 0.0, 0.0, 0x1.9031c78dae06fp-242, 0x1.37247cff6336dp-685, 0.0,
     0x1.f5910c129a03p-927, 0.0, 0.0, 0x1.0a2880881026dp-567, 0x1.123c42a9343fbp-942,
     0.0, 0x1.42fddb8c00f02p-598, 0x1.9ee803c20e2cdp-139, 0x1.654700bb68a64p-725,
     0x1.281fdc8411efep-505, 0.0, 0.0, 0x1.5191a21f8aaeep-286, 0x1.bbd6c850b9563p-931,
     0.0, 0x1.0e36db595320cp-591, 0.0, 0x1.773612be6d244p-745, 0.0,
     0x1.623c5f4d74bc9p-74, 0.0, 0x1.e7172f407a21p-827, 0.0, 0x1.3e231036b771dp-1020,
     0.0, 0.0, 0x1.785af1ab1a6cap-721, 0x1.cee92e0036642p-355, 0x1.ca94367c2c60ap-276,
     0x1.7afbf9d56727p-273, 0x1.9497bb87de14ap-705, 0x1.bdebb6e2aa7a2p-435, 0.0,
     0x1.ca46cea448fp-714, 0.0, 0x1.6ff9a5ed108d3p-274, 0x1.7e884839e7079p-930, 0.0,
     0x1.d270509feb1b8p-11, 0.0, 0.0, 0x1.2dd4e8b931fd9p-464, 0.0, 0.0, 0.0,
     0x1.cedef83e6071dp-140, 0x1.90a1d58669cd4p-99, 0x1.9d76057bf5349p-969, 0.0, 0.0,
     0x1.9935d5b0040dcp-322, 0x1.b56b00d37df01p-962, 0.0, 0x1.c5627ed74d74bp-154, 0.0,
     0.0, 0.0, 0.0, 0x1.9be2d760be79fp-959, 0.0, 0.0, 0x1.9ef4e38c8d54cp-378,
     0x1.fd87e81a6a56ep-1003, 0.0, 0x1.5f2c48bfa1e58p-450, 0x1.4eb41aeba5bcdp-246,
     0x1.5783620d730fep-206, 0x1.045e512550b04p-212, 0.0, 0x1.d8170a42f0a5cp-638, 0.0,
     0x1.558ff6dc70292p-567, 0x1.815ce3506c84fp-96, 0x1.1e6fec764bdc6p-217, 0.0
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
    
    global_bench_acc = 0.0;
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
            tmp1 = Sleef_atanhd1_u10purecfma(tmp0);
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
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_atanhd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
