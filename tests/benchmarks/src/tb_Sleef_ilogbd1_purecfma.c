/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_ilogbd1_purecfma.c --function Sleef_ilogbd1_purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision int32 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile int32_t external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.14b1aadc9d92dp-900, 0x1.a9d75f6c501fbp-972, 0x1.c3a23e7520335p-341,
     0x1.04abc6455461bp-712, 0.0, 0x1.2935b50ad76d2p-972, 0x1.034e79ba35cf2p-264, 0.0,
     0x1.a5d1db1e0d5a4p-666, 0x1.0c00b773beb9bp-605, 0x1.8cef3c1578539p-883, 0.0,
     0x1.4aaddef0b0d6fp-16, 0.0, 0.0, 0x1.47376f0bc010ep-180, 0x1.b04780f5fff5fp-845,
     0x1.cd4f74278051ep-556, 0x1.bbea05cc50575p-439, 0x1.bbc815e12d4e2p-615, 0.0,
     0x1.62f8a227811acp-548, 0.0, 0x1.f708f83b1db79p-178, 0.0, 0.0, 0.0, 0.0,
     0x1.74dddc5920f3dp-125, 0x1.3a38a03a62f56p-362, 0x1.d3444c2652cdfp-51,
     0x1.54473162e4fd3p-382, 0x1.d784c6c7dc255p-232, 0x1.2c04b296ac97ep-807,
     0x1.d29fab36ed959p-877, 0x1.a0ec2162fbfd1p-1021, 0.0, 0.0, 0.0,
     0x1.dac7e7dfef2a2p-836, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ed0f0aea9aff3p-756, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5a6ece499ad9cp-445, 0.0, 0x1.e629234cbb32ap-717, 0.0,
     0x1.543993337a92ep-808, 0.0, 0.0, 0x1.9cf39eaad1c45p-401, 0x1.c0cf388c6418ap-945,
     0.0, 0x1.085ea221be687p-436, 0.0, 0.0, 0.0, 0x1.33a87afaece77p-775,
     0x1.26d8db6998f2p-378, 0.0, 0x1.2b6d7359cb02dp-980, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2fa41fe4786d1p-993, 0.0, 0x1.ec310e0440f1bp-538, 0.0, 0.0,
     0x1.6a47a849aaec4p-910, 0x1.d8a758cd102ccp-71, 0.0, 0.0, 0x1.6da5f60031c0bp-150,
     0.0, 0.0, 0.0, 0x1.368dbb6535ed1p-206, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.504feafe81e23p-32, 0x1.044b4289ff1ddp-812, 0.0, 0.0, 0x1.f5bf034205e0fp-698,
     0.0, 0x1.2c2ddb2653a3p-764, 0.0, 0x1.f98ba5de050f9p-498, 0x1.5e94e55af36c8p-552,
     0.0, 0.0, 0.0, 0x1.6986a126c4badp-512, 0x1.517eaf7c873b8p-283,
     0x1.9cf964bff42cbp-25, 0x1.4667fdc1c170fp-855, 0x1.52e836069075ep-324, 0.0,
     0x1.09641e83e8b89p-923, 0.0, 0.0, 0x1.09c178bf9900dp-399, 0.0, 0.0,
     0x1.b9bad5bbb332dp-556, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.286fb659608c5p-678,
     0x1.1c18d2c706957p-1002, 0x1.db631e2a03ab2p-910, 0.0, 0x1.1f7d60d60335cp-382,
     0x1.af04e900db2bcp-738, 0.0, 0x1.dab6e5fe77174p-454, 0.0, 0x1.e220107823416p-470,
     0.0, 0.0, 0x1.797881da6f987p-956, 0.0, 0.0, 0x1.902c0fcd807e6p-561,
     0x1.c8bd0c8c6b667p-850, 0x1.bc248fcb23e1cp-297, 0.0, 0x1.ee8b4851b98c4p-521,
     0x1.ee19bb7314793p-722, 0.0, 0.0, 0.0, 0x1.58f2b7a14ed94p-209, 0.0,
     0x1.c46ef022ac2a9p-535, 0.0, 0x1.75108ec81206p-155, 0.0, 0x1.ab24dbdd92844p-392,
     0x1.55fcc210f54f2p-29, 0.0, 0x1.d20d2bcaedcd4p-74, 0.0, 0x1.42c3ba4b754abp-969,
     0.0, 0x1.3a9ca163d8c8cp-94, 0.0, 0x1.5ade7fee7485dp-461, 0x1.4274c682dbaebp-77,
     0x1.8ac8dc6a79095p-758, 0x1.a0268a55fd4bcp-954, 0x1.d9d5b32635051p-834, 0.0,
     0x1.4afefc875c883p-718, 0.0, 0.0, 0x1.1c5145ff76fdbp-332, 0.0, 0.0, 0.0,
     0x1.2079b17e99c37p-936, 0.0, 0.0, 0x1.53cf79f136d3fp-72, 0x1.723062277874ap-113,
     0.0, 0x1.74a696e428124p-57, 0x1.a96abffeb511bp-3, 0x1.82d450386588p-470,
     0x1.b4344e2153e1ep-173, 0x1.4af94c9abde8ep-93, 0.0, 0.0, 0x1.d894eee6b7192p-22,
     0.0, 0x1.b0de225bef589p-285, 0.0, 0x1.ae8c8dbdbe5c3p-336, 0x1.8153b11541a3bp-916,
     0.0, 0.0, 0.0, 0x1.003fb720f6997p-275, 0.0, 0x1.155b6cd5394ecp-880,
     0x1.114643fdc9cbbp-640, 0.0, 0x1.2fd9b5aa15cbdp-995, 0x1.73f00fb2a5fbcp-556,
     0x1.afff3fa39d687p-361, 0x1.bde49664023fbp-917, 0x1.c8f331dc42db9p-551,
     0x1.b6a8d690d95a2p-756, 0.0, 0x1.a68534e0dfcf8p-665, 0x1.e3f8ddcaf77e4p-405,
     0x1.731f9c4cf4cbdp-205, 0.0, 0x1.dd99fdbd82bb4p-1014, 0x1.04a24aea23c3dp-777,
     0.0, 0x1.dfba4a43882fdp-529, 0x1.00258bcfe0943p-711, 0x1.fb2a44f26e7fdp-252, 0.0,
     0x1.9c3b28f3c63dap-810, 0x1.0da7b3c6e8d41p-321, 0.0, 0.0, 0x1.a80eaa110c62ep-152,
     0x1.1ba30b477c53ap-409, 0.0, 0x1.ce0c6103c5c26p-881, 0.0, 0.0,
     0x1.765d0fb01e19fp-668, 0.0, 0x1.84983973fc5cep-221, 0x1.221a7123d1654p-526, 0.0,
     0.0, 0x1.563b229970989p-379, 0x1.ce9364054ff64p-121, 0.0, 0.0, 0.0,
     0x1.a0058efa39c39p-723, 0x1.0ad1a5cf85747p-440, 0x1.8334f668b28dep-428,
     0x1.fb416537c0569p-257, 0.0, 0.0, 0.0, 0x1.78dd1a281bb73p-597,
     0x1.091bbc467daa3p-326, 0.0, 0.0, 0x1.3c8e769036a79p-932, 0x1.6b648c3f3da52p-236,
     0.0, 0.0, 0.0, 0x1.e75ab8c3d68c2p-966, 0.0, 0.0, 0.0, 0x1.71667a4ef3908p-63, 0.0,
     0.0, 0.0, 0x1.f59129c633cf5p-829, 0x1.c80fea43a6dbdp-907, 0x1.4779f87cf09adp-442,
     0x1.679b7095d65d2p-410, 0.0, 0x1.66f4453df1dd8p-636, 0x1.98ecd99ab9081p-710,
     0x1.44cf13a73da43p-77, 0x1.c13827de6aca4p-488, 0.0, 0.0, 0x1.610d14bcac03p-949,
     0x1.0074ad3ef0e9ap-638, 0.0, 0.0, 0.0, 0x1.f123c1d437f7dp-14, 0.0, 0.0, 0.0,
     0x1.88bb510835535p-413, 0.0, 0x1.0ac22c7add382p-522, 0.0, 0.0,
     0x1.f185893c4a89bp-976, 0x1.5d247688ee88dp-679, 0.0, 0x1.12901f085ea03p-442,
     0x1.8276d8cd87767p-307, 0.0, 0.0, 0.0, 0x1.2c0216558e94dp-46,
     0x1.d906eb5ac0fbp-353, 0x1.78cd568d1f7a1p-624, 0x1.c92a3bce8f718p-78, 0.0, 0.0,
     0.0, 0x1.029558d9b974fp-47, 0x1.f87021515ccd5p-687, 0.0, 0.0,
     0x1.4db1ec3799c5ep-475, 0x1.1fd881ad50694p-717, 0x1.232d8e397bb59p-158,
     0x1.18870365b3e36p-687, 0x1.3a37cc6652de3p-727, 0.0, 0x1.3b129f2a81783p-1000,
     0x1.dc5d1acb0383cp-592, 0x1.0e7dde15e6456p-530, 0x1.e4b12309b4a5p-134, 0.0,
     0x1.8c36f5df6b877p-56, 0.0, 0.0, 0.0, 0x1.7f7be6620cdf9p-871,
     0x1.4fee06fc73c94p-433, 0.0, 0.0, 0x1.81b4ceba15c39p-832, 0x1.12ebaf5bdd98bp-670,
     0x1.d40da69a89112p-118, 0.0, 0x1.b4c6059adc12dp-1021, 0x1.08e05ed2865cp-205,
     0x1.c65964e82eb61p-660, 0x1.45604bcf539a8p-2, 0.0, 0x1.31641d10afc1p-65,
     0x1.1a5b18bea69ccp-258, 0.0, 0x1.86f9b3ebfa418p-222, 0x1.5927b3888aa87p-61, 0.0,
     0.0, 0.0, 0x1.08cf65d9b849dp-538, 0.0, 0.0, 0x1.68f7db0889203p-182,
     0x1.a9df1234ba12p-943, 0x1.d59d1c3479e2fp-946, 0x1.35ffb8463f4f5p-244,
     0x1.ed99d4350b1f5p-179, 0x1.ea68aff7cadcap-1001, 0.0, 0.0,
     0x1.d1a09b3d84ba6p-598, 0.0, 0.0, 0x1.6b772c0582efbp-636, 0.0, 0.0,
     0x1.9eaff1107ba8bp-6, 0x1.e9c318bcb101dp-574, 0x1.3950976b0fe52p-615, 0.0, 0.0,
     0.0, 0x1.8b91a74e61b5bp-846, 0.0, 0.0, 0x1.3d6032899c1a1p-286,
     0x1.b9eee4fa9a2d2p-284, 0x1.121e70a55a663p-743, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.000358be8f079p-91, 0x1.745e15b6a7d81p-387, 0x1.c6775ffc551bp-233, 0.0,
     0x1.1fd57d4b0e43ap-105, 0.0, 0.0, 0x1.f455c5eaf287fp-443, 0.0,
     0x1.5de48a5dc33p-891, 0x1.5296f1ff75076p-648, 0x1.171b658455c61p-94, 0.0,
     0x1.dc9552a42b775p-1018, 0.0, 0.0, 0x1.ffc7e39633fbdp-141,
     0x1.6776db19b1523p-976, 0.0, 0x1.c40c1080bea43p-168, 0x1.cfb16d7dc5782p-421,
     0x1.4e7109a5b5c57p-945, 0.0, 0x1.ff301b24097c3p-913, 0x1.677c5da741383p-658,
     0x1.7bd1d595ad6e7p-673, 0x1.c3a5114aafd0dp-757, 0.0, 0x1.f507ed1b4d623p-316,
     0x1.97937674518f6p-786, 0.0, 0x1.addd78dd70132p-225, 0.0, 0x1.679bfc7323474p-740,
     0.0, 0x1.b6c2335a9409ep-666, 0x1.acb7351f5b6a4p-50, 0.0, 0.0,
     0x1.6e7702d252f24p-270, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.631a0fbe8eb91p-112,
     0x1.3e1ecfa1a4dc7p-637, 0x1.289608fcd8268p-876, 0.0, 0.0, 0x1.832b003814912p-376,
     0x1.ef3c5c724a46bp-97, 0x1.6fd30f691fc86p-495, 0x1.27564c90f9dbbp-381,
     0x1.ee80f8fb94376p-392, 0x1.c24434845d81fp-734, 0.0, 0x1.401a8460681c1p-706, 0.0,
     0.0, 0x1.644946904ba72p-506, 0x1.b85c4dabb0bbbp-981, 0x1.0246153013191p-789, 0.0,
     0x1.198f43c03a53p-371, 0.0, 0x1.8732fb2e47c14p-566, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.17a4e73fd5d29p-439, 0.0, 0x1.b975d92697645p-935, 0x1.aae34567983cdp-21,
     0x1.0918e2c1621a2p-232, 0x1.a1aab24d2a561p-362, 0.0, 0.0, 0.0, 0.0,
     0x1.d4fd8ab37769cp-273, 0.0, 0x1.e327e846bb06cp-68, 0.0, 0.0, 0.0,
     0x1.e9d576cf05cbep-504, 0x1.c6dfc6db6a93p-187, 0x1.b8f5b6219a739p-406,
     0x1.d791b20f92595p-514, 0x1.d3575aed5847p-969, 0x1.ba9a8862fa2f8p-331, 0.0, 0.0,
     0x1.040a84e02ab61p-137, 0x1.53db2b1b0bb37p-134, 0x1.20f5669e51e68p-786, 0.0, 0.0,
     0x1.2dc585414053bp-769, 0x1.f924787833685p-670, 0x1.b6ec5eede72f3p-758, 0.0, 0.0,
     0x1.feb6a88c85dd4p-828, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.226bfe9d42cd8p-303,
     0x1.a8e9793a995c7p-703, 0.0, 0x1.2affb2cd8316ep-410, 0x1.bda47b79dd558p-677,
     0x1.7eea8ef2d6233p-1002, 0x1.4c047258b22cbp-199, 0.0, 0.0, 0.0,
     0x1.5abf7bfc75f94p-853, 0.0, 0x1.01857f933dbd9p-283, 0x1.b2aa8edc95913p-734,
     0x1.e2fef6e4d446dp-675, 0x1.15eb1cead790ep-579, 0x1.aa2f198f5489bp-678,
     0x1.5257a17cb7e09p-423, 0x1.e34fe2d538e2cp-180, 0.0, 0.0, 0.0,
     0x1.e67e56d480cf2p-654, 0x1.355cb797d086dp-293, 0.0, 0x1.2a22f16f51a66p-892,
     0x1.ab341bbf51a07p-189, 0x1.03ba90b7e68cfp-608, 0x1.1ad0d82a84864p-34, 0.0,
     0x1.8bd33fc92e5cfp-673, 0.0, 0.0, 0x1.7a139aef41badp-163, 0x1.de5244fa253c4p-479,
     0x1.c3025b9ad664cp-89, 0x1.2a3639cfdbd74p-669, 0.0, 0x1.891e505af43f9p-180,
     0x1.77b89999b9d9dp-409, 0x1.83e18eb12d9ffp-986, 0.0, 0.0, 0.0,
     0x1.10b1a15092093p-804, 0x1.c836f6fc6cde5p-923, 0.0, 0.0, 0x1.93dd429ba0f42p-340,
     0x1.e61d84409ed85p-169, 0x1.e53f118c23347p-800, 0.0, 0.0, 0x1.22aea3e7ca6f7p-997,
     0.0, 0x1.90b9b01f6591ap-134, 0x1.a7edd9f3034cfp-538, 0.0, 0x1.1182f5d4d35a3p-343,
     0x1.cfa92d7c09b78p-483, 0.0, 0.0, 0x1.b75b31f6dd85p-803, 0x1.745e0b0df5e46p-343,
     0.0, 0.0, 0.0, 0x1.506f480e3243ep-235, 0x1.1dde8cdf0710dp-977,
     0x1.bb0c71dd31213p-510, 0x1.3c4b3323cabbdp-758, 0x1.18f1198fd11a1p-318, 0.0,
     0x1.63c015f6277c6p-979, 0.0, 0x1.06a65b6e2540ap-602, 0.0, 0x1.c1ec72cd6654dp-448,
     0.0, 0.0, 0x1.429878248f4fbp-375, 0.0, 0x1.79c1c9ba9e5f2p-1022, 0.0, 0.0,
     0x1.b186ec146ff1ap-620, 0.0, 0x1.fa199ff5abd7bp-143, 0.0, 0x1.efa7e03836ff9p-417,
     0.0, 0x1.544d077699c8dp-971, 0.0, 0.0, 0x1.fe39c49aed404p-271,
     0x1.7a82d39970cf4p-372, 0x1.783113f9afbdep-80, 0x1.f3a4e7bc6c94dp-10, 0.0, 0.0,
     0x1.cbabbf6acdfa3p-421, 0.0, 0.0, 0x1.5868628482fb4p-184, 0x1.49499caf9c6c3p-735,
     0x1.9f55739e8ded9p-440, 0x1.6f98deb87b7eap-511, 0.0, 0x1.424034c536d4fp-1013,
     0.0, 0.0, 0.0, 0x1.6cfb544cab4d1p-121, 0x1.7bdede884fbfdp-710,
     0x1.2aaac6f5de749p-1009, 0x1.14018f09166d7p-506, 0x1.222f92929f1ccp-562, 0.0,
     0.0, 0x1.1e1fb9e5342eap-363, 0x1.97b19bd1bafa7p-542, 0x1.09106c97f0dacp-317, 0.0,
     0x1.04b2df6470f6bp-321, 0x1.ee6f2c3cc0ebbp-580, 0x1.7db2d9226cddp-945,
     0x1.bcf084cef51a2p-968, 0x1.48a00b460cb39p-565, 0.0, 0x1.8960d71616f03p-730,
     0x1.91e55a9b2e6bp-832, 0.0, 0x1.acd54fdff7f58p-120, 0.0, 0x1.efd2953247e06p-987,
     0x1.21e98df4772e1p-896, 0.0, 0x1.2805dd30ee5cdp-810, 0x1.75062effc217ap-816,
     0x1.4b9a42e035cebp-176, 0.0, 0.0, 0x1.be23e24cb4444p-610, 0x1.fdcbb3827a73fp-3,
     0.0, 0.0, 0x1.322cdc3a85507p-301, 0.0, 0x1.738fc2ad88686p-800, 0.0,
     0x1.27fa51c95e88ap-461, 0.0, 0.0, 0x1.319950f54e264p-71, 0.0,
     0x1.6af6c15207f93p-347, 0.0, 0x1.ceca98a3a3eep-906, 0x1.231bb808d806fp-146,
     0x1.7b48ef4a42a72p-489, 0.0, 0.0, 0.0, 0x1.598a8aeaa8065p-128,
     0x1.4f6d3b2b47288p-632, 0x1.20c76d5209499p-461, 0x1.7a29a486d8c23p-110, 0.0, 0.0,
     0.0, 0.0, 0x1.883f7fb599118p-448, 0x1.da6f7b923b783p-489, 0x1.1fcf69ee77087p-125,
     0x1.e78fa30c635d9p-91, 0x1.206c5f6e7779ap-513, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4687ccab5f743p-496, 0.0, 0.0, 0x1.1cffdd94a7166p-243, 0.0,
     0x1.582d6c547e583p-305, 0.0, 0.0, 0.0, 0x1.24044c88982b9p-300, 0.0, 0.0, 0.0,
     0.0, 0x1.3287dc7979c85p-272, 0.0, 0x1.67354297181fap-110, 0x1.f6ec28a2b47c1p-796,
     0.0, 0x1.e8af939def601p-678, 0.0, 0x1.6131820e7dc2ap-206, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.16734dc96f8p-105, 0.0, 0x1.011ad686063a7p-560, 0x1.3baf331669fd8p-456,
     0x1.89ab36921b7adp-883, 0.0, 0x1.89d416748885dp-26, 0x1.ea96ac94d737cp-11, 0.0,
     0x1.d90397a516a4ep-493, 0x1.1cdb5ebfb81c1p-760, 0x1.b222f45b6c939p-250, 0.0, 0.0,
     0x1.469a541f00083p-611, 0x1.e7b2779681fb5p-982, 0x1.fa4b8f4ee906cp-555, 0.0,
     0x1.603cddfe0f076p-178, 0x1.fa50d167772fp-535, 0.0, 0x1.5fb5d70d5444ep-576,
     0x1.478cfd56c56b2p-238, 0x1.9de40041488bfp-616, 0.0, 0x1.8209af9cedc78p-602,
     0x1.f68f0a77569dap-744, 0x1.c7ed0ac5a33c3p-156, 0.0, 0.0, 0x1.a7ea47f89350fp-94,
     0.0, 0x1.dab5a34dbfe77p-461, 0.0, 0.0, 0.0, 0.0, 0x1.06e527f5972dep-162,
     0x1.ecf37a90151dep-853, 0x1.ba0c9f33d19bap-284, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.a03ece4581035p-387, 0.0, 0x1.671fa54541218p-141,
     0x1.eccbd0d15b883p-332, 0x1.7ebfe9f4ad23ep-191, 0x1.13ec6d41e0269p-932,
     0x1.2e16fa05931b1p-187, 0.0, 0x1.8391810bbd6d5p-789, 0x1.a02afb18fb6b9p-527,
     0x1.aab4c5f70750fp-967, 0.0, 0x1.67246d6fd395bp-750, 0.0, 0x1.b367fcca7d29dp-652,
     0.0, 0x1.fcc37ed68d25bp-729, 0x1.4196c1f75f9dap-71, 0.0, 0x1.7aec17916ae4bp-443,
     0x1.b86c1115d18f1p-23, 0x1.8546f40c9d74bp-406, 0.0, 0x1.7eb2d113708a2p-996, 0.0,
     0x1.9082b8304746ap-395, 0x1.6803ab176296fp-723, 0.0, 0.0, 0.0, 0.0,
     0x1.6e7060228f985p-732, 0x1.709e22d5c831fp-962, 0.0, 0x1.6de6ad80ad359p-558, 0.0,
     0x1.2e4a86e30a4fep-286, 0x1.4fc02f117fecep-802, 0.0, 0x1.1ac28a8c7662p-235,
     0x1.bbf3b8e27f515p-278, 0.0, 0x1.f99f7e1a6d625p-980, 0.0, 0x1.8a83763418ffdp-597,
     0x1.f8b8a442acfd7p-246, 0x1.b6b547c16ba7dp-642, 0.0, 0x1.a0d2301f814ecp-266,
     0x1.cb7cb5323c038p-69, 0x1.a44b42ed79c47p-69, 0.0, 0x1.0dda61c38b53dp-479,
     0x1.cd26c33b19c99p-67, 0x1.9619960254caep-314, 0x1.946749501481cp-658,
     0x1.fa6cb5a9aff63p-717, 0.0, 0.0, 0x1.01b91dff64027p-379, 0x1.ce564f7cc5523p-713,
     0.0, 0x1.a228341d13742p-562, 0.0, 0.0, 0.0, 0x1.8fef606775bc5p-691,
     0x1.285ddf3f95db3p-671, 0.0, 0x1.1e2f24f4eb6b5p-684, 0x1.9cecf7df84c2ep-568,
     0x1.2cca69dd11e23p-540, 0.0, 0.0, 0x1.bef26998b1217p-93, 0.0, 0.0,
     0x1.50e2dc1cc164fp-258, 0.0, 0x1.e86e38be0d9e2p-235, 0.0, 0.0,
     0x1.5ac16343b7955p-562, 0x1.da0f21b93a741p-94, 0.0, 0x1.190308a6ffc8ep-470,
     0x1.91690b4a075cbp-1000, 0.0, 0.0, 0.0, 0x1.ced2953a79a6dp-27, 0.0,
     0x1.c2f9c21ec9328p-36, 0.0, 0.0, 0x1.6d6610fcafa02p-1018, 0x1.c014c6bc8aacdp-545,
     0x1.fb0b06f6b16ddp-230, 0x1.5fdc372d7b206p-543, 0.0, 0x1.854ba09b717p-97, 0.0,
     0.0, 0x1.bd1a258476f7bp-202, 0x1.9a07cdd06d12fp-526, 0x1.4219814489bedp-704,
     0x1.2ed60160c6ac3p-581, 0x1.26138c666c9dbp-921, 0x1.8489d4855ff7ap-591, 0.0,
     0x1.6b5c6749c7a6cp-179, 0x1.d79a57fd1b55ep-941, 0.0, 0x1.54a0b6713ddb9p-970, 0.0,
     0.0, 0.0, 0.0, 0x1.7a2279849d39dp-54, 0.0, 0.0, 0x1.19bf8afd22046p-577,
     0x1.8d06d5dc2ca92p-158, 0.0, 0.0, 0x1.01cf6b0da93c8p-919, 0x1.e408b3673a6b8p-319,
     0x1.b75fd7359157p-985, 0x1.c1a89486765dfp-796, 0x1.013e4d9804ff4p-931,
     0x1.b279decdd38e4p-703, 0x1.bee42a540dbb5p-611, 0x1.bb3a3fe787a05p-690, 0.0,
     0x1.73e5befb459b3p-968, 0x1.468732ceb4148p-260, 0x1.1d95e2e92ae6cp-70, 0.0, 0.0,
     0.0, 0x1.9579567bb03b1p-27, 0.0, 0.0, 0x1.90c120a079452p-77,
     0x1.53db0b3f2c3a2p-658, 0x1.cc225b91467b7p-850, 0.0, 0x1.a62aef058efc4p-411,
     0x1.67585e3174533p-888, 0.0, 0.0, 0x1.fa0cf5367864cp-59, 0x1.5fc6dc824aa6cp-264,
     0x1.60e1ede2d9bf1p-169, 0.0, 0x1.f9b3abdbdf259p-486, 0.0, 0.0,
     0x1.4cff18d43c80ap-502, 0x1.7b42f4b3aec3ep-610, 0.0, 0.0, 0.0, 0.0,
     0x1.cbbb8b339c8ddp-540, 0x1.83b89146468b9p-867, 0x1.472bbd0f7f065p-234, 0.0, 0.0,
     0x1.058934c6dd223p-328, 0.0, 0x1.143f0f96b7f9ap-990, 0.0, 0x1.1b35605a89093p-533,
     0.0, 0x1.2d6937ab60ad3p-579, 0x1.54c630748094p-44, 0x1.04e7f730d3d04p-380,
     0x1.f44029b2983f2p-606, 0x1.9560596349449p-14, 0.0, 0x1.8f3caa00f9d3p-693,
     0x1.afa09b48699p-530, 0x1.9625a981f5456p-110, 0x1.9752cabc3caabp-562,
     0x1.3bb75a371c231p-277, 0x1.9ade20130c56bp-91, 0.0, 0x1.382263ce203c8p-523, 0.0,
     0x1.eec23c0ad7669p-451, 0x1.b30d60e9b2578p-157, 0.0, 0x1.8be129c673027p-606,
     0x1.ebe32d6fee17ep-588, 0x1.3584cf8161521p-1014, 0x1.713ffd5f50c63p-86, 0.0, 0.0,
     0x1.d4b56ba4bd5cp-88, 0.0, 0.0, 0.0, 0x1.8a8179a4a1b27p-907, 0.0,
     0x1.10354abe0c737p-20, 0x1.4f384763ae9f5p-209, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51ffcfe23ecc3p-700, 0x1.439ecceb21609p-556, 0x1.d2f6fcb367855p-748, 0.0,
     0x1.075ff952dc33fp-542, 0x1.beab6e122aea2p-719, 0x1.bef9ec5c9119fp-365, 0.0,
     0x1.2ae36fc1fd3fcp-648, 0x1.2f520573af9eap-393, 0x1.f0bb0e91ca15ap-677, 0.0, 0.0,
     0x1.65e046296a038p-891, 0x1.f010385bfb2c9p-30, 0x1.e69db210fb639p-752, 0.0,
     0x1.98eb09770d3a5p-873, 0.0, 0.0, 0.0, 0x1.5e8ecbc89a338p-579, 0.0,
     0x1.23491c09c84d4p-655, 0.0, 0x1.0a5faa61a6e9bp-185, 0x1.dc14795eb561bp-555, 0.0,
     0x1.be1573bc72024p-823, 0x1.6db13c9cef235p-249, 0x1.ae870ffc25edcp-394,
     0x1.3c78ac9335292p-155, 0x1.afba0a3e61d17p-70, 0x1.7d768f9728095p-634, 0.0,
     0x1.dcd342bf4685p-1004, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    int32_t global_bench_acc;
    int64_t timer;
    int64_t tmp;
    int32_t j;
    int64_t tmp1;
    int64_t tmp2;
    double id_tmp;
    double cpe_measure;
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = INT32_C(0);
    tmp = __cos_counter_num(0);
    timer = tmp;
    j = INT32_C(0);

    for (;(j < INT32_C(10000));){
        int32_t bench_acc;
        int32_t i;
        int32_t tmp0;
        int32_t tmp1;

        i = INT32_C(0);
        bench_acc = INT32_C(0);

        for (;(i < INT32_C(1001));){
            double tmp0;
            int32_t tmp1;
            int32_t tmp2;
            int32_t tmp3;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_ilogbd1_purecfma(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10010000.0;
    printf("Sleef_ilogbd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_ilogbd1_purecfma bench acc %e/%"PRIi32"\n", (global_bench_acc * (double) 1), global_bench_acc);
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
