/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_truncd2_kvx.c --function Sleef_truncd2_kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd08fc650742dp-53,
     0x1.99a864ccfb24ep-164, 0x1.6c41c4a899cfap-732, 0.0, 0x1.bf714cbf8ca58p-664,
     0x1.ba1ad5e2e03ddp-505, 0.0, 0.0, 0.0, 0.0, 0x1.b6862a2a1ba38p-728,
     0x1.f222ba5cc15bbp-734, 0.0, 0.0, 0.0, 0.0, 0x1.f1d61838c9138p-783, 0.0,
     0x1.bf121edbe5ac7p-731, 0.0, 0.0, 0x1.f809134986039p-1010, 0.0, 0.0,
     0x1.f46f2699bbf28p-972, 0.0, 0x1.e99463b1606c6p-740, 0.0, 0x1.046bb9eede971p-101,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1403f8e490332p-787, 0.0,
     0x1.a132a3f6276b1p-370, 0.0, 0.0, 0x1.4f230e5157222p-146, 0.0,
     0x1.bbf7cf1581eep-749, 0.0, 0.0, 0x1.7f8eb51428704p-134, 0.0,
     0x1.683ace8f63e6bp-896, 0.0, 0x1.c44296fa63dadp-732, 0.0, 0.0,
     0x1.f434ac36e0f4fp-801, 0x1.c81def5c9f3dcp-202, 0.0, 0x1.e6f2ef73c7123p-289,
     0x1.992ff9235319cp-569, 0x1.2680bfc4757a5p-567, 0.0, 0x1.5d4fec8ce524ap-713,
     0x1.b7a7cf7f93714p-456, 0.0, 0x1.c045800b85a32p-448, 0.0, 0.0, 0.0, 0.0,
     0x1.1f5ee1fcf0dc3p-28, 0.0, 0.0, 0x1.a7568a7b2a63ep-756, 0x1.840cc6a017693p-904,
     0.0, 0x1.4ca496bda1c7cp-22, 0.0, 0x1.07fadfe402d88p-364, 0x1.a948489f6e5f2p-416,
     0x1.7697b8b04a14dp-282, 0.0, 0.0, 0.0, 0x1.fd1038194e7bdp-929,
     0x1.e36b04ce31cb5p-57, 0.0, 0x1.6fedfa5de76a6p-876, 0x1.dab8112ee25f7p-603, 0.0,
     0.0, 0.0, 0x1.d2290d22391c8p-564, 0x1.a36eab89a7897p-657, 0x1.7f871d0dc3497p-695,
     0x1.6c3e41db8833p-489, 0x1.5218777630e76p-301, 0x1.594baff9a9ee8p-648, 0.0,
     0x1.abd84ceb8f6eep-786, 0x1.794953f4cb9a6p-748, 0x1.432231eb85995p-99, 0.0,
     0x1.49f638e635c55p-115, 0.0, 0x1.1c38f25b16ae1p-184, 0x1.57cfcdfa6bef3p-741,
     0x1.ce1c14265fd47p-323, 0x1.6f5b906e7725ep-308, 0x1.778ddfc818c06p-46,
     0x1.688287818167p-195, 0x1.2776302957d04p-772, 0x1.d4ea8872f8915p-606, 0.0, 0.0,
     0.0, 0.0, 0x1.4635b8d34a288p-148, 0x1.8361a2669c9d6p-887, 0x1.b7a584e7fce85p-80,
     0.0, 0.0, 0.0, 0x1.e29128f99d029p-164, 0.0, 0x1.b0f4bce8997e9p-186, 0.0,
     0x1.9a8eaa0127736p-804, 0x1.9d8bca392f58ep-129, 0.0, 0x1.3000ef0a11cap-494,
     0x1.801e741584cd5p-867, 0x1.5604873737f8dp-905, 0.0, 0x1.9552807ef2dddp-802,
     0x1.7dc9cf67fb825p-784, 0x1.7dcbd71df95dcp-601, 0x1.2960c6d15f5c6p-747,
     0x1.aed179c6f62bfp-424, 0.0, 0.0, 0x1.64d09ee26b471p-823, 0x1.01d1e0eb5efb7p-10,
     0.0, 0x1.061994264febcp-331, 0.0, 0.0, 0.0, 0x1.e5e63f23c78dfp-489,
     0x1.38589ff87400bp-370, 0x1.804e6e25bbef9p-36, 0.0, 0x1.46f57ae67cbc3p-944, 0.0,
     0.0, 0.0, 0x1.7e997b5148f1ep-735, 0x1.9987a039b9d31p-275, 0.0,
     0x1.f883038669ac3p-656, 0.0, 0.0, 0x1.5bf33873a1d6cp-868, 0x1.92db92a3d96a5p-262,
     0x1.65db6920dc0ecp-379, 0.0, 0.0, 0x1.0d8520f1f6ecdp-202, 0.0, 0.0,
     0x1.4829199cf395ap-563, 0x1.5e7ad19b631a3p-692, 0.0, 0x1.cebb04425bc0fp-281, 0.0,
     0x1.d644ee5f05156p-262, 0x1.82d594f1635b8p-78, 0x1.2339988bd49d4p-258,
     0x1.85c894ef81df3p-241, 0.0, 0.0, 0x1.00dd83ddbe166p-535, 0.0,
     0x1.5e185db673e1ep-214, 0x1.f9f39a2a4c872p-626, 0x1.f83c80935aedbp-575, 0.0, 0.0,
     0x1.cf45a2e62ad9ep-707, 0.0, 0.0, 0x1.55633b5dfc03fp-129, 0x1.08e16084f5a25p-308,
     0x1.b21d3b08c2871p-752, 0x1.7ccb01d219fe2p-898, 0.0, 0x1.d4b6eb5707e6dp-625, 0.0,
     0.0, 0x1.4016941e3e535p-574, 0x1.fd429ce6d2a2cp-920, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e1140bfad784p-507, 0.0, 0x1.b5bd8a521416fp-636, 0.0, 0.0,
     0x1.1ab1b31bdbb17p-968, 0.0, 0x1.2e91cce995c31p-758, 0.0, 0.0,
     0x1.18879fa685b11p-202, 0x1.cfc1deee2517bp-652, 0x1.4777e006b2579p-793, 0.0,
     0x1.734fb4460c4cap-649, 0x1.cc4e8578a38a8p-637, 0x1.8421fb77816abp-267, 0.0,
     0x1.ac71768e941bcp-322, 0x1.f48325feba517p-481, 0.0, 0x1.f1fcc039b77abp-146,
     0x1.c977f9ba9c3b9p-383, 0.0, 0x1.2fc9a52c59a59p-133, 0x1.1d7d99f3e81fcp-763,
     0x1.c8721e076b623p-863, 0.0, 0.0, 0.0, 0.0, 0x1.8b94c5c608f3ap-1001,
     0x1.73708e889750cp-375, 0.0, 0x1.19cae90b312d4p-705, 0.0, 0.0,
     0x1.9f9ab2f306cadp-355, 0.0, 0x1.3696b6b2c731fp-53, 0x1.2639b8f3cf4bap-91,
     0x1.aac1506ca373fp-486, 0x1.45042b9b94933p-244, 0.0, 0x1.6af12fba74d8ep-461,
     0x1.f1b3c693ccb6ap-952, 0.0, 0.0, 0x1.7224831f4ea1dp-765, 0x1.d4b380f2fd849p-375,
     0.0, 0.0, 0.0, 0x1.671e5ee9b783ap-537, 0.0, 0x1.ad76452a71178p-428, 0.0,
     0x1.d8b9b845d09ecp-582, 0.0, 0x1.372195a79e0a4p-668, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d6ffa5e7f0234p-34, 0.0, 0x1.41a7ed66a75d6p-273, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.338b5ff96d56fp-873, 0.0, 0.0, 0x1.916b8d09bf99ep-330, 0x1.102b64eb65f4fp-204,
     0.0, 0x1.e8b5a1b539d63p-424, 0x1.b72547d65409p-266, 0x1.d62e68fc93d51p-277, 0.0,
     0x1.cedc9f92ec732p-652, 0x1.8044be2b5f52bp-103, 0x1.5d21d48393001p-46,
     0x1.0646d84e087e1p-160, 0.0, 0x1.dd37a5334e6f2p-637, 0x1.a518cb3cde352p-567,
     0x1.3422a20f98641p-625, 0.0, 0.0, 0x1.780811b8843a9p-882,
     0x1.3e9b9b4651af1p-1000, 0x1.205ad017e3b6dp-170, 0x1.b6e612ab9787fp-329,
     0x1.5558ab768c677p-380, 0x1.3c5a22371b166p-627, 0.0, 0.0, 0.0, 0.0,
     0x1.0ad4ce5d3f4eap-1005, 0x1.e046b0472a897p-502, 0x1.f3ee4c83ef9f1p-48,
     0x1.9a69ea5ff8d26p-702, 0.0, 0x1.237558d87c5e4p-580, 0.0, 0x1.bdc7cfb0a3c55p-676,
     0x1.1b22edd8b7f6dp-432, 0.0, 0x1.d94e2d7c9d8c1p-372, 0.0, 0.0, 0.0, 0.0,
     0x1.a988a867e78dep-238, 0.0, 0.0, 0x1.493d7309dccfdp-291, 0.0,
     0x1.5fe047992fea1p-716, 0.0, 0.0, 0x1.2c67daa192ea8p-890, 0.0, 0.0,
     0x1.028144ffb44bdp-740, 0x1.11e6211a7b036p-578, 0.0, 0x1.16e9df4a9c357p-410, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.518dbaec8a1e3p-909, 0x1.2060538808738p-136,
     0x1.2b9763f65fa2p-139, 0x1.3c0f99c8dbc69p-647, 0x1.ae8f256069384p-126,
     0x1.d809b62a1f34ap-778, 0.0, 0.0, 0.0, 0x1.dcc687070d0a7p-273,
     0x1.fac975389cde6p-1006, 0.0, 0x1.eeddbc1590c4cp-990, 0.0, 0.0,
     0x1.21fb1f7576ef3p-973, 0x1.1d3977abdbae5p-47, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5d4017c93c6eap-483, 0x1.4b3a4fa80da4bp-238, 0.0, 0.0, 0x1.ef6f4922ebf55p-123,
     0.0, 0x1.34843ae9fc9ccp-781, 0x1.ff1c3ff8e446ep-969, 0x1.ad5d8b09da06p-537,
     0x1.2c1b3eeb01d2fp-590, 0.0, 0x1.720f1e1a98485p-851, 0.0, 0x1.967a6b74c344p-868,
     0.0, 0.0, 0x1.8f300d52de23ep-208, 0x1.fb0be2f25d3fep-130, 0x1.518cfd813161p-653,
     0x1.10877ab5abefp-295, 0x1.2b109ecddc752p-913, 0.0, 0.0, 0x1.dd5976ac444edp-604,
     0x1.2040e1d49cbc2p-649, 0.0, 0.0, 0.0, 0x1.d77e53a4e981dp-991, 0.0,
     0x1.c45e0ad877a32p-15, 0x1.556a6fc7f352p-627, 0x1.63849cbd0d5fep-530,
     0x1.57b0d1051eb81p-828, 0.0, 0.0, 0x1.37b08c59e21e1p-746, 0.0,
     0x1.aab5f89f32461p-953, 0x1.1b343bc1b60c1p-867, 0.0, 0x1.67ec63f4531p-985,
     0x1.797d5e5138c47p-225, 0x1.abeaa21d7fbc4p-62, 0x1.8865e32cc462ap-317,
     0x1.c6e77e2679b97p-345, 0.0, 0x1.b4d2269929488p-850, 0x1.17699c27688d9p-396, 0.0,
     0x1.f30115631e42ap-514, 0x1.68f4ab799824ap-7, 0x1.7a8adefc71f4dp-484,
     0x1.4b692ab80a13ap-846, 0.0, 0.0, 0.0, 0x1.a8d4682b45845p-505, 0.0, 0.0, 0.0,
     0x1.83f9570911a66p-214, 0x1.e6f5903bff2d7p-249, 0.0, 0x1.d105dfd189a08p-78,
     0x1.ce878872fbb3ap-783, 0.0, 0x1.20a034562548ap-750, 0x1.e3d6f922dded2p-416, 0.0,
     0x1.51d479760522bp-98, 0x1.b958d010eceaep-635, 0.0, 0x1.56991ef4a3c51p-946, 0.0,
     0x1.a23769b3db443p-938, 0x1.00a627bc74afep-132, 0x1.3f0efacf0251fp-554, 0.0, 0.0,
     0.0, 0x1.9d9f29157084cp-1002, 0.0, 0.0, 0x1.b419798452092p-540, 0.0, 0.0, 0.0,
     0.0, 0x1.8c3fb6923de42p-941, 0x1.240bbe1821954p-254, 0x1.2763ec2e0d052p-233,
     0x1.b6322016f045ap-25, 0x1.6faf4bc74b433p-384, 0.0, 0x1.e79883616104cp-92, 0.0,
     0x1.3788262387241p-287, 0x1.b450530117708p-903, 0x1.3aa564ee6ba71p-127, 0.0, 0.0,
     0.0, 0x1.1c03347212044p-837, 0x1.cbebe6d6b7d72p-735, 0x1.f5d184c823a3bp-9, 0.0,
     0.0, 0.0, 0x1.b0d8f1d45062fp-160, 0.0, 0x1.fd0137a1c139ep-295,
     0x1.1274da8d960d1p-504, 0x1.0d9b2838784a5p-516, 0x1.16de6aa82fdd4p-822, 0.0, 0.0,
     0.0, 0x1.885c69d1e4cacp-489, 0x1.e61b07f8da77cp-601, 0.0,
     0x1.8296cb40d4ad1p-1002, 0x1.98ed92b2dbf51p-126, 0.0, 0.0, 0.0,
     0x1.e4e0bee3ec4c9p-927, 0.0, 0.0, 0.0, 0x1.2cd9308b1dc4p-487,
     0x1.71bad28b9c5f7p-635, 0x1.1b6fbd025a2cdp-602, 0.0, 0.0,
     0x1.2c2ac54952bbdp-1001, 0x1.f4e86c235e025p-985, 0x1.10dabfe46c052p-872,
     0x1.13d4b1c415d74p-585, 0.0, 0.0, 0x1.b8cce2259f501p-423, 0.0,
     0x1.1bc5c290858b8p-149, 0x1.7ab19b571858cp-126, 0x1.d6ccc1d1c06a2p-835, 0.0,
     0x1.04d3017d5e47cp-959, 0.0, 0.0, 0x1.0d22a5513a5b2p-806, 0x1.875956fc4bca9p-217,
     0x1.57234d2ceb0d4p-754, 0x1.d4bbbeab98722p-716, 0.0, 0x1.22bb6ab8e07cep-271, 0.0,
     0.0, 0x1.c5f2f58e6beabp-83, 0x1.76aa95a986a0fp-804, 0.0, 0.0, 0.0,
     0x1.44236cd794783p-605, 0.0, 0.0, 0x1.a13a53f8efafcp-814, 0x1.468009b98232fp-192,
     0x1.961caeab5784ap-730, 0.0, 0.0, 0.0, 0.0, 0x1.f761aef49a255p-77,
     0x1.08cdc6cec3591p-609, 0x1.4fead1101f8a2p-58, 0.0, 0x1.3ad5cb876763p-709,
     0x1.793874febc908p-543, 0x1.b6b9d5c1c4efdp-1021, 0.0, 0x1.7f3f77fd68c73p-800,
     0.0, 0.0, 0x1.719c1d909b1a7p-647, 0x1.d9bb1641283efp-361, 0.0,
     0x1.c57b6bbaf215bp-170, 0.0, 0.0, 0.0, 0x1.c3b7a2a963cddp-186, 0.0,
     0x1.3b44792f86c29p-1021, 0x1.0d582fd7c77e6p-605, 0x1.f2a7ecc5deecfp-228,
     0x1.989c872ca7888p-212, 0.0, 0.0, 0.0, 0.0, 0x1.96194ffe1c75cp-772,
     0x1.5d2c587c23c0cp-725, 0.0, 0.0, 0.0, 0x1.dda50b3123c23p-431,
     0x1.751448cba698p-342, 0x1.a67176cfc48b3p-414, 0.0, 0.0, 0x1.fb49fa8f7ffdep-968,
     0.0, 0x1.773b8eace0146p-784, 0.0, 0.0, 0x1.fcfe250066395p-807, 0.0,
     0x1.19ae7e16a1cbdp-83, 0.0, 0x1.dda307ae86356p-210, 0x1.e6a65972cb009p-258,
     0x1.2dd6ce74f9135p-53, 0.0, 0.0, 0.0, 0x1.bf1c01e535851p-987,
     0x1.59a195b389252p-400, 0.0, 0x1.ec1939daff1b2p-798, 0.0, 0x1.16cfa11ff3998p-302,
     0.0, 0x1.555064bf5f8fdp-225, 0x1.7d9da2143146cp-99, 0.0, 0.0,
     0x1.a95c9ec321d5ep-845, 0.0, 0x1.a193f4f9a7ed3p-117, 0.0, 0.0, 0.0, 0.0,
     0x1.d73c7043dace3p-340, 0x1.3f2947e34e14dp-510, 0.0, 0x1.713cc67444eb3p-379,
     0x1.061201b0dc8ecp-346, 0x1.4d5e6a691df7p-837, 0.0, 0x1.3ce2f6a4cc23cp-4, 0.0,
     0.0, 0.0, 0.0, 0x1.67a0f35dd2797p-233, 0.0, 0x1.5e3441f335466p-9, 0.0, 0.0,
     0x1.204c25816f811p-748, 0.0, 0.0, 0.0, 0.0, 0x1.23be0f1e3e2f4p-180, 0.0, 0.0,
     0x1.bf72d6a6bd8d8p-193, 0x1.77d6264e49e17p-252, 0.0, 0.0, 0x1.9a7482eb8d577p-273,
     0x1.939f6bb270006p-845, 0.0, 0x1.c40e95a29a42bp-66, 0.0, 0x1.ab4c30287c80dp-756,
     0x1.4a8045ee41107p-313, 0.0, 0.0, 0x1.6ee349bfe77bap-628, 0.0, 0.0,
     0x1.f74a6f4a9086ep-522, 0.0, 0.0, 0x1.51d7516b06b19p-837, 0x1.545574e35ff52p-967,
     0.0, 0x1.80fe1489f7cb8p-73, 0x1.13b5172d6959bp-1014, 0x1.7ca9e16e807cep-174,
     0x1.a8fd10ec3990ap-825, 0x1.b12029d818bccp-488, 0.0, 0x1.613a4da74fcb5p-832,
     0x1.fda925fb8ca9fp-654, 0.0, 0.0, 0.0, 0x1.0284f3eda7a3fp-779, 0.0, 0.0, 0.0,
     0x1.ec444c400b074p-910, 0.0, 0x1.75b3c815ef8e8p-532, 0x1.676c0278f1f61p-651,
     0x1.cd23da841bfa1p-990, 0.0, 0.0, 0.0, 0x1.cda08ba1f1233p-717, 0.0,
     0x1.c2708f384de68p-984, 0x1.db1528e2c32e1p-438, 0x1.370375ec29974p-783,
     0x1.b9f1e2d00cdedp-274, 0x1.fea6f3a4bac03p-573, 0x1.cfaa14e29089dp-517,
     0x1.1635974e2f0bfp-970, 0x1.de249ac189ap-712, 0.0, 0.0, 0x1.0282f27ad45a5p-929,
     0x1.1b1fd07860424p-364, 0.0, 0x1.8d90b9c6136f1p-338, 0x1.0de529c760224p-674, 0.0,
     0.0, 0x1.7c20e4409d2e6p-248, 0x1.0689e8310fcb3p-477, 0.0, 0.0, 0.0,
     0x1.b15e47d432235p-593, 0x1.a63bec8054ba8p-827, 0x1.8bc0845549049p-712,
     0x1.5f66ba64126bap-468, 0.0, 0.0, 0x1.9e7faee3e0037p-191, 0.0, 0.0, 0.0, 0.0,
     0x1.40bb1067d5c78p-519, 0.0, 0x1.dd60719c3a032p-439, 0x1.3859dac4858f6p-923, 0.0,
     0x1.c4dc999dea152p-351, 0.0, 0x1.b8ccaf8e794b9p-296, 0.0, 0x1.d6addba63522cp-334,
     0x1.4329f5fabfb79p-804, 0.0, 0.0, 0x1.d55c0a438acafp-568, 0.0,
     0x1.ca7bd07845cd2p-760, 0x1.469d98810c887p-361, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0cb94ca9c46bp-523, 0.0, 0x1.e2ce5abf5837p-519, 0x1.ff4ba0423b16ep-514, 0.0,
     0.0, 0.0, 0.0, 0x1.d7994eebf2832p-825, 0.0, 0x1.642998acbf905p-951,
     0x1.3c02ec001ac8cp-901, 0.0, 0.0, 0x1.85b47ab4c3feap-54, 0.0, 0.0, 0.0,
     0x1.fe6cf03a4a21ep-696, 0.0, 0x1.e8c84979dc263p-648, 0.0, 0x1.eb334a850b7cdp-572,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97427c43b7c1ep-428, 0x1.dfba400c08a99p-943,
     0.0, 0x1.3ba1a748eaa32p-954, 0.0, 0.0, 0.0, 0x1.2f52bd2c74e0cp-84,
     0x1.ce02dd12b3b5bp-80, 0.0, 0.0, 0.0, 0.0, 0x1.9a2c10d4f81e4p-780,
     0x1.4fd46d022f558p-81, 0x1.e3b188fca00e2p-24, 0x1.551d6ee43d5c6p-344,
     0x1.e49e8ff9bb7f7p-624, 0x1.011df5df3e11ep-548, 0x1.a01fbf399ac98p-350,
     0x1.c93499bde78e4p-100, 0x1.d23862e53f515p-192, 0.0, 0x1.ebe780f89c1e4p-798, 0.0,
     0x1.2823d5dd0f2acp-577, 0.0, 0x1.6006ec247be2dp-139, 0.0, 0.0, 0.0, 0.0,
     0x1.973998ed54843p-588, 0x1.f4c9479e9cf9cp-80, 0x1.33886c304df97p-389, 0.0,
     0x1.bc8b26ce7a72p-299, 0.0, 0x1.12286c93b6befp-371, 0.0, 0x1.805590837ab22p-995,
     0.0, 0.0, 0.0, 0x1.a2809bad315b4p-709, 0.0, 0x1.5caa4635cb6f2p-78,
     0x1.4f64f62ba6985p-521, 0x1.0dd9dfb335cd1p-242, 0x1.58730fe1478e5p-386, 0.0,
     0x1.4bae7a923234bp-307, 0.0, 0.0, 0x1.66354dba2bb22p-812, 0x1.2f14e4580d047p-613,
     0x1.63a73cb70916fp-953, 0x1.33ec8b81e11d1p-312, 0x1.e1b83b029c07p-668,
     0x1.822aba9fb41ccp-908, 0x1.cac21eccbba1ep-877, 0x1.3946089563aeap-873,
     0x1.04bcfcc78b402p-721, 0x1.f41d6c2c48652p-893, 0x1.14872ee881cf8p-131,
     0x1.1573727a3d983p-854, 0x1.0b1dcdb36c364p-25, 0.0, 0.0, 0x1.e41035ab2f1e5p-139,
     0.0, 0.0, 0.0, 0.0, 0x1.87b4021c79473p-861, 0.0, 0x1.1d0bc8ffeb6ecp-854, 0.0,
     0x1.2d2f9d3bb883dp-594, 0x1.4a536f319f409p-762, 0.0, 0.0, 0x1.3f090e08c5cc7p-213,
     0.0, 0.0, 0.0, 0x1.68e1a5f7094b9p-228, 0x1.c03cc8cfde106p-27, 0.0,
     0x1.ae8c3edf8f42fp-532, 0x1.a4cf9a7507fc3p-669, 0.0, 0.0, 0x1.9999a9cb42b1bp-606,
     0.0, 0.0, 0x1.2385887b9c22ep-907, 0x1.4e518a470ba7dp-994, 0x1.81cc424f89d8p-190,
     0x1.8ea579938d70dp-317, 0x1.ee9f9872aa4a1p-889, 0.0, 0x1.809fcb66065b1p-649, 0.0,
     0x1.f62bb0397c632p-406, 0x1.2f54e867a30eap-458, 0.0, 0x1.93b4d8f3fd569p-847, 0.0,
     0x1.5210fdae93d22p-184, 0x1.72b02c07e481ep-220, 0x1.34531d7974ca8p-723, 0.0,
     0x1.1ed7eb14016fap-977, 0x1.1e8c39b76cedep-235, 0.0, 0.0, 0x1.35cfd086ca9cep-972,
     0x1.98b3efea870e2p-862, 0x1.491fcd9e805c9p-912, 0.0, 0x1.c920af25abfd9p-684, 0.0,
     0x1.2e863812c6c18p-914, 0x1.0bdbea4b84f0cp-260, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0e91f745e6cbbp-365, 0.0, 0x1.0e629831b83d8p-269, 0x1.edb062866c56ep-415,
     0x1.cb4d9942e33aap-625, 0x1.978515dc7e7f3p-289, 0.0, 0x1.d3e16cc8470b1p-626, 0.0,
     0x1.1bbc7e2796994p-147, 0x1.af4b223712c0ep-255, 0.0, 0.0, 0.0,
     0x1.0869e133be25bp-232, 0.0, 0.0, 0.0, 0x1.fd9f1f709fc04p-832,
     0x1.18c13fb2e5936p-320, 0.0, 0x1.c40be6b687564p-602, 0.0, 0.0, 0.0,
     0x1.ac1fa82683631p-465, 0x1.283485a2c3114p-267, 0.0, 0x1.879515eb654ebp-753,
     0x1.d3548b2c2fdbp-805, 0.0, 0x1.1c24f28ef2e5cp-826, 0x1.34b89f6cbfb7dp-882,
     0x1.d8349c9b52f5fp-638, 0.0, 0x1.89a01e82e16d5p-994, 0x1.5b0f2ce0e28fcp-664,
     0x1.80377e4827a72p-998, 0.0, 0.0, 0x1.8109013128cd4p-475, 0x1.c84dbf4ebb19p-822,
     0x1.e4bc37f75094ap-680, 0.0, 0x1.1ea3d37e5f05dp-486, 0.0, 0x1.dc07c893e6b14p-224,
     0x1.9b7245c7b316cp-36, 0x1.ad7d921125b96p-845, 0.0, 0.0, 0x1.e08992b530d31p-507,
     0x1.ef5c990125333p-2, 0x1.871279510874dp-680, 0x1.506203a855c2p-940, 0.0, 0.0,
     0x1.a244be0dbc79dp-227, 0.0, 0x1.e7c129afdd584p-366, 0.0, 0x1.6dd03f1de7fe4p-862,
     0.0, 0.0, 0x1.6813b1226d35cp-815, 0x1.5e7a66c4dcee3p-315, 0.0,
     0x1.ceab756d37cccp-868, 0.0, 0.0, 0x1.b73d46941adcfp-665, 0.0, 0.0, 0.0,
     0x1.1a89677966efp-299, 0.0, 0x1.5a84877617551p-152, 0x1.ab7fc3ce43f6fp-737,
     0x1.d94ab5c094b37p-762, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b58f90cbada72p-773, 0x1.b238ecb7a94f6p-522, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4dcf0e3c8f1dfp-43, 0.0, 0.0, 0x1.441db5d5b71e6p-897, 0.0
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
            tmp1 = Sleef_truncd2_kvx(tmp0);
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
    printf("Sleef_truncd2_kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_truncd2_kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
