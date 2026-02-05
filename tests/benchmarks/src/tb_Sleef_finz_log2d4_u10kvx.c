/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d4_u10kvx.c --function \
 *     Sleef_finz_log2d4_u10kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 4 \
 *     --function-input-vector-size 4 --bench --no-embedded-bin --target kv3
 *
 */
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double4_t external_bench_wrapper_cst = {0.0, 0.0, 0.0, 0.0};
static const ml_double4_t external_bench_wrapper_cst1 = {0.0, 0.0, 0.0, 0.0};
volatile double external_bench_wrapper_output_table[1004];
static const double external_bench_wrapper_input_table_arg0[1004]  = {
     0x1.ab5ddb65faae8p-581, 0.0, 0x1.4d63ae6b2c2b9p-620, 0.0,
     0x1.d8a1bef14a72fp-730, 0.0, 0x1.8aaf0e5c2bbf8p-241, 0.0, 0.0,
     0x1.c8b2cd2464818p-824, 0x1.99d99a7a74601p-781, 0.0, 0x1.a1af09c021bd1p-580,
     0x1.0bd46bc740d53p-496, 0.0, 0x1.698a2075f310fp-556, 0x1.ac93f230ebf8ep-861, 0.0,
     0.0, 0.0, 0x1.5468c6e8ca82dp-766, 0x1.0bdd5d9ad7d58p-431, 0.0,
     0x1.9c0719728a65p-72, 0.0, 0x1.a816f352031cbp-287, 0.0, 0x1.873b13826f7a1p-351,
     0x1.9e0a16b63bd75p-1012, 0x1.4bd37fc96ff54p-364, 0x1.061442f4db178p-639,
     0x1.f7f619472a8e9p-343, 0x1.d86700c3b92acp-266, 0x1.a5d044b185b59p-173,
     0x1.efe7b01d444b9p-793, 0x1.6a87dd42725bdp-743, 0.0, 0.0, 0.0,
     0x1.f5803bb9504ccp-133, 0x1.d8995d5376037p-976, 0.0, 0x1.7e8402a520471p-895,
     0x1.4b40c19f7de87p-212, 0.0, 0x1.2279f922c393ap-466, 0x1.183ecad60949fp-65, 0.0,
     0x1.daedf7db7a8d3p-542, 0.0, 0.0, 0x1.4d8c9dfd70021p-652, 0.0,
     0x1.5e7caf9879543p-317, 0.0, 0x1.020e05b7eb267p-271, 0x1.410d105bc1ab5p-490,
     0x1.d99779789bf44p-957, 0x1.0b840bbb867cap-705, 0x1.a8f38b51c8a94p-121,
     0x1.3595ad9400918p-995, 0.0, 0x1.d303f9aefc233p-1021, 0x1.23543a4a7f8ebp-587,
     0.0, 0.0, 0x1.3e75723dc3fe3p-183, 0x1.28d4b9ec497d5p-127, 0x1.e566fa763b228p-112,
     0.0, 0x1.001073cfbfc83p-601, 0x1.8970225b259d3p-348, 0.0, 0.0, 0.0,
     0x1.8ba996f870abcp-167, 0x1.f05c779d6c544p-16, 0.0, 0.0, 0x1.fe2f28e7115d1p-23,
     0x1.9064b86b8bc17p-152, 0.0, 0.0, 0.0, 0.0, 0x1.5c97ee7611009p-832,
     0x1.8f67f24d356bbp-459, 0.0, 0.0, 0x1.3abeb071967fp-264, 0x1.358021031702dp-806,
     0.0, 0.0, 0.0, 0x1.c746073b469c7p-723, 0.0, 0x1.b1e20811dc7cp-50, 0.0,
     0x1.d8bda1a7d29b2p-378, 0.0, 0x1.8196a634be0d8p-831, 0.0,
     0x1.8cc09619afd5dp-1002, 0x1.6c8a6b9ee771ap-601, 0x1.bd6bfe7187563p-256, 0.0,
     0.0, 0x1.180d79532a31p-472, 0.0, 0x1.93ef9448ba6c9p-812, 0.0, 0.0,
     0x1.26fa19fb35545p-880, 0.0, 0x1.a515ce6269669p-708, 0.0, 0.0, 0.0,
     0x1.3f137ec79edb5p-64, 0x1.eeb4be8d16a48p-43, 0x1.f8b97d223c0d2p-447,
     0x1.49fc4c5fdb614p-417, 0.0, 0x1.5462bab17cce3p-82, 0.0, 0.0,
     0x1.ec3f2e98fcfaep-214, 0.0, 0x1.b8b49b4347131p-123, 0x1.67ce5a4189904p-818,
     0x1.34b411cd96df3p-471, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.22e85ea0f6627p-883,
     0x1.7b7aad958ede7p-234, 0x1.00459a9f78d63p-335, 0x1.ccfacfe0343adp-956,
     0x1.f409877b1f30fp-993, 0.0, 0.0, 0x1.681b35ff8527cp-731, 0.0,
     0x1.d5202e387458p-965, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e7ddd85ab61e4p-898,
     0x1.7c2fb3a99939ep-179, 0x1.4741621245bfcp-991, 0x1.cce36f0b2c0cbp-586,
     0x1.eb85258d4f728p-814, 0x1.feb7dd8f25d5fp-991, 0x1.66d033396a3c2p-457,
     0x1.a06d81ba446acp-444, 0.0, 0.0, 0x1.47688736b18f3p-760, 0x1.44939bd5602ecp-617,
     0x1.f4356db0b93bap-754, 0.0, 0.0, 0x1.12a9a5042a065p-744, 0x1.555189d969eacp-87,
     0x1.95c41be1046e9p-304, 0.0, 0.0, 0.0, 0x1.c3f9f1682856ap-880, 0.0, 0.0,
     0x1.108a19c3badb3p-584, 0x1.af9eae53f798ap-371, 0x1.28662408a7093p-989, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a49cecb3b4272p-481, 0x1.88c1cbf8205f8p-844,
     0x1.85bc236aad3d3p-523, 0x1.989eecd61b4d1p-499, 0.0, 0x1.39c5ab3ad86ecp-233,
     0x1.9a87e08daf2dep-476, 0.0, 0.0, 0x1.50e935d1b9916p-88, 0x1.96e490b871f4ep-694,
     0x1.de4cfb670358ap-808, 0.0, 0.0, 0x1.4543794744103p-259, 0x1.ec7dcd542f406p-866,
     0.0, 0.0, 0.0, 0x1.acbf03eb654aap-916, 0x1.0b08b3515f41cp-127, 0.0, 0.0,
     0x1.ee9e5ddbdb882p-89, 0.0, 0x1.ae9525914f2b7p-561, 0.0, 0.0,
     0x1.3cdb410706dfbp-449, 0.0, 0.0, 0x1.12134323e7f63p-886, 0.0,
     0x1.ba4eefb864d0fp-152, 0x1.b7e04c53b6ca8p-196, 0x1.c521c1a24621p-10, 0.0, 0.0,
     0x1.7437ab6e27a35p-362, 0x1.3fe1ec74dfa4dp-790, 0.0, 0x1.1b9e6f736f88ep-516,
     0x1.892ab840992afp-380, 0x1.95b2117e41e57p-437, 0.0, 0x1.ffafaf3d428b5p-428,
     0x1.b064b07b39369p-833, 0.0, 0.0, 0.0, 0x1.d26b93f331ee6p-51, 0.0,
     0x1.474fb70cc2f18p-785, 0.0, 0.0, 0.0, 0x1.e3dbc4135fe0ep-536,
     0x1.efbd6fdbc1d17p-690, 0.0, 0x1.8fc97ce261f53p-576, 0x1.6b60cc5979c7dp-238, 0.0,
     0x1.5d20f05e51d14p-415, 0x1.b842e32848abep-784, 0x1.217f82e977e96p-973, 0.0, 0.0,
     0x1.ea36b90beb477p-215, 0.0, 0x1.aa26f6a79b786p-682, 0x1.7f6a0c9035356p-536,
     0x1.931d61f2ea1b4p-938, 0.0, 0.0, 0.0, 0x1.13224adb7c503p-199,
     0x1.b429833fe700fp-378, 0.0, 0.0, 0x1.7c647b52508e2p-424, 0.0, 0.0,
     0x1.b2d59abac7164p-798, 0.0, 0.0, 0.0, 0.0, 0x1.46f9561d8816dp-353, 0.0, 0.0,
     0.0, 0x1.261a9e5d9cc26p-952, 0.0, 0x1.d6d7e93e43d5bp-250, 0x1.b1d63ed2e6067p-263,
     0.0, 0x1.9957b95e6fcdcp-451, 0.0, 0.0, 0.0, 0x1.5583b9931c452p-163, 0.0,
     0x1.e2baf10a1b514p-457, 0.0, 0.0, 0.0, 0.0, 0x1.f4565380fb6cdp-87, 0.0, 0.0,
     0x1.a741a8cc3921dp-44, 0.0, 0x1.c8e7db04488e6p-303, 0.0, 0x1.eba971ef7de0ep-804,
     0x1.1c20bfa2cf3f9p-647, 0x1.f43f867161e31p-28, 0.0, 0x1.6e2e5d1484fa4p-997,
     0x1.cd433ad20cf4ep-410, 0x1.9c6dcac268a01p-511, 0.0, 0.0, 0x1.27cbc877daf85p-764,
     0x1.a765a4afd77e7p-524, 0.0, 0x1.7d4619a8db2e5p-996, 0.0, 0.0,
     0x1.b24361a9f6c67p-31, 0x1.f27d1b617425fp-109, 0x1.1c1b6790dbf32p-814, 0.0,
     0x1.a48daf133d887p-220, 0.0, 0x1.248d4272d612p-270, 0.0, 0.0, 0.0,
     0x1.f6f5d7cde6e98p-314, 0.0, 0x1.bcb4f25f4a54dp-169, 0x1.4551c6bc547c3p-960, 0.0,
     0x1.33d3130d1d213p-877, 0x1.603021db8932ap-450, 0x1.fc801955e2cddp-190, 0.0, 0.0,
     0x1.cfbd08aa1e4dbp-475, 0.0, 0.0, 0x1.38f7c4e981e17p-721, 0x1.fb6e629233a49p-219,
     0x1.499a8d032e603p-285, 0.0, 0x1.308be2dd29932p-619, 0x1.00605df132931p-383,
     0x1.945aeee796bd1p-151, 0x1.cbe84ad249218p-661, 0.0, 0x1.11273ea3111d4p-989, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.76bdd1d08acf5p-625, 0.0, 0x1.77dc82baceefbp-442,
     0x1.6e89158ace864p-156, 0x1.7b9b52ff89725p-32, 0.0, 0.0, 0.0, 0.0,
     0x1.4dbb7ced13223p-878, 0.0, 0x1.691279833901dp-897, 0x1.a3dd55e05aa7fp-724, 0.0,
     0.0, 0x1.2a399794f39e7p-243, 0x1.f663171851748p-355, 0.0, 0.0,
     0x1.5ecf9fdaf3993p-791, 0x1.4166db472ccf8p-989, 0x1.1e30858d23b3ap-267, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9645422c28e06p-314, 0.0,
     0x1.8f86a70ece4afp-270, 0x1.2c2ee1d23928fp-743, 0x1.a0a4cb6c7677ep-326, 0.0, 0.0,
     0x1.8ec6fd8be99d7p-215, 0.0, 0x1.ebfa5ff99e21bp-172, 0x1.64c458d4d767bp-955, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9f5cbcc7a6e4fp-603, 0x1.086ca4304a527p-979,
     0x1.02e7ea6ef0e4p-43, 0x1.685a3d994aa4ap-291, 0x1.4116b955c461p-752, 0.0, 0.0,
     0.0, 0.0, 0x1.8b830ad7db86ep-456, 0.0, 0.0, 0.0, 0x1.a533661716d5fp-622, 0.0,
     0x1.a3bf8b9424f8ap-658, 0x1.c5e03e8d63c1ap-618, 0.0, 0.0, 0x1.cb735a45300afp-620,
     0.0, 0.0, 0.0, 0x1.0aed28a18be61p-156, 0x1.3268a0bb6d397p-796,
     0x1.b26ef98c86b65p-838, 0x1.c2d3f23cea79ep-433, 0x1.72dcc5f53a9ebp-239, 0.0, 0.0,
     0x1.7d10f34d9a577p-566, 0.0, 0x1.de5bdd51e9f6dp-955, 0.0, 0.0,
     0x1.abb184f31686cp-805, 0x1.237bd7c971f51p-865, 0.0, 0x1.02611af6afa69p-652, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.5dee6bb6573fap-912, 0.0, 0x1.f6616c82a613ep-604, 0.0,
     0.0, 0.0, 0x1.b74f989c46a85p-255, 0.0, 0x1.644dfb96b87cap-426,
     0x1.c06fe3c371819p-574, 0x1.efa0ca152f10ap-443, 0x1.a3ccbbc424c5bp-280,
     0x1.660983510d415p-347, 0x1.e2f9e25ef92b5p-175, 0.0, 0.0, 0x1.08d4ebc6a1dcp-287,
     0x1.6ea7c6af21703p-767, 0x1.21402ad21cd45p-263, 0.0, 0x1.adf011967dd44p-493, 0.0,
     0.0, 0.0, 0x1.6fb55bc5322d4p-102, 0x1.ec9b39936a0f6p-528, 0.0,
     0x1.6eea199cf1221p-782, 0.0, 0x1.e23848f6e18e8p-390, 0x1.efda95c6a568bp-585,
     0x1.7c6a49edccbb4p-319, 0.0, 0x1.6aaf629cf0c48p-566, 0.0, 0x1.f7a95160de9cdp-548,
     0.0, 0x1.2975cad5fc435p-178, 0.0, 0.0, 0.0, 0x1.2ca7aaa41f974p-1005,
     0x1.773d898e779d1p-497, 0x1.4b19469d0d7f7p-139, 0x1.ff7e9a54d454bp-992, 0.0, 0.0,
     0x1.81ad2286bc0f1p-550, 0x1.5068329d5f32ap-433, 0.0, 0.0, 0.0, 0.0,
     0x1.814c7c0123c67p-199, 0x1.7c343f54a5c3bp-795, 0x1.e26d6fa60441fp-220, 0.0, 0.0,
     0x1.1c153651732c3p-793, 0x1.26c5ff6fbbca5p-252, 0x1.53cb5fb4b08ffp-436, 0.0, 0.0,
     0x1.848ead2d8887p-671, 0x1.e44440ad55c5dp-615, 0.0, 0x1.f0b858be53e3cp-699,
     0x1.a1fc7a43b9449p-861, 0x1.a6162724f146p-663, 0.0, 0x1.0e5a4a5793da2p-422, 0.0,
     0.0, 0.0, 0.0, 0x1.9f0ba431f7508p-772, 0.0, 0x1.3e98759bcabcdp-382,
     0x1.81a4e4a09af83p-548, 0.0, 0x1.446d07cb3be73p-505, 0x1.078c408d551eep-37,
     0x1.4aeb435bae732p-251, 0x1.898eef5a43cd9p-334, 0.0, 0x1.d7cf0bec90d33p-748, 0.0,
     0x1.04ef973cc8094p-170, 0x1.7596e8130c489p-126, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.02327b36e44dp-543, 0x1.b005957f676f1p-545, 0.0, 0.0, 0x1.4d7630a6527d2p-480,
     0.0, 0x1.8152a74f1ed9cp-780, 0.0, 0x1.c45963dd64329p-760, 0.0, 0.0, 0.0, 0.0,
     0x1.671a4940a5f7ep-290, 0x1.89d83d8d10d0ap-496, 0x1.0560af4f27ac5p-946, 0.0, 0.0,
     0x1.2b1ad72a7b9d3p-130, 0x1.5faccb77a94bfp-598, 0.0, 0.0, 0.0,
     0x1.8875d2ad05af2p-446, 0.0, 0x1.cbd0565dfa9e7p-432, 0x1.006fdfce05708p-465, 0.0,
     0.0, 0x1.a1a8527126018p-468, 0x1.a51c26d3ef715p-440, 0.0, 0.0,
     0x1.0293b59aca116p-755, 0.0, 0x1.cd83a680cef5ap-90, 0x1.836b12f7c1edfp-969,
     0x1.0d5ee3e2a4017p-97, 0.0, 0x1.e51892856442fp-804, 0x1.32b1ea37ab258p-378,
     0x1.6c2f97471a74ep-682, 0x1.f7b2eda03973bp-146, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.21b592ca6d228p-30, 0.0, 0x1.003c52183f255p-318, 0x1.017cc986e1b4ap-148, 0.0,
     0.0, 0x1.de47c76833479p-664, 0x1.e7740263a3b86p-832, 0x1.7d4b2661837c2p-731, 0.0,
     0x1.3b99ce4a76591p-368, 0.0, 0.0, 0.0, 0x1.6c4f972d4e0afp-564,
     0x1.8c74de8f400fep-12, 0x1.8eaad3392425fp-371, 0.0, 0x1.a1c2b35109e8cp-651, 0.0,
     0x1.e7b962a8300f5p-895, 0x1.a82980a1fd2bep-813, 0.0, 0.0, 0x1.3f1bd08b3fceap-899,
     0x1.54309a2cc1029p-421, 0x1.7e21810a83d39p-864, 0.0, 0x1.bb92ead0b5626p-962,
     0x1.38ea675a6169cp-903, 0x1.7cca6864a765p-850, 0x1.990cf864fe79bp-219,
     0x1.2eecf7bdeba0dp-763, 0x1.a786eee754a28p-975, 0.0, 0x1.2588b42dd9a12p-293, 0.0,
     0x1.d0ce3e300f8a8p-260, 0x1.6e3027e7d1928p-800, 0.0, 0x1.13f235762464ep-600, 0.0,
     0.0, 0x1.b13df66aae1fcp-180, 0x1.b2c03901068fbp-543, 0.0, 0.0,
     0x1.274cfd1d8b248p-235, 0x1.adc0aaa731951p-460, 0x1.b2ffc2da46a4p-574,
     0x1.1aed7378be753p-129, 0.0, 0x1.ef067205f1aa3p-882, 0.0, 0.0,
     0x1.daf72be71721fp-531, 0.0, 0x1.c0412ac006be2p-707, 0.0, 0x1.f35984453311bp-875,
     0.0, 0x1.dc2a09ddce189p-664, 0.0, 0.0, 0.0, 0x1.c40328bc988b6p-214,
     0x1.d280641912e7bp-340, 0x1.0d79b701761cdp-410, 0x1.23bc1693af101p-26, 0.0,
     0x1.2016d81c8c02p-91, 0.0, 0x1.fb19569fea667p-390, 0.0, 0.0,
     0x1.0c56b5401d7bbp-467, 0x1.a9fdd0a1fc302p-165, 0.0, 0.0, 0.0,
     0x1.38289eb56f553p-255, 0.0, 0.0, 0x1.52b0a14652c29p-126, 0.0, 0.0, 0.0,
     0x1.9bf0974d00955p-481, 0.0, 0x1.d3fac2c6036cfp-181, 0.0, 0x1.bbdabbbeaf571p-948,
     0.0, 0.0, 0.0, 0.0, 0x1.66023c47ea07p-132, 0.0, 0.0, 0x1.7d77b613052a3p-584, 0.0,
     0x1.f5a34a2d4da93p-558, 0x1.c451be96aa9dp-977, 0.0, 0.0, 0x1.1ab6efb57a88cp-861,
     0.0, 0x1.9c0d549d8b32cp-424, 0.0, 0x1.713e48b541912p-208, 0x1.c935b764e20aep-146,
     0.0, 0x1.ddcb64ad43a79p-664, 0.0, 0x1.69931e25e4b54p-88, 0x1.afff6890959e8p-641,
     0.0, 0x1.1b3b486c08e18p-865, 0.0, 0.0, 0x1.772bb8673d75bp-776, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.dcdaaa9d4cd9bp-655, 0x1.4f47cf9309f9cp-547, 0x1.64667262e3bd3p-378,
     0x1.85cf51efeaabdp-57, 0.0, 0x1.d95e95cf06584p-966, 0.0, 0x1.69fa919858396p-745,
     0.0, 0.0, 0.0, 0x1.705ad87e35cc2p-293, 0x1.579eb5ae79dd8p-272, 0.0,
     0x1.13c5a42a828aep-991, 0.0, 0x1.6f1087ec25b8ep-57, 0x1.df273c5ae829cp-548, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2e92faeb87e7p-340, 0x1.003078a3c92dcp-951,
     0x1.aa0f2f11d4d0dp-458, 0x1.4fc7c09cf6288p-128, 0x1.090140d05a913p-872,
     0x1.345a06b36a51dp-510, 0x1.871e10ebf58b4p-79, 0x1.93c8d8c554e41p-180, 0.0,
     0x1.f2cd996e33fbp-803, 0x1.84c596b97f7fap-385, 0.0, 0x1.a417072d4d6aep-20, 0.0,
     0x1.d599c22bfec33p-982, 0x1.d10a3c85ba564p-562, 0x1.b3e89f67daf06p-128,
     0x1.814554348d619p-393, 0x1.cff7e409d2662p-478, 0.0, 0.0, 0x1.aa34b7a6cd301p-74,
     0.0, 0.0, 0x1.9eb4a2431faabp-486, 0x1.e184771438ac4p-405, 0.0, 0.0,
     0x1.a243336c23df5p-743, 0x1.40d2147173775p-453, 0.0, 0x1.89a4c9d2bc6a8p-687,
     0x1.8550c1de08bdap-486, 0.0, 0.0, 0.0, 0.0, 0x1.3facdf748db07p-941,
     0x1.ae08105869036p-690, 0.0, 0.0, 0x1.549bbdfbb8f3p-591, 0x1.fdce7f5444685p-737,
     0x1.8de0b34132f35p-435, 0.0, 0.0, 0.0, 0x1.1e59505dcf396p-20,
     0x1.2944db0e388dep-430, 0x1.b1a8bb80e8309p-92, 0x1.d7864067280f8p-233, 0.0,
     0x1.ebe739a742278p-288, 0x1.61b27ba1cffdp-233, 0x1.fd114a0410a3cp-1017, 0.0,
     0x1.8968c49ba1ba7p-159, 0.0, 0x1.e5ea5047f7736p-439, 0x1.2cf4a23c38897p-951,
     0x1.e3d18fd2091cp-610, 0.0, 0.0, 0x1.99ef3ccfdfd6fp-664, 0x1.301440677389ap-252,
     0.0, 0x1.19c239fd6da03p-802, 0.0, 0x1.596a1c17e339bp-576, 0.0,
     0x1.c80b07b5ca013p-565, 0.0, 0.0, 0.0, 0x1.358cf9a588f67p-961, 0.0, 0.0, 0.0,
     0x1.b2b1f54a46a68p-52, 0.0, 0.0, 0.0, 0x1.cbe5cbc6f396cp-653, 0.0, 0.0,
     0x1.2923c3c060b56p-921, 0x1.078f0ce3c4b0bp-413, 0x1.2fe94bfc49d2cp-292, 0.0, 0.0,
     0x1.fe4efb7f89a88p-337, 0x1.d797abd390d9ep-757, 0x1.7edefeac9ae7p-572,
     0x1.4bcffa0aeff4ep-957, 0.0, 0.0, 0.0, 0x1.9caf9ad8cb61bp-369,
     0x1.67ae7a4d4c0fdp-49, 0x1.34fa6a1ecc20dp-753, 0x1.074a6bcd2efdep-591,
     0x1.ad02ae053191dp-11, 0.0, 0.0, 0.0, 0.0, 0x1.deffe9bbfb5b5p-341, 0.0, 0.0,
     0x1.31e341529326cp-249, 0.0, 0.0, 0x1.b25f19cc73755p-574, 0x1.6ce0a57bb311p-269,
     0x1.99ccfe8fe4758p-357, 0.0, 0x1.d6ec24e0707ebp-39, 0x1.bafe6bfe38e63p-301,
     0x1.fe62bf7708996p-541, 0.0, 0x1.3e1c6dce670bp-352, 0.0, 0.0,
     0x1.47162a1370722p-171, 0x1.f40c9eb37fe37p-371, 0.0, 0.0, 0x1.27f8c9907aebp-209,
     0x1.411dc1980a4f8p-620, 0x1.ed727f2415793p-874, 0x1.3f908da6239adp-919,
     0x1.86ba92e3e1762p-612, 0x1.75d0fed82a428p-619, 0x1.acc92253b213ep-983, 0.0, 0.0,
     0x1.432b9393dea51p-97, 0x1.d7928a59edd4dp-289, 0.0, 0x1.70c9571261c52p-181,
     0x1.1b26adc52a122p-117, 0.0, 0x1.f30e2cd2b9852p-743, 0x1.c6a038835882ep-634,
     0x1.8c20b48c1a75ep-351, 0x1.326949a1ac1a6p-19, 0.0, 0x1.735f02da3eb5fp-301,
     0x1.5c6f1a07f4435p-559, 0x1.f5d075e028acdp-299, 0.0, 0.0, 0x1.8177b65689abep-900,
     0.0, 0.0, 0x1.380b4f6a829acp-1020, 0.0, 0.0, 0x1.568544ed516eap-915, 0.0,
     0x1.1a1de7451a972p-83, 0.0, 0.0, 0x1.b98c878b96411p-123, 0.0,
     0x1.d6eef0649730ap-918, 0x1.6d08e95f10ef9p-758, 0x1.51839c84e440fp-394,
     0x1.b8214ad8b5469p-652, 0x1.7a7c9e480525cp-209, 0x1.738d013d6b5cep-804, 0.0,
     0x1.bafbd99d414bdp-505, 0x1.3825c8ede62cp-776, 0.0, 0x1.ac12309e0c7b7p-500,
     0x1.a75025035c9bap-167, 0.0, 0x1.bc09e2618ed57p-746, 0.0, 0x1.e48507f0b8d5dp-192,
     0.0, 0.0, 0x1.6d5500e7f8ac9p-381, 0.0, 0.0, 0x1.a21f0fdd2df7bp-222,
     0x1.9896d8ee1908p-87, 0x1.502b4592077b2p-751, 0x1.b00cbf732dbffp-176, 0.0, 0.0,
     0x1.1e13de5e26984p-340, 0x1.9c201a9ebce9p-902, 0x1.4b129aea2ee94p-458, 0.0, 0.0,
     0x1.fbe7aed9b826fp-562, 0x1.0ea03baaf45eap-935, 0x1.167d1f4b4c423p-683, 0.0, 0.0,
     0.0, 0x1.da766ce120b6bp-892, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b542f34f915cp-827,
     0x1.792713f76c93ep-14, 0x1.b37895ecfe02ap-480, 0x1.480fd9b73041fp-625, 0.0,
     0x1.8b4bdda2e73fep-732, 0.0, 0.0, 0.0, 0.0, 0x1.1baf556f5d18ap-348,
     0x1.27b5a079b4f59p-28, 0x1.b28aca9a79234p-907, 0.0, 0.0, 0x1.a0b0ac0496b0ap-136,
     0.0, 0.0, 0.0, 0x1.d2f37fe177901p-695, 0x1.d8d9ce0ce68a7p-467, 0.0, 0.0, 0.0,
     0.0, 0x1.2a5f4133f8f27p-1008, 0x1.ce2d2bfe6d942p-877, 0x1.71f400456cbb4p-71, 0.0,
     0x1.966822e96375ep-631, 0.0, 0x1.143803c63623ep-576, 0x1.90aee2f0279acp-155, 0.0,
     0.0, 0x1.f570f90413963p-496, 0.0, 0x1.c7837fca4c45dp-980, 0.0,
     0x1.40c0241238faap-811, 0x1.ed82503b1a9cdp-676, 0.0, 0.0, 0.0, 0.0,
     0x1.d0db763eaf241p-273, 0.0, 0x1.3d10bb6b1bcbcp-640, 0x1.3e12539734129p-479,
     0x1.b3f3b0e89dc69p-120, 0.0, 0.0, 0.0, 0.0
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    ml_double4_t global_bench_acc;
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
        ml_double4_t local_acc;
        int32_t i;
        ml_double4_t tmp0;
        int32_t tmp1;

        local_acc = external_bench_wrapper_cst1;
        i = INT32_C(0);

        for (;(i < INT32_C(1004));){
            ml_double4_t tmp0;
            ml_double4_t tmp1;
            ml_double4_t tmp2;
            int32_t tmp3;

            memcpy(&tmp0, ((ml_double4_t*)(external_bench_wrapper_input_table_arg0+ i)), 32);
            tmp1 = Sleef_finz_log2d4_u10kvx(tmp0);
            memcpy(((ml_double4_t*)(external_bench_wrapper_output_table+ i)), &(tmp1), 32);
            tmp2 = local_acc + tmp1;
            local_acc = tmp2;
            tmp3 = i + INT32_C(4);
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
    cpe_measure = id_tmp / 10040000.0;
    printf("Sleef_finz_log2d4_u10kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_log2d4_u10kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
