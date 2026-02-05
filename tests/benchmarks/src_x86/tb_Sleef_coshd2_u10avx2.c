/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_coshd2_u10avx2128.c --function Sleef_coshd2_u10avx2128 \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target x86_avx2128
 * 
**/
#include <stdint.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0x1.146ff7f4f9ef8p-431, 0x1.796dbc0db7a6dp-770, 0x1.6a5049c2b3a0fp-788, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1ec8a7bc5d4bcp-1009, 0.0, 0.0,
     0x1.ab5b17a3288abp-651, 0.0, 0.0, 0x1.28bd0cce907fdp-549, 0.0,
     0x1.0bf88a246e8d4p-124, 0x1.1cbb66daf0e2p-438, 0.0, 0x1.dfdcfc3360409p-986,
     0x1.210ab78c69756p-124, 0.0, 0.0, 0x1.7eeefb5f82613p-793, 0x1.707a73fc35d3cp-494,
     0x1.173c2d02595bcp-830, 0x1.4b576692c352fp-783, 0x1.54eafb31d495cp-687, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2c45e6abbdfbfp-693, 0x1.a854b18aacf95p-458,
     0x1.fe44abbf2221ep-666, 0.0, 0x1.64774f9c96185p-845, 0x1.616b0c89ba42ap-33, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1e98478ca8551p-74, 0x1.f5d34ff71f504p-511, 0.0, 0.0, 0.0,
     0x1.f117b659c6e95p-942, 0x1.eb7150b0266f2p-1017, 0x1.85dcac3bda914p-229,
     0x1.7cd585599413cp-107, 0.0, 0x1.937c9f361b844p-356, 0x1.42a9ccfcadccdp-307,
     0x1.e1ce61e035a56p-897, 0.0, 0x1.4835b86fee6bep-62, 0x1.d27430e0af0ap-503,
     0x1.ba3ad34555d4fp-446, 0.0, 0x1.0b97369b871bp-54, 0x1.20df071e6c412p-617,
     0x1.5f34d9bb6cb86p-698, 0.0, 0x1.b5953e277a7p-76, 0.0, 0.0, 0.0,
     0x1.ba31208c3c367p-301, 0.0, 0x1.bceac47af618fp-9, 0x1.4930e464d7257p-221, 0.0,
     0x1.67b742eacccbcp-814, 0x1.c6dd53b4cc414p-581, 0.0, 0x1.b32222340ef74p-848, 0.0,
     0x1.d8bc4b70878fep-599, 0.0, 0x1.34e92bc3d52d1p-725, 0.0, 0.0, 0.0,
     0x1.c0eeb03b42182p-402, 0x1.784dae43ee3c9p-313, 0x1.24a34de78cc94p-194,
     0x1.0a38a1eb91129p-243, 0x1.d4498c04637ecp-545, 0x1.bfa46239d7e3fp-730,
     0x1.4ede6c3e19bfdp-575, 0.0, 0.0, 0x1.f2bb14d845685p-724, 0x1.d2f21c7ca5c73p-659,
     0.0, 0x1.ccba610d7555ep-977, 0x1.ca1b40bfc8464p-953, 0x1.0465b0f31dbe5p-426,
     0x1.f7ae76e6e837ep-985, 0x1.21e9297e7e912p-548, 0x1.e3ba0f0681c2dp-55,
     0x1.7fb2e51040ba1p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5361020415eaap-180, 0.0,
     0.0, 0x1.b909a79df57b5p-657, 0x1.5c5956c1e53c6p-146, 0x1.c990ae9fa8386p-389, 0.0,
     0.0, 0.0, 0.0, 0x1.e6c93044f2935p-241, 0x1.2c29b01968d22p-731,
     0x1.abcc8d9cf49dbp-98, 0x1.7c8ff6fb4173fp-305, 0.0, 0.0, 0x1.24264a5e1f38dp-99,
     0x1.6e30239357115p-363, 0x1.da0371f4cd57p-111, 0x1.65bbc74fb0944p-795,
     0x1.e9475e5b8905dp-281, 0x1.a1f2f0d2155f2p-932, 0.0, 0.0, 0.0,
     0x1.e071f453fe189p-5, 0.0, 0.0, 0.0, 0x1.536224407f08fp-889, 0.0,
     0x1.4d0a969d58efbp-113, 0.0, 0x1.26b5e32096164p-450, 0.0, 0x1.111e5908db63bp-665,
     0x1.de5ce17d853fp-412, 0x1.e61c38e962c6ep-540, 0x1.b9ef4748c368ap-851, 0.0,
     0x1.1111439bf24cbp-61, 0x1.e2dc3a7a74f3fp-432, 0.0, 0.0, 0.0,
     0x1.00e8880b09984p-825, 0.0, 0.0, 0.0, 0x1.e6852947190b5p-359,
     0x1.9e339f568cb32p-571, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.346029183dc48p-974,
     0x1.dfa53214457b9p-511, 0x1.b77f3b63387ebp-353, 0x1.4dfa1fe023fbep-165,
     0x1.7425c35ee9b94p-263, 0x1.71da1944dbae9p-378, 0.0, 0x1.0209ab91c5702p-958, 0.0,
     0x1.0c3ac65fc7496p-326, 0x1.cb27f439ae094p-757, 0x1.1539c2b0a6b3p-162,
     0x1.b7d99ed27035dp-411, 0.0, 0.0, 0x1.6d58d47c9ab4p-612, 0.0,
     0x1.811cde69da841p-614, 0x1.300e223d29d5dp-334, 0x1.83f14fcc63305p-901, 0.0,
     0x1.6836289ccbf0cp-202, 0x1.c12ae343f0ac4p-317, 0x1.62721f87b2cadp-293, 0.0, 0.0,
     0.0, 0x1.9ea0aab467a04p-783, 0.0, 0x1.48d29e7831036p-400, 0x1.71553160a71ebp-858,
     0.0, 0x1.8e81a6640b162p-578, 0x1.62629f571c732p-973, 0.0, 0x1.1b1d7bd38c64p-475,
     0.0, 0.0, 0x1.e312a3e971014p-636, 0x1.80c4a0276237ep-866, 0.0, 0.0,
     0x1.a35077c2042ccp-146, 0.0, 0x1.fc7b79ea53532p-485, 0x1.57c5ac77bbf9bp-473, 0.0,
     0x1.58d8738070ba6p-51, 0x1.8fbc514d0724p-932, 0.0, 0x1.484548d8917b8p-53,
     0x1.bf43d1d429d59p-896, 0x1.d2db9e620f7dcp-122, 0.0, 0x1.516283a6b4f18p-935, 0.0,
     0x1.847659065905bp-752, 0.0, 0.0, 0.0, 0x1.b8f7dc9a3dfcp-823, 0.0,
     0x1.8620c60611048p-298, 0.0, 0x1.a2a491618292cp-729, 0.0, 0x1.013117b350ea8p-45,
     0x1.2a612b231c5c2p-923, 0x1.7c91791cf968dp-421, 0x1.a88b98ce24b52p-531, 0.0,
     0x1.0c7b3617f732cp-589, 0.0, 0.0, 0x1.435ee14c1419cp-914, 0.0,
     0x1.8e6ece537ecf4p-374, 0.0, 0x1.0fd5fc10c415ep-411, 0.0, 0.0, 0.0,
     0x1.dece92c7c2ae8p-847, 0.0, 0x1.28faa934e21d3p-78, 0x1.02309718095a1p-852, 0.0,
     0.0, 0.0, 0x1.84a9b10b779f5p-127, 0x1.f4d5ed48c58b6p-569, 0.0, 0.0,
     0x1.cb2935aaed0bbp-42, 0.0, 0x1.1b7173efba4b7p-229, 0x1.24742415bbe17p-556,
     0x1.24c6ed6651196p-346, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bad1fd4ce9ce9p-754, 0x1.a4a86a21dc391p-879, 0.0, 0x1.3418431a3224fp-865,
     0x1.ff6a81ba210c8p-950, 0.0, 0x1.44443a7461fbfp-713, 0.0, 0.0, 0.0,
     0x1.a54dd1e17e7a1p-228, 0.0, 0.0, 0x1.afee6d06230ddp-723, 0x1.703d043d04cap-872,
     0.0, 0.0, 0.0, 0x1.6d179bb5a911ap-855, 0x1.3c32e254332bdp-665, 0.0, 0.0,
     0x1.d767477979112p-746, 0.0, 0x1.7d797dd39ac27p-652, 0.0, 0.0,
     0x1.d9a0ba2b86c77p-630, 0x1.9feaa5c9f7d44p-399, 0.0, 0x1.244e602f6124bp-619,
     0x1.758cd790f1a13p-676, 0x1.e08e9121d72cp-36, 0.0, 0x1.8a11c8ca3301ap-868,
     0x1.8c20e136211c9p-1016, 0.0, 0x1.68e8b401fe39bp-483, 0x1.d441750be1e65p-927,
     0.0, 0.0, 0x1.f2ef260e84ebep-357, 0.0, 0x1.57ba035452623p-414, 0.0, 0.0,
     0x1.28e6d3d801d3bp-278, 0.0, 0x1.552feb3a2f5fcp-116, 0.0, 0.0,
     0x1.5ae3afc3c3936p-20, 0x1.6908cea45b39dp-798, 0.0, 0.0, 0.0,
     0x1.0b55860348e1ap-416, 0.0, 0x1.4974f656f2e04p-68, 0x1.334bf01fd0e14p-855,
     0x1.c0032de3816dfp-505, 0x1.28d2de2317ce4p-170, 0.0, 0x1.8469dbd818994p-151,
     0x1.0714ed67e32a4p-703, 0.0, 0x1.c105ea50eb1ecp-55, 0x1.35f7fa7ec80b6p-335, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.be14fc408abe3p-416, 0x1.cde92c4e432d1p-557, 0.0, 0.0,
     0.0, 0.0, 0x1.70096a6882bbdp-81, 0x1.ed0e20b5a7d64p-460, 0x1.f23bf8346b661p-259,
     0x1.56be1b1d3d307p-678, 0x1.45ce07a7339ecp-779, 0.0, 0x1.ec7f042bb7e49p-967, 0.0,
     0x1.d74ec2394f188p-513, 0x1.4def40c3a80e8p-338, 0.0, 0x1.8cc3c20c736e5p-629, 0.0,
     0.0, 0x1.e8c9dd95f4759p-941, 0.0, 0x1.5225a487b0781p-806, 0.0,
     0x1.1242d2eb3d80ep-158, 0x1.0486c4fae68c8p-121, 0.0, 0x1.b711005fa489fp-791,
     0x1.45cc93ad51ca1p-48, 0.0, 0x1.2ab67087318dp-548, 0.0, 0.0, 0.0,
     0x1.4e27495b018f4p-729, 0x1.e6e301fa3fec2p-861, 0x1.80e4dd4f5e09dp-297, 0.0, 0.0,
     0x1.2873d25f1037ap-666, 0.0, 0.0, 0.0, 0x1.329f33ce7fad2p-966,
     0x1.a95ffd02b337fp-480, 0.0, 0x1.a8c5d25842255p-327, 0.0, 0x1.67403096c326fp-456,
     0.0, 0.0, 0.0, 0x1.38874520e9b2ap-704, 0x1.aa6a07ad5a8f1p-993, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.32a77637fa3cfp-760, 0.0, 0x1.e4a9b4bd4d1c9p-515, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.429f51b783919p-326, 0x1.dbe10f86eb7c6p-881, 0.0, 0.0,
     0x1.02e3d75b9eaefp-782, 0.0, 0.0, 0x1.90d08e823c07fp-1002,
     0x1.2f78a20f8223dp-896, 0x1.4e5d1556ba704p-727, 0x1.8052278744101p-347, 0.0,
     0x1.4e00fd6af09a8p-271, 0x1.d88ddfa2ffbcbp-893, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.62baefd4111d3p-590, 0x1.15da1448abfb7p-311, 0.0, 0.0,
     0x1.292986a97606fp-677, 0.0, 0x1.11f6bb1a081d1p-731, 0.0, 0x1.5e2f5586c447bp-552,
     0.0, 0.0, 0x1.e2999f0cad731p-3, 0.0, 0x1.c7bbfea1523a2p-517, 0.0,
     0x1.156bea00fa59bp-285, 0x1.631f3f9aa9b33p-647, 0x1.0c088147e2d81p-441,
     0x1.61718fd051408p-980, 0.0, 0x1.f05da16979daep-497, 0.0, 0x1.39ecb17719b02p-454,
     0.0, 0.0, 0x1.bb519a36e04f4p-69, 0.0, 0.0, 0.0, 0x1.6f601d5c6d92ep-1013, 0.0,
     0x1.267febfd1e8b1p-570, 0.0, 0x1.840d4866a62efp-644, 0.0, 0x1.616bc6d185194p-243,
     0x1.c6bf38bf11725p-460, 0.0, 0.0, 0x1.8fb7c122f2e17p-643, 0.0, 0.0,
     0x1.3d37a95d95011p-120, 0.0, 0x1.3ca0834158ce3p-632, 0x1.ee32098e976eep-869,
     0x1.6dfa549764dfep-950, 0x1.79a80adf7073bp-118, 0x1.83300b83ce9f3p-490,
     0x1.4ade95d0911c9p-231, 0.0, 0x1.b40b530da5d23p-659, 0x1.d3b947e57ace9p-797, 0.0,
     0x1.cfd63e1a9e96dp-858, 0.0, 0.0, 0x1.9ad6cc7f02841p-716, 0.0,
     0x1.1accfdbbad436p-167, 0.0, 0x1.1f4bfc522311dp-429, 0.0, 0.0, 0.0,
     0x1.713dfa0d6c8cbp-282, 0.0, 0x1.8c7844a208562p-912, 0.0, 0x1.3dd5849f8c572p-502,
     0x1.9cfc3bbdb7c77p-23, 0x1.bb73ffca8ccf4p-587, 0x1.2261f3227bf9dp-723, 0.0,
     0x1.69876a2dcbe23p-910, 0x1.bec7d13c67e0dp-732, 0.0, 0x1.d6e89ca6492e6p-238,
     0x1.0013f293fde06p-854, 0x1.3f9e8f559ed51p-190, 0x1.f8478c28f937ep-304,
     0x1.aadc4b96b5a22p-241, 0x1.c4f3a5ad75b2bp-815, 0x1.c3374d1e4040ep-981,
     0x1.0ba5458a931e8p-969, 0x1.a40a1aea1673cp-776, 0x1.8967cb391291bp-260, 0.0, 0.0,
     0.0, 0x1.9ec667252c343p-585, 0.0, 0x1.49d4d25c33c6bp-959, 0x1.ffe9ac43415b7p-292,
     0x1.c0413dc135feep-236, 0.0, 0.0, 0.0, 0x1.6854c562c5ea1p-159, 0.0,
     0x1.94b61b7ebdf79p-898, 0.0, 0x1.040ad7c60841p-710, 0.0, 0.0,
     0x1.f691f62c7f55bp-670, 0x1.f6c0cc32de24dp-28, 0x1.9cabe32ba9d7fp-546,
     0x1.5d21d351c7858p-880, 0x1.18bff11379863p-95, 0x1.802a3445c248bp-190,
     0x1.5d6e9477f34a8p-626, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed12749b8e7c2p-417, 0.0,
     0x1.1161f0e56c8cdp-732, 0.0, 0x1.3ba0d2e773a02p-764, 0.0, 0.0,
     0x1.8df4a7e4c1c8cp-1007, 0x1.93c267ccaa5d5p-476, 0.0, 0x1.f96abb5f2f447p-196,
     0.0, 0x1.09f170bd33dcep-336, 0.0, 0x1.812ad2105aebap-890, 0x1.fe72775b00ef3p-867,
     0x1.c34c13491523fp-614, 0x1.6f441a6d0dfcap-652, 0.0, 0x1.0c9cf32cb8108p-107,
     0x1.6c3a6319e229dp-254, 0x1.35f24429ec2c4p-985, 0x1.c2d5fa152d3adp-143, 0.0, 0.0,
     0x1.d54df8d4e84dep-160, 0.0, 0x1.9557014a6affbp-203, 0x1.3b501e3f9c9aep-886,
     0x1.6c21cbe294cb9p-621, 0x1.03aa8f2868f6p-732, 0.0, 0.0, 0x1.da05cc8ef46cbp-851,
     0x1.2a4a5eef26886p-860, 0x1.f8116e2877bbfp-641, 0.0, 0x1.956f669c41911p-545, 0.0,
     0.0, 0.0, 0x1.027cb3f15a4f1p-287, 0x1.80406e31dabcep-294, 0.0,
     0x1.1bc76a487d702p-171, 0x1.986bce15f4abcp-349, 0.0, 0.0, 0x1.419f5d88def67p-268,
     0.0, 0.0, 0x1.60320a65bf213p-501, 0.0, 0x1.bc886568ca749p-842, 0.0, 0.0,
     0x1.59a1acb40281dp-983, 0x1.898ff35fbfe6bp-491, 0x1.607208914eb7ep-534, 0.0, 0.0,
     0.0, 0x1.e2a51ed9cc277p-945, 0x1.ab942094f9f18p-1003, 0x1.fbd847012bab2p-464,
     0.0, 0.0, 0x1.318d27ffbc654p-168, 0.0, 0x1.5bf56358f1e39p-389,
     0x1.b09b6fca4c942p-366, 0.0, 0.0, 0x1.8264c1858aff2p-430, 0.0,
     0x1.9026b31c43aecp-125, 0x1.cf47658f38251p-318, 0.0, 0x1.6eaba0857bb98p-855, 0.0,
     0x1.8b3d03aca7ba2p-527, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a3aaacc5d3696p-262, 0.0,
     0x1.6452f75196b3fp-105, 0.0, 0x1.8614a83a99195p-528, 0x1.02d179e1a9426p-978, 0.0,
     0.0, 0.0, 0.0, 0x1.35f1a1888a0e3p-660, 0.0, 0.0, 0x1.75f710a82a27ep-557,
     0x1.17b6b30fa88cfp-484, 0.0, 0.0, 0.0, 0x1.9ddff21f02291p-118, 0.0, 0.0, 0.0,
     0.0, 0x1.5653c309d578p-87, 0x1.a5aa10648e41ap-98, 0.0, 0x1.b1662c834e9b8p-427,
     0.0, 0x1.acdac7c4d82fp-779, 0.0, 0x1.9ae44643fe415p-971, 0x1.34a4014e69735p-551,
     0x1.7679fa2c12a0dp-722, 0.0, 0.0, 0x1.32a9c53dbeef7p-274, 0x1.01543c38413c8p-875,
     0.0, 0x1.96f4122fdd51cp-470, 0.0, 0x1.b310e10f848b3p-28, 0x1.a99a449e4ee1ap-736,
     0.0, 0x1.3980471b715a1p-761, 0x1.797fd80068786p-529, 0x1.cf0b1da71d276p-876, 0.0,
     0x1.907d3066ddce1p-986, 0.0, 0x1.9f2b151d7cadep-977, 0x1.075a43917b197p-229,
     0x1.2715edfca0dbdp-794, 0.0, 0.0, 0x1.975be97de1c63p-62, 0x1.4a1b7656cffe3p-220,
     0.0, 0.0, 0.0, 0x1.4fc7a9d4b69dcp-326, 0x1.a7e02c51a22d4p-930, 0.0, 0.0,
     0x1.fb0fa8e19e604p-860, 0.0, 0x1.82e5800009d72p-438, 0.0, 0.0, 0.0, 0.0,
     0x1.a5c6123330b85p-991, 0.0, 0x1.acd784fec1cbep-3, 0x1.02ed1490ad8d7p-233, 0.0,
     0x1.7ed72eced72ep-111, 0x1.12295f1a0a28cp-820, 0x1.69d9e69ae0119p-749, 0.0,
     0x1.8c106ca18bdc2p-827, 0.0, 0.0, 0.0, 0x1.b1ed189988452p-837, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.3845865892b37p-230, 0x1.813b7f35b1823p-793,
     0x1.cbd15c0c998b4p-489, 0.0, 0x1.335365859a894p-914, 0x1.f7601640e8d1cp-650,
     0x1.7e46c4630af81p-929, 0x1.1faf6104ac63cp-133, 0x1.3b0a31bbd36bbp-758, 0.0, 0.0,
     0x1.1a370a7a9904p-579, 0.0, 0x1.d69a3336305e6p-7, 0.0, 0.0,
     0x1.d7be3d98849b4p-587, 0.0, 0x1.55adaa0396224p-826, 0x1.b13b480700727p-81, 0.0,
     0.0, 0x1.078caa66236b5p-471, 0x1.8e86b5719fddp-946, 0.0, 0.0,
     0x1.fc7d452f1459dp-998, 0.0, 0.0, 0x1.8a5905937838dp-944, 0.0, 0.0, 0.0, 0.0,
     0x1.339b63b9e967p-616, 0x1.52d6a8fdfe79ap-940, 0.0, 0.0, 0x1.0f7e65bdccbb6p-654,
     0.0, 0x1.04b9794985056p-670, 0.0, 0.0, 0x1.b153dce30ee3ep-889,
     0x1.58df1cb2ffd03p-887, 0.0, 0.0, 0x1.2799c62df851fp-571, 0.0,
     0x1.a53ff5a077f87p-44, 0.0, 0.0, 0.0, 0x1.a9f8853602401p-980, 0.0, 0.0,
     0x1.30a804e7c007fp-908, 0x1.81b05958b8fb1p-891, 0.0, 0.0, 0x1.67d35717cd956p-482,
     0.0, 0x1.de76083cd742dp-926, 0.0, 0x1.a64b7475892ccp-257, 0x1.c3b3d364a6a1fp-754,
     0x1.d28c567e1f13ap-23, 0x1.1d0215db90e4ep-573, 0.0, 0.0, 0x1.ced17971ce25fp-578,
     0x1.4f1f031c4e901p-501, 0x1.47d7234f7424bp-71, 0.0, 0x1.be4de1aa04aacp-886,
     0x1.a6c07dba5835bp-760, 0x1.45e91f685fe71p-126, 0.0, 0.0, 0x1.685bfbf514a4fp-238,
     0.0, 0x1.23c8b58f48398p-505, 0x1.4c7ccb9f83d0fp-342, 0.0,
     0x1.d98cd0879554cp-1020, 0.0, 0.0, 0x1.bf7bc421b6c04p-746, 0.0, 0.0,
     0x1.c7c815b50f35bp-637, 0.0, 0x1.05b811bee2a2cp-685, 0.0, 0x1.d447078191ff4p-136,
     0x1.31c2f9bf6cdc1p-976, 0x1.c407f527a933ep-531, 0.0, 0x1.81860aaf5a61dp-239,
     0x1.f2d8d212f372p-784, 0.0, 0x1.585d26ab01b63p-427, 0.0, 0x1.90c6fb860e1aap-999,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.855f3ea545715p-837, 0.0, 0.0,
     0x1.67d3248258a0bp-489, 0x1.5fb2a227b46d4p-106, 0.0, 0x1.878e229e7678bp-938, 0.0,
     0.0, 0x1.7d0306aa69918p-176, 0x1.a6f68aa8ac774p-920, 0.0, 0x1.e36f786bfdb9ep-555,
     0x1.6d0c4b14b70ebp-541, 0x1.7434fbf644f7cp-125, 0.0, 0x1.994b9ccc7a16dp-840, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cad04f6dfa1a5p-389, 0.0, 0x1.f431fe735be7dp-451,
     0x1.31762953e44ap-725, 0x1.c29f7d799694cp-808, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4cdebe30a43c9p-5, 0x1.060a90c7a72e4p-255, 0x1.5f99c5e76edbap-494,
     0x1.6a061262c5331p-938, 0x1.e6da0a6373762p-499, 0.0, 0.0, 0x1.d20d9a26b21b9p-94,
     0x1.05fd3bafd3d01p-762, 0x1.f060cb4249bb6p-9, 0.0, 0x1.76680a973951p-623,
     0x1.792d5e03cc2edp-178, 0x1.5fa0627af1bd5p-761, 0x1.63487f4257b5bp-117, 0.0,
     0x1.898a6695e6bddp-294, 0x1.5db5b803e042bp-864, 0x1.4111d7a66dc8fp-568,
     0x1.70ee5bbb7d126p-275, 0x1.5f0d0592a0868p-739, 0.0, 0.0, 0x1.8bff7c9e62c31p-540,
     0.0, 0.0, 0.0, 0.0, 0x1.361820a52b504p-975, 0x1.8cabc545825d7p-497, 0.0, 0.0,
     0.0, 0x1.0aa0e29fe19a2p-983, 0x1.d52bf1f384afep-129, 0.0, 0.0,
     0x1.680661b13f418p-267, 0.0, 0x1.c7281e1132351p-327, 0x1.f1b8b5b15a01fp-962, 0.0,
     0.0, 0x1.df67446b25f8fp-840, 0x1.09234480c734dp-920, 0x1.212b5fecfafc9p-963, 0.0,
     0x1.64d06d4fb770ap-553, 0.0, 0x1.56ba5cc25fcc6p-447, 0x1.63a060c33aae2p-45, 0.0,
     0.0, 0x1.9deeef836f654p-830, 0.0, 0.0, 0x1.c4de647eaaa22p-834,
     0x1.2794b9f37bb8ep-540, 0.0, 0x1.62a960931f6cdp-644, 0.0, 0.0,
     0x1.703c5d0bd52abp-689, 0x1.ae3a5e967f3e8p-586, 0x1.db60ef6067a09p-31, 0.0,
     0x1.3c8fc9d62a815p-616, 0.0, 0.0, 0x1.59ac23a75dba2p-774, 0.0,
     0x1.f8319c692b175p-466, 0x1.3347fe71a0331p-680, 0x1.1c9a9518f38d6p-960,
     0x1.08be6f66e303fp-686, 0.0, 0.0, 0x1.783b66824c6fdp-330, 0.0, 0.0,
     0x1.4b8dc9e8ee74dp-556, 0x1.6168ea04510c9p-679, 0.0, 0.0, 0x1.56642fc3a688ep-555,
     0.0, 0.0, 0.0, 0.0, 0x1.f324c806e58e7p-416, 0x1.e5b56a05735b7p-1007, 0.0, 0.0,
     0x1.cf02440155494p-912, 0.0, 0x1.b1f92247cdd2fp-376, 0x1.8e2b85e7c4339p-486,
     0x1.b0292d92f9448p-1019, 0x1.c9520e1bbd55dp-122, 0.0, 0.0,
     0x1.791b9dfd1c06fp-307, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98b400e7f4143p-533, 0.0,
     0.0, 0x1.7bb68c210c004p-428, 0x1.34d861ced7da1p-584, 0x1.9f190ccd51755p-1009,
     0x1.d9dbbd60191fcp-374, 0.0, 0x1.5e59ab1cf0fe4p-447, 0.0, 0.0, 0.0,
     0x1.eccf5ebe204e1p-663, 0x1.6b71531aed095p-168, 0x1.4298850c51a85p-217, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.947ecb29995bcp-74, 0.0
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
            tmp1 = Sleef_coshd2_u10avx2128(tmp0);
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
    printf("Sleef_coshd2_u10avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_coshd2_u10avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
