/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_exp10d1_u10purecfma.c --function \
 *     Sleef_finz_exp10d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.603721255ap-530, 0.0, 0x1.a59d624e58cc7p-815, 0.0, 0.0, 0.0, 0.0,
     0x1.5b0743f0cd064p-672, 0.0, 0.0, 0x1.83c5af288cb99p-183, 0x1.8c1a68cb7e4dp-216,
     0x1.d43c132bdc255p-39, 0x1.96fdbb77e3096p-802, 0x1.0dba1bc92d24ap-514,
     0x1.3acb41b8b5ab2p-263, 0.0, 0.0, 0.0, 0x1.b060628d4e4d8p-44, 0.0, 0.0,
     0x1.246ff4ea5cc73p-777, 0.0, 0.0, 0.0, 0x1.6449c7204d93bp-921, 0.0, 0.0,
     0x1.bbffd419628abp-1006, 0x1.9cf22e333bedp-455, 0.0, 0.0, 0.0,
     0x1.020d36c1730c4p-708, 0.0, 0x1.e64304a3a373ap-818, 0x1.776940a320442p-384, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.20b1d96b3ad7p-739, 0x1.82b7fd248fe4p-894, 0.0, 0.0,
     0x1.98bcce23d290cp-299, 0.0, 0.0, 0.0, 0.0, 0x1.bb36057248ea4p-628,
     0x1.6a2eba8b66432p-395, 0x1.2156760bf4026p-353, 0.0, 0.0, 0.0,
     0x1.f65e2b85a21b9p-245, 0.0, 0.0, 0.0, 0x1.12c4915897802p-219,
     0x1.1d430ac92be4ep-863, 0x1.8dfd81439f94cp-33, 0.0, 0x1.07724f8bb24c2p-337,
     0x1.56bcc5a8a1fp-233, 0x1.337c73cd6d34ap-931, 0x1.94489a7cb99bfp-894,
     0x1.e6f262b76b9f2p-729, 0.0, 0x1.6b22b3cb3854bp-774, 0.0, 0x1.dea6e48c48253p-687,
     0.0, 0x1.398ecc862eb89p-634, 0x1.852fb985e2d1dp-778, 0.0, 0.0, 0.0,
     0x1.5ea02753a117fp-522, 0x1.0086eb016534p-793, 0x1.db7c87a74be4fp-51,
     0x1.009c13702f741p-245, 0.0, 0x1.9c1069f767fc5p-133, 0.0, 0x1.19452ed6b3777p-393,
     0x1.91fa7392f8b9fp-966, 0x1.a483c3a35b437p-87, 0.0, 0.0, 0x1.2d8378830f34dp-545,
     0x1.d15c8b415693cp-977, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.49020f0f62b1dp-601,
     0.0, 0.0, 0x1.57e25316d8eedp-946, 0x1.1ac0787380bf8p-662, 0x1.eb0e1aa1ab676p-716,
     0.0, 0x1.87616a26486afp-158, 0x1.01610b8f73d69p-1019, 0x1.affee3eff5aep-821, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c7879c5712ffap-274, 0x1.25c02a625c2ffp-729, 0.0,
     0x1.c250cd48e8a4dp-999, 0.0, 0x1.dafe568dd893bp-526, 0x1.c22c24880daf5p-355,
     0x1.7b414c7a45292p-534, 0.0, 0x1.968db4d100969p-221, 0x1.c7cde30cdf6fbp-412, 0.0,
     0x1.5cad7beb327bap-271, 0.0, 0x1.a39def404b981p-800, 0.0, 0.0, 0.0,
     0x1.d8dce198b38ffp-975, 0.0, 0.0, 0.0, 0x1.1adc07c479348p-58,
     0x1.34561babdc51p-406, 0x1.6287c77eb1703p-975, 0.0, 0x1.4d897deea121dp-823,
     0x1.2236b65906e8cp-672, 0x1.4e2f34b0e74c2p-974, 0.0, 0.0, 0.0,
     0x1.90370258865cap-918, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cc855c04971eap-382, 0x1.569f41d3c2a7cp-841, 0.0, 0.0, 0x1.3e268fc416b91p-565,
     0x1.92aa31ce5f6cbp-610, 0x1.e2734832760ap-241, 0x1.054ee9b4d56d9p-738,
     0x1.13f995cd6151ap-584, 0x1.529bbe401399dp-351, 0.0, 0x1.e4760d2d934a5p-736,
     0x1.047f78a620dc5p-409, 0.0, 0.0, 0x1.3ecd4bdc9e2d9p-216, 0x1.d0822cc6ef104p-726,
     0x1.5c5351aa76b6p-725, 0x1.6c230ecef033cp-281, 0x1.dcf7f2109f90ap-204,
     0x1.aade13a3c29f4p-715, 0.0, 0x1.e535ffe9dff7ap-825, 0x1.074b63eb894fep-111,
     0x1.e0e211fa1723ep-302, 0x1.afd049eaa445ep-727, 0.0, 0.0, 0x1.c0db7dcad9477p-299,
     0x1.c987e0c6f8e66p-462, 0x1.ea352bdd88f3bp-513, 0.0, 0.0, 0x1.d58cf0f15366fp-634,
     0x1.511578af40e25p-629, 0.0, 0.0, 0.0, 0x1.d26d2c107ca87p-549,
     0x1.fe68406a79322p-803, 0.0, 0.0, 0x1.cac0407ac8b14p-965, 0.0,
     0x1.33fd743285cd8p-992, 0x1.f8d86fd78a43p-827, 0x1.2659cb2c1ef07p-1005,
     0x1.29b8388489ff1p-37, 0x1.5ea1e2e23b2bcp-1, 0.0, 0x1.fe06905ec6a35p-674,
     0x1.3ab6e1ecda35fp-423, 0x1.87322cd6dcba8p-28, 0x1.2ecc23aad0f33p-17, 0.0, 0.0,
     0.0, 0x1.71c1cc5fc94a3p-144, 0.0, 0.0, 0.0, 0x1.fab541cc7384cp-260, 0.0, 0.0,
     0x1.fce59991d5b61p-985, 0x1.f3613529ae7fep-587, 0.0, 0x1.7103a934c77edp-2, 0.0,
     0x1.aa2b99045c52ep-696, 0x1.dc33be177316bp-947, 0.0, 0x1.8247cacfd377ap-397, 0.0,
     0x1.c0dbd884c9967p-574, 0.0, 0x1.16d1febd3ec58p-639, 0.0, 0.0,
     0x1.345e9b8d5838ep-270, 0x1.1ac779bf09a55p-888, 0x1.98c2aa575f61fp-179, 0.0,
     0x1.e627764d59c1ep-823, 0x1.328637b7e2829p-487, 0x1.b4865b973531ap-349, 0.0,
     0x1.310b553e28954p-59, 0x1.9479386ae5923p-512, 0x1.9431f7f345c1ep-454, 0.0,
     0x1.3ff5180360bfcp-185, 0x1.e80b8c407f735p-571, 0x1.94a2e685584aap-203, 0.0,
     0x1.fb00b11c4b1d7p-438, 0x1.07af7d360c99dp-306, 0.0, 0x1.d874490d3bc17p-976, 0.0,
     0.0, 0x1.617d1496bfac4p-239, 0x1.719a8e52b88b5p-1020, 0.0, 0.0, 0.0,
     0x1.99916db9dc8a1p-180, 0.0, 0x1.081c07c8b09dap-729, 0x1.75fc9247e743ap-853,
     0x1.49c27967e555p-648, 0x1.670b465661468p-817, 0.0, 0x1.04a06e896e56ap-232,
     0x1.77a1b2ae5c8cap-717, 0.0, 0x1.07f13c7532df2p-306, 0.0, 0x1.da03974ad5f01p-186,
     0x1.360e47f227d2p-438, 0x1.e1317e5bd011p-879, 0x1.727c82f834586p-443, 0.0,
     0x1.500aba51258ccp-505, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fdfebc5fd80fp-471, 0.0,
     0.0, 0.0, 0.0, 0x1.bf0acf1acf563p-445, 0x1.4ee1fd2ea5e29p-779,
     0x1.4eac3cf1e1598p-912, 0x1.cb3fc8eaa7c86p-546, 0x1.96bc3ac42d55cp-161, 0.0, 0.0,
     0.0, 0x1.c0df94e791142p-297, 0x1.dc86e0b550821p-462, 0x1.16a948d88bf3p-120,
     0x1.85bd9e17eb213p-351, 0.0, 0.0, 0x1.bef2d8ce4aab7p-265, 0x1.3bdd9b564db43p-228,
     0x1.835ab17038fcp-29, 0x1.4ac3b6bcd51bfp-40, 0.0, 0.0, 0.0,
     0x1.7cd8343667642p-262, 0x1.d8db23101844p-839, 0x1.d3f3ed0f4e86cp-422, 0.0,
     0x1.f7ac747df5ba1p-956, 0x1.48d0a32f665a7p-136, 0x1.e22740906fa51p-148,
     0x1.ae56715449b56p-344, 0x1.e34deb06c3654p-816, 0.0, 0.0, 0x1.f7fd7e2d62908p-112,
     0.0, 0x1.a8866de358cf4p-723, 0x1.9f9386ca3d7e1p-764, 0.0, 0.0,
     0x1.1c1d9fa9fdb21p-169, 0.0, 0x1.29f37f748b2eap-317, 0x1.8b0459a76c376p-999, 0.0,
     0.0, 0x1.38c1c488cc8bdp-445, 0.0, 0x1.aee8e4e7a14f3p-735, 0x1.af5b2ad1f7ebep-436,
     0x1p0, 0.0, 0x1.c68db3f8334aep-544, 0.0, 0x1.5b1682329f718p-63, 0.0, 0.0,
     0x1.f7092dacd5dcp-655, 0.0, 0.0, 0.0, 0.0, 0x1.ede8345a81d8fp-421, 0.0,
     0x1.da71c6152d81ap-108, 0x1.1d3067be738b1p-32, 0.0, 0.0, 0.0,
     0x1.b6c3dfb3d3b05p-114, 0x1.c0817db7494cap-821, 0.0, 0x1.ee389df0c0d45p-421,
     0x1.d96459efb35e5p-41, 0x1.b19d456d51fa6p-675, 0.0, 0x1.6c61503dadfedp-431,
     0x1.54d3291bae8ffp-292, 0.0, 0.0, 0x1.f62e74011f063p-724, 0x1.1341a845b61f7p-111,
     0.0, 0.0, 0x1.e55087cfc7421p-419, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b686807c56eb7p-682, 0x1.bf0d6370c2958p-651, 0.0, 0.0,
     0x1.6c3157fc2f8ccp-1022, 0.0, 0.0, 0x1.4e913fc7e12dcp-317,
     0x1.d29b419e2e8dfp-674, 0.0, 0x1.2c4b02dc331b3p-189, 0x1.373698eb88d08p-339,
     0x1.9a97013430b65p-994, 0x1.95eb6feacb132p-12, 0.0, 0.0, 0x1.aee3ef6209c26p-345,
     0.0, 0x1.51ef9f310f804p-338, 0.0, 0x1.9649414147a9dp-744, 0.0,
     0x1.efb9715ca1b8ep-529, 0x1.ed8db655738bbp-228, 0.0, 0x1.5a72d11072adap-375,
     0x1.c39beb3937469p-689, 0x1.ea28522559092p-891, 0.0, 0.0, 0.0,
     0x1.3bbc8db95f0a3p-480, 0.0, 0x1.803e352834e3cp-666, 0.0, 0.0,
     0x1.0fb3cba15cd04p-140, 0x1.ded6a5488600bp-526, 0x1.9ac41eea2f24dp-423, 0.0, 0.0,
     0x1.3385810c0272fp-187, 0.0, 0x1.4865e53b15b05p-603, 0x1.ff23f76c2d2aap-496,
     0x1.e2d12915caf12p-804, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.421dde9f20ecap-394,
     0x1.8927cceacb95fp-41, 0x1.0c3133e324d86p-352, 0.0, 0.0, 0.0,
     0x1.ed85e8b7cbc49p-380, 0x1.7d62ac56320ccp-519, 0.0, 0.0, 0x1.0876eccba8501p-723,
     0.0, 0x1.75aa309bd6c98p-101, 0.0, 0.0, 0x1.bc7c15ab88802p-625,
     0x1.a04ec38040391p-465, 0.0, 0.0, 0.0, 0x1.13cfd89e4873ep-219,
     0x1.d25ce31cbc1b9p-106, 0x1.3ef37c515d7edp-882, 0x1.5a7f4d52a378ap-404, 0.0,
     0x1.6e25c12a9a038p-144, 0x1.f8f6b2dd8e30cp-1004, 0x1.a291c3f53b7b9p-705, 0.0,
     0x1.0189f448d3471p-627, 0x1.ece5197263774p-976, 0.0, 0.0, 0x1.9963ec8e2316dp-277,
     0.0, 0x1.7c0c947ad20edp-694, 0.0, 0.0, 0x1.3a4dad5467023p-585, 0.0,
     0x1.0430f201734edp-842, 0x1.b06f400bd041p-843, 0.0, 0.0, 0.0,
     0x1.50bd042a6ccd4p-851, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.411e2730acef5p-68,
     0x1.a93f877d222a6p-945, 0x1.1b5ae4d26baadp-743, 0x1.09741b6959a7cp-479, 0.0, 0.0,
     0.0, 0x1.fa1f9bea750e1p-708, 0x1.8cc3975a56a01p-632, 0x1.5d42208f90c28p-611, 0.0,
     0.0, 0x1.1dc23e17b3f74p-908, 0.0, 0.0, 0x1.30a8b341c9839p-15,
     0x1.e34121050ccdp-186, 0x1.3664c6b874406p-404, 0.0, 0.0, 0x1.27c1a2109571fp-590,
     0x1.7ba449dcbae52p-768, 0.0, 0.0, 0.0, 0x1.b895cc1816ecbp-401, 0.0,
     0x1.a9fe6c16c351ep-280, 0.0, 0.0, 0.0, 0x1.b4c509d04ba6dp-99, 0.0,
     0x1.1190c85aca455p-713, 0x1.ae4f405fcff95p-710, 0x1.f8e8476845b27p-289,
     0x1.b9472ce58cca5p-766, 0x1.d7eebcc366708p-236, 0.0, 0x1.92b142a0d1a92p-853,
     0x1.db2259fc1c46ep-941, 0x1.9fdcdcc7ccf0cp-206, 0x1.39650561936c1p-755,
     0x1.9d29a525e6fafp-916, 0x1.131cbb3258d25p-635, 0x1.78e0f3afd749cp-653, 0.0, 0.0,
     0.0, 0.0, 0x1.81154e564e0adp-20, 0.0, 0x1.ee9ce5407f796p-630, 0.0,
     0x1.a9feb5e5d5cb7p-231, 0.0, 0x1.b76e5765fdbd3p-934, 0x1.edb5ad643d0f2p-908,
     0x1.d0cd9112dfdbbp-786, 0.0, 0x1.eaccac6036cf3p-646, 0x1.b30f3992c076cp-156,
     0x1.365d3a87de325p-972, 0.0, 0.0, 0x1.161a4ab7ed16ep-200, 0.0, 0.0,
     0x1.721193c6320cbp-403, 0.0, 0x1.e7e94fb45f832p-603, 0.0, 0.0,
     0x1.a6920f03ed4e3p-304, 0x1.cf6e2824bbbf4p-428, 0x1.dac1e4d767d56p-144,
     0x1.65a1c599cfda3p-286, 0x1.355cee61ff4c8p-311, 0x1.45504767d1425p-501,
     0x1.bb64921b98109p-238, 0x1.763eac87d97fap-94, 0x1.431e36fd62a6ep-798, 0.0,
     0x1.bd5cdb08fee5ap-768, 0.0, 0x1.32bd60d17691dp-321, 0x1.585ea260705dcp-443,
     0x1.2e602ec49a86ap-176, 0.0, 0.0, 0.0, 0.0, 0x1.8a0b3d162ad71p-58,
     0x1.de2d674a079e1p-954, 0.0, 0.0, 0.0, 0.0, 0x1.6946ff64244a7p-922, 0.0,
     0x1.27ad17dcb83abp-24, 0.0, 0.0, 0x1.e24f477582b2fp-114, 0x1.420aaf6871a63p-944,
     0.0, 0.0, 0x1.4aa3936106481p-209, 0.0, 0.0, 0.0, 0.0, 0x1.eaa1c0506886p-504,
     0x1.d345099d17209p-114, 0x1.a2831c0388a4p-1005, 0x1.c10d4be49f24dp-1017, 0.0,
     0x1.ab92e19b23a04p-906, 0x1.bc9f664cd013dp-275, 0x1.a48c5344022abp-918, 0.0,
     0x1.1e99cf41181a6p-365, 0.0, 0x1.89f84eacf2c84p-1003, 0.0, 0.0, 0.0,
     0x1.58112d6c667f3p-160, 0x1.285f264e9d50ep-62, 0x1.6bd0a4e910901p-960,
     0x1.94c94e24749c9p-102, 0.0, 0x1.4f199e4446356p-622, 0.0, 0.0,
     0x1.0c49b9e469906p-753, 0x1.4ccf4b6c484fcp-187, 0.0, 0.0, 0.0, 0.0,
     0x1.b9e5f7bd27bd9p-858, 0x1.c50df3a755396p-422, 0.0, 0x1.07807bc57a964p-916, 0.0,
     0x1.f1eae0a1a0fdbp-755, 0.0, 0x1.57f521ad6b53cp-594, 0x1.ac21a75f26f2ap-131, 0.0,
     0.0, 0.0, 0.0, 0x1.e387c883e00fcp-484, 0x1.520927657a89ap-643,
     0x1.a001f9bd35bb9p-811, 0x1.99e20e20c6bb7p-554, 0.0, 0x1.3519d5e43e4cap-962, 0.0,
     0x1.3f5611dbf7499p-794, 0x1.7eeb1bc2a7eeap-454, 0x1.a443ac48bf3cfp-547,
     0x1.7452d8f179c5cp-554, 0.0, 0.0, 0x1.f8c62bb60a7efp-318, 0x1.54cef45ba668ep-223,
     0.0, 0.0, 0.0, 0x1.c558b45c47af5p-840, 0.0, 0.0, 0.0, 0x1.210b0246c0791p-913,
     0.0, 0x1.ec332e5cff96ep-590, 0.0, 0x1.11fa2fa630f25p-820, 0.0, 0.0,
     0x1.e27745ee81cecp-801, 0.0, 0x1.29131cca996b1p-536, 0.0, 0x1.244810bdbf5d5p-744,
     0.0, 0x1.242bc13a342b4p-236, 0.0, 0x1.1129a30c61342p-228, 0x1.75b11b654dc73p-849,
     0.0, 0x1.518a293af1effp-82, 0.0, 0.0, 0.0, 0x1.f8e4c8b171b33p-943, 0.0, 0.0,
     0x1.7796ceb4a9d85p-712, 0.0, 0.0, 0x1.4ab3279310edbp-487, 0.0, 0.0,
     0x1.3faaaecf2442bp-419, 0x1.c866ae043e1dbp-982, 0x1.ed5773cdb2464p-776,
     0x1.d1e1116ee7a21p-695, 0.0, 0x1.33499172756bp-920, 0.0, 0.0,
     0x1.16cd753049f32p-812, 0.0, 0x1.780643be88878p-93, 0.0, 0.0, 0.0, 0.0,
     0x1.39f691c2d7174p-280, 0x1.abf892b8798dcp-790, 0x1.1c5d9bbe91fbp-639, 0.0,
     0x1.259e669cba4cfp-671, 0.0, 0x1.a796794e238d8p-146, 0x1.f1889b11655fep-129, 0.0,
     0x1.b36c0da42c7f4p-234, 0.0, 0.0, 0.0, 0x1.18d843f6e0fdep-648, 0.0, 0.0, 0.0,
     0.0, 0x1.23a390836a531p-186, 0.0, 0.0, 0.0, 0x1.dd0c0442cc6c8p-412, 0.0,
     0x1.143235941940ep-925, 0.0, 0x1.801b2afd5a40dp-14, 0x1.9137058ae20c4p-337, 0.0,
     0x1.6edc75e8417b8p-282, 0x1.cb5be3c77f1c4p-685, 0.0, 0x1.3d4d888805d76p-520, 0.0,
     0x1.eedec84c61116p-76, 0.0, 0x1.122df08c58f8bp-655, 0x1.ef1be7c3603c7p-170, 0.0,
     0x1.76fac1f2b47fbp-652, 0.0, 0.0, 0x1.f0af50194e28ap-817, 0x1.eb89c972a0f61p-810,
     0x1.0f8acb64fd5aap-49, 0.0, 0x1.a4779833e5dd7p-1018, 0x1.00ee7468e32b7p-523, 0.0,
     0.0, 0x1.95635b6a576fep-306, 0x1.04a7f97918322p-790, 0x1.48f12dd3a4761p-994, 0.0,
     0x1.1768eaffc4156p-859, 0.0, 0.0, 0x1.19799acda30a8p-966, 0x1.0c3b10274cfcap-905,
     0.0, 0.0, 0x1.ea7f46a815c67p-972, 0.0, 0x1.e2c68ed367085p-278, 0.0,
     0x1.3a6cab0f279f5p-332, 0.0, 0x1.72d1e8216ff73p-436, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2af8693d9bec5p-185, 0.0, 0x1.2e6a6bbbd87cep-578,
     0x1.b2fef8cd07d71p-741, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fc1ac66acc13bp-590,
     0x1.7bda77465573bp-531, 0.0, 0.0, 0x1.67c3efb3d39dp-692, 0x1.8940765b60cafp-207,
     0x1.5a85ed5d87f1ep-130, 0.0, 0x1.5a4420c458c17p-321, 0x1.f1b919f7e5779p-244, 0.0,
     0x1.4de513319c1cp-821, 0x1.ea26d0382765p-905, 0.0, 0.0, 0x1.7a775e0097a85p-913,
     0x1.9943480929397p-594, 0x1.9360d7c9527ecp-1, 0x1.7823be6116c5fp-993,
     0x1.51f3012ad08dcp-846, 0.0, 0x1.6d6f3ec5eba87p-726, 0.0, 0.0,
     0x1.78080266a7e9ep-502, 0.0, 0.0, 0x1.afd76c4d1edddp-92, 0x1.7a47308abbdb8p-840,
     0.0, 0.0, 0x1.1858504aebc6dp-751, 0.0, 0x1.1d820235c32a6p-211, 0.0, 0.0,
     0x1.fc77bf4d0cf0bp-38, 0.0, 0.0, 0x1.768d78cbdf5c2p-499, 0x1.35c99e2645c3ap-828,
     0x1.81e0054b168a5p-940, 0.0, 0.0, 0.0, 0x1.4822cbbada07p-423, 0.0,
     0x1.36603ea8c49b7p-176, 0.0, 0x1.a1ade6b61396p-788, 0.0, 0x1.9d44b46dba398p-491,
     0x1.cf088bb5a01cp-596, 0.0, 0.0, 0x1.79b52d973f8b5p-663, 0.0, 0.0,
     0x1.171d66c0950fcp-1021, 0x1.ec4dc55917d52p-647, 0x1.bb12a078b8c67p-388, 0.0,
     0x1.cfb9112a5d406p-748, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4cc531926b76p-442,
     0x1.d84778dd1ce02p-268, 0x1.9b000500527b4p-1003, 0.0, 0x1.9bc31d0d12619p-1016,
     0x1.b8f22691437c2p-106, 0x1.1b768f955ecc2p-811, 0x1.6f5a49a1f5909p-206,
     0x1.ab972e381b9f7p-822, 0x1.5c59347516d3ap-835, 0x1.0fc881a40a538p-343, 0.0,
     0x1.998fd69d60e8cp-908, 0.0, 0.0, 0.0, 0x1.2765b5183e6a8p-403, 0.0,
     0x1.621363fb29a53p-803, 0.0, 0.0, 0x1.ba7df6caaf763p-660, 0x1.15f6b78ceaf39p-966,
     0x1.69bca6fd1c10bp-810, 0x1.7888402b103aap-240, 0.0, 0.0, 0x1.1461821dbf3c8p-126,
     0.0, 0x1.9b0cb262a1b64p-1021, 0x1.80dd57d0badfep-306, 0.0, 0.0,
     0x1.df0c0fb115ddbp-989, 0x1.04826f4a9ef3fp-814, 0.0, 0x1.b3be187e9c5cap-17,
     0x1.9ea3f23bdda32p-37, 0.0, 0.0, 0x1.caa674b825b6ap-569, 0.0, 0.0,
     0x1.20ff476094113p-629, 0.0, 0.0, 0x1.2c42d5b59f73ap-917, 0.0,
     0x1.64ff48b025864p-825, 0.0, 0.0, 0x1.8dd208e75efe2p-493, 0.0,
     0x1.0da7e5fdb5bfp-766, 0x1.aaa478b8b9653p-942, 0.0, 0x1.2e125ab170b29p-620, 0.0,
     0.0, 0x1.be651e2ed433p-679, 0.0, 0x1.4d207072d1ce8p-240, 0.0,
     0x1.2b792641983b5p-63, 0x1.59a3adc9b6dd1p-92, 0x1.f40aa2232c496p-456, 0.0, 0.0,
     0x1.bc6cf78e62e6p-627, 0.0, 0x1.cb6a8c407b606p-276, 0.0, 0x1.92f6153ecf2e1p-756,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05e228e4c2d7cp-622, 0x1.3db50c5ddc5adp-919,
     0x1.d26a9cf69de2ep-401, 0.0, 0.0, 0.0, 0x1.ff08c96be14bfp-660, 0.0,
     0x1.3f345f9cab608p-154, 0x1.5b14280b1fa36p-713, 0x1.0834f587a6bebp-87, 0.0,
     0x1.06e60d24ed45cp-320, 0x1.8db4967c3a6e4p-378, 0x1.d12601e93e7a1p-47, 0.0,
     0x1.2883c9bf6f5eap-39, 0.0, 0.0, 0x1.31caa95043b3bp-934, 0x1.071ab1216e66fp-34,
     0.0, 0x1.5a210db1ba0b3p-360, 0.0, 0.0, 0x1.99bc7b82ff2bp-215, 0.0, 0.0, 0.0,
     0x1.0b158e9bf9444p-563, 0x1.6f249bbf5d78ap-145, 0.0, 0.0, 0.0, 0.0,
     0x1.f7dec4c0fa0b7p-327, 0x1.7c1a69ca9b35bp-248, 0x1.26e69a40372bp-151, 0.0,
     0x1.d4e462b78cb64p-89, 0.0, 0x1.d5b4d09403376p-652, 0x1.0eb02a2095deep-147, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.440881526e346p-121, 0.0, 0.0, 0.0,
     0x1.b37c5953de356p-703, 0.0, 0x1.65ee6f6383e5bp-210, 0x1.65bbdf4da9c5bp-233, 0.0,
     0x1.122272494fcaep-477, 0x1.ccf98fbaed09ap-117
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
            tmp1 = Sleef_finz_exp10d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_exp10d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_exp10d1_u10purecfma bench acc %la\n", global_bench_acc);
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
