/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_frfrexpd2_avx2128.c --function \
 *     Sleef_finz_frfrexpd2_avx2128 --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target \
 *     x86_avx2128
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
     0x1.bf03891a4bf93p-75, 0x1.3ac0d8cf22632p-837, 0.0, 0x1.18e9a13e37a29p-256, 0.0,
     0x1.ac82476c2c6c6p-664, 0.0, 0x1.a26293fa5ff5ap-225, 0.0, 0x1.687ddc2ed48p-819,
     0x1.1bdab0d1567e3p-404, 0.0, 0x1.8ba213a0d4e0dp-538, 0.0, 0x1.eeabc4285815p-889,
     0.0, 0x1.a1571303aa9b9p-970, 0x1.0036f4d008962p-631, 0x1.093a4ade10c3cp-385,
     0x1.53c8ae25f3765p-427, 0.0, 0.0, 0x1.b2765d6515621p-719, 0.0, 0.0,
     0x1.a943924f456f3p-226, 0.0, 0.0, 0x1.0125d736402c1p-971, 0.0,
     0x1.4cb394bc1389cp-95, 0x1.f7a9781d31056p-380, 0.0, 0.0, 0.0, 0.0,
     0x1.a5d74e68a736p-25, 0.0, 0x1.82b92bb9d6659p-63, 0.0, 0.0,
     0x1.de9d3b9db575ap-950, 0.0, 0.0, 0.0, 0x1.88f56dd0f0cdep-755, 0.0, 0.0,
     0x1.b942a99cba1afp-882, 0x1.f30ce848944dp-238, 0x1.51ed92f7959a1p-778,
     0x1.f0450855cd486p-215, 0x1.4f581abb6827ap-406, 0.0, 0.0, 0x1.9f0d5e2d297f5p-840,
     0.0, 0x1.d6f7f5925ca7fp-931, 0.0, 0x1.3015c07e976dap-56, 0x1.1745b9eafa386p-388,
     0.0, 0.0, 0x1.99c33465543a1p-866, 0.0, 0x1.dcf33dedf511cp-117, 0.0,
     0x1.cacaee00f02c2p-561, 0.0, 0x1.9356ce84a4401p-957, 0.0, 0x1.8e37a32b7c952p-380,
     0.0, 0x1.4de1790aa904cp-598, 0x1.456c653e42adbp-170, 0x1.d58794aba1322p-283,
     0x1.85dbd0ebcc4ffp-697, 0.0, 0.0, 0.0, 0x1.3cbe9b9207be9p-747, 0.0, 0.0, 0.0,
     0.0, 0x1.edd2ae02ae9p-596, 0x1.e685c53db6768p-649, 0x1.616172c8f6b61p-37, 0.0,
     0.0, 0.0, 0.0, 0x1.270c633813f0bp-894, 0.0, 0.0, 0.0, 0.0,
     0x1.b69e0e05ff214p-252, 0x1.e2bae1827432fp-396, 0x1.199723a047052p-8,
     0x1.186e1c954209p-817, 0x1.8e179254a0a8p-765, 0.0, 0x1.75dfc7de4754dp-864,
     0x1.c4daf84ed25bfp-596, 0x1.c6716f4728903p-882, 0x1.0093838340b17p-799, 0.0, 0.0,
     0x1.8ffbca480b823p-424, 0x1.2a3ccb3190315p-937, 0x1.fc09e632518cap-1013,
     0x1.2c58bffd2dcb3p-283, 0x1.efd4f41974962p-448, 0x1.5b453dfea0f54p-989,
     0x1.cc9e0cf75c103p-978, 0x1.33f957b45fc77p-209, 0.0, 0x1.f5a9e624e05bdp-152, 0.0,
     0.0, 0.0, 0x1.a6f7951969086p-380, 0.0, 0x1.03b37fef750dbp-427,
     0x1.5d9c68fa41db3p-700, 0x1.a3b1a88593e69p-523, 0x1.4dbe2c2c8f687p-594, 0.0,
     0x1.5e120b5f15e18p-10, 0.0, 0.0, 0.0, 0.0, 0x1.0681e0f19113fp-764,
     0x1.5212255302a73p-680, 0x1.7f3aef2fd48d6p-265, 0.0, 0x1.9e58550c55e04p-736,
     0x1.29a41d8969165p-124, 0.0, 0.0, 0x1.0bb66705dab41p-1013,
     0x1.528df7c821c2bp-509, 0.0, 0x1.2f7b4585d565bp-819, 0x1.e6c20ea190c9ep-741, 0.0,
     0.0, 0x1.6ff65dd8e5152p-410, 0x1.1e700420a5a73p-966, 0.0, 0.0,
     0x1.5630c2a40369ap-149, 0x1.1a5a728b3811ep-473, 0.0, 0.0, 0.0, 0.0,
     0x1.90a25cb3e737cp-331, 0x1.9624609552897p-902, 0x1.078883c771d72p-398,
     0x1.17d839cc12f86p-336, 0.0, 0x1.54e0c01286b68p-803, 0.0, 0.0, 0.0,
     0x1.3c999db28ef19p-298, 0x1.743d6f4af3b0ep-651, 0.0, 0.0, 0x1.16fec646a6806p-446,
     0.0, 0.0, 0x1.cc2b0e7288476p-852, 0.0, 0x1.b87a312fc255bp-482,
     0x1.31f3591d5b111p-97, 0x1.48cfeaea49646p-463, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.520c9064b0eaap-799, 0x1.2c3a2cfc17bc6p-912, 0x1.1a2cd8eff484ep-137, 0.0, 0.0,
     0x1.3abb669376b11p-158, 0.0, 0x1.db0737ebb8fabp-555, 0x1.185adb943330fp-873, 0.0,
     0x1.018d46538934p-927, 0x1.6f31e6278adedp-594, 0x1.688696ec8a0c2p-319, 0.0, 0.0,
     0x1.549555112a69fp-983, 0.0, 0x1.600725c9a2443p-162, 0x1.fd9ed360ae0c2p-560,
     0x1.3c2b6987ef2a7p-718, 0x1.fcec86c6a5ea8p-572, 0.0, 0x1.5738b96bb0b6bp-301,
     0x1.3ce487c5debf6p-973, 0x1.73ad0094776f3p-704, 0.0, 0x1.eb0f6c4c3a13bp-846,
     0x1.7ec0e539b3e94p-1012, 0.0, 0x1.f0ae60d875f9ap-566, 0.0, 0.0, 0.0, 0.0,
     0x1.5309bce3aea12p-762, 0x1.9b5e68f070dfdp-353, 0x1.fa41e3dea3823p-140, 0.0, 0.0,
     0x1.5844349fb60adp-739, 0.0, 0x1.06ff8723b8bc5p-482, 0.0, 0x1.954ed90cd70f6p-316,
     0.0, 0.0, 0.0, 0.0, 0x1.0ac0d6eb47ce5p-865, 0.0, 0.0, 0x1.f15fa99b66d4fp-376,
     0.0, 0x1.852d288dff49ap-408, 0.0, 0.0, 0x1.96bf820641fb5p-240,
     0x1.d79874333826ap-958, 0.0, 0.0, 0.0, 0x1.a1a6f31ad2015p-438, 0.0, 0.0,
     0x1.b06a02b2368a1p-750, 0x1.fa796b3789be4p-783, 0x1.eac7541a6bca3p-1005, 0.0,
     0.0, 0x1.3b1b39662101bp-259, 0x1.02fa9bc459bd5p-54, 0.0, 0.0,
     0x1.e705045a8c8ffp-292, 0.0, 0x1.1b8391627123p-340, 0x1.81792451aafb4p-908,
     0x1.552452c563b2dp-503, 0x1.2613964f3e572p-8, 0.0, 0x1.a8a7ec9ed4118p-299,
     0x1.3ad8540d0621bp-311, 0.0, 0x1.0f68e98403c3bp-256, 0x1.8cf3bf3a0990cp-513,
     0x1.e4755242bae9bp-922, 0.0, 0x1.a7dc1578ef977p-702, 0.0, 0x1.0a27730870984p-99,
     0.0, 0x1.1226067ad937p-68, 0x1.ceffb83a3888fp-48, 0x1.62cae0ddad331p-534, 0.0,
     0x1.83a1a99468486p-507, 0.0, 0.0, 0x1.0ba674f48ab3ap-774, 0.0,
     0x1.b881eebcdf0dap-588, 0.0, 0x1.07c5e1d7c1c68p-157, 0x1.864f25b563c4fp-824,
     0x1.04a13cf553de8p-894, 0.0, 0x1.e5beedc4b4907p-917, 0x1.0641fd90b5a68p-598, 0.0,
     0.0, 0.0, 0x1.4c159c7edc323p-799, 0x1.6f81d731ee9b3p-383,
     0x1.590dec240d3a5p-1004, 0x1.c372ed95e6bbp-30, 0.0, 0x1.c7f33f503ccddp-828,
     0x1.ea7bc179cf7c9p-240, 0.0, 0x1.710dadee98627p-230, 0.0, 0.0, 0.0,
     0x1.bb11ed79ac61ap-39, 0.0, 0.0, 0.0, 0.0, 0x1.d6b2ace4a122bp-133, 0.0, 0.0,
     0x1.44495750b5339p-813, 0x1.466939c0cd831p-923, 0x1.484579d12fa82p-480, 0.0,
     0x1.fdb9b0de1d2bcp-698, 0x1.f7507807b7c75p-966, 0x1.a46ae3cda06afp-749,
     0x1.0a5c84d017351p-502, 0.0, 0x1.9d45d917eee46p-223, 0x1.af08a68ceba6p-972,
     0x1.ca79a7481b6ebp-780, 0.0, 0x1.d07ffef100ebp-181, 0x1.5f5a8149320adp-189, 0.0,
     0x1.c2896cae25961p-482, 0x1.ead2be1d31dd7p-75, 0x1.6c1593c4c0854p-501,
     0x1.ccddccb2818f3p-818, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf2591ac4f354p-365, 0.0,
     0x1.d26617dbe83cbp-1017, 0.0, 0.0, 0x1.491778bfde8adp-652,
     0x1.57c9560ceeb75p-542, 0.0, 0.0, 0.0, 0.0, 0x1.61f0d5bfa345p-397,
     0x1.80f4e8c6a9609p-13, 0x1.e52bacf1eb24dp-473, 0.0, 0.0, 0x1.5dceb28b3370fp-31,
     0x1.5fc0c2f5b22d1p-627, 0x1.777c92fa691c9p-797, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.d01f02f7cc6f1p-806, 0x1.751c83e723f1ep-240, 0x1.e435258fb968bp-937,
     0x1.a5a699d375e5ep-483, 0x1.b8263c57a0f0ep-605, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d4b7e62b5e7a7p-500, 0.0, 0x1.7a542a8a7f28ep-329, 0x1.3350e771b1388p-975,
     0x1.0b90dbd41cc95p-129, 0x1.8d371cb3c1012p-93, 0.0, 0x1.c647b880b57cfp-73, 0.0,
     0.0, 0x1.a877f20bf8e23p-413, 0x1.03022792d9e89p-575, 0.0, 0.0, 0.0,
     0x1.c142785c41b1bp-855, 0x1.bcefaf296bef6p-77, 0.0, 0x1.e5e334d8e504p-571,
     0x1.926af2ca244ep-758, 0x1.1b148170348c7p-1006, 0.0, 0.0, 0.0,
     0x1.867dc32604649p-159, 0.0, 0.0, 0.0, 0x1.ed9a88e094ebep-697,
     0x1.0793981721987p-883, 0.0, 0x1.63eae88ecbfe4p-361, 0.0, 0x1.022dcfd97ed34p-603,
     0.0, 0x1.c9ae767e51de3p-645, 0x1.098ad203f62edp-829, 0x1.ec2ce627ec572p-257, 0.0,
     0.0, 0x1.d4563186b359p-720, 0x1.e2b2c45e9d836p-890, 0x1.c85da33ffd6abp-111,
     0x1.a65dff463f143p-418, 0.0, 0x1.19f677bf1ffbep-550, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.05e622b3890b7p-191, 0.0, 0x1.08d5010e2b5b5p-512, 0.0, 0.0, 0.0, 0.0,
     0x1.c883382756aa1p-3, 0.0, 0x1.a6c5eb66aebd6p-647, 0.0, 0.0,
     0x1.3468d51749846p-584, 0x1.147ee19a4d884p-781, 0.0, 0.0, 0.0,
     0x1.d444cc22dbfd4p-966, 0x1.090b2a93b4c0bp-530, 0.0, 0x1.ed85dbdce2756p-888, 0.0,
     0.0, 0.0, 0x1.6140d19d1c978p-406, 0x1.9c4a7c8c10c6cp-475, 0x1.e676abaab1da8p-463,
     0x1.d9e5d43193bbdp-837, 0x1.2dfc659e33f43p-919, 0.0, 0x1.0f15491d97e8bp-797,
     0x1.3329c7ea347dcp-389, 0x1.bf023bd4abdb2p-329, 0.0, 0.0, 0x1.5e71c92820b37p-976,
     0x1.992582326239p-198, 0.0, 0.0, 0x1.c518bd4f5634cp-450, 0.0,
     0x1.6e38c435aef38p-91, 0.0, 0.0, 0.0, 0.0, 0x1.e5994d0f6d71ap-287,
     0x1.425a82057d75fp-821, 0x1.05f1b3a0832b6p-677, 0x1.91678fb5dc5ecp-294, 0.0, 0.0,
     0x1.c9e313aaf561cp-466, 0.0, 0x1.d80c326af58c4p-191, 0.0, 0.0, 0.0,
     0x1.1bb0cc9e5b0f8p-776, 0x1.5856089e6faf5p-972, 0.0, 0.0, 0x1.d70ea513c54b3p-374,
     0.0, 0.0, 0.0, 0x1.bad4a1edc9934p-51, 0x1.cc866a844e5f1p-455,
     0x1.699a8b859aa3fp-489, 0x1.9172c39fd3f67p-821, 0x1.598784a3bc8f7p-976,
     0x1.2e341e65bf36cp-143, 0x1.f8db0e3621f0ep-410, 0.0, 0x1.270ff84534057p-1022,
     0x1.f5fff702e9c44p-822, 0.0, 0x1.9c7416f2a10d3p-147, 0x1.4f05cabf3b06fp-16, 0.0,
     0x1.7ebf42a854434p-507, 0x1.d602715cc5011p-931, 0x1.9b54986e5c555p-423, 0.0, 0.0,
     0.0, 0x1.32cdb79e3077p-176, 0x1.5b39072d42781p-178, 0.0, 0.0,
     0x1.88567a6f88475p-811, 0x1.dad01995fcaa7p-423, 0x1.c81cc117f2f1ep-576, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.3dc4fe5f0458ep-481, 0x1.4b461ae99173ep-437, 0.0, 0.0,
     0x1.0afb5b2530b06p-912, 0x1.c83320bd8c73dp-455, 0.0, 0.0, 0.0,
     0x1.68c3ec745b793p-6, 0x1.6ce859719b311p-845, 0x1.d5508ab19bba6p-143, 0.0, 0.0,
     0.0, 0x1.bb54ee5aa5cf1p-1, 0x1.4ae87ba98101dp-707, 0x1.62e4bfbab3d28p-471,
     0x1.872eac7c53d1ap-560, 0x1.411e89d611f1bp-82, 0.0, 0x1.571d5468967afp-374, 0.0,
     0x1.bc08c0680a8dfp-705, 0.0, 0.0, 0.0, 0x1.5275649b7a2c8p-938,
     0x1.7a16e9d4798f9p-552, 0x1.2b11a0c188d15p-604, 0x1.123d83b742ca9p-147, 0.0,
     0x1.6763d19c788fdp-1, 0x1.a03cdf0acec4ep-285, 0x1.9149ffa08deafp-977, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.1f38a01bb912cp-15, 0x1.3500111a53472p-590, 0.0,
     0x1.7fa482c8bff3ep-476, 0.0, 0x1.e9a917fdd62a1p-184, 0.0, 0x1.5117c62112d7fp-878,
     0.0, 0.0, 0x1.86698eb6685ap-64, 0.0, 0x1.da36bb832ddb1p-706, 0.0,
     0x1.23efba20fa582p-190, 0.0, 0.0, 0x1.a6b655535a722p-216, 0x1.27d4df27ba4ebp-196,
     0.0, 0.0, 0x1.93b71a06d5bf4p-706, 0x1.6768cadf5ae35p-106, 0.0,
     0x1.1ef789217dc04p-273, 0.0, 0x1.c485627c20c2dp-284, 0.0, 0x1.21ec6402982abp-576,
     0.0, 0x1.4d267b3fba513p-999, 0.0, 0.0, 0x1.dcdc4be881625p-107, 0.0, 0.0, 0.0,
     0x1.97ab23cf63ceap-740, 0.0, 0.0, 0.0, 0.0, 0x1.2db350c473eep-39,
     0x1.40d74a0699d32p-566, 0.0, 0x1.0c48179de3d9p-277, 0.0, 0x1.6e526146489d2p-783,
     0.0, 0.0, 0x1.c0db1967ac1e2p-339, 0.0, 0x1.37016f3cd6fcfp-979,
     0x1.32f83e0de14e1p-170, 0x1.137f57b5773ddp-304, 0.0, 0x1.8451fb41dd891p-103, 0.0,
     0.0, 0x1.93895dac766f5p-812, 0x1.b41e43e40781cp-571, 0x1.c63b1fe255a68p-762, 0.0,
     0.0, 0.0, 0x1.e3376d31e207fp-933, 0x1.2c6557af24f37p-564, 0.0, 0.0,
     0x1.17209b0187167p-537, 0x1.c7bee96de60bp-489, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1e566ebc6946dp-626, 0.0, 0x1.7cd3991082f86p-812,
     0x1.e2aa59be0e3adp-862, 0x1.87356e15ecbcfp-478, 0x1.e01b6bd169da7p-762,
     0x1.40a60a35cf4d8p-947, 0x1.941d4045ab4f5p-692, 0x1.3fd9115bd643ap-602, 0.0,
     0x1.a15993baca8f5p-530, 0x1.c6caabf52c31p-688, 0x1.3d7408bbc74fp-389, 0.0,
     0x1.55600eebc809bp-625, 0x1.44650afc921a6p-765, 0.0, 0.0, 0x1.459bda6f10137p-935,
     0.0, 0.0, 0x1.4087f24e16d96p-813, 0.0, 0x1.e84ace560d284p-798, 0.0,
     0x1.6eb66c1b55939p-456, 0x1.2201f43c5dffep-769, 0.0, 0.0, 0.0,
     0x1.afc7fc59bf33cp-638, 0.0, 0x1.c81976ba91addp-285, 0x1.18a6972c78a96p-269,
     0x1.6e6675a734096p-200, 0.0, 0x1.5636a7a5a8a9bp-764, 0.0, 0.0,
     0x1.07bb81f43b956p-73, 0x1.cda134c751f8bp-688, 0.0, 0x1.06291a9f4a9ccp-70, 0.0,
     0.0, 0x1.b43cd7477e2a3p-58, 0.0, 0.0, 0x1.4f337bf31d184p-293, 0.0, 0.0,
     0x1.63d0a30e0be4p-232, 0x1.a28b6a3556d8p-84, 0x1.5c2b0ac6146b9p-296,
     0x1.0eded466921e7p-295, 0x1.391b0fba534fdp-319, 0x1.0c67fed4757d8p-741, 0.0,
     0x1.b251ee16b123p-603, 0x1.137b74e6e8132p-502, 0.0, 0.0, 0.0,
     0x1.20a82d885de3bp-358, 0x1.0b8123f079fc5p-165, 0.0, 0.0, 0x1.5f64b03ec0defp-742,
     0x1.dd92163d0be8ap-726, 0x1.a5a5bdeca38abp-296, 0.0, 0.0, 0x1.8ea253e5f9d0cp-715,
     0x1.409f837b39c78p-717, 0.0, 0.0, 0x1.c3ce265880624p-1, 0.0, 0.0,
     0x1.beb7052c8051bp-500, 0.0, 0x1.55c97c7a03b58p-34, 0x1.5677c0aab76a1p-528,
     0x1.6fc8b81ee9684p-1015, 0x1.d8b79860ba25cp-677, 0.0, 0x1.b84284da6b4b5p-641,
     0x1.491e32e19785cp-391, 0x1.8fa0ab779b7dp-226, 0.0, 0x1.faf71c66b83d2p-239,
     0x1.80438516f8641p-717, 0x1.41e96a92ceff6p-702, 0.0, 0.0, 0.0,
     0x1.0c94bad25ebfbp-244, 0x1.db0496b81f2cbp-990, 0.0, 0.0, 0.0,
     0x1.6adf10676f6cp-138, 0.0, 0x1.cdaaf61b30c05p-634, 0.0, 0x1.75057d9f84032p-840,
     0.0, 0.0, 0x1.21391640514a7p-755, 0x1.21a8ad5aebe24p-143, 0.0, 0.0, 0.0,
     0x1.deb5f57b0a7ffp-17, 0x1.0a429de1b99a1p-690, 0x1.76cca14984709p-944,
     0x1.5edc8eaa196d4p-517, 0.0, 0.0, 0x1.82da776704ba7p-417, 0.0, 0.0, 0.0, 0.0,
     0x1.a83b28c1f8c28p-743, 0x1.d536b80e60bf6p-888, 0.0, 0x1.64f0fc1aee037p-596,
     0x1.12f1deea59f98p-701, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c653c9fb9abb9p-380, 0x1.eda83902e8fdp-43, 0x1.25b83519b54a6p-179,
     0x1.2f8b4ee399c5p-32, 0.0, 0.0, 0x1.164a1dea4d4e6p-880, 0.0,
     0x1.8c220fa91cd7ap-438, 0.0, 0.0, 0x1.f562efceb9955p-1020,
     0x1.5c73cb54f9b8ep-763, 0x1.ce3bb4265c4a2p-417, 0x1.33a34c1e18102p-906, 0.0,
     0x1.8d00d0cd40b7bp-147, 0x1.b552ed7c1daaap-319, 0x1.a7df8ccaffc39p-726,
     0x1.9a6c4721d9ca6p-656, 0.0, 0.0, 0x1.7fbf05d51badcp-3, 0.0,
     0x1.91a097058771ep-884, 0x1.ca31e8783f83p-979, 0x1.17f1b1395a1fep-1010, 0.0, 0.0,
     0.0, 0.0, 0x1.42e3798a4a36ap-133, 0.0, 0.0, 0.0, 0x1.1028dabccb648p-354,
     0x1.66cf3eefc1f94p-55, 0x1.baab1155d8ff9p-598, 0x1.e33b244731798p-142, 0.0,
     0x1.7da368961f75p-196, 0x1.d7ed834722f3ap-817, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c3327f134ffcdp-993, 0x1.76962440012dcp-321, 0.0, 0.0, 0.0,
     0x1.11f18b3dfb92p-76, 0x1.f647677f86393p-972, 0x1.146bdea7cc9b9p-655,
     0x1.a473404bd1e27p-253, 0x1.8c1b6c6837675p-1013, 0.0, 0x1.8f9fe82f57451p-167,
     0x1.d434b9d88825cp-308, 0x1.33277cd040b8ap-885, 0x1.ca1c816c0a223p-681,
     0x1.944be6bffc393p-750, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6717a5509181fp-225, 0.0,
     0.0, 0x1.f70c857971417p-638, 0.0, 0.0, 0.0, 0x1.c68ce971da802p-995, 0.0, 0.0,
     0x1.8daeb3a9ae07ep-124, 0x1.ce2a3b219ace3p-568, 0x1.8a89f0013d009p-824, 0.0, 0.0,
     0x1.143c75f01e593p-634, 0x1.e1a9795e6fa92p-183, 0x1.f99d5308bf868p-674,
     0x1.610caf0a8b112p-934, 0x1.cc6b47db85d25p-713, 0x1.2e2d60829bca1p-240,
     0x1.9f0cf6b91b62ep-174, 0.0, 0x1.94342c7c010fep-709, 0x1.7fae03a6db87ap-972, 0.0,
     0.0, 0x1.bc24506bb387p-449, 0x1.d8c7ef08e416bp-177, 0x1.1581c212ce3d3p-485, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.80dfb06109213p-818, 0.0, 0.0, 0x1.fecea5979f78fp-757,
     0.0, 0x1.b128b545c58d9p-68, 0.0, 0.0, 0x1.ef8e396e4052p-411,
     0x1.ca7394dda246ep-1005, 0.0, 0.0, 0x1.66ce18093c929p-674,
     0x1.2a18cdb9a513fp-214, 0.0, 0x1.e0a8503f8bbfap-43, 0x1.f1c4aa67afa75p-18,
     0x1.e3e82be67ae6ap-460, 0x1.ecee27a95cf99p-42, 0x1.eb515ba7f390dp-35, 0.0,
     0x1.fd9c56ba61a14p-274, 0x1.9c782cb52b8f5p-1014, 0.0, 0x1.380b9bf264406p-961,
     0x1.5d982f741048p-1022, 0.0, 0x1.5646db56adcc9p-800, 0.0, 0.0, 0.0,
     0x1.c3c03e73283e5p-80, 0.0, 0.0, 0.0, 0x1.6de2926f9b618p-492,
     0x1.f09fe212baf78p-618, 0x1.f3f638d1df283p-893, 0x1.c0e5ca2eddae2p-959,
     0x1.278226eb6c85dp-772, 0x1.93f4ee33f4fd5p-736, 0.0, 0x1.071087fe06b81p-901, 0.0,
     0x1.e198e9bd853d4p-481, 0.0, 0x1.eb5b8ad315a95p-266, 0x1.3f59d5691dce9p-871,
     0x1.be9eec1bc3b8cp-965, 0x1.5a05198dc6ffap-215, 0x1.5f45d4308db6ap-426, 0.0,
     0x1.4ff337d483f12p-140, 0x1.7f0fa1930dc1ep-626, 0x1.09f440ad35c12p-450, 0.0,
     0x1.7aba2a12571a6p-918, 0.0, 0.0, 0x1.860f430c547a5p-299, 0.0,
     0x1.9fbdc94437954p-621, 0x1.70b4a0c985aa2p-685, 0x1.ebd225d499229p-12,
     0x1.329f98b4e0424p-90, 0.0, 0x1.2ffc98a3ee4f1p-19, 0x1.a108658ec7113p-534,
     0x1.b36a8dc764d6p-797, 0x1.de5f0a4223bf8p-404, 0.0, 0x1.696947ba39601p-668, 0.0,
     0.0, 0x1.3ca4baf761fc7p-205, 0.0, 0x1.ee64cd83aee7fp-816, 0.0,
     0x1.9f3502d791128p-60, 0.0, 0.0, 0x1.5e221cd0343e1p-382, 0x1.5d5e7dfced943p-96,
     0.0, 0.0, 0.0, 0x1.657ed88f38d5ap-955, 0.0, 0x1.9a7cdb17b3403p-399, 0.0,
     0x1.85915c7f4c778p-80, 0x1.1442afe32c447p-824, 0.0, 0.0, 0.0,
     0x1.427e03282f8e2p-742, 0.0, 0.0, 0.0, 0x1.a50e91c0bdb29p-233,
     0x1.f8ced8baa7e37p-563, 0.0, 0x1.7456386a30ffbp-947, 0x1.eb0374cd18f7p-177,
     0x1.2e091703ab4fap-803, 0x1.048c62a486bf6p-629, 0.0, 0.0, 0.0,
     0x1.f209db54fc2abp-79
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
            tmp1 = Sleef_finz_frfrexpd2_avx2128(tmp0);
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
    printf("Sleef_finz_frfrexpd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_frfrexpd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
