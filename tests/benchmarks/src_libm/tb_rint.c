/**
 * generated using metalibm 1.1
 * sha1 git: b'"3425a70973ff93e510359b9b2fa45754ebf43279"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_rint.c --function rint --headers math.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <math.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0x1.9416f814ca74fp-151, 0.0, 0x1.ffd226a177adfp-533,
     0x1.64907b852213cp-433, 0.0, 0x1.12aaf591956e1p-262, 0.0, 0x1.3b0abf909e964p-216,
     0x1.c64e7bb37edbep-585, 0.0, 0.0, 0x1.bcdaec55941a6p-438, 0.0,
     0x1.5243936cbdc7ap-201, 0x1.18c3d5b881de3p-140, 0.0, 0.0, 0x1.02e815a6a08b2p-903,
     0x1.fea6afc71f41fp-710, 0x1.37732796ec1fp-620, 0.0, 0x1.0d2b9ff7f65e9p-974, 0.0,
     0x1.e54c26bcde741p-977, 0.0, 0x1.ca27c57b8e5b5p-697, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.5f1a6aa2e3f6cp-769, 0x1.a500a8444301cp-580, 0.0, 0x1.a2ff0cab6f83p-670, 0.0,
     0x1.4968a39560132p-546, 0.0, 0x1.d0459bc8bd781p-690, 0.0, 0.0,
     0x1.0561c29d06302p-1005, 0.0, 0x1.b266af3bef94ep-651, 0.0,
     0x1.43a64f6030901p-664, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.accf77a4ba5b6p-447, 0.0,
     0.0, 0.0, 0x1.e2d198b0b84e8p-485, 0x1.eb51a54044b95p-8, 0x1.729d844a61f41p-663,
     0.0, 0x1.fd42da31502d5p-787, 0x1.a3f90b49a1e6cp-466, 0x1.f43e9f56dd191p-96, 0.0,
     0x1.8a398c2dc0017p-46, 0x1.dcea27815d091p-257, 0.0, 0x1.21d0ac2b965ep-36,
     0x1.88194de3b4842p-592, 0x1.1c62c7700894cp-12, 0x1.15553b2191ba1p-697, 0.0,
     0x1.5f70926bcd09ap-533, 0.0, 0.0, 0.0, 0.0, 0x1.2f29521dcdefep-838,
     0x1.e28ea31586458p-187, 0x1.7d02a4eca6c8dp-535, 0.0, 0.0, 0x1.f6da3bfed1d2ap-345,
     0x1.fc2ad7ceaca1bp-823, 0.0, 0x1.6143bbf35691fp-129, 0.0, 0.0,
     0x1.509034547c81bp-72, 0.0, 0.0, 0.0, 0.0, 0x1.6bd8c4fa90469p-814, 0.0, 0.0, 0.0,
     0x1.c398e60dc0b28p-263, 0x1.fe881f0cf8edbp-17, 0.0, 0.0, 0x1.78a115edbcc98p-55,
     0.0, 0.0, 0x1.57312a0e634fdp-903, 0.0, 0.0, 0x1.e2e28e08976ccp-124,
     0x1.208fc7899d818p-622, 0x1.37ae576faeb54p-661, 0.0, 0x1.c6439590181afp-659, 0.0,
     0x1.79af7e88b6ea4p-484, 0x1.d8a55d7eb226p-194, 0.0, 0x1.dc39d1805c776p-1010, 0.0,
     0x1.0a206985b3da2p-903, 0x1.5b85e2d170dap-467, 0x1.450ab55f9bb69p-486, 0.0, 0.0,
     0.0, 0x1.8d22331aad6b7p-855, 0.0, 0x1.27d35f6ada0cap-227, 0x1.e3e7526180987p-858,
     0.0, 0x1.2c89a05e6b578p-40, 0.0, 0.0, 0.0, 0x1.a5dd41c32894dp-869, 0.0,
     0x1.f588075099fd1p-702, 0.0, 0.0, 0x1.1a51940c49451p-385, 0x1.a4c4bfe618b0ap-683,
     0.0, 0x1.08c3e737ed341p-833, 0.0, 0x1.cb7dc2a68b115p-632, 0x1.1ccc0152d66dbp-92,
     0x1.4102abe13a001p-680, 0.0, 0.0, 0x1.7b2b830043b4bp-693, 0.0,
     0x1.54139c516a971p-694, 0.0, 0x1.bfc2839d0450cp-860, 0.0, 0.0, 0.0,
     0x1.cec218012c7e7p-508, 0.0, 0.0, 0x1.9319062b9d9e1p-159, 0x1.0da1d3d7feb62p-73,
     0x1.4e7401ba2e491p-644, 0.0, 0x1.a61da5c5436edp-5, 0.0, 0.0,
     0x1.c65b447821ca9p-1021, 0x1.62b6ccd404e61p-541, 0.0, 0x1.9c13924ed9315p-46, 0.0,
     0.0, 0.0, 0.0, 0x1.941820a19ef16p-489, 0x1.c9765fe8857dp-265,
     0x1.00721a514201fp-546, 0.0, 0.0, 0x1.546a87751642fp-66, 0x1.fc77eb51054d4p-1005,
     0.0, 0x1.e3381010201c5p-54, 0x1.f24c16a005725p-142, 0.0, 0.0, 0.0,
     0x1.7fd1444a307c3p-86, 0.0, 0.0, 0x1.fa8fb43e9d9bp-242, 0x1.504c182becbf8p-377,
     0.0, 0x1.c7ab9c6bad2d8p-840, 0.0, 0.0, 0.0, 0x1.e34f818b69698p-333, 0.0,
     0x1.da7c320c6fb86p-289, 0x1.b5cb6268beb5cp-667, 0x1.1cfdd8db5c30ep-1001, 0.0,
     0.0, 0.0, 0.0, 0x1.4285b1f402a51p-946, 0.0, 0x1.a4ed0f49e99dbp-544, 0.0, 0.0,
     0x1.f5ce299fedbbcp-893, 0x1.6f5b79ef3af5ep-1009, 0x1.38324b52ce7dbp-354, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.c04345f2a265cp-122, 0.0, 0x1.0b48d9126ffc8p-837, 0.0,
     0x1.a2793d980580dp-172, 0.0, 0.0, 0.0, 0x1.b85b4370f5274p-790, 0.0,
     0x1.d6468758a6c56p-317, 0.0, 0x1.3bb8cceb64073p-187, 0.0, 0.0, 0.0, 0.0,
     0x1.30d0943b0b6b1p-341, 0x1.248fb9425c375p-592, 0x1.d4548fda898cp-224,
     0x1.d6e59311e2081p-271, 0.0, 0x1.fb53bfb58b85cp-26, 0x1.8c0c13bafea03p-969,
     0x1.ba38fd9d2eaa5p-152, 0x1.641d67144058bp-277, 0.0, 0x1.80658da9de6f7p-307, 0.0,
     0x1.7a4a97863709p-594, 0x1.ddfd36f470535p-861, 0x1.01e1b67dc5353p-348, 0.0,
     0x1.17f3cd41a62ep-930, 0x1.8b94fe893ce45p-821, 0.0, 0.0, 0.0,
     0x1.efe0fa58820c2p-982, 0.0, 0x1.42efc5e0e707ep-925, 0.0, 0x1.101c4c11baae3p-429,
     0x1.62442a9223344p-841, 0x1.f1d07d1845da6p-527, 0.0, 0.0, 0.0,
     0x1.b9ed34d5b4e7dp-787, 0x1.030053f1538c9p-866, 0x1.702ee8038832bp-482,
     0x1.ac4fc22a674c1p-336, 0.0, 0x1.7732da214cf2p-17, 0.0, 0.0, 0.0,
     0x1.bacb9cdb20582p-555, 0x1.f79d965d79506p-571, 0.0, 0.0, 0.0,
     0x1.133b7a4a3e909p-223, 0.0, 0x1.aceeb368ced48p-572, 0x1.f32cae5a06435p-97, 0.0,
     0.0, 0x1.47286390a75b5p-705, 0.0, 0x1.114ceb25078a4p-582, 0x1.062f2c25b6c78p-758,
     0.0, 0x1.9012db8bba998p-591, 0.0, 0x1.7f7c71a7ef9fbp-524, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.b23be9a0b2784p-272, 0x1.eae1d91bff267p-869,
     0x1.f9b898a8b44c7p-67, 0.0, 0.0, 0x1.6aa85faa12a4ep-300, 0.0,
     0x1.15113c0ed437p-286, 0x1.516717d5729b3p-281, 0x1.7eede01ae6437p-758,
     0x1.55cf064846122p-871, 0.0, 0.0, 0x1.14692e891ad33p-653, 0x1.c51b24f866ccep-859,
     0.0, 0x1.2c0cd0c26aeb3p-886, 0x1.529f634627b82p-866, 0x1.a3973982a6493p-247, 0.0,
     0.0, 0.0, 0x1.75e2d4a410a54p-681, 0.0, 0x1.95e4e1f01bd3bp-582, 0.0,
     0x1.d5b4b2ba4bdb8p-890, 0.0, 0x1.648403aeb75d2p-532, 0.0, 0x1.4d3c2d38b6723p-208,
     0.0, 0.0, 0x1.9baa2eb9bdc7ep-971, 0x1.ce572c0d94347p-399, 0x1.a515742bc20afp-71,
     0.0, 0x1.a51fb6b8d413p-350, 0x1.4d440840c3a64p-239, 0x1.f62bc3afdc3ccp-989, 0.0,
     0.0, 0.0, 0x1.72a93e2815fdbp-438, 0.0, 0x1.e5a41a494b0f3p-973, 0.0, 0.0,
     0x1.f25c721b69c2ep-3, 0x1.a611497a78a4ap-575, 0x1.4f4597bbad348p-600,
     0x1.19bb0129fd71dp-936, 0.0, 0.0, 0.0, 0x1.9e6a272873a6cp-768, 0.0, 0.0,
     0x1.151c55e20ab0ep-669, 0x1.1746df92991aap-883, 0.0, 0.0, 0x1.249eaa24c7cedp-183,
     0x1.3931e941ea765p-1008, 0x1.6b84109c1c5aap-717, 0.0, 0.0, 0.0,
     0x1.007f93e7e6ab3p-148, 0x1.a76ed128d3b96p-557, 0.0, 0.0, 0x1.911ebfedfacf9p-676,
     0x1.d36e70c221552p-827, 0x1.df7c0ee1387dbp-869, 0.0, 0x1.1d16a90a17e8fp-57,
     0x1.b9cbe77627d19p-739, 0.0, 0x1.ad032448dccffp-19, 0.0, 0.0, 0.0, 0.0,
     0x1.40fb66c45d7bap-379, 0.0, 0.0, 0.0, 0x1.66ad4f35a78f4p-126, 0.0,
     0x1.a44b7a81540d7p-625, 0x1.e14b5381193cp-483, 0x1.3ba5944f3fb4fp-679,
     0x1.2a28bfec5b4c2p-263, 0.0, 0.0, 0.0, 0x1.acdf1fd207112p-953,
     0x1.cdc9b0d769ff6p-1020, 0.0, 0.0, 0.0, 0.0, 0x1.e39da7a017261p-508, 0.0, 0.0,
     0x1.608276176b922p-888, 0.0, 0.0, 0x1.940aa6fcec7f1p-804, 0x1.30051e81b2adfp-777,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af6ab8a2a113bp-543, 0x1.be396287b2b97p-45,
     0x1.8094159d4ac61p-187, 0x1.aaeb8e9f35e35p-259, 0x1.7f32b4b583da2p-901,
     0x1.7eebc66c95316p-181, 0.0, 0.0, 0x1.7d725b11ce197p-548, 0.0, 0.0, 0.0, 0.0,
     0x1.40b4405f2e819p-1022, 0.0, 0.0, 0x1.66bdee27b9ae1p-250, 0x1.f9de41650bef9p-2,
     0.0, 0x1.b9c4634deae7fp-291, 0x1.de6da3c4fd7ddp-848, 0.0, 0.0, 0.0, 0.0,
     0x1.3af8b29b2e90fp-503, 0.0, 0.0, 0.0, 0.0, 0x1.234276c0f8e18p-120, 0.0, 0.0,
     0.0, 0x1.289406df939eep-689, 0x1.469111cd855fbp-323, 0.0, 0x1.0c35c50fdc83cp-975,
     0.0, 0x1.85bbb5e47477ep-174, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.035ee97cbdadbp-740,
     0x1.d98664d13f659p-148, 0x1.68d5463b1df5fp-831, 0.0, 0x1.dc12bd284a4b6p-641, 0.0,
     0x1.6e9a9e52459e8p-251, 0.0, 0.0, 0x1.fd7037e105f21p-163, 0.0,
     0x1.5b3567698c28cp-252, 0.0, 0x1.63dfc09b9258fp-530, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8d84eef5aaeb8p-903, 0.0, 0x1.c982ab90d717p-185, 0.0, 0.0, 0.0,
     0x1.a6277ceb80188p-715, 0.0, 0.0, 0.0, 0.0, 0x1.eb7be5d21b6p-717,
     0x1.85cc97e199c05p-829, 0x1.00c6c38ca3671p-398, 0.0, 0x1.d203f09e29869p-647, 0.0,
     0x1.5b791ac515f78p-68, 0.0, 0x1.5156f5846c6b6p-479, 0x1.5936d6804a621p-482,
     0x1.9b5c4939742f4p-35, 0x1.bdac86876a931p-799, 0.0, 0x1.f888d94b970f8p-72,
     0x1.7bcec492d2368p-738, 0.0, 0.0, 0x1.c0dedf96ce035p-1005, 0.0,
     0x1.464be816b1792p-820, 0x1.fecd32b6548a3p-1006, 0x1.aada0248ae0fcp-244, 0.0,
     0.0, 0.0, 0.0, 0x1.5f440114735f3p-599, 0x1.a94daf5d6d06bp-322,
     0x1.3a55df62e8583p-351, 0.0, 0x1.0906507d0810ep-235, 0x1.885f790c1cff8p-339,
     0x1.8fa3924207e76p-812, 0x1.f7799ec4ae895p-605, 0x1.ea49af935cf89p-303,
     0x1.990a8be5b7aefp-88, 0.0, 0.0, 0x1.9deefd2e29d19p-593, 0.0, 0.0,
     0x1.fb5e2dda0a42cp-568, 0x1.d06410a1c36a1p-791, 0x1.cade7eea53eedp-56,
     0x1.716e7a456769ep-648, 0.0, 0.0, 0.0, 0x1.762ccfd7bce1fp-230,
     0x1.0ef0365275bdfp-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f23c017d55a59p-906,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78fc38fb9363p-137, 0x1.f512d1621a367p-141,
     0x1.7ef0c4b991f26p-502, 0x1.069bfce668841p-931, 0x1.87b3237fca6fap-74,
     0x1.a2d20cae16486p-235, 0x1.b3f259b1eb7d7p-652, 0.0, 0x1.b0dec7bd27012p-598, 0.0,
     0x1.a2773baa4a138p-992, 0.0, 0x1.ee64fc55e509p-402, 0.0, 0.0, 0.0,
     0x1.618ae5905cd15p-1005, 0.0, 0x1.eeae2549d44b3p-373, 0.0, 0.0, 0.0, 0.0,
     0x1.828f386689039p-870, 0.0, 0x1.ee759b20593a5p-411, 0.0, 0.0,
     0x1.cc299fb04951fp-640, 0x1.3be3150a896ecp-541, 0.0, 0.0, 0.0, 0.0,
     0x1.a8b4e1945fbf7p-355, 0.0, 0x1.ec2b37ce11b54p-906, 0.0, 0x1.142ef7f477c7ap-989,
     0x1.e4fa8ff529385p-135, 0.0, 0x1.a4d216001b1e4p-542, 0x1.02202f3df695p-424,
     0x1.37bcb0b92500cp-988, 0.0, 0.0, 0.0, 0x1.c47d0f9931a6fp-295,
     0x1.8f4337e4804f8p-981, 0.0, 0.0, 0x1.68f82138e964ep-351, 0.0, 0.0, 0.0,
     0x1.8fd70181b5dbbp-154, 0x1.7492e4120fc87p-832, 0.0, 0.0, 0.0,
     0x1.09c68f2633e73p-516, 0x1.43092412360adp-862, 0.0, 0.0, 0x1.c90b3111c65e3p-293,
     0x1.69f510b5afd85p-155, 0.0, 0.0, 0.0, 0.0, 0x1.bdfb2c514eb55p-345,
     0x1.5ba549c8d59fap-836, 0.0, 0x1.47adfb9a578b8p-706, 0.0, 0x1.d047a82c8a5c3p-237,
     0x1.34debbdb90bbp-138, 0.0, 0x1.d4f904b1c134cp-334, 0x1.1fb5ef01c6d38p-466, 0.0,
     0.0, 0x1.6d6c796dddbap-230, 0x1.b50203694d419p-901, 0x1.77f062c5ef78bp-861, 0.0,
     0x1.04a4ae8ee48cap-254, 0x1.cad5581718d8p-687, 0.0, 0x1.a14b8ed8fbd31p-458, 0.0,
     0.0, 0x1.97808514dcc3cp-255, 0x1.47aafd2911204p-107, 0.0, 0.0,
     0x1.be41b6b833e14p-714, 0x1.8c0fbf507379ep-911, 0.0, 0.0, 0.0, 0.0,
     0x1.3d52bd398494ep-777, 0x1.7c583c25c8c49p-629, 0x1.9be348fa679d6p-333, 0.0, 0.0,
     0.0, 0.0, 0x1.c807f0cb39715p-329, 0.0, 0.0, 0.0, 0.0, 0x1.5e3b15dc47093p-476,
     0.0, 0.0, 0x1.cbafa0d178652p-735, 0.0, 0.0, 0.0, 0x1.51fb506e9b36cp-948,
     0x1.6a98a76267606p-205, 0.0, 0x1.b2f311d35b0dfp-61, 0x1.45ee90a5ed651p-508, 0.0,
     0.0, 0x1.c284ff8ab3dc7p-394, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d21a513110578p-675, 0x1.158553ef9c911p-555, 0.0, 0.0, 0x1.850ca0b4f5511p-623,
     0x1.67f97ac1b7446p-679, 0.0, 0.0, 0.0, 0x1.da901071096e6p-519,
     0x1.3849ac6ea8c3ep-943, 0.0, 0x1.b6d0c1b396d2p-948, 0x1.07db758a3d33fp-317,
     0x1.8baa62ad90c6dp-872, 0x1.c7f5829297d11p-558, 0x1.dad941af5ebb8p-191, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eee88698ce7f2p-251, 0.0, 0.0, 0.0,
     0x1.8bc8d59345acp-1012, 0.0, 0.0, 0x1.ca3c5c3dbd432p-751, 0x1.2e363de4d461ap-670,
     0x1.9ca86292c0dc3p-299, 0.0, 0.0, 0x1.f7a5d75ff54ep-978, 0.0,
     0x1.3ce398f3197fbp-225, 0.0, 0x1.e6c099c3fa847p-409, 0x1.5ff4dcffc6465p-873,
     0x1.8aace4b23e8bep-687, 0.0, 0x1.3d1b7d01c576cp-243, 0.0, 0.0, 0.0, 0.0,
     0x1.bb79e82989d42p-854, 0.0, 0x1.14eb86c7bc637p-490, 0.0, 0.0,
     0x1.3998e50b03a67p-392, 0x1.340b35350f3bbp-541, 0.0, 0x1.51eede713902bp-709,
     0x1.b6e34976ba627p-761, 0.0, 0.0, 0.0, 0.0, 0x1.dcf761132c386p-718, 0.0,
     0x1.3b2e599be73d1p-78, 0x1.483cc13336407p-984, 0.0, 0.0, 0x1.2fcc5dd0477adp-85,
     0x1.db4c015fb2cebp-692, 0.0, 0.0, 0x1.fcd6b9823f6b6p-54, 0x1.37aa520491994p-788,
     0.0, 0.0, 0.0, 0x1.398f723856e4cp-446, 0.0, 0.0, 0.0, 0.0,
     0x1.56330f7ceb7e1p-118, 0x1.bdd9d8e5d808p-74, 0.0, 0x1.483c894858212p-215, 0.0,
     0x1.fe0bd8dd8dc76p-852, 0.0, 0.0, 0.0, 0x1.ee126c59b2cc3p-803,
     0x1.68d98bdecfc11p-206, 0.0, 0.0, 0.0, 0.0, 0x1.b29380156aec2p-886,
     0x1.c9ba074f58386p-776, 0x1.3b3a1191bef93p-36, 0.0, 0x1.6014dafa0badap-844,
     0x1.c7fe32a98c68cp-946, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b2b74ed0a14d4p-617, 0.0, 0x1.5fa146e01ec8ep-293, 0x1.9d5aa70c2db4ep-907, 0.0,
     0x1.1b3e304d8adbcp-180, 0x1.330706cb220ep-946, 0x1.a03eb56d3b41cp-620, 0.0, 0.0,
     0x1.2b3ba2c62aacp-960, 0x1.6be712f008b76p-605, 0.0, 0.0, 0x1.44dd118e7824p-544,
     0.0, 0x1.12652926d731p-529, 0x1.a47ca352a8c42p-231, 0.0, 0.0, 0.0,
     0x1.4c16a22ec288bp-356, 0x1.f6b133dc347cep-791, 0x1.59aa5ad81627dp-32, 0.0,
     0x1.5aba9e599d67dp-617, 0x1.1bafa729a2d8cp-464, 0x1.f7c9267a843aep-985, 0.0,
     0x1.5e987765ca556p-261, 0.0, 0x1.8331cc1fb5be3p-282, 0x1.11b24abda48d7p-994,
     0x1.c84491778e478p-310, 0x1.2ec6ee0179c6bp-576, 0.0, 0.0, 0x1.8b2d978571122p-559,
     0.0, 0.0, 0x1.27d3faafb0bdp-431, 0.0, 0.0, 0.0, 0.0, 0x1.bdb20353afaecp-332,
     0x1.c4c36fd841bd5p-478, 0x1.b09fe6c924d4dp-961, 0.0, 0x1.77eea555d3f11p-302,
     0x1.4e375026f0c09p-296, 0x1.9b119b3aaff5fp-454, 0x1.4fa7de908e83p-25,
     0x1.ff50ca3d6d98ap-465, 0.0, 0x1.99a0bf527ebc5p-302, 0.0, 0.0,
     0x1.c3c9e4043d885p-540, 0x1.9d72277ee52f8p-781, 0.0, 0x1.d09755aadfb9fp-115,
     0x1.136fa7215a892p-1016, 0.0, 0x1.7a9bd234b82e8p-130, 0x1.333a4a9ef90f5p-27,
     0x1.a51255834f859p-396, 0.0, 0x1.adde347195407p-621, 0.0, 0x1.d625d7d45a81ep-57,
     0.0, 0x1.b3b7343efbc19p-353, 0x1.c04d1ac661552p-535, 0x1.27617f29b8bb4p-691, 0.0,
     0.0, 0x1.19927e9017995p-319, 0x1.9ee6ef3fc3f53p-729, 0x1.a5a7d56864ccfp-438,
     0x1.eb4e7dcd337e7p-107, 0.0, 0.0, 0x1.425017c85cea5p-332, 0.0, 0.0, 0.0,
     0x1.b45259d488658p-620, 0.0, 0.0, 0.0, 0x1.8295dc00536e6p-521,
     0x1.2f084e5035395p-915, 0x1.5bdf1b5967867p-470, 0x1.8ccdb442ef593p-244,
     0x1.50068dc67f17cp-154, 0x1.6e5f8475a326ap-539, 0x1.e508ef8603673p-946,
     0x1.34207a43162a5p-752, 0.0, 0.0, 0.0, 0x1.5a36bdc360e9cp-369,
     0x1.da64e7a6e7b99p-979, 0x1.0ed131975348bp-771, 0.0, 0x1.6bf7726fa68ccp-630, 0.0,
     0.0, 0.0, 0x1.c9d121cae7a0dp-156, 0x1.1799385a9efd3p-825, 0x1.6a0f7eb29626p-1019,
     0x1.f00ee3abbef08p-744, 0x1.f56fa587bde92p-923, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1762d8b29cb43p-127, 0x1.e2211a8bb72c6p-434, 0x1.09f674abc7a0bp-926, 0.0, 0.0,
     0.0, 0x1.197b9541d489ap-206, 0x1.9eb42e5e54d28p-745, 0.0, 0.0,
     0x1.bd4dcc487c80ep-392, 0x1.25afadba06d15p-130, 0x1.ab1c3cc207f8p-767, 0.0,
     0x1.e55926ddaad5ap-19, 0x1.cfd1f4b377ecdp-323, 0x1.617124134dd59p-216,
     0x1.a997291029305p-772, 0x1.639374501f465p-68, 0.0, 0x1.4731c30d01a7ep-679, 0.0,
     0x1.2ae5a461975cfp-231, 0.0, 0x1.ac8221a72286dp-464, 0.0, 0.0, 0.0, 0.0,
     0x1.4bc4cd663d2fbp-925, 0.0, 0x1.dc1ca1c73cbaap-510, 0x1.f06ae2bf5fc4ap-226,
     0x1.a69364a0f0efep-933, 0x1.188c1daa198a2p-182, 0.0, 0x1.811c951c8612ap-865,
     0x1.44e1eec593cb1p-1006, 0.0, 0.0, 0.0, 0x1.f33acd8b7043bp-328, 0.0, 0.0,
     0x1.0b04a1dbf4f6p-408, 0x1.8953da9480abep-638, 0x1.b547ab82bc21bp-957,
     0x1.0e24de2a5855ep-885, 0.0, 0.0, 0x1.ed5aaf7384ap-133, 0.0, 0.0, 0.0, 0.0,
     0x1.6f244bcdfc605p-985, 0x1.aeb77bb5219b1p-560, 0x1.da502efc0f48dp-865, 0.0, 0.0,
     0.0, 0x1.1d9ca1f7d5a6cp-972, 0.0, 0.0, 0x1.f64ee1ba9d3c8p-1014, 0.0,
     0x1.b2e95db45fe4p-974, 0x1.af2ce3fe60d72p-224, 0.0, 0.0, 0x1.ab883301f2aaap-350,
     0x1.3825a862ab119p-443, 0.0, 0.0, 0.0, 0x1.873a8edce3211p-679,
     0x1.f305e443fcf68p-570, 0x1.a926c5007fd38p-584
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = 0.0;
    tmp = __cos_counter_num(0);
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
            tmp1 = rint(tmp0);
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
    printf("rint %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("rint bench acc %la\n", global_bench_acc);
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
