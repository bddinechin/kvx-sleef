/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinpid2_u05avx2128.c --function \
 *     Sleef_finz_sinpid2_u05avx2128 --headers sleef.h,ml_support_lib.h \
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
     0x1.9487cdb456039p-37, 0.0, 0x1.2e4d2a2843464p-878, 0.0, 0x1.c31f1747962eap-709,
     0x1.e669fdd961857p-15, 0.0, 0x1.1606a03c2e38p-362, 0.0, 0x1.19c496e74754cp-197,
     0.0, 0x1.29c087916d972p-887, 0x1.a7773960489b7p-794, 0x1.d5e468c4cdfe8p-82, 0.0,
     0.0, 0x1.a87ffc0876beep-948, 0x1.a89a4b9700b48p-157, 0x1.0df7ba8ebef69p-226,
     0x1.5fbb352ac750cp-169, 0.0, 0x1.347d6ffd9015cp-655, 0x1.b3d254d0dab95p-752, 0.0,
     0.0, 0x1.7ce54abb10e67p-802, 0x1.1fdd066e21e1p-184, 0.0, 0.0,
     0x1.c0d3778237e87p-205, 0.0, 0.0, 0.0, 0x1.150bd239a2499p-830,
     0x1.1e03c36022098p-65, 0.0, 0x1.cc46f147b7e46p-818, 0.0, 0x1.6190527e70539p-668,
     0.0, 0x1.ecaa2c2e90ba3p-872, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.1bee0adfa40d2p-449, 0x1.10f82ca6e5aefp-348, 0x1.4d1b0883f577dp-595, 0.0,
     0x1.0e5cdcaaf2ccbp-179, 0.0, 0.0, 0x1.dea59c7b75ec1p-259, 0x1.255df14e40be6p-854,
     0.0, 0x1.d7a270cecd2cp-599, 0x1.b16c9596dc9e9p-17, 0x1.a0fcca6f55fd5p-391,
     0x1.a5d937cda4dccp-551, 0x1.083acdbcab167p-992, 0.0, 0x1.c19981dfe5b92p-617,
     0x1.de75a3086e8fap-319, 0.0, 0x1.4caae112fc868p-118, 0x1.ebc2274546cap-917, 0.0,
     0x1.c3760c9ea7b89p-888, 0.0, 0x1.c358cc3f8e41bp-605, 0.0, 0.0,
     0x1.562782c134372p-607, 0x1.7bf992a0997d7p-224, 0.0, 0x1.eee686ece0d34p-148,
     0x1.2af1f9b2eccp-621, 0.0, 0x1.11b6a2ab2b16dp-136, 0x1.68cd5e1b0f2bap-851,
     0x1.9b20abe916ae6p-68, 0x1.c4da7a90a4166p-850, 0.0, 0.0, 0x1.c23a9e046e88ap-48,
     0.0, 0x1.3edc9fcdd477ap-963, 0x1.fe20b5cf58a44p-37, 0.0, 0x1.b11f1482ebef3p-253,
     0x1.7ee90be0edb8dp-641, 0.0, 0.0, 0.0, 0x1.c39642f53d1dap-1021, 0.0, 0.0, 0.0,
     0x1.751070c2eb881p-986, 0.0, 0x1.370a3399adb47p-102, 0.0, 0x1.26bcff5c7244ep-390,
     0x1.0610ac570df5fp-297, 0x1.46246555071cdp-871, 0.0, 0.0, 0x1.4c710dbb8f3f2p-223,
     0.0, 0x1.2dfc59446c0e1p-195, 0x1.c8a94f6cbbc74p-852, 0.0, 0x1.6ecfeacbe4881p-875,
     0x1.7bf0ccaacfc3dp-897, 0.0, 0x1.34ccd8eff9b76p-743, 0x1.c9644df4c9fa5p-351, 0.0,
     0.0, 0x1.81f1377a417b9p-750, 0x1.f9646b95c741ep-643, 0x1.5503b91b964cdp-842, 0.0,
     0.0, 0x1.5824ac288376p-559, 0x1.5d28d61b05a45p-403, 0x1.464187386be25p-625, 0.0,
     0.0, 0.0, 0x1.7850440dd1f13p-222, 0x1.fee247d4fe856p-398, 0x1.7869b5bc17aafp-599,
     0x1.60311e171e139p-883, 0.0, 0.0, 0x1.bdd5da2f7a651p-51, 0x1.0138ae475f7p-396,
     0x1.1517cbe97bep-436, 0.0, 0x1.6b49d340ada52p-629, 0.0, 0.0, 0.0,
     0x1.ef3f02cc2491p-52, 0.0, 0.0, 0x1.61e867e10df7dp-658, 0.0, 0.0, 0.0, 0.0,
     0x1.3dc62583cb10ap-71, 0.0, 0x1.ea3b3d7952c07p-624, 0x1.1c135fc659c1cp-317,
     0x1.346dd22983bep-624, 0x1.4882273f311a7p-157, 0x1.3391e15c706dp-994, 0.0, 0.0,
     0.0, 0.0, 0x1.2a3ac5f020b71p-897, 0.0, 0.0, 0x1.c4fd8ab858b2cp-806, 0.0,
     0x1.29f51c4acf359p-1007, 0x1.1e00bfa218fb5p-976, 0x1.a6eea732b3129p-163, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.198fd259243fcp-98, 0x1.b3c889016e1dbp-301, 0.0, 0.0, 0.0,
     0x1.2b8c8d4d4eeacp-308, 0.0, 0x1.2d2beb5234615p-34, 0x1.204ac07d98c7ap-691, 0.0,
     0x1.a82ffbf96d921p-809, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3cc6de808f74p-831, 0.0,
     0x1.c9d0703c502f3p-708, 0.0, 0.0, 0.0, 0.0, 0x1.b313acc635a12p-382,
     0x1.acdb2aafebd86p-263, 0.0, 0.0, 0.0, 0.0, 0x1.682a1218b180ep-785,
     0x1.c1e9631e14547p-492, 0.0, 0.0, 0x1.5dd3512ecb32ep-6, 0x1.65cf01d03d686p-921,
     0.0, 0x1.5f7d74424ed08p-501, 0x1.bdcac72a175e5p-1002, 0.0,
     0x1.476ad5c6465e8p-464, 0x1.bfe70af710f7fp-385, 0.0, 0x1.2b267387337dbp-256, 0.0,
     0.0, 0.0, 0.0, 0x1.d7d9306b18bc8p-950, 0.0, 0x1.73a64b79f8023p-792, 0.0,
     0x1.8b7b71414bac6p-200, 0.0, 0x1.28d4936915514p-120, 0.0, 0.0,
     0x1.8de00db2cd4bap-932, 0x1.87e937a682965p-140, 0x1.1bacbfda1c272p-849, 0.0, 0.0,
     0x1.3121195344ddep-701, 0x1.1bb94b16d91e6p-913, 0.0, 0.0, 0x1.daec40f4c2ea8p-375,
     0x1.4cef69838bc27p-397, 0x1.d28b70d76a669p-347, 0.0, 0.0, 0.0,
     0x1.559243f0a0eddp-952, 0x1.2572a0a11d268p-979, 0x1.466cab70c03dap-986, 0.0,
     0x1.06852b84a10c8p-742, 0.0, 0.0, 0x1.459b13dcb20a7p-465, 0x1.509a998391ff1p-344,
     0x1.df6c67e6bd869p-963, 0x1.e22484e7475cdp-977, 0x1.e9654c7f8c365p-983,
     0x1.b74c07f276a55p-134, 0.0, 0x1.cf143b56bced9p-516, 0x1.042a13fa2715bp-393,
     0x1.29aa9f7149ab8p-615, 0x1.a1bdd708bae55p-868, 0.0, 0.0, 0.0,
     0x1.b64dbb2caadf8p-833, 0x1.71501357e659ep-389, 0x1.968fffbc01cbdp-275,
     0x1.1937e0a3c4237p-958, 0x1.cf26b832f774p-671, 0.0, 0x1.32092e6f4dac1p-26,
     0x1.14c7fd127a9b1p-506, 0x1.6b131d458cfafp-138, 0.0, 0.0, 0.0,
     0x1.c5281322f93e2p-768, 0.0, 0x1.799bc2baf74ap-400, 0.0, 0x1.c866c7055918p-475,
     0.0, 0x1.6d18d0646dd2cp-912, 0x1.e6f5d15440026p-627, 0.0, 0x1.a3cffddcaa509p-949,
     0.0, 0x1.38b890e917262p-570, 0x1.d0f53c2bd336fp-1012, 0x1.31a4caa5328a6p-212,
     0.0, 0.0, 0x1.2ee73b102090cp-225, 0.0, 0x1.18a0c0bc0796dp-212,
     0x1.8b24c8fdfef22p-194, 0x1p0, 0x1.21c047ed1abf3p-926, 0.0,
     0x1.d25d523999a9cp-403, 0.0, 0.0, 0.0, 0.0, 0x1.cb983834a2f0fp-762, 0.0,
     0x1.cfc23e0db84ddp-469, 0.0, 0x1.b6e9244f599d4p-236, 0.0, 0.0,
     0x1.c2ec46ee25598p-928, 0.0, 0x1.93fe2a36b8ca1p-958, 0.0, 0.0,
     0x1.f591cbe9e32ecp-703, 0x1.4e7af109fa064p-319, 0x1.bb88871b1a638p-333, 0.0,
     0x1.a2bca89c21027p-742, 0x1.21c8e6b4d56eap-256, 0.0, 0.0, 0.0, 0.0,
     0x1.d7d96a7da7a4ep-848, 0.0, 0.0, 0x1.995ad3ec09dd7p-744, 0x1.dbf4f7ac7c89bp-781,
     0x1.0abab0e591c0dp-661, 0x1.1d142947f50a8p-427, 0.0, 0x1.ec3e6966ac09cp-360,
     0x1.9573aee50ee3cp-123, 0x1.8742ad9207af5p-588, 0.0, 0.0, 0.0,
     0x1.bd7de4d780a7fp-981, 0x1.42bbb536db4fap-512, 0x1.2fb59ff82dcc2p-876,
     0x1.8000217ac0518p-136, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15ef143af477cp-936,
     0x1.c6fbaa2fbdd6ap-871, 0x1.19c35cc856e3p-854, 0.0, 0x1.d18f76758c6ep-902, 0.0,
     0.0, 0.0, 0x1.2ba8f1eabcd88p-488, 0x1.c9cfd129264d3p-443, 0x1.ea3aee145571bp-429,
     0.0, 0.0, 0.0, 0x1.8459d3278eaa5p-781, 0.0, 0x1.c40f012a2c12fp-156,
     0x1.fbe561cabe614p-113, 0x1.5963170a856e8p-909, 0.0, 0.0, 0x1.094180f466c27p-446,
     0.0, 0.0, 0x1.94933d5eb8321p-598, 0x1.f7c5e54780d4cp-32, 0.0, 0.0, 0.0,
     0x1.265f973d2407fp-845, 0.0, 0x1.263d2bce9350cp-202, 0x1.d2cb155359441p-663,
     0x1.6ef40bd3cd442p-5, 0x1.e7bfe8ce8286fp-216, 0x1.b845bd8bd3b31p-821,
     0x1.9176426afd21cp-762, 0.0, 0x1.ce5d7b11fdf12p-722, 0.0, 0.0,
     0x1.3d6ff4bcb2e42p-1004, 0x1.4cf63385f419fp-674, 0.0, 0x1.0bd183c1d5981p-454,
     0x1.752f58abc88fdp-26, 0.0, 0x1.270f524658f4p-387, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a755bb03e4cc3p-783, 0.0, 0.0, 0x1.61957b5023b49p-378, 0x1.4dc547bcab79p-689,
     0x1.d60ac676a7b13p-551, 0.0, 0.0, 0x1.f427cdcbf04f8p-227, 0.0, 0.0, 0.0, 0.0,
     0x1.6fe2b59bb9946p-612, 0x1.d7fb6b48861e5p-428, 0x1.9dbd3c7afe2abp-314,
     0x1.b5882180d7bdbp-146, 0x1.d86155945244fp-971, 0x1.7f6aedaa65792p-653,
     0x1.a5f57713db4a4p-331, 0x1.76c5e96484dc3p-704, 0.0, 0x1.630f7c1b866ebp-92, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.502181a8251dap-1017, 0.0, 0x1.9bef03f89268ap-136, 0.0,
     0x1.55efc893a72bbp-869, 0.0, 0.0, 0x1.f925c97577629p-131, 0x1.4df4a6c19483dp-650,
     0.0, 0x1.41e5f2f2e63a2p-801, 0x1.ab32204704977p-176, 0x1.6b16d25349444p-324, 0.0,
     0x1.8e66e5b2d158ap-381, 0.0, 0x1.e2f29660d922ep-464, 0x1.270dda1831d1dp-817,
     0x1.b3ee2013cfcf7p-203, 0.0, 0x1.087fc0a07febbp-518, 0x1.7459be43b942p-81,
     0x1.83448887b9148p-156, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a4fa8ffd6c1e1p-948,
     0x1.9254157c8b0dbp-256, 0.0, 0x1.eef103d1c6168p-118, 0x1.6ff029738598bp-357, 0.0,
     0.0, 0.0, 0x1.33a0085b73ecbp-334, 0.0, 0.0, 0x1.00096f42ec6d4p-460, 0.0, 0.0,
     0.0, 0x1.796a80068cedp-529, 0.0, 0x1.2157583b20807p-516, 0.0, 0.0,
     0x1.34fa0196b204cp-649, 0x1.1b1b0c828d192p-810, 0x1.1248cb8fcab61p-817,
     0x1.a3d52e90b54aap-997, 0.0, 0.0, 0x1.474bed632b4dep-273, 0.0,
     0x1.9635729f0d0cdp-132, 0x1.d71bde14f1d43p-499, 0x1.43e051a31750ep-19,
     0x1.a8cdf117459d5p-914, 0x1.7b269386a0fdep-345, 0.0, 0.0, 0.0, 0.0,
     0x1.1892ef475b8f6p-697, 0.0, 0.0, 0x1.4407d01e6d516p-585, 0.0,
     0x1.695289e4a1cb2p-654, 0.0, 0.0, 0x1.d5b1842f10caep-596, 0.0, 0.0,
     0x1.1d7aee49d4353p-315, 0x1.80886fb8d2ba1p-267, 0x1.fb3433b30fb5p-334, 0.0, 0.0,
     0x1.810b4f19e75cfp-990, 0x1.37307ec77388ep-728, 0.0, 0.0, 0x1.f1667694543e4p-924,
     0.0, 0x1.2b4aac4ccf2d2p-802, 0x1.3774a9976ce69p-42, 0x1.2df7046c9a05ep-446,
     0x1.7da7dba8bd512p-435, 0.0, 0x1.9d31caf58724bp-979, 0x1.6d00015ba6665p-631,
     0x1.c9f6cf679b266p-563, 0x1.b352693626ddap-525, 0.0, 0.0, 0x1.0d38f4d4d1009p-856,
     0.0, 0x1.6e26ba0eae7ddp-976, 0x1.87e3a78364f39p-285, 0x1.953961b511e53p-928, 0.0,
     0x1.8f586ac6e1f6ep-345, 0x1.d00296a18f15cp-722, 0x1.ab298de533ec9p-507, 0.0, 0.0,
     0x1.363991d795f09p-762, 0x1.44827d3ec5c15p-925, 0.0, 0x1.c12ee065e558ap-532, 0.0,
     0.0, 0.0, 0.0, 0x1.1facba5f6c026p-586, 0x1.159f673c55055p-775,
     0x1.4319c0e7d295p-567, 0x1.13e674308a3a4p-961, 0.0, 0.0, 0.0,
     0x1.c925d1650bd1ap-513, 0x1.bce8853bab601p-711, 0x1.3fe683103d6bcp-20,
     0x1.80414d2d5c85cp-448, 0.0, 0x1.0dba10283da8p-464, 0.0, 0.0, 0.0, 0.0,
     0x1.e3390917691aap-830, 0.0, 0x1.6ca0405136p-495, 0.0, 0.0,
     0x1.a7e3c506cdc7cp-357, 0.0, 0x1.07854b11d3811p-199, 0.0, 0.0,
     0x1.01cba4675e195p-5, 0.0, 0x1.83f9e513624bdp-969, 0x1.22daf2f7f85a1p-581, 0.0,
     0x1.84d3067e210a2p-844, 0.0, 0.0, 0x1.b3a6ca0cb61cbp-35, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.9c3590fd4ecb2p-322, 0x1.7c6f83729a6dp-712, 0.0, 0x1.6c93114284d62p-578,
     0x1.6dd4f2b0b7b8ep-433, 0x1.0e4a48ddfbfe2p-925, 0.0, 0x1.d554679a8ed2dp-920, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8e89f7226f34dp-125, 0.0, 0x1.c23de5c419ad9p-538,
     0x1.922aab389491fp-80, 0x1.71dc3fb23078p-1005, 0x1.aceb1e01a545p-155,
     0x1.0689b3e32cc2fp-61, 0.0, 0.0, 0x1.f54a2228696a7p-177, 0.0,
     0x1.0f04ef6ed1092p-595, 0.0, 0x1.732b1155f69e7p-294, 0x1.09f251e5da05bp-110, 0.0,
     0x1.c6f1cb4ef085cp-120, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe8c8f8d9028dp-732, 0.0,
     0.0, 0x1.ce8e3d0f0fb19p-654, 0x1.db84918727018p-675, 0.0, 0.0, 0.0, 0.0,
     0x1.86fed4097dca6p-499, 0.0, 0.0, 0x1.78c01d4534242p-414, 0.0, 0.0, 0.0,
     0x1.74deef8653e75p-483, 0.0, 0.0, 0.0, 0x1.29d055eb1b52p-995,
     0x1.bc38847338a9ap-547, 0.0, 0.0, 0x1.000a5c19afbedp-133, 0.0,
     0x1.1d942fba6449bp-900, 0.0, 0x1.de19f94d885eep-280, 0.0, 0.0, 0.0,
     0x1.9f987ea7a73aep-535, 0.0, 0.0, 0.0, 0x1.64a246a455fdfp-199, 0.0, 0.0, 0.0,
     0x1.ca87f0b143cb6p-977, 0x1.27332e1b3f36dp-809, 0x1.243154f1ab739p-201,
     0x1.9e6fc0cb3fe02p-368, 0x1.40e585a21227dp-174, 0x1.69a1b3c359b17p-868,
     0x1.0d504cecba633p-70, 0.0, 0.0, 0x1.70d4d9310e89p-807, 0x1.031959819b8c8p-542,
     0x1.ae397b2afa5a7p-240, 0x1.5761a535dddap-395, 0x1.6c2ae1bcc2ec7p-702,
     0x1.b3b8e793c1519p-751, 0x1.27c3eb78e872bp-390, 0.0, 0x1.a700b2dab6619p-16,
     0x1.ff0fae988437cp-456, 0x1.2f98bc83c3434p-230, 0x1.325f2035b1099p-14,
     0x1.45a2725ec3ec1p-49, 0.0, 0x1.392d1492624f8p-82, 0.0, 0x1.e7c88d6fb1e48p-853,
     0.0, 0x1.f49492840731cp-678, 0x1.737b6474f6a4ap-1001, 0x1.bf9d465403c4p-750,
     0x1.55fc5c80a48cbp-690, 0x1.3b9e18c190f42p-213, 0x1.937c6079f43f4p-679,
     0x1.f45f26663e252p-790, 0x1.1df9c62c944f2p-945, 0.0, 0x1.8bc65e30438ap-328,
     0x1.9f3bb78cf2f7cp-1018, 0.0, 0.0, 0x1.0843502bf7e71p-849,
     0x1.ad5311aa3d2d7p-553, 0x1.02ac0efcef4e7p-264, 0x1.eb1d261797eedp-790,
     0x1.02bd130e7ad13p-731, 0.0, 0.0, 0x1.32ae390d04e73p-121, 0x1.7e7dc636cfc7cp-303,
     0.0, 0.0, 0x1.78f423d90ed01p-983, 0x1.0af8b16daab41p-798, 0x1.f84c17c43011ep-354,
     0.0, 0x1.bb6ca0d3afa2dp-536, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.db48290e2a4ccp-145,
     0.0, 0.0, 0.0, 0x1.fb9607b0da7edp-469, 0x1.bc14fe310ecf4p-424, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.601259fa58934p-303, 0x1.46ef37eb958bbp-635, 0.0, 0.0,
     0.0, 0x1.f2608ccac5351p-792, 0.0, 0x1.05a36b05ae05cp-568, 0.0,
     0x1.9ed98866bd0d6p-285, 0x1.b236a63cee127p-603, 0.0, 0.0, 0x1.d8a46e0316667p-507,
     0x1.d2e6848a63d05p-98, 0x1.4e629d1d99277p-477, 0x1.515a2b303f01bp-192, 0.0,
     0x1.2cd35ae6a1e1cp-884, 0x1.52fdab5a85ceap-310, 0.0, 0.0, 0x1.98b13382f90cp-900,
     0x1.bd9f316f94cd6p-191, 0.0, 0.0, 0x1.8fe3af60b8873p-118, 0.0,
     0x1.8f234ab607338p-880, 0.0, 0x1.5fc074264feaap-289, 0x1.d9486d52f5b52p-313, 0.0,
     0x1.53b1411f70a1fp-714, 0x1.806a874b48c5dp-408, 0.0, 0x1.dd79572cee5cbp-830,
     0x1.49931f74031d5p-7, 0.0, 0x1.e4c6cbfa37ad5p-811, 0x1.4071ccd14c09fp-575, 0.0,
     0.0, 0x1.b955608f9734ap-204, 0x1.9a8a1e470a788p-1012, 0.0,
     0x1.bdc3eda5d3902p-769, 0.0, 0.0, 0x1.20def73c5521bp-349, 0x1.8ba7f34c0418bp-16,
     0x1.4f9f85f9ff136p-556, 0x1.e3f98f1c6ce2ap-566, 0.0, 0x1.594f97991260fp-323, 0.0,
     0.0, 0x1.d23fbe8f1f94fp-45, 0x1.ab69258cad7fap-427, 0.0, 0x1.728482bf6a0e7p-1015,
     0.0, 0.0, 0x1.b32ddae17ed76p-165, 0.0, 0x1.5df8f933ee1cfp-947,
     0x1.71b86d2c062ep-207, 0x1.75aac9d93f043p-224, 0x1.c3cdf92e686b1p-199,
     0x1.6ba3882d52707p-574, 0x1.3fc443430e263p-545, 0x1.bd95c213d6bc6p-618,
     0x1.a890aaa8654b6p-271, 0x1.74f6c581db499p-561, 0.0, 0x1.ada45e0ee5b65p-463, 0.0,
     0.0, 0x1.0669f2641d663p-609, 0.0, 0x1.06a3a185fb21cp-14, 0.0, 0.0,
     0x1.2689867073ff1p-32, 0x1.e057c1d90fa79p-96, 0.0, 0.0, 0x1.f7e42dad320b5p-614,
     0x1.6b570eefa467fp-856, 0.0, 0.0, 0.0, 0x1.65140ae77d6d7p-200, 0.0,
     0x1.b8147bcbae153p-315, 0.0, 0.0, 0.0, 0x1.39724b754ba65p-826, 0.0, 0.0,
     0x1.bfb15aaba65d4p-747, 0x1.eaa4b9f8c70c8p-837, 0x1.5fdedcd1132aep-821,
     0x1.0b3220f81cfaep-688, 0.0, 0.0, 0x1.b90d297ef426bp-885, 0.0,
     0x1.65854eaf77a18p-668, 0.0, 0.0, 0x1.622a849e2566ap-1000, 0x1.455751a650a7p-566,
     0.0, 0x1.dd7b5a5af0298p-599, 0x1.28566bbcff905p-51, 0x1.a8597eb2b3ed8p-482, 0.0,
     0.0, 0x1.2555af82cc4aep-990, 0x1.06538de3c9f65p-657, 0.0, 0x1.ab25b9b567ecp-441,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ac79e5a3cd1c4p-711, 0x1.56b7d86a97cabp-139,
     0x1.af60f047731d4p-910, 0.0, 0x1.fad6d5006b19fp-639, 0.0, 0x1.c40456fb4e739p-466,
     0x1.13f9e0a9077cdp-71, 0x1.909c85003d55dp-432, 0x1.f249c7adadd96p-509,
     0x1.6c2c1d9d253e9p-956, 0.0, 0x1.ed14c4710de51p-979, 0x1.6214e197b3657p-915, 0.0,
     0x1.d837666767ce6p-759, 0.0, 0x1.bda9407b429efp-877, 0x1.70a6bc4c88256p-194,
     0x1.fc9154f202296p-535, 0x1.3f53efae02b52p-6, 0.0, 0x1.43f4af106946p-889,
     0x1.0384498b843ccp-436, 0x1.b1bd044abc92p-796, 0x1.113bad4ea32e6p-782,
     0x1.44587c33d0bb4p-912, 0x1.19b7dd1ea3947p-593, 0.0, 0x1.4a1ef3a99a324p-653, 0.0,
     0.0, 0x1.524bef9a6b246p-893, 0x1.bfdeeea63abaep-951, 0.0, 0.0, 0.0,
     0x1.746eb3c61f612p-518, 0.0, 0x1.a39f9d4ec272ap-169, 0x1.67d16f6b23ed6p-328,
     0x1.2268f008aafbbp-320, 0x1.1097c3d67ae67p-722, 0.0, 0x1.07431a8b5edebp-480,
     0x1.ad3adc199ace7p-597, 0.0, 0x1.c8faebb2d4b27p-539, 0x1.c72f6e3ceef7bp-750,
     0x1.e1c16214ed1b5p-8, 0.0, 0.0, 0.0, 0.0, 0x1.3c11a44843671p-289,
     0x1.918d043c53602p-905, 0x1.5640ba65b5f4fp-516, 0.0, 0.0, 0x1.5225421b11ac3p-124,
     0.0, 0.0, 0x1.b8c1721d98dc9p-124, 0.0, 0x1.e396aa37b62cap-772, 0.0,
     0x1.de1f5338dfb9fp-585, 0.0, 0.0, 0x1.d763b88976a17p-668, 0.0,
     0x1.ddb60282fdad1p-493, 0x1.960b8a39fdb4fp-51, 0x1.c96fbcc4e1705p-1004,
     0x1.b40ab3488e9d9p-480, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fff13b985eb01p-270,
     0.0, 0.0, 0.0, 0x1.2ea67fa69d0bp-736, 0x1.ec336645060b2p-645, 0.0, 0.0, 0.0,
     0x1.32161b36f7e81p-634, 0.0, 0.0, 0x1.b2bebb61f9e63p-185, 0.0,
     0x1.60fea3f73a195p-1015, 0.0, 0.0, 0x1.bd298456868bbp-765, 0x1.f39fa57d4249p-223,
     0.0, 0x1.7825e70f253b4p-399, 0x1.ed16d612e1efdp-348, 0x1.561b1f398b8fep-621, 0.0,
     0.0, 0x1.8aec08ea57112p-435, 0x1.679f661b0f347p-384, 0x1.9a51ac501587ep-639, 0.0,
     0.0, 0.0, 0x1.182eae1b56241p-159, 0x1.3d6928c1a720cp-873, 0x1.a89643cf805c3p-706,
     0.0, 0x1.7ff73a9409cfp-756, 0.0, 0x1.e2fa334b6851p-849, 0.0,
     0x1.fa8c7edfe3f27p-497, 0x1.108d3204e7635p-769, 0.0, 0x1.c0db17b6f6adep-86,
     0x1.3bdec7ae1511dp-871, 0x1.1741b0015d812p-758
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
            tmp1 = Sleef_finz_sinpid2_u05avx2128(tmp0);
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
    printf("Sleef_finz_sinpid2_u05avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sinpid2_u05avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
