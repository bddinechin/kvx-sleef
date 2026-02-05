/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_acosd1_u35purecfma.c --function \
 *     Sleef_acosd1_u35purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.1ea27dcdf174dp-452, 0.0, 0.0, 0x1.cd029c3d0ff39p-807, 0.0,
     0x1.8528c126fe7bdp-820, 0.0, 0x1.b134b9fc49a73p-950, 0x1.df1fe929aa83p-643,
     0x1.0bb1dfa68c49cp-884, 0x1.9f4c6077e8561p-518, 0x1.950d0e5b934e5p-493,
     0x1.cb8564f1c29fbp-814, 0.0, 0.0, 0x1.00b0c3abe672ap-201, 0.0, 0.0,
     0x1.e19a71a3965f3p-625, 0.0, 0.0, 0x1.79af76f9fd127p-733, 0x1.72926bfa912d8p-938,
     0.0, 0x1.c12ee6f193797p-732, 0.0, 0.0, 0x1.689ae5297ff1fp-454, 0.0,
     0x1.8c28605510474p-724, 0.0, 0x1.856cf381ca6fp-894, 0.0, 0x1.8e2e3351867b5p-629,
     0.0, 0.0, 0x1.667c1098312aep-68, 0x1.b628298ea2ae8p-885, 0x1.64a1d4c591473p-681,
     0x1.ee06cb48af1b3p-54, 0.0, 0x1.96114903d1ff4p-83, 0x1.9c5ceabd6b4c3p-749,
     0x1.06dad516f2a2fp-189, 0x1.5a70685b04991p-717, 0x1.0975971f98becp-109,
     0x1.e5e613897a05ep-398, 0x1.2fb57ed17e4b3p-573, 0x1.c6161459ccdc8p-522,
     0x1.2baec947578f1p-703, 0.0, 0.0, 0.0, 0x1.54bb6ee231812p-862,
     0x1.bf5ab7ce1bce6p-14, 0.0, 0.0, 0x1.0616b8e13bce9p-827, 0.0, 0.0,
     0x1.340cd8161e67fp-128, 0.0, 0x1.cea26cc3c087ap-261, 0.0, 0.0,
     0x1.98595bbfa38b4p-468, 0.0, 0x1.e95ba937a147p-134, 0.0, 0x1.3b5524fc5392fp-582,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a32e3781128dp-359, 0x1.6a22376f6752ep-1022,
     0x1.26478146e4c84p-469, 0.0, 0x1.26aef89845da4p-44, 0x1.7f02a1ce7feaap-211, 0.0,
     0x1.8dfd4c3af1f6cp-606, 0.0, 0x1.68e950a9bd353p-88, 0.0, 0x1.77fba46aba01bp-310,
     0.0, 0.0, 0x1.ae260d76f971bp-385, 0.0, 0x1.38915a47306e2p-891, 0.0,
     0x1.9db1d265c8acap-728, 0.0, 0.0, 0x1.e3832a821cafcp-432, 0.0,
     0x1.3c8c7b845559cp-943, 0x1.c35691b90c80bp-779, 0x1.803821ff579e3p-252,
     0x1.458f70cd59a1cp-577, 0.0, 0x1.a02f409225067p-66, 0.0, 0x1.03ea2dd3e7adcp-564,
     0x1.6641592d80cadp-641, 0x1.a96b79606b058p-784, 0x1.8548ecc599ea5p-345,
     0x1.037a56179ea38p-505, 0x1.16821e71a2bap-806, 0x1.086fe1be2023bp-456, 0.0, 0.0,
     0x1.07edb09b6aaf6p-794, 0x1.22dee52e6655dp-906, 0x1.efd55cc2f0f33p-23, 0.0, 0.0,
     0x1.baed9e3c5aebp-954, 0x1.200e76176b17cp-167, 0.0, 0.0, 0.0, 0.0,
     0x1.aad8ca70f8193p-1010, 0x1.1f4e56f2ae536p-188, 0.0, 0x1.41fb60ddc84bdp-366,
     0x1.88b907b5bca98p-768, 0x1.fdbc78247e95dp-415, 0x1.166f9f52c19d2p-423, 0.0, 0.0,
     0x1.e5ab0d63097ecp-296, 0.0, 0.0, 0x1.0720c7ad2d79cp-788, 0x1.11a79fd7fbcb4p-475,
     0x1.e3864cc11b139p-682, 0.0, 0x1.0ca3e7b8b72bap-180, 0.0, 0.0,
     0x1.9cb399be4c5aap-541, 0.0, 0x1.07902da200756p-386, 0.0, 0x1.9fa87debff7edp-599,
     0x1.b3a6b5a6b23ffp-979, 0.0, 0x1.35a24e8cc903bp-565, 0.0, 0.0,
     0x1.bd77fcc3ae48bp-679, 0x1.0f8fea2e1b40fp-66, 0.0, 0x1.571cc4139653dp-855, 0.0,
     0.0, 0.0, 0x1.37d6ad628d351p-75, 0x1.db76ea79a5d07p-133, 0x1.d0e31b01d15dbp-925,
     0x1.63855983e6926p-325, 0x1.a0b8bfce7c363p-73, 0x1.f6cad1f48c949p-892,
     0x1.f585c76334a66p-689, 0x1.f47e35042931ap-140, 0x1.56bcb735f3f71p-761, 0.0, 0.0,
     0.0, 0x1.466f9d6199aaep-11, 0x1.e9c2907ae30b6p-414, 0x1.1c28e06db7b5cp-810,
     0x1.490dbd074f7eap-219, 0.0, 0x1.a09473e11ae39p-647, 0x1.f69b06313826bp-483, 0.0,
     0.0, 0x1.5e9bfe68504efp-191, 0.0, 0.0, 0.0, 0.0, 0x1.43018fbbed61fp-197,
     0x1.987d7b70d6ffdp-722, 0x1.07788f72e5277p-941, 0x1.a0369ac2cd842p-887,
     0x1.72e38a8de0dcdp-578, 0x1.649cc52137e8cp-354, 0.0, 0.0, 0x1.c25a59a070892p-648,
     0.0, 0.0, 0x1.104fd8429bd41p-1015, 0.0, 0x1.3364b6959ef02p-439, 0.0, 0.0, 0.0,
     0.0, 0x1.05c3cc79e5cfdp-602, 0.0, 0x1.5f523391dadc6p-686, 0.0, 0.0,
     0x1.d44d5136b4baap-744, 0.0, 0x1.366c4029120bep-658, 0.0, 0.0, 0.0,
     0x1.dca73a6b184e4p-458, 0.0, 0x1.832e6e11f3361p-148, 0.0, 0x1.045d496e4e9b6p-1,
     0.0, 0x1.9a6a1bcd9d07bp-285, 0x1.0f315620be906p-484, 0.0, 0x1.b8b00a2f6ffbep-688,
     0x1.cf81819cbfeeep-227, 0x1.3de3b859e34dbp-320, 0.0, 0.0, 0x1.488a4b9381a24p-42,
     0x1.6b5ad4afcc134p-645, 0.0, 0.0, 0.0, 0.0, 0x1.320e05b4230bp-209, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8bfc5e550cae5p-414, 0x1.4ad3678c50f88p-493, 0x1.9ec5aaadc44f8p-256,
     0x1.7e2b21431d2f9p-37, 0x1.b3e7464205eb2p-172, 0.0, 0x1.26959e35389b1p-418, 0.0,
     0x1.1070eea87e2eap-731, 0x1.e6eda96ea4669p-1021, 0.0, 0.0,
     0x1.daf5d6ba6db5cp-948, 0.0, 0.0, 0x1.a4a358becf23bp-608, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.899d28d51e53bp-739, 0x1.5ee650f15fbdap-299, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e47d9329e8b9p-299, 0x1.a9ed00b7a157fp-162, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9cc459ada2e76p-617, 0.0, 0x1.fb1331a45729fp-698, 0x1.5529b206579b7p-961, 0.0,
     0x1.c2152dbefd059p-282, 0.0, 0.0, 0x1.f3b02b0b50c62p-330, 0.0,
     0x1.ad20b5f597067p-853, 0.0, 0.0, 0x1.940675b2cb079p-263, 0x1.33721f2d938e6p-77,
     0x1.f2c7412c143cfp-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.64bd91d3b6888p-366,
     0x1.46f1d97a4f6d8p-616, 0.0, 0x1.f8daa5249e745p-1015, 0x1.759c13d3114e4p-26, 0.0,
     0.0, 0.0, 0.0, 0x1.e5c95dfb9e80bp-167, 0x1.95636f2492ae3p-598,
     0x1.6635e8f1ac203p-380, 0.0, 0x1.c5d575b38d8e4p-627, 0x1.7b41676199debp-657,
     0x1.e980369645b88p-954, 0.0, 0.0, 0.0, 0.0, 0x1.83195adbccf63p-179, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aef845e7d6ac4p-789, 0x1.19552d7792ebcp-899,
     0.0, 0x1.95047ab93d79p-205, 0.0, 0.0, 0x1.1233c752ed5e1p-455,
     0x1.e65e25682704ap-381, 0x1.29cdb46df04d8p-361, 0.0, 0x1.612c3d1251ebbp-150,
     0x1.1fb2e68ce7be1p-805, 0x1.8b8a11df1aff1p-354, 0x1.3f97adb06f1bdp-292, 0.0,
     0x1.9ef2087eaf46fp-490, 0x1.05ad45cfa5b76p-989, 0.0, 0.0, 0.0, 0.0,
     0x1.4e2458d5d2a3fp-979, 0.0, 0x1.5fbfd7673f17ap-169, 0x1.4079909bd05eap-636, 0.0,
     0x1.ecc55471248ccp-545, 0x1.e584013528ff4p-959, 0x1.f5308965db38cp-546, 0.0, 0.0,
     0x1.fbd3440d016b3p-268, 0x1.4b429b6ef3fa9p-779, 0x1.db2734cd11eabp-988, 0.0, 0.0,
     0x1.3329fc0207f9fp-953, 0.0, 0.0, 0x1.806323e02f757p-858, 0.0,
     0x1.aa94909abda55p-392, 0x1.b61ffb9350519p-362, 0x1.03a587cd7e521p-307, 0.0,
     0x1.93ad9c85826d8p-47, 0x1.0326c7906a289p-856, 0.0, 0.0, 0x1.6a9b581446ca7p-538,
     0x1.2eb40ff7fc099p-670, 0.0, 0x1.af489f50dcd34p-916, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.a2e0aa65f76b9p-728, 0x1.b479962f3af05p-285, 0x1.6a7892a7b109bp-71, 0.0,
     0x1.d6ebace712146p-358, 0.0, 0.0, 0x1.8d2911dbd33fep-861, 0x1.285cac2857f77p-491,
     0x1.56fb44b20809ap-256, 0x1.6f7c38bd6472cp-31, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b053cb02fdc56p-623, 0.0, 0.0, 0.0, 0x1.38fa2a5b1954ep-635,
     0x1.9b58dd5a88a96p-909, 0.0, 0.0, 0.0, 0x1.b9bd996d5e99fp-288, 0.0,
     0x1.4853604dd3646p-487, 0.0, 0.0, 0x1.8e243071844c1p-927, 0.0, 0.0,
     0x1.d31bea4e664d6p-733, 0.0, 0.0, 0.0, 0x1.347593a2a6aadp-942,
     0x1.62c8c870b1ca8p-43, 0.0, 0.0, 0x1.ab8ffdb87d52bp-477, 0x1.04e928cb16334p-743,
     0.0, 0x1.3e1ad9c00fdd1p-921, 0x1.7136920959479p-186, 0.0, 0x1.7c42e968960d6p-756,
     0x1.aa0c05bbd98fbp-988, 0x1.fa618e587c3p-419, 0x1.47a8a8946fec2p-4,
     0x1.8bbb42a6c02fcp-221, 0x1.c12e669b0f0fdp-117, 0x1.1daf3816181d9p-526,
     0x1.84ffb725bc79dp-905, 0x1.9be2d2ac90436p-248, 0x1.8e583f4818a09p-850, 0.0,
     0x1.cfbd40a80f1acp-972, 0x1.d60464c947e1ep-464, 0x1.374be2a0d606dp-393,
     0x1.92382af87bb5p-206, 0.0, 0x1.70a9489531359p-597, 0.0, 0.0, 0.0, 0.0,
     0x1.3c82011401b7fp-372, 0x1.0b90cc6587c51p-995, 0x1.667578804cda9p-732, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a9a7d517f033dp-63, 0.0, 0x1.5b0f9c4e0bfap-20, 0.0,
     0x1.066c515f27f1dp-735, 0.0, 0.0, 0x1.6c5cf61df5c1p-151, 0x1.044bb4b641211p-67,
     0x1.c7118f387e1cbp-816, 0.0, 0x1.f124147c74506p-248, 0x1.30d5d60673e21p-601, 0.0,
     0x1.f7bd7d2eca956p-951, 0x1.82999a81b1117p-655, 0.0, 0x1.e6e0dcdb954a7p-884,
     0x1.e73a7640ebd2p-954, 0x1.1ef3195b894c8p-389, 0x1.713bd69cff233p-250, 0.0, 0.0,
     0.0, 0x1.d8f9881beae24p-218, 0x1.e142637955752p-175, 0x1.8b0d0981679d9p-799, 0.0,
     0.0, 0x1.f25c24a094707p-349, 0x1.f389a7038d4edp-553, 0.0, 0x1.59a3c144dc967p-857,
     0x1.4c03d93d4b9b2p-673, 0.0, 0.0, 0x1.6cd6f900aa9cbp-658, 0.0, 0.0,
     0x1.408a16fdc820ap-275, 0.0, 0x1.4f1137251af8bp-816, 0.0, 0.0, 0.0, 0.0,
     0x1.0fac45c9cc38fp-338, 0x1.a82170be1322ep-265, 0.0, 0x1.a5a3eed0ffcc3p-537,
     0x1.9da72d31d315cp-201, 0x1.87d98a5f06ffdp-969, 0.0, 0x1.b457830c762c6p-471,
     0x1.7b4ff21ba2bdcp-266, 0x1.2c9b244494168p-184, 0x1.1cb0e28a31eep-142, 0.0, 0.0,
     0x1.3910838337159p-71, 0.0, 0x1.613a6132b6d13p-263, 0x1.6ddb927f785e8p-200, 0.0,
     0x1.6a7d70b198b49p-242, 0.0, 0.0, 0.0, 0.0, 0x1.b1c788b53e183p-1013, 0.0,
     0x1.a101d38d740b5p-595, 0x1.0363dd7aebd85p-105, 0.0, 0.0, 0.0,
     0x1.f1c8d73f935fp-957, 0.0, 0.0, 0x1.c948ebca8498p-466, 0x1.0dd05b6a52236p-381,
     0.0, 0.0, 0x1.680284123b27fp-906, 0x1.70223aa11f832p-181, 0x1.cfb35a8f3e6f9p-732,
     0x1.4dcfaecde52aap-436, 0.0, 0.0, 0.0, 0x1.dcb659fdcb945p-305, 0.0,
     0x1.c64b5aafd5497p-216, 0.0, 0x1.75a7c2ac09cadp-41, 0x1.d15c36f86dc97p-450, 0.0,
     0.0, 0x1.b8d6ec1177f7fp-979, 0.0, 0x1.9f8583dff7da3p-766, 0x1.71b7f717717f5p-109,
     0x1.5e62917a3064dp-926, 0x1.f52e05277edb1p-299, 0x1.9c31678dc55d4p-201, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.24640b1c70a1fp-137, 0x1.f652f59b377f6p-199,
     0x1.598e9cc8f79ecp-422, 0.0, 0.0, 0x1.8bfadfc3f1b36p-132, 0x1.d773b5a59ed4p-101,
     0x1.95315adbaaa85p-805, 0.0, 0x1.9f7367d7c6702p-695, 0.0, 0x1.a10b9b0afe5a9p-908,
     0.0, 0.0, 0.0, 0x1.fcf2270a92c87p-488, 0.0, 0x1.b5fc675ba25c7p-227,
     0x1.0eac21d7a9acbp-958, 0.0, 0.0, 0x1.b3688f164f32ep-654, 0x1.4a036dac4a4e9p-940,
     0x1p0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.96522789ed123p-880, 0.0,
     0x1.763b09496eedap-537, 0.0, 0.0, 0.0, 0x1.6229e9209859cp-822, 0.0,
     0x1.cefe1f2b3ee96p-599, 0x1.84a4a49caf726p-568, 0x1.aa6d8ed15d71fp-218,
     0x1.9f38751817da2p-822, 0.0, 0.0, 0.0, 0x1.a4462e1c0891ep-491, 0.0,
     0x1.fafbf4b77c28cp-135, 0.0, 0.0, 0.0, 0x1.739985044e5c4p-616,
     0x1.062eaa85801e8p-395, 0.0, 0x1.da5b3b05e22b5p-570, 0x1.3908d7a4e1a12p-140, 0.0,
     0.0, 0.0, 0x1.1ab5e961d615cp-560, 0x1.fdf57ae752c0ep-715, 0.0, 0.0,
     0x1.5cb9aae2d5403p-205, 0x1.6221058c6203ep-21, 0x1.c2e1ee2bf032bp-697, 0.0, 0.0,
     0.0, 0x1.8c15bbfeb39eep-669, 0.0, 0.0, 0x1.053b245d2c259p-472,
     0x1.8a1d0c610357dp-849, 0.0, 0x1.e8d5ca939f59cp-199, 0.0, 0.0,
     0x1.0a8e37da3e0acp-332, 0.0, 0.0, 0.0, 0x1.15cec94ab3e62p-80,
     0x1.362f3fe26c3f9p-354, 0.0, 0.0, 0x1.d7112f6f4d7e2p-593, 0x1.91fe683bcb0efp-876,
     0x1.256805b2da3dcp-752, 0.0, 0x1.d8596b926554fp-982, 0x1.7b01429f175d8p-116, 0.0,
     0x1.b513fbbf67912p-11, 0.0, 0.0, 0x1.534e30ffa24d2p-566, 0.0, 0.0,
     0x1.52c1bdfddaa4bp-566, 0x1.c776321fe9c9fp-855, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c49284f008f9dp-559, 0.0, 0x1.2d43a533421c9p-827, 0x1.48832e9e0bf6ep-664,
     0x1.13c10aafe599bp-374, 0x1.2d1aaaebb2d8p-710, 0.0, 0.0, 0x1.d6838b27eaca7p-283,
     0x1.811a2ddfe3486p-227, 0.0, 0.0, 0x1.653c7cc637cefp-820, 0x1.25d08aea61384p-215,
     0.0, 0.0, 0x1.475b3c4763fcep-62, 0.0, 0.0, 0x1.a9b411aa53e6cp-747,
     0x1.b1f3523300ec4p-799, 0.0, 0x1.5d95b9af357a4p-492, 0.0, 0x1.971f6877beb81p-614,
     0.0, 0.0, 0.0, 0.0, 0x1.df0774b9901ebp-712, 0.0, 0.0, 0.0, 0.0,
     0x1.62df2ad85af1ep-268, 0.0, 0x1.1eccfd5eb0e76p-305, 0x1.8a2abab4deaa2p-907,
     0x1.fe6312e0efdf3p-523, 0.0, 0.0, 0.0, 0x1.00baf17ab4f09p-66, 0.0, 0.0,
     0x1.a6dc7e2506f12p-739, 0x1.0f7536e5d03d4p-543, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.49e4270a495f6p-556, 0.0, 0x1.cdf2c4c5a23f6p-565, 0.0,
     0x1.7ece925e3aca5p-628, 0x1.1ca266ca4fea2p-447, 0.0, 0.0, 0x1.8ab7201e84d85p-86,
     0.0, 0x1.c110b9056ab31p-271, 0.0, 0x1.8613a27e34201p-1015,
     0x1.5666faf646292p-302, 0x1.e17a67756d755p-364, 0x1.65dce5e3dd5efp-761, 0.0,
     0x1.af26fcc5f6775p-432, 0x1.0350570fe70b9p-1013, 0.0, 0.0, 0.0,
     0x1.adabf8dc1b3eep-207, 0x1.29d3ee5fbf4a9p-388, 0x1.36e03173077eap-868,
     0x1.910394c35f9b5p-666, 0.0, 0.0, 0x1.413adfc51c83bp-852, 0.0,
     0x1.37afa783d6aafp-176, 0x1.c73670dcb3b6p-273, 0x1.dcac3757a8b54p-738, 0.0, 0.0,
     0.0, 0x1.11a5d08ac335p-403, 0.0, 0x1.816b147ec0543p-793, 0x1.4fcbb05ddcb84p-557,
     0.0, 0.0, 0x1.9f56abc398ec2p-923, 0.0, 0x1.44dad1f9af34bp-124, 0.0,
     0x1.1a8ab8e50839ep-470, 0.0, 0.0, 0x1.7372997344148p-808, 0x1.d0a1541c24f3ep-50,
     0x1.84413547fbf1bp-948, 0.0, 0x1.4460fe6550c89p-208, 0x1.f81954d365c54p-996, 0.0,
     0x1.a74bb997c3ef9p-126, 0.0, 0.0, 0x1.074af89417523p-155, 0x1.c909db620f93p-824,
     0x1.a4db62276a52cp-456, 0x1.26deeec85c25ap-288, 0.0, 0.0, 0x1.900286fd18941p-178,
     0x1.4c7d9842447f1p-389, 0.0, 0x1.bf9efc7c4be97p-171, 0.0, 0.0,
     0x1.e955003530eefp-542, 0x1.2f342ad41f6bep-536, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4c3d7a56a86ecp-190, 0x1.e4c7ad2d01ee7p-114, 0x1.ebbe3da1ec952p-530,
     0x1.c3aaac6f192fep-235, 0.0, 0x1.7c900de3982fep-285, 0x1.8ccbeb60ec13dp-705,
     0x1.e090d7f914023p-442, 0.0, 0.0, 0.0, 0x1.ac4ad6b4fffdep-197, 0.0, 0.0, 0.0,
     0.0, 0x1.67e61bdeeabb4p-300, 0x1.816bb9a97b53ap-794, 0x1.3a8d608da84cfp-423, 0.0,
     0x1.801d92f799f7p-459, 0.0, 0x1.c679d71b7582fp-189, 0x1.a5eeb56bb719dp-547, 0.0,
     0x1.9172e964a94efp-768, 0.0, 0x1.6ad2a6bf045d2p-1020, 0x1.2e233a34bebe1p-987,
     0x1.c1c7e792c237dp-883, 0x1.601a612de2c1dp-173, 0.0, 0x1.7617e5c07f1d8p-461, 0.0,
     0x1.e80fa96841775p-104, 0.0, 0.0, 0x1.90b08ac4075cbp-648, 0x1.62147148e8139p-118,
     0x1.47dae41ea92aap-896, 0x1.64c500fc983c1p-906, 0.0, 0x1.bb96a294a3433p-444, 0.0,
     0.0, 0.0, 0x1.69c5ec1d56284p-916, 0.0, 0x1.33b71daff3937p-618, 0.0, 0.0,
     0x1.2cc5a6280757cp-934, 0.0, 0x1.439ece1980a37p-634, 0x1.f8e8b1538b45p-719,
     0x1.ef1bb1ed7fefcp-234, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a0f5d305d9dc2p-306, 0.0,
     0x1.46a4f923a5865p-266, 0.0, 0x1.e101e4c582f6cp-213, 0.0, 0x1.c12096de386b6p-783,
     0.0, 0.0, 0x1.c9a9875e34591p-436, 0.0, 0.0, 0.0, 0x1.391cf782ce2b7p-7,
     0x1.d59c17f0cfdep-828, 0x1.763f3878067a5p-716, 0x1.3daa27a26de29p-132,
     0x1.3b7a3fd12477bp-536, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d1e741d4b15b6p-426, 0x1.3164db72505b6p-995, 0.0, 0.0, 0.0, 0.0,
     0x1.33b12db23a2cap-518, 0x1.70be5c837daa5p-7, 0x1.7decac3be9b86p-580,
     0x1.beb55ee223daap-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8daf03f955d3bp-711, 0.0,
     0.0, 0.0, 0x1.f1f364137594fp-483, 0.0, 0x1.42c06b3b76d09p-828,
     0x1.8697376ec0903p-752, 0x1.ed4af4af2f181p-480, 0.0, 0x1.83b6388e9e64ap-815,
     0x1.a7b66d504fcdbp-99, 0.0, 0.0, 0.0, 0x1.10a8f9a943222p-702,
     0x1.416dab0e7a61dp-138, 0x1.b1ffe559162bap-991, 0x1.e42b306f8de5p-832,
     0x1.159bd50792bebp-303, 0.0, 0x1.b4db2daa25aafp-890, 0.0, 0.0,
     0x1.072d4e708b9bbp-745, 0x1.43fbdaf1f655dp-737, 0.0, 0x1.cfd1569b20faep-256,
     0x1p0, 0x1.4bc086c70f68p-524, 0x1.710dc555eac25p-271, 0x1.f2f22640ccb92p-231,
     0x1.608ec975deed9p-506, 0x1.befda9be23bfdp-867, 0.0, 0.0, 0x1.281450f1c7895p-313,
     0.0, 0x1.fdb49c8612fa7p-720, 0x1.92c63e2d21d65p-511, 0x1.24c47525382d8p-243,
     0x1.02a0adfd3e70dp-988, 0.0, 0.0, 0.0, 0x1.a8b46561a6affp-150, 0.0,
     0x1.1082d551ddeb8p-165, 0.0, 0.0, 0x1.cef438837fd35p-546, 0x1.5d727f2638d82p-98,
     0x1.36f9010bf1b67p-958, 0.0, 0.0, 0x1.57957830de1f4p-550, 0x1.41dc105e6a0dap-284,
     0.0, 0.0, 0x1.33dbbe48f507ep-203, 0x1.063cf1b2f9658p-513, 0x1.fd4c69d31259ap-658,
     0x1.82d4de2dfb1fap-211, 0.0, 0x1.e3ef2a6738acp-256, 0x1.b5ab465fe6fc7p-364,
     0x1.e2172287ef95ap-692, 0.0, 0.0, 0x1.005e3925d5737p-743, 0.0, 0.0,
     0x1.4420582fc10a2p-891, 0.0, 0x1.7b3fd2d0a7447p-814, 0x1.448aef1264ac9p-797, 0.0,
     0.0, 0x1.bb43bfe34c11p-821, 0x1.9dc62b3c6e4a9p-519
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
            tmp1 = Sleef_acosd1_u35purecfma(tmp0);
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
    printf("Sleef_acosd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_acosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
