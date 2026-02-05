/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_logd1_u10purecfma.c --function Sleef_logd1_u10purecfma \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --bench --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0.0, 0x1.6e3bb3c841299p-106, 0x1.ae7c3b5291b61p-105,
     0x1.c32407291e228p-527, 0x1.c412c63655bebp-712, 0.0, 0x1.7472ed41343ecp-996, 0.0,
     0.0, 0x1.fb657e9f37a69p-360, 0.0, 0x1.deb5a16530951p-511, 0x1.6e2d99d0e5fb4p-78,
     0x1.2a022424bb67ap-597, 0x1.c1e4e38caaf44p-328, 0x1.6ca26537e72a3p-206, 0.0,
     0x1.6e74c4a70386fp-374, 0.0, 0x1.106e1089d43f1p-907, 0.0, 0x1.66cd75865a6cp-820,
     0x1.ac34e2e434c97p-898, 0.0, 0.0, 0.0, 0x1.17bc1c3f20969p-383, 0.0,
     0x1.fe249855847a7p-959, 0x1.296a5fb207716p-989, 0.0, 0x1p0,
     0x1.8002ddfd0b54cp-793, 0x1.043cca8e31881p-722, 0.0, 0x1.53c963d79e70bp-838, 0.0,
     0.0, 0x1.3657e33b2d995p-15, 0.0, 0.0, 0.0, 0x1.c71e18456eb77p-716,
     0x1.643d0b8ae7833p-733, 0.0, 0.0, 0.0, 0x1.3601caca7cf49p-129,
     0x1.a21e0d4315ae7p-6, 0.0, 0x1.7c4826875fd19p-713, 0.0, 0.0,
     0x1.ba92a5fc696dep-212, 0x1.3b2f4712d2603p-807, 0.0, 0x1.b475e0cc9c5bfp-722, 0.0,
     0.0, 0.0, 0x1.03f49a7b8d4e9p-32, 0.0, 0x1.8eab23ca26487p-980,
     0x1.5daaca51823c4p-444, 0x1.1ec14b828e779p-605, 0.0, 0x1.5267ad9b515a9p-221, 0.0,
     0x1.6986f0b29c3cbp-259, 0.0, 0x1.5c8dd2e86c6c4p-960, 0.0, 0x1.ce94da694498ep-978,
     0x1.4c13c076a615bp-541, 0.0, 0.0, 0x1.e918781068b75p-620, 0x1.77659e89989e5p-157,
     0.0, 0x1.19cea06c6047bp-661, 0x1.c59cd6f897656p-660, 0x1.b9650412511c1p-736,
     0x1.5fdd69f05718dp-658, 0.0, 0x1.f8c75ba8f2257p-39, 0x1.cd0d95e5a641ep-759,
     0x1.757800909c3b5p-794, 0x1.e6275c0f9c46fp-56, 0x1.1d642c064079cp-820,
     0x1.05e0922b27b82p-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d710b5d371674p-16,
     0x1.b2b45d5f1e874p-468, 0x1.821a4103c4acfp-513, 0x1.c1870f988d89fp-238,
     0x1.16a6d3718eecdp-527, 0x1.32601977f5626p-370, 0x1.d9d66ae5b6b58p-640, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.4e4684297cb1ap-555, 0x1.c3cc867cf7275p-705, 0.0,
     0x1.b9621b8bb5034p-628, 0x1.96b92655c1939p-192, 0.0, 0.0, 0x1.d61667d450306p-902,
     0x1.7b2a91b3c0459p-11, 0.0, 0x1.006d4e05f42e7p-962, 0x1.4fb323609f0ddp-419, 0.0,
     0.0, 0x1.88fef19aba49ap-932, 0.0, 0.0, 0.0, 0x1.8c1d6662918d3p-199,
     0x1.f50d6c1cbbd3ap-35, 0x1.2370756c72d88p-467, 0.0, 0.0, 0x1.3be96ccaa41cbp-904,
     0.0, 0.0, 0.0, 0x1.1ebadcf278ce4p-351, 0.0, 0.0, 0.0, 0.0, 0x1.0c953c6e9c2c6p-28,
     0x1.126e703306c23p-508, 0.0, 0x1.0e752412404c7p-548, 0.0, 0x1.a3dab2408018p-556,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1165f991fbd56p-341, 0.0, 0.0, 0.0,
     0x1.979c00063f8e9p-192, 0x1.3dfdd62beb66ep-167, 0.0, 0.0, 0x1.dba9834ace2f7p-690,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.aaf4c5a184755p-973, 0.0, 0.0,
     0x1.ac2a906b3a483p-798, 0x1.09070e9645c5p-649, 0x1.6caab8743ed51p-103,
     0x1.dd0d10a03fc67p-449, 0.0, 0.0, 0x1.f8497c49e8789p-12, 0x1.b1944944b654bp-520,
     0.0, 0.0, 0x1.198471370d41ap-931, 0.0, 0.0, 0.0, 0x1.ca9e53dbe4ebfp-144,
     0x1.6c23e216ad5f1p-326, 0x1.220b48e39dee5p-364, 0.0, 0.0, 0x1.4eea000875155p-673,
     0.0, 0.0, 0.0, 0.0, 0x1.3a7e326fc5847p-557, 0.0, 0.0, 0x1.a974843e58a66p-387,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d936437d9825ep-775, 0x1.4d3afbaccf22ep-849,
     0x1.827be09768027p-908, 0.0, 0x1.e0fabb21f85b4p-257, 0.0, 0x1.94448263c6eb8p-261,
     0x1.b693d61b1be5cp-777, 0x1.7c851e1971759p-138, 0.0, 0.0, 0.0,
     0x1.27ff4fa13e46fp-785, 0x1.7f9e9cc2501c1p-477, 0.0, 0.0, 0x1.0135280c08cd1p-707,
     0x1.77057acdaf4fbp-1008, 0x1.74f7abd422a85p-542, 0.0, 0x1.126c55dc862b7p-626,
     0x1.969058503b01ep-932, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a126cfe19e33p-675,
     0x1.38cdcea0b5055p-847, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.13736a98c02aap-627, 0.0, 0x1.2d2bc52052686p-192, 0.0, 0.0,
     0x1.5bb7eae4979d9p-95, 0.0, 0.0, 0x1.ae1f228d13707p-321, 0x1.7122117b8f1b9p-592,
     0x1.1b53207b46734p-133, 0.0, 0x1.a4de4191109fdp-596, 0x1.0b91d3094aa68p-452, 0.0,
     0.0, 0x1.26f1b7d48ba23p-162, 0x1.979c408825ep-675, 0.0, 0x1.b70afb12e7626p-455,
     0.0, 0x1.1a5c47110a0fap-323, 0x1.757ac5ac3751ep-878, 0x1.c46a3a6841343p-712,
     0x1.ed6ee98f0a135p-21, 0.0, 0.0, 0.0, 0x1.1e89f40feeed2p-377, 0.0, 0.0,
     0x1.47523f0764558p-498, 0x1.c8a692b9dda85p-681, 0.0, 0.0, 0.0,
     0x1.cc2206559f7a1p-884, 0.0, 0.0, 0x1.16eee586ae5d2p-190, 0.0,
     0x1.e195957a782bcp-743, 0x1.cce300528c1c3p-387, 0.0, 0x1.1def664ddaea3p-331, 0.0,
     0x1.ed9ca49405771p-690, 0.0, 0x1.5d70358e02ca8p-16, 0.0, 0.0, 0.0,
     0x1.c861a43d900c2p-1015, 0x1.1ebea6305d975p-920, 0.0, 0.0,
     0x1.aa7ede8c856b8p-166, 0.0, 0.0, 0.0, 0x1.0908ffa2dbbfdp-280,
     0x1.f731685fe5c59p-790, 0x1.9534a97bd8b11p-780, 0x1.66bc57942da83p-561,
     0x1.d2e13e4b87827p-369, 0x1.6a6dea11cc777p-164, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.1777f59e2588ap-465, 0x1.93f9df94984c3p-203, 0.0, 0.0, 0.0, 0.0,
     0x1.2ee520116ad3dp-1004, 0x1.2891dfc7c77e3p-23, 0x1.517008052c93bp-709,
     0x1.e9ca93077420ap-3, 0.0, 0x1.48ec8d0971966p-57, 0.0, 0.0,
     0x1.a276d6912a457p-977, 0.0, 0.0, 0x1.6e4213dc27875p-378, 0.0,
     0x1.b3bc39a301c0dp-103, 0.0, 0.0, 0.0, 0x1.c58987cac503ep-842,
     0x1.806fbb3d7f62cp-854, 0.0, 0.0, 0x1.e26505f662871p-598, 0x1.581d62f8de0b4p-337,
     0x1.19a5b9cf7513bp-230, 0.0, 0x1.5451d6146ca04p-509, 0x1.88cbcb4353301p-930,
     0x1.bf486caa3a0c6p-760, 0.0, 0.0, 0x1.f163bbbb6f8bep-705, 0x1.4e3612e8b38e5p-758,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bca324b72c672p-823, 0x1.c71e2d012d874p-713, 0.0,
     0.0, 0x1.787e6940cd6f3p-244, 0.0, 0.0, 0x1.b1fd7d23f41adp-484, 0.0,
     0x1.d273600a2e906p-640, 0x1.f8897c8677a0dp-836, 0.0, 0.0,
     0x1.792588e7f8de8p-1017, 0x1.b7439a512bf57p-622, 0x1.bee60dbd52e9dp-125, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a26522fda6729p-838,
     0x1.c676dd639242cp-165, 0.0, 0.0, 0x1.2ca237195b405p-171, 0.0, 0.0,
     0x1.fe373a2d0f9a6p-260, 0x1.b8fa36df5cb91p-769, 0x1.eac3920e30155p-919,
     0x1.f6a81ac0274d9p-185, 0.0, 0.0, 0.0, 0x1.badd45af24156p-276, 0.0,
     0x1.82f8bf129fd98p-124, 0.0, 0.0, 0x1.6a1b94efef205p-229, 0x1.9df213afe7e2p-356,
     0.0, 0x1.d0f3e68bbbba1p-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c7cc2253851cp-925,
     0x1.61643a7ba4b06p-778, 0x1.783d8b4bfc529p-596, 0x1.a0388afd47058p-849, 0.0,
     0x1.a550c1316ac3bp-39, 0.0, 0x1.ac7cb9cc36806p-90, 0.0, 0.0,
     0x1.384a069f012cep-596, 0.0, 0.0, 0x1.03b7dcc6f295fp-457, 0x1.af2006ea22fb5p-147,
     0.0, 0x1.e83aa1bd29fdfp-607, 0x1.0910b12a46ebp-21, 0x1.2df4530d01b77p-632,
     0x1.1287d0cb9ddap-466, 0x1.85b93483c2f78p-954, 0.0, 0x1.9ec8f155532fbp-949,
     0x1.344fe01b72cbfp-225, 0.0, 0x1.3654e2757d737p-808, 0x1.43dab9c7308e4p-780, 0.0,
     0.0, 0x1.9e2084c47eebap-836, 0x1.6843f0ae65c43p-905, 0.0, 0x1.12224626f274ep-69,
     0.0, 0x1.b8e60151d5aa2p-958, 0x1.237715607635bp-919, 0.0, 0x1.3cf87d0129e74p-509,
     0x1.3f2d272cfc964p-342, 0.0, 0.0, 0.0, 0x1.ca1853c5913ddp-794,
     0x1.9ab3efdc04a81p-236, 0x1.dc3e68f815514p-407, 0x1.feb074404d361p-575,
     0x1.f1cfa114beb94p-935, 0.0, 0x1.f3173eca3a9d1p-934, 0x1.924f785cd86a3p-401,
     0x1.0b9947d179ff3p-395, 0.0, 0.0, 0x1.d9270085fe4dap-907, 0.0,
     0x1.e60709df6d2ddp-79, 0.0, 0.0, 0.0, 0x1.cd78cd57b453ep-402, 0.0,
     0x1.b723d24dd2083p-532, 0.0, 0.0, 0x1.22e5810908729p-415, 0.0, 0.0, 0.0, 0.0,
     0x1.36b0f614a30dfp-1011, 0.0, 0.0, 0x1.879372fd37ed2p-663, 0.0, 0.0,
     0x1.40330784f3cfbp-572, 0x1.a2cabc3fc689cp-728, 0x1.e7317a5327844p-183,
     0x1.f0cf09c3ba466p-552, 0x1.d5045cb7727ebp-1009, 0x1.25dac6b49000fp-350, 0.0,
     0.0, 0x1.4d91616caf381p-199, 0.0, 0.0, 0x1.087ed0a6f54ecp-174,
     0x1.2cb0df502ea4ep-295, 0.0, 0.0, 0.0, 0x1.8767ff814a91fp-575,
     0x1.59cb472df50d3p-953, 0.0, 0.0, 0x1.286dbf1644b96p-783, 0x1.86e1128d05661p-85,
     0.0, 0.0, 0x1.d0977da1829e4p-840, 0x1.84a86dd9a5d15p-573, 0.0, 0.0, 0.0, 0.0,
     0x1.a4538a0905ad7p-264, 0x1.3ef6b7ab9c514p-260, 0.0, 0.0, 0x1.0b6010c8501ecp-224,
     0x1.9e9e4047a63c7p-33, 0.0, 0.0, 0.0, 0x1.8c40f59dcfff7p-111,
     0x1.d39939e09c06dp-741, 0x1.fba9996cc5a3ap-284, 0x1.7593e3948fda2p-988, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.660b61b46805bp-10, 0.0, 0x1.a824c569a9286p-1004,
     0x1.e22af45d847a6p-167, 0x1.2205801f5a6e2p-767, 0x1.f6796165df577p-907, 0.0,
     0x1.9f44b0d1061bap-25, 0x1.75c43a1a3d917p-765, 0.0, 0.0, 0x1.52f3cb3346e7fp-146,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.44ea3071bdb06p-519, 0.0, 0.0,
     0x1.e63ffac4de198p-379, 0.0, 0x1.b313a2ea6903dp-100, 0.0, 0x1.b8dd250e2d662p-327,
     0.0, 0x1.cb1e4afba9868p-389, 0x1.e8bccab113586p-517, 0x1.1ed318a342fd5p-693, 0.0,
     0.0, 0x1.9b3b55bd90031p-511, 0.0, 0.0, 0.0, 0x1.19b10462a478ap-267,
     0x1.c3f9f59c635dfp-310, 0.0, 0.0, 0.0, 0x1.6234efb1cae17p-978,
     0x1.4f14690e159ecp-734, 0x1.b49c781d714dcp-492, 0.0, 0.0, 0.0,
     0x1.f80d09aea2d8cp-495, 0.0, 0x1.d3f33436c9bcfp-249, 0.0, 0x1.ef3ad08d58b4fp-277,
     0x1.da0e3b27a2868p-314, 0x1.ede0b597e0643p-733, 0.0, 0x1.cadfaf7aeb82ep-676,
     0x1.c0a49aa556c8fp-494, 0.0, 0x1.f031823d0f0f1p-256, 0x1.bbf99a4a76b3cp-763, 0.0,
     0x1.86ee20ed0b018p-978, 0x1.c2439837e7a7bp-170, 0x1.643cdf7a11de1p-579, 0.0,
     0x1.03d6679c1c8fap-399, 0x1.2a52311ff7ad5p-863, 0.0, 0.0, 0x1.1a51cc22e1e79p-584,
     0x1.23d31746b9cd6p-677, 0x1.84780429b280ap-730, 0x1.fec2f6d18e231p-44,
     0x1.a3ea310919bedp-662, 0x1.9afef6b63d584p-284, 0x1.2fdc7222064d7p-669,
     0x1.39ae0c2f579dcp-513, 0x1.7aa30b66fe80bp-756, 0x1.b910898665a11p-900, 0.0,
     0x1.d25077a1a2b88p-814, 0.0, 0x1.297ec541340a1p-951, 0.0, 0x1.f0302b4e92effp-74,
     0x1.a6af63a63454ap-41, 0x1.636382a779a98p-84, 0.0, 0.0, 0.0,
     0x1.f9a16883e2118p-148, 0.0, 0x1.b042e7a11703cp-176, 0.0, 0.0,
     0x1.1591c3e81efdbp-108, 0x1.6f70bbe28076p-48, 0x1.a96494be5f132p-188, 0.0, 0.0,
     0x1.848d59995634ap-413, 0.0, 0.0, 0.0, 0x1.45bc7ae53614fp-885, 0.0,
     0x1.ff9f26d516716p-505, 0x1.7b19d618421d1p-714, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.57b1942b33a7ep-443, 0.0, 0x1.5a4b99c74aec5p-276, 0.0, 0x1.97c62e3a05843p-977,
     0.0, 0x1.d512c9499a1bap-863, 0.0, 0.0, 0x1.523d771d0f092p-174,
     0x1.48e130db26d5ap-315, 0.0, 0x1.bb6de545662ddp-683, 0.0, 0.0, 0.0,
     0x1.8a4490a837cc9p-320, 0.0, 0.0, 0x1.9bb45d9da0e97p-64, 0x1.d9711f7055d23p-562,
     0x1.dcc86a155885ap-730, 0x1.da5147d2e05acp-230, 0.0, 0x1.aad40b54c91b6p-764, 0.0,
     0x1.d73b751220027p-868, 0x1.b933e70468151p-565, 0x1.cf49b95b9e1abp-384,
     0x1.183fa5c12111fp-876, 0.0, 0.0, 0.0, 0.0, 0x1.eab3dc1c5b1dp-802, 0.0, 0.0,
     0x1.3fd111ebc5b6dp-451, 0x1.f4f685dc1b80fp-121, 0.0, 0x1.405d46d66a5dap-502, 0.0,
     0.0, 0.0, 0.0, 0x1.4e3f45ccb007ap-1009, 0.0, 0.0, 0.0, 0x1.eff9d2f5707ep-720,
     0x1.243413acb6a15p-355, 0x1.aca51f950839cp-397, 0x1.2455cd95f9c49p-195,
     0x1.4d61e04fd85cbp-355, 0.0, 0.0, 0.0, 0.0, 0x1.7f1da71f64485p-772,
     0x1.d55b51a6c588p-695, 0x1.f52962c30f017p-648, 0.0, 0x1.465d3016848a1p-509, 0.0,
     0.0, 0x1.f5081c395c9dap-343, 0x1.9ce302dbbbba4p-845, 0x1.cee3efcf3ce3ap-892, 0.0,
     0.0, 0.0, 0x1.14569806566afp-750, 0.0, 0.0, 0.0, 0x1.5b3ae4824d4acp-995,
     0x1.48160ff02c6ep-486, 0.0, 0x1.58d7cbad7edb3p-346, 0x1.16de6573d53f3p-985, 0.0,
     0x1.3d6d0b00d69dap-788, 0x1.6aadb04f00adap-206, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3d20b51801e4ap-631, 0x1.3e649382b4a05p-397, 0x1.2da626c32ff27p-871, 0.0,
     0x1.1e67ff79e4e96p-877, 0x1.e7e0a4adff0e6p-441, 0x1.89eb85c1cfaa2p-272, 0.0, 0.0,
     0x1.661180cb71c76p-258, 0x1.2860b48bd0097p-733, 0x1.3d163ec368ef4p-793,
     0x1.a286c008bb7e5p-832, 0.0, 0.0, 0.0, 0.0, 0x1.8c53112ed57cp-909, 0.0,
     0x1.8c1703f15993bp-149, 0x1.3bd928ffca0bep-205, 0.0, 0.0,
     0x1.ecf8826d96844p-1001, 0x1.8f29433825c2fp-337, 0x1.b3291800569ap-997,
     0x1.17f0b18d1636cp-45, 0x1.f704d7d9f930cp-195, 0x1.d113820a533cfp-904,
     0x1.af09db79b055dp-893, 0x1.8a31023dbb6e6p-892, 0x1.95d276ed86d8bp-396, 0.0,
     0x1.7a49c3f87cf66p-484, 0.0, 0.0, 0x1.83ab0e847376p-656, 0.0,
     0x1.528f5fe0381c2p-218, 0x1.5f1da226d9356p-668, 0.0, 0.0, 0x1.901c8cf58890fp-123,
     0.0, 0x1.dcbf6c38b7199p-780, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b86b8140cb375p-83,
     0x1.409b3b671bd66p-444, 0x1.341a900312029p-599, 0.0, 0.0, 0.0,
     0x1.7aae75f3a1cc5p-501, 0.0, 0.0, 0x1.055d031c48923p-961, 0x1.fa9c6601e1507p-973,
     0.0, 0.0, 0x1.4ed056923f78fp-832, 0x1.038d676e89073p-248, 0.0,
     0x1.464bb5551ddccp-196, 0x1.589b2d40f3d8bp-274, 0.0, 0x1.50bb5730516bbp-715, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.e4c7a5ed8333ep-41, 0x1.41c116d4384f4p-947,
     0x1.0fb72845f04c2p-71, 0x1.369a5e9494f7ep-53, 0.0, 0x1.070a2d132cdcbp-637,
     0x1.01aff948306fdp-153, 0x1.417d3d4652d47p-535, 0.0, 0x1.b921322a5c714p-315, 0.0,
     0x1.7ed8d50afb05p-61, 0x1.451cd49fa0ef5p-718, 0.0, 0x1.33d6a6bf7c09dp-443,
     0x1.c347d96d5f785p-899, 0.0, 0x1.91c8a127d74c2p-706, 0x1.d0cbd17129a31p-9, 0.0,
     0.0, 0.0, 0.0, 0x1.671cf6fbbc2bfp-686, 0x1.56b2ca0bcf446p-709, 0.0,
     0x1.f9a7789f04b7ep-821, 0.0, 0.0, 0.0, 0x1.400215765082ap-752,
     0x1.21fa986a9ae3cp-467, 0x1.01b65b4ea465dp-857, 0.0, 0x1.045a95b44daaap-56,
     0x1.2857f1f476c75p-393, 0x1.4047c1ae49371p-552, 0x1.d5a552f306e87p-316, 0.0,
     0x1.70950bb79567fp-190, 0x1.a9ec772075246p-170, 0.0, 0x1.dafbeed5cbcd2p-187, 0.0,
     0x1.4f9d680c4abp-157, 0.0, 0.0, 0.0, 0x1.40962cb146bcfp-587, 0.0, 0.0, 0.0,
     0x1.ff78562830279p-613, 0x1.f2710086b249cp-992, 0x1.8b1c26e2bf51ep-610, 0.0,
     0x1.fdb32e034ef95p-829, 0.0, 0x1.6e001786f054dp-487, 0x1.4a24cd094cc47p-662, 0.0,
     0.0, 0.0, 0.0, 0x1.1c7dfe42d1f29p-580, 0.0, 0.0, 0x1.15020c1293eedp-717,
     0x1.cfdfb3a4dd375p-584, 0.0, 0.0, 0.0, 0x1.dad9c6ff1aba4p-577,
     0x1.1d7e24d017dfbp-250, 0.0, 0x1.ed7d87549fe53p-446, 0x1.ef9dd4a3c473ap-791,
     0x1.d3862afcfcf19p-657, 0.0, 0.0, 0x1.0943e8de99b3ep-333, 0x1.ef14b946dba7ap-942,
     0x1.c6a9c3e323186p-542, 0x1.3cbb98f11a409p-781, 0.0, 0x1.48e840e80cfa8p-152, 0.0,
     0.0, 0x1.a052da8d7ff42p-135, 0.0, 0x1.079c1b78157d3p-715, 0x1.41b6120c7fec7p-450,
     0.0, 0.0, 0.0, 0x1.9ec74f913244cp-970, 0.0, 0x1.e7de6b833d73p-391, 0.0,
     0x1.83fd3ef0826c4p-862, 0.0, 0x1.d4950bf70d159p-245, 0.0, 0.0,
     0x1.2050705e036e5p-648, 0.0, 0x1.6bc31b369e014p-18, 0.0, 0.0,
     0x1.5bb18af147c14p-914, 0x1.2825fba4a7007p-876, 0x1.dcf2f3063595ep-843,
     0x1.661d9d92b4ed2p-954, 0.0, 0x1.49f4968d3fe5fp-324, 0.0, 0x1.3921c4dbf90dcp-849,
     0x1.ea4b7e13631c7p-188, 0x1.69cac07ec408bp-172, 0.0, 0x1.6ed1bb3e01ec2p-294,
     0x1.254f60959d03p-838, 0.0, 0x1.f72b4b8728366p-3, 0x1.6f6981b07f44ep-358,
     0x1.d63706fa765edp-323, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf8823ddb614p-926,
     0x1.b3745ee8278e4p-100, 0x1.794b64bd2bd1bp-81, 0x1.d06fc21a9ad58p-558,
     0x1.5a3d05df7e4b4p-449, 0x1.13d9f016aefd2p-137, 0x1.15e94e8e9a923p-654, 0.0,
     0x1.5f1bf40a59621p-105, 0x1.5cc95d17f0d1fp-886, 0x1.0997ae292267p-330, 0.0,
     0x1.f488a67b3cb8fp-889, 0.0, 0x1.16a75c322c86dp-225, 0x1.501140a352db7p-354, 0.0,
     0.0, 0x1.af938366e8b64p-423, 0x1.95ceab7143125p-666, 0x1.63774b9d4c4aep-924,
     0x1.77365553b177cp-261, 0x1.0f8c212fd7d06p-977, 0x1.c49cf0e68911cp-392,
     0x1.d828554d38b23p-33, 0x1.1b63737e4fa1p-864, 0x1.3bb7a0ac529d9p-599,
     0x1.e74a3b8e7413dp-477, 0.0, 0.0, 0.0, 0.0, 0x1.89fe0ca53e56dp-406,
     0x1.fe4566dfe59d2p-275, 0.0, 0.0, 0x1.c5d900c315103p-81, 0.0,
     0x1.291385af01827p-150, 0.0, 0x1.7697cf8005154p-55, 0x1.ad9a49e30302ep-972,
     0x1.2573c9b543fb8p-183, 0.0, 0.0, 0.0, 0x1.a4fb57b13879bp-333,
     0x1.c2e168a61b7e6p-467, 0.0, 0.0, 0.0, 0.0, 0x1.eba631b144be2p-293, 0.0
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
            tmp1 = Sleef_logd1_u10purecfma(tmp0);
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
    printf("Sleef_logd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_logd1_u10purecfma bench acc %la\n", global_bench_acc);
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
