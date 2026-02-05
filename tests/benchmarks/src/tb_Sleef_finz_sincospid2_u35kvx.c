/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincospid2_u35kvx.c --function \
 *     Sleef_finz_sincospid2_u35kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.517d169f20bb7p-87, 0x1.5327633f0e096p-984, 0x1.be74a62252a7cp-638,
     0x1.3efa37929789bp-377, 0.0, 0.0, 0x1.bb22cec00f7efp-870,
     0x1.cc38f385744d5p-1014, 0.0, 0x1.3b3898b4c322dp-929, 0.0,
     0x1.0526e05853a5bp-665, 0x1.26cd228a18552p-527, 0.0, 0x1.68d871b5cb636p-781, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.efcc4c85e1221p-573, 0x1.3b40b30b94242p-743,
     0x1.4956b0a085363p-853, 0x1.d5de8ec1a837ep-99, 0.0, 0.0, 0x1.7471740cd6596p-913,
     0.0, 0x1.75c83fc817e5cp-762, 0x1.d0d8d8724e7d9p-56, 0x1.c512190d2b4c5p-89,
     0x1.5ab30c8587e95p-66, 0.0, 0x1.869f5ce36eb85p-531, 0x1.90ae477f19d4p-1020, 0.0,
     0.0, 0x1.369be18128af2p-836, 0.0, 0.0, 0x1.b7daa8070cf2dp-272,
     0x1.f70efe9893308p-1021, 0.0, 0x1.86e3f200fd428p-819, 0x1.29e7be5e24ae4p-45,
     0x1.c77b61d1d40f3p-756, 0.0, 0x1.6e2ec8a09ebap-55, 0x1.1ed43e083b2fp-217, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.324ee69825b14p-195, 0.0, 0x1.d79757a40f111p-133,
     0x1.64d1e8fc5da25p-460, 0x1.b8410649dfe89p-134, 0x1.c6f8100cf3bf9p-792,
     0x1.9631cd71cbaccp-640, 0.0, 0.0, 0.0, 0x1.9d2683c2de1c8p-628,
     0x1.12cd3c6c38a39p-955, 0.0, 0x1.30dab4c9ee6a2p-904, 0x1.32b64855dbd87p-140,
     0x1.e93b1c7ca4bf8p-917, 0x1.0ed83a1e5cd59p-1013, 0x1.affaab6a19412p-353, 0.0,
     0x1.6148ab89b511cp-21, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.df8a87a433c07p-177,
     0x1.5e9788c10c9f5p-124, 0x1.99b6452e6f1fbp-104, 0x1.1a5e70876a298p-859,
     0x1.1f06d82db5dabp-707, 0.0, 0.0, 0x1.ece37d88818a1p-367, 0x1.2b7450aa34b6cp-190,
     0x1.a81624aeeda17p-440, 0x1.7710f3e796c1fp-145, 0.0, 0.0, 0.0, 0.0,
     0x1.af3c2234b50f8p-155, 0.0, 0x1.f9ed31ef20f1bp-1022, 0x1.97d60bf0f7976p-504,
     0x1.3395e349329f9p-631, 0.0, 0.0, 0x1.0b4d905400238p-835, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9efe5987c2d35p-774, 0.0, 0x1.b37317b99f31fp-415, 0.0,
     0x1.538d4130451f1p-349, 0x1.9269dcedb04ddp-707, 0x1.53b306c1ce2afp-802, 0.0,
     0x1.b94e1e6ac0beep-767, 0.0, 0.0, 0.0, 0x1.b4c7aa9e781dep-470, 0.0,
     0x1.edb8c5f585ab1p-321, 0.0, 0x1.dd1650528227ep-71, 0.0, 0x1.8d08bfeb9d321p-368,
     0x1.62bfb0160ef11p-552, 0x1.14efab01586afp-5, 0.0, 0x1.3050656422464p-46,
     0x1.22804e319921fp-696, 0.0, 0.0, 0x1.4f783ee800f5bp-64, 0x1.cbce056805a83p-560,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3b04baf242f39p-780, 0.0, 0x1.4dc2b9a140dbap-942,
     0.0, 0.0, 0x1.f7ee52f5e46ep-373, 0x1.933b3455bee3ep-582, 0.0, 0.0, 0.0,
     0x1.c40f36118d337p-76, 0.0, 0.0, 0x1.06db5650bbec4p-466, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.04622d8b42dp-56, 0.0, 0x1.bfb1f7e2b7799p-394, 0.0, 0.0, 0.0,
     0x1.d9ac7577c19fbp-880, 0x1.b91f6f243b82fp-378, 0.0, 0x1.d33d91c5ecadfp-643,
     0x1.92eeea084fdecp-798, 0x1.c921e310d549ap-763, 0.0, 0.0, 0.0, 0.0,
     0x1.97ce4998c91afp-387, 0x1.c7fa815349934p-963, 0x1.47ccee542243ep-793, 0.0, 0.0,
     0.0, 0.0, 0x1.117142a8bdfb3p-777, 0x1.5807776818166p-483, 0.0,
     0x1.deee00763cda2p-928, 0x1.e6f593b55df2cp-847, 0.0, 0x1.049a0cd1e8ed7p-761, 0.0,
     0.0, 0.0, 0.0, 0x1.0c6dbe520ef1p-640, 0x1.29670991ba702p-115, 0.0, 0.0,
     0x1.292cd1c9dfebfp-314, 0x1.c611bae24d781p-906, 0x1.6573ce6ab147bp-540,
     0x1.6a7cdbc6c1085p-841, 0.0, 0x1.a49790a8537ecp-987, 0x1.4fe402cea4787p-182, 0.0,
     0x1.ba49ea430a23cp-384, 0x1.aaaf2da36d88cp-169, 0x1.1db8e8794133bp-606, 0.0, 0.0,
     0x1.88604d4a5274bp-220, 0x1.1f4117ee47c84p-682, 0x1.69354ea6421e7p-152,
     0x1.8de5368354cedp-966, 0x1.f87deb4542179p-435, 0x1.f22d3a1659a7bp-894, 0.0,
     0x1.d2cc26645c49bp-8, 0x1.6c176964f9c5bp-650, 0x1.c23d6b7a4cac5p-284,
     0x1.4ca7d7856fbf7p-36, 0x1.08ad0f6fe5084p-460, 0x1.26f4ea558d2f9p-708, 0.0,
     0x1.d2fa1458b5427p-351, 0.0, 0x1.72aab5cee0a8bp-696, 0.0, 0x1.2817131d40a0ep-758,
     0x1.17eed4a63e3a4p-378, 0x1.aa53d4c734297p-768, 0.0, 0x1.e44e22bffa7e2p-848,
     0x1.a12053401439fp-418, 0.0, 0x1.aef626a9989bfp-988, 0x1.a2904ece6a2d8p-930, 0.0,
     0x1.68028ee977754p-318, 0.0, 0x1.f08151e654e18p-362, 0.0, 0x1.04488b53ec813p-936,
     0.0, 0x1.d21e18ba98b8cp-688, 0.0, 0x1.878151048c7cdp-393, 0x1.785928a6cfe6cp-130,
     0.0, 0x1.8fb73c66e565bp-633, 0x1.f0b183f2bca1cp-738, 0x1.f7109349ed681p-240, 0.0,
     0x1.34df5eff7d2fp-140, 0x1.85dc32262a1a6p-306, 0x1.186cb8fc26bebp-272,
     0x1.42721ae850b18p-586, 0x1.bbf5336c9953bp-69, 0x1.b1a33ac3aad4cp-928, 0.0,
     0x1.e1cc393cacd39p-6, 0x1.666a2552a4201p-940, 0x1.ffb4de88f143fp-791,
     0x1.917bf3248989ep-828, 0.0, 0x1.0289624161e74p-127, 0x1.c46cb1aea47cp-673,
     0x1.962229e666fcdp-876, 0.0, 0.0, 0.0, 0x1.d19bc327ad107p-541, 0.0,
     0x1.2474e27e83397p-11, 0x1.baebc84a09b09p-552, 0.0, 0x1.27bc95788b3eep-709,
     0x1.fc11b0fd37fa9p-596, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf6a0c8564ca2p-250, 0.0,
     0.0, 0x1.9aae6202ca1c1p-96, 0x1.7c4ec3c25fa54p-958, 0x1.55e0dbf28d28ep-308,
     0x1.3d365ffebd211p-647, 0.0, 0.0, 0.0, 0x1.e720704b56679p-980, 0.0,
     0x1.f7d99d3aad7cp-7, 0x1.ab9fa8098cf4fp-519, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.505650aea9e28p-660,
     0x1.67856389112b4p-746, 0.0, 0x1.47453f3599f4ep-795, 0.0, 0x1.f1984eb647e66p-849,
     0x1.989bbbc549c63p-606, 0.0, 0.0, 0x1.003322d5a9de2p-645, 0x1.694958cd39db1p-402,
     0.0, 0x1.e4e7dd0b876e7p-824, 0x1.0e2a6cc400f9ap-77, 0x1.c2e84e2e37219p-901, 0.0,
     0x1.30e4ddd0e9557p-610, 0x1.3ee041a6db38cp-794, 0.0, 0x1.0eee594c76b5cp-292,
     0x1.7d3ad794e80dcp-202, 0.0, 0x1.c711ca33659f1p-806, 0x1.c7bf9d32f03edp-122, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.835b2dc31e2a1p-689, 0.0, 0x1.b64437a631976p-312, 0.0,
     0x1.084c498b7480ap-275, 0x1.5352cb3f0dd15p-201, 0x1.c65095c8a4dffp-786, 0.0, 0.0,
     0x1.aea719f5160bp-247, 0.0, 0x1.af40f41992f27p-205, 0x1.66066f5fe8a8p-817, 0.0,
     0x1.8210f74b07f94p-651, 0.0, 0x1.e27812744fbafp-238, 0x1.5bef6e79ca376p-878, 0.0,
     0.0, 0x1.e94237aafe2f4p-875, 0x1.b1899d21b18bap-569, 0x1.95407393d6041p-454,
     0x1.a982146a34a86p-751, 0.0, 0x1.e9c84da7e15b7p-228, 0.0, 0x1.50f40a7219664p-794,
     0.0, 0x1.3418872810476p-731, 0.0, 0.0, 0x1.2c43fd7316e2dp-713,
     0x1.b697670054f7bp-485, 0x1.e3e9a07de7addp-125, 0x1.a91f54ac88e4p-374, 0.0,
     0x1.1c29ae3d717c8p-457, 0x1.e0e3cc23876ecp-39, 0.0, 0x1.93facaa99b28ep-548, 0.0,
     0.0, 0x1.925dfd8d343dbp-953, 0x1.019f9aa1862cfp-967, 0x1.4161d0c205783p-816,
     0x1.4fc575b5bf1e3p-752, 0x1.dc529ee9707e8p-659, 0.0, 0x1.283c8d4c0a458p-931,
     0x1.59e714eaceb57p-664, 0x1.398376f70f058p-1017, 0.0, 0x1.cd6d68aa622dap-630,
     0.0, 0x1.5f8da0129cd9bp-840, 0x1.7abe3d3ac50ep-739, 0.0, 0x1.16a62df966628p-719,
     0x1.e623fbe521eep-846, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbaa5fd432b4dp-403, 0.0,
     0.0, 0.0, 0x1.a087f5fe883e3p-6, 0.0, 0.0, 0.0, 0.0, 0x1.025468e8dcb19p-993, 0.0,
     0x1.4c60ee2aa73ddp-795, 0x1.2440a4028c56ap-714, 0x1.b0d91af0bcaddp-813, 0.0, 0.0,
     0x1.715750c4140d4p-1021, 0x1.39e07573b8065p-567, 0x1.ec462bd55292fp-615,
     0x1.d67591b67329ep-397, 0.0, 0.0, 0.0, 0x1.6547da8e1227fp-179,
     0x1.9747d0d9f99cfp-641, 0.0, 0x1.4a1e6bfd3ee9cp-769, 0x1.d22e9a7ba0d6dp-208, 0.0,
     0.0, 0x1.9b65543af180cp-449, 0x1.579522acd5a5cp-629, 0x1.770410d6f27cdp-192, 0.0,
     0x1.8ad35030abe8ep-665, 0x1.ff05cd6f1d523p-698, 0x1.f6f21ddc94bfcp-470, 0.0, 0.0,
     0.0, 0.0, 0x1.ad787057168f3p-799, 0x1.08f1999b3d1c5p-99, 0.0,
     0x1.3bff270f98c5cp-503, 0x1.b131e35cbc76dp-486, 0x1.8d6ad80357222p-285,
     0x1.ea730a27c1417p-350, 0.0, 0.0, 0.0, 0x1.bf43f11e39f42p-98, 0.0,
     0x1.e6fa405f66d5ep-1013, 0.0, 0x1.34607d153bf12p-35, 0x1.55f4ba2a600adp-242,
     0x1.0c9a06e0837a9p-854, 0x1.a0d78dde81c69p-840, 0x1.92cc3f7cfbff7p-283,
     0x1.3aa3b293b8522p-728, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5063c1512d94p-83,
     0.0, 0.0, 0x1.684b72f14b27ep-321, 0x1.52f48a86a6feap-166, 0.0, 0.0,
     0x1.a8ccbd28a62a5p-219, 0.0, 0x1.df9edc909705ep-242, 0x1.358591123ffa9p-499, 0.0,
     0x1.21564ce6d3fc2p-791, 0.0, 0.0, 0x1.a45abdfba4031p-184, 0.0,
     0x1.ca065cff06791p-461, 0x1.3e7e00ed20e44p-359, 0x1.d1ebb2d289dddp-414,
     0x1.73c410cd46faap-662, 0.0, 0.0, 0x1.3cf35d04b9b06p-812, 0x1.f7bac5e95edbfp-69,
     0x1.4922690258ac4p-829, 0.0, 0.0, 0.0, 0x1.b1efa6a7c37f5p-553,
     0x1.862793574c48fp-239, 0x1.aa757e3dca938p-994, 0.0, 0.0, 0x1.b2c345b9c3b95p-755,
     0.0, 0.0, 0.0, 0.0, 0x1.940e2071be268p-669, 0x1.82fa3315b6177p-277, 0.0,
     0x1.1ffb1ef491f88p-617, 0x1.4568899f7df3ap-919, 0x1.75f4ae139fa2dp-433, 0.0, 0.0,
     0.0, 0.0, 0x1.9231348c27a86p-48, 0x1.8ea8263523e28p-784, 0.0,
     0x1.d9a2128a30054p-882, 0x1.ccd3b133d1e16p-696, 0x1.7da51c8800712p-526, 0.0,
     0x1.37895ad298b18p-471, 0.0, 0.0, 0.0, 0x1.1cd461733923fp-386, 0.0,
     0x1.328b28e76c12cp-375, 0x1.d0ce6b120ed88p-814, 0.0, 0.0, 0.0, 0.0,
     0x1.001075452200ep-734, 0x1.c3756f20a18edp-106, 0.0, 0x1.e7dcb3b70d073p-721,
     0x1.b6d1204e5755ap-674, 0x1.81c42cb561b67p-453, 0.0, 0x1.9d50f83badfbcp-335,
     0x1.e4484425014cbp-893, 0.0, 0x1.09ab63e219099p-525, 0x1.c07666a98d588p-641, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.32eba2121ecc8p-730, 0x1.ca9768cca5462p-547,
     0x1.be64fc3efdb45p-249, 0x1.b12c33a161eaep-984, 0x1.be41a8b2b14e1p-284,
     0x1.b424eccf041efp-275, 0x1.313d3330f8ca8p-397, 0x1.a9101634831d3p-516, 0.0,
     0x1.c001085c5747cp-943, 0.0, 0.0, 0.0, 0.0, 0x1.73ebc72d12007p-513,
     0x1.245127b46d709p-171, 0x1.0b2fd2ce0f1b9p-610, 0.0, 0x1.98d8013a8fcdfp-433,
     0x1.a3ec2bada3f46p-412, 0.0, 0.0, 0x1.37d28119fb85bp-599, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8fe6111bfea8cp-307, 0x1.d8fac402f6ea5p-835, 0x1.dee3a597e360bp-581,
     0x1.aef0392e95edep-577, 0.0, 0x1.ce21016cd70d9p-555, 0x1.0f47e7bcc0056p-9,
     0x1.1c1464781ea8dp-673, 0x1.628d17cac7d38p-902, 0.0, 0x1.4b7387d199217p-126, 0.0,
     0.0, 0.0, 0x1.cb29c77bf32ccp-984, 0x1.bb35ec8375579p-535, 0x1.711737a5e0e38p-332,
     0x1.c51d19dad5a36p-303, 0.0, 0x1.0017b895a2bdep-550, 0.0, 0.0, 0.0, 0.0,
     0x1.6f0b54c287fe9p-523, 0x1.e7ec0908fab99p-731, 0.0, 0.0, 0x1.706f2615a44aep-373,
     0x1.300eb6d68bc2p-961, 0x1.4f455dd87c752p-993, 0.0, 0.0, 0.0,
     0x1.f5bbddf99192p-388, 0.0, 0.0, 0x1.0dc5df266a95bp-559, 0.0, 0.0,
     0x1.a1db388a51fe2p-865, 0.0, 0x1.f35a4b65c6768p-811, 0.0, 0x1.a65cec4c03c8p-669,
     0x1.82e383f5ddd68p-543, 0.0, 0x1.95f8f5fc2d775p-381, 0.0, 0x1.b639cfbc5ca0fp-813,
     0x1.40db5822761ap-464, 0x1.ad99b2ec47613p-474, 0.0, 0.0, 0x1.0166491cdfdbfp-524,
     0x1.01df2ffe6342p-104, 0x1.049138de35c75p-986, 0x1.99b6e62923e62p-125,
     0x1.7e288edadde61p-600, 0.0, 0.0, 0x1.e59f596c9042bp-576, 0.0, 0.0, 0.0, 0.0,
     0x1.1bb5f3754046fp-938, 0.0, 0x1.f8bd38b746266p-112, 0x1.82abb05e70f8ap-1009,
     0x1.7be8e159cfd52p-232, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.aebc0fbc66e91p-461, 0.0, 0.0, 0.0, 0x1.c13701d67d612p-908, 0.0, 0.0, 0.0,
     0.0, 0x1.9d55b67d4ef4ap-184, 0x1.5c3a4e98413cbp-458, 0x1.d6c8a2da0a1e7p-303,
     0x1.c7fcf07a8eec6p-516, 0x1.15fbf1beea2d1p-662, 0x1.e937af65f2bb7p-339,
     0x1.20ebc2e558a14p-758, 0x1.af4daef08e59ep-49, 0.0, 0.0, 0x1.b3070de4f40a9p-133,
     0x1.b48f6467f1a77p-825, 0.0, 0.0, 0x1.c47787abe9877p-904, 0.0, 0.0, 0.0,
     0x1.d3112193bb3c1p-558, 0.0, 0.0, 0.0, 0x1.21db22603f815p-558,
     0x1.7b7a17dca09dcp-116, 0.0, 0x1.7b30bb256e20ep-188, 0x1.185fd7454c9cep-381, 0.0,
     0.0, 0.0, 0.0, 0x1.493430f90d62ep-277, 0x1.dbb272951c86p-618, 0.0, 0.0,
     0x1.95c5f8a2fad4p-361, 0x1.a8e2bd8ea7da1p-313, 0x1.4bf160fdc7782p-383,
     0x1.1962cc2c64727p-435, 0.0, 0.0, 0.0, 0x1.8f2e7db4186bcp-57, 0.0,
     0x1.9e886c1d980a6p-943, 0.0, 0x1.21f315e00c145p-741, 0x1.4251ae6966206p-581, 0.0,
     0x1.9bfbbc5595badp-530, 0x1.f841325dd266dp-518, 0x1.2674e6b8cb902p-13,
     0x1.1a7dd832a5927p-609, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f9c9bf94a6525p-894, 0x1.332f691b63958p-198, 0x1.2102e46470b2p-68, 0.0, 0.0,
     0x1.2efca5aa4ea78p-53, 0x1.fe231305df5b2p-230, 0.0, 0x1.2e28cee5f802p-822, 0.0,
     0x1.4503398245b91p-341, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2bc7dff54632p-646, 0.0,
     0.0, 0.0, 0.0, 0x1.8f91c557ef07ap-967, 0x1.78d48cb7dbc94p-945,
     0x1.8758977dee97bp-771, 0.0, 0x1.6117d9c2c01eep-271, 0.0, 0.0,
     0x1.cd228eb1006b3p-62, 0x1.8cdbf6982c5cep-662, 0.0, 0x1.6224270888929p-345, 0.0,
     0x1.9e0b11ef5fc05p-863, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51583cecd5956p-174, 0.0,
     0x1.be74dc997b1c6p-913, 0x1.f23926f3f4174p-11, 0x1.61fe18f5467b5p-689, 0.0, 0.0,
     0.0, 0x1.3d590419f9fcep-516, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b50dd4b7336ebp-720,
     0x1.0513f44a0a235p-785, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cbf601a4d4919p-238,
     0.0, 0x1.e21b46470555ep-484, 0x1.9877249495712p-1017, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.46e2e487c5d82p-599, 0.0, 0x1.1f31a7d2a226ep-805, 0.0, 0x1.416a7ae84b144p-879,
     0.0, 0x1.d4cd6f5eaabp-695, 0x1.81a17dc9d32d4p-386, 0.0, 0.0,
     0x1.d16e18072e5d1p-423, 0.0, 0x1.2768d36c6a2cbp-355, 0x1.be68fd031fac5p-740,
     0x1.a199b8d7f0cb2p-964, 0.0, 0x1.863c3497b60a2p-241, 0.0, 0x1.51c2968c1da7bp-125,
     0.0, 0x1.f243736524a6p-984, 0.0, 0.0, 0.0, 0x1.d11f5053bf777p-540, 0.0, 0.0,
     0x1.58ba439de6ap-7, 0.0, 0x1.276c0cbf52c22p-699, 0x1.f21d007f4302bp-214, 0.0,
     0.0, 0x1.a6b4c13192a7dp-37, 0.0, 0.0, 0x1.1a920a65b0f11p-666, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.fbc225e68d377p-664, 0.0, 0.0, 0x1.dddc5d9d5c371p-789, 0.0, 0.0,
     0x1.44bd1353a6685p-600, 0.0, 0.0, 0x1.5780071931c66p-884, 0.0,
     0x1.ac5c41171252ap-695, 0.0, 0x1.94353a53b75f4p-725, 0x1.91f8c1051e84cp-36,
     0x1.2712d3dcc5b4fp-629, 0.0, 0x1.26f353b748fcp-501, 0x1.4db195945dd49p-794,
     0x1.4ad40a5df42c7p-486, 0.0, 0x1.3ee3ed22e8fe9p-645, 0x1.9fce359c35451p-545,
     0x1.edf819765c736p-928, 0.0, 0x1.279c0ff005546p-875, 0.0, 0.0,
     0x1.3e3decfd01fa5p-893, 0.0, 0.0, 0x1.136c3d4cd02bdp-306, 0x1.59661098f5ddfp-93,
     0.0, 0.0, 0.0, 0x1.31fb2f0392fc5p-980, 0x1.066c10a64f5a9p-658, 0.0,
     0x1.80a09f9caae8bp-342, 0x1.cb0b58bdc747bp-626, 0.0, 0.0, 0x1.abb39c2a94ea4p-665,
     0.0, 0.0, 0x1.4b0d51f8b36cbp-789, 0.0, 0.0, 0.0, 0x1.6e133231667a3p-811, 0.0,
     0x1.1d712ee98aeb2p-373, 0x1.3607f5749f00cp-336, 0x1.d07171fb08dd3p-357, 0.0, 0.0,
     0x1.6f3005deaea5cp-558, 0x1.98faecd8869a8p-1020, 0.0, 0.0, 0.0, 0.0,
     0x1.8d1e10ce61441p-830, 0x1.2e7d55659a6c6p-702, 0.0, 0x1.23974baa58153p-332, 0.0,
     0x1.b23f856578839p-332, 0x1.2556698ab0443p-396, 0x1.da72ba2c4ca2dp-792,
     0x1.9011676138708p-309, 0x1.b5344ed01d0d2p-226, 0.0, 0x1.b9d3ff27233b7p-94,
     0x1.c2f8b89af09e4p-987, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.49b2f1f1f4539p-741, 0x1.1ce16b11408e2p-762, 0.0, 0.0, 0x1.9237545a60a29p-6,
     0.0, 0.0, 0.0, 0.0, 0x1.c64c19d927d5ap-877, 0.0, 0.0, 0.0,
     0x1.8e4fdd322ca3ep-864, 0.0, 0x1.d1421dfa1e773p-188, 0.0, 0.0,
     0x1.582b5954219e5p-215, 0.0, 0.0, 0.0, 0.0, 0x1.ffff675ca2052p-214,
     0x1.ef6a47a12a6d6p-631, 0.0, 0x1.c5e02e9a84884p-294, 0.0, 0.0, 0.0,
     0x1.85a341702c893p-237, 0.0, 0x1.52d848bd6147p-10, 0x1.7405c77a96ba1p-693,
     0x1.10d526e57e7a3p-819, 0x1.6b92c4bdb2696p-389, 0x1.cc714196d3716p-396, 0.0,
     0x1.26bb291c726b5p-849, 0x1.a2d8209fb49e9p-631, 0x1.5c1a26131aecp-536,
     0x1.9cc235653005bp-187, 0.0, 0x1.0ed40e0c77155p-780, 0x1.b5598ca3b68e7p-61,
     0x1.906c92e03306p-475, 0x1.42a3cdd7399f3p-687, 0.0, 0.0, 0.0,
     0x1.a460ffffd4faep-863, 0x1.3faab6693884bp-644, 0.0, 0.0, 0.0,
     0x1.206462418b5e1p-426, 0.0, 0x1.7b071006cb70bp-19, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_sincospid2_u35kvx(tmp0);
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
    printf("Sleef_finz_sincospid2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sincospid2_u35kvx bench acc {.x=[%a, %a], .y=[%a, %a]}\n", global_bench_acc.x[0], global_bench_acc.x[1], global_bench_acc.y[0], global_bench_acc.y[1]);
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
