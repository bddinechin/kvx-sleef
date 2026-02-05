/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sinhd2_u35avx2128.c --function \
 *     Sleef_finz_sinhd2_u35avx2128 --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8f9edca342621p-454, 0x1.aa11f2e2d7761p-629, 0.0,
     0.0, 0x1.a72631b0f1acap-592, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.89fb1bf557362p-626, 0x1.072c3256566a6p-920, 0.0, 0x1.d17c92fe12581p-28, 0.0,
     0.0, 0x1.273fb96878a4ep-729, 0.0, 0x1.dcef881c659bap-742, 0x1.016fd33c2a8fep-481,
     0.0, 0x1.21780f1c37e54p-991, 0x1.1f609735fbffp-231, 0x1.f9ad55df7f2acp-564,
     0x1.dc87116be6dfep-868, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ced6cdcdd76b4p-653,
     0x1.25369c4853a55p-42, 0x1.2480a0bac9ce2p-637, 0x1.81f78cc4ae9a7p-713, 0.0, 0.0,
     0x1.564a90d04efcfp-708, 0.0, 0x1.16ca656fbe0fcp-925, 0x1.bef1cc6c05f49p-623,
     0x1.045606505ad47p-411, 0x1.95e1823b5490bp-191, 0x1.b155f76b65f49p-443, 0.0, 0.0,
     0x1.307f11bbff56fp-40, 0x1.dcd516c381364p-888, 0.0, 0x1.21369621f3b97p-947, 0.0,
     0.0, 0x1.dcf9349e1e036p-410, 0.0, 0x1.1c04ad5561d06p-691, 0.0, 0.0,
     0x1.0e6435423fef3p-539, 0x1.5277f224c9e4cp-52, 0.0, 0.0, 0.0,
     0x1.2c48eb4aca0eap-83, 0x1.1972c948dd438p-622, 0.0, 0.0, 0.0, 0.0,
     0x1.87a4ef0bb5334p-938, 0.0, 0.0, 0x1.185c38c5464dap-233, 0x1.54be1c8c160a5p-26,
     0.0, 0x1.3c05ff74e6f71p-559, 0x1.44714b98fa999p-451, 0.0, 0x1.6f4f3f1ec1ee9p-156,
     0.0, 0x1.b3a3fe3e2c5e5p-190, 0.0, 0x1.e945ee6ee4535p-726, 0x1.cb8645d980962p-30,
     0x1.57e2f551717ap-337, 0x1.d177b6355d136p-164, 0.0, 0.0, 0x1.0ab23b3a8ccep-703,
     0x1.f6345f0e0f10fp-479, 0x1.f423aa36bfc11p-587, 0x1.a3a886ca3e28ap-338,
     0x1.1d58a349621f2p-456, 0x1.29b3278bde2d4p-170, 0x1.145773e5b3bfdp-267, 0.0,
     0x1.76424b6966ac1p-1003, 0x1.3f232ce6400e2p-107, 0.0, 0.0, 0.0,
     0x1.3280deeefef11p-141, 0x1.329ef2a504bbcp-978, 0.0, 0.0, 0x1.65a1c993c0afap-231,
     0x1.5a45e30db10d9p-740, 0x1.fae1131648c71p-620, 0x1.6a165e2c925f9p-600,
     0x1.8357648ca7547p-987, 0.0, 0.0, 0.0, 0.0, 0x1.bb9efe79d2df7p-997,
     0x1.348d61f700029p-950, 0x1.0b00cd9acc833p-629, 0.0, 0.0, 0x1.3a33acf4e4287p-409,
     0.0, 0.0, 0.0, 0x1.188aa984196f2p-596, 0x1.8523dc8016146p-323, 0.0,
     0x1.be8a34e47413dp-775, 0.0, 0x1.74902841c5078p-999, 0.0, 0.0,
     0x1.00e14941cf656p-548, 0x1.f56d0fe1fc157p-216, 0.0, 0x1.9daca3ac5260dp-871, 0.0,
     0.0, 0x1.9c784d1d6271ap-664, 0x1.f08b8ef92c4e5p-721, 0.0, 0x1.4c05f621f961p-131,
     0x1.3b0c4840d7a07p-811, 0.0, 0x1.78cb827761a8dp-953, 0x1.4623581703903p-942,
     0x1.46a43e7fd661dp-600, 0.0, 0.0, 0x1.eedb34dafe00ap-8, 0.0,
     0x1.ef5bce507619ep-684, 0.0, 0x1.ad4f8b4cd95f9p-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bff4cd8d27672p-866, 0x1.a8daa19d17467p-994, 0x1.e3ae9958386acp-432, 0.0,
     0x1.3f890f6c9b363p-568, 0.0, 0x1.30cfcc24e3dfep-196, 0.0, 0x1.42793dd1d2ba7p-949,
     0.0, 0.0, 0.0, 0x1.412cbf6c90b0cp-711, 0x1.b4e57c356fcccp-957, 0.0,
     0x1.27df1ddd23e12p-974, 0.0, 0.0, 0x1.221ff308cb9b3p-3, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e409404242f1cp-622, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.befac6c8e66e6p-8,
     0x1.a1ac12b5cc46p-445, 0x1.691be17926e17p-904, 0x1.5f6ad32c4bf06p-710, 0.0, 0.0,
     0x1.1f9d10b5fc8f9p-234, 0.0, 0x1.bd9ea624d50fap-483, 0x1.abc28dd5531c4p-122,
     0x1.a20498a103cb2p-405, 0x1.d44c4f3c487ffp-790, 0.0, 0x1.946be1d66b4bcp-684,
     0x1.3ff097e973c33p-208, 0.0, 0.0, 0.0, 0x1.636f1c0b682bcp-338, 0.0,
     0x1.fbc5044229e9dp-952, 0.0, 0x1.c872cbac9984ap-824, 0x1.6f1ce1055751fp-940,
     0x1.fd5ffb64f738bp-36, 0x1.41e22ac307ad5p-907, 0.0, 0x1.643517c6c7516p-581,
     0x1.4fd2e4747bf6ap-732, 0.0, 0.0, 0.0, 0x1.87bb393ced06bp-931,
     0x1.b4898581f90d7p-891, 0x1.e32601b7d5bc2p-620, 0.0, 0x1.af00c58014824p-758, 0.0,
     0.0, 0x1.dbfdd6fa3558p-802, 0x1.55fba4b501655p-289, 0x1.7a057fe01d6b1p-468, 0.0,
     0x1.17f8644f978dp-1004, 0.0, 0x1.473cae1e0fdb6p-802, 0x1.36210298e20a7p-864, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.85db24b06a399p-884,
     0.0, 0x1.6d28ff1a8d369p-320, 0.0, 0x1.9db4b91e3bbfcp-471, 0x1.3711b878a32c8p-508,
     0x1.f42b1e998c6fap-17, 0x1.1d634e9cf1c7ap-889, 0x1.f1d2a1aa7c31fp-178, 0.0, 0.0,
     0x1.7c884609ffa46p-217, 0x1.a8e1303d7b3ecp-511, 0x1.d3ea10955671cp-1014,
     0x1.94c4fe8622d73p-335, 0.0, 0.0, 0x1.60baca7463a9ep-520, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8f5dbf2efdd8ap-129, 0.0, 0x1.0b2fc895e7f42p-406,
     0x1.ecb44382cc1cdp-191, 0x1.f8974c38cf003p-164, 0.0, 0.0, 0.0,
     0x1.22f723a368923p-32, 0x1.a942afe1a3f26p-274, 0x1.9a6c70a9f9182p-559,
     0x1.cfdf2f7daa35p-536, 0.0, 0.0, 0x1.a95b3cb70fc7p-851, 0.0,
     0x1.614254d1d78ddp-374, 0.0, 0.0, 0x1.81ac27d1aff4p-857, 0.0, 0.0,
     0x1.1e90974808124p-156, 0.0, 0.0, 0x1.fae8294c3a41ep-370, 0.0, 0.0,
     0x1.342e814f88f8dp-819, 0x1.a85c3a0e08fc2p-681, 0x1.a8fd42321bf54p-716,
     0x1.b1f782a82171p-546, 0x1.b717e3fb9538ep-888, 0.0, 0.0, 0x1.fbd20a2431ca5p-601,
     0x1.c165c028e5c0cp-702, 0.0, 0.0, 0.0, 0x1.7820c4d36d11ep-485,
     0x1.50c8e43edb084p-377, 0.0, 0x1.094bb166d7f99p-255, 0.0, 0.0, 0.0,
     0x1.26049e037af38p-391, 0x1.1e72790cb7072p-565, 0x1.f1663e52ea6ep-685,
     0x1.7e34ca5ced915p-641, 0.0, 0.0, 0x1.ad635866c338cp-911, 0x1.5735c9a0108f3p-228,
     0.0, 0x1.4a9f711a1a43ap-884, 0.0, 0.0, 0x1.7b59b1a195344p-65, 0.0,
     0x1.0af7aa8a7ef5ap-406, 0.0, 0x1.68430abe8752dp-951, 0x1.98b7a1be718f1p-880, 0.0,
     0.0, 0x1.d25849066b12dp-1012, 0.0, 0.0, 0x1.c47f6be804e07p-784, 0.0,
     0x1.003fae68d2fd7p-331, 0x1.2e7f7434fdc2dp-142, 0.0, 0x1.7327151aad968p-45, 0.0,
     0x1.182bd51612915p-88, 0.0, 0.0, 0x1.53d6213d5b388p-20, 0.0, 0.0,
     0x1.6ddbabeb0dcf7p-423, 0.0, 0.0, 0.0, 0x1.46f1b4608f05bp-585,
     0x1.8c6aa030e6a8fp-45, 0x1.f1bb9944e01efp-304, 0.0, 0.0, 0x1.a621e42457e9p-982,
     0.0, 0.0, 0.0, 0x1.b6a58f3151fc1p-64, 0.0, 0x1.369e5685f135ap-911, 0.0,
     0x1.b5d027cd58b29p-264, 0x1.c96d5d622c687p-424, 0x1.63ca65e51b2bap-969,
     0x1.d47055b4a77bcp-36, 0.0, 0x1.aa92b772b0732p-584, 0.0, 0.0, 0.0,
     0x1.2b2a7aa65381dp-798, 0x1.107db9b4ffa72p-594, 0x1.b028d21b48c25p-164,
     0x1.0f8bdd9475ee5p-841, 0x1.11970999b63efp-673, 0x1.ab85d8ed9de4cp-997,
     0x1.357bac3c45455p-865, 0.0, 0.0, 0x1.83b31eedac3cep-734, 0.0, 0.0,
     0x1.c731a703b135cp-437, 0x1.c5bb9eaf62939p-623, 0x1.ec7afe1f83c8bp-526,
     0x1.a2e4484d968ccp-711, 0x1.8ada65c3cee9p-441, 0x1.f150ef5bfa9fp-475,
     0x1.ce17e3ef62371p-596, 0x1.a906dc0ee9bp-719, 0x1.d74e5a581a1d3p-793, 0.0, 0.0,
     0.0, 0x1.2df1762b7b3a6p-254, 0.0, 0.0, 0x1.eb9a4779964e5p-994, 0.0,
     0x1.ecb48d16d464fp-272, 0x1.697e04f800ebap-201, 0x1.132a890559699p-124, 0.0, 0.0,
     0x1.914e81c6b97dfp-272, 0.0, 0.0, 0x1.ff1fecd77919fp-409, 0x1.ae6c2e66c6d0ap-89,
     0x1.6280a0d2ebcfap-337, 0.0, 0.0, 0x1.318741e9c298ap-812, 0.0, 0.0,
     0x1.686ee144e7f3ep-481, 0.0, 0x1.ccfead8a7c616p-1002, 0.0,
     0x1.e89c832ef631dp-1000, 0.0, 0x1.9d393dbb876p-830, 0x1.4001de133f5f3p-437, 0.0,
     0.0, 0x1.1f81277812d7dp-109, 0x1.d426de3d0fc98p-976, 0x1.d0a55af6e49f7p-892, 0.0,
     0x1.7d31f7254a7a2p-687, 0x1.3008b3ade0872p-819, 0.0, 0x1.e9b9d674fd1e5p-87,
     0x1.f563b75891d1dp-614, 0.0, 0x1.f2fccf9efc97bp-53, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e9c26e5afd99ap-66, 0x1.41f6481aa0961p-745, 0.0, 0.0, 0.0,
     0x1.418ada52d5f74p-275, 0.0, 0x1.1971ad877a848p-952, 0x1.4ae42fa52f41ap-24, 0.0,
     0x1.d21c4f9f8cad6p-49, 0.0, 0.0, 0x1.426ce17114623p-989, 0x1.078db2b509264p-541,
     0x1.a2860940e7a21p-369, 0.0, 0.0, 0x1.1d45620fb2063p-586, 0x1.6575a7d6e18c1p-241,
     0x1.de551a16d1ec6p-442, 0x1.97e245770325dp-48, 0.0, 0.0, 0.0,
     0x1.05997f383480cp-951, 0.0, 0.0, 0x1.8f57cd13b7ddcp-950, 0.0,
     0x1.d831df4488b18p-213, 0.0, 0x1.35983ff8c67a4p-1000, 0.0,
     0x1.49b40355a4975p-811, 0x1.d5a47eddf0e78p-495, 0.0, 0.0, 0x1.6f31adc2fd345p-963,
     0x1.b88286fe325dbp-486, 0x1.ecba59068c73dp-632, 0x1.9f8ee8a989a89p-617, 0.0,
     0x1.d8b600e176c31p-534, 0.0, 0x1.dcd6ea86fcebep-48, 0x1.68b4fc261e2ebp-465,
     0x1.fe3bcd3f214a4p-243, 0x1.f058f3cdd644p-754, 0x1.27677db2e59b8p-889, 0.0, 0.0,
     0x1.3c70a7404823cp-960, 0.0, 0x1.01bafab0bfe75p-997, 0.0, 0.0,
     0x1.b78d42f4d4c35p-756, 0.0, 0x1.e7f222539c4fbp-852, 0.0, 0.0, 0.0, 0.0,
     0x1.15f5d19fe69c7p-71, 0x1.f2ea22479a367p-378, 0x1.601ddf22f1a27p-756,
     0x1.81ad3a61dd5a7p-960, 0x1.c5895f1b8b967p-690, 0x1.ae0c62fc71596p-924, 0.0, 0.0,
     0x1.89766b6d2c0a1p-237, 0x1.f8978d1c81d1bp-280, 0.0, 0.0, 0x1.ef597997962bdp-424,
     0x1.c16bc53ccbac6p-977, 0x1.ac3713552298dp-725, 0.0, 0x1.982652e858562p-30,
     0x1.90cf56b0c3885p-441, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e5b632d43a502p-177,
     0.0, 0.0, 0x1.461d1213fd5bap-209, 0x1.dd8eac02bf3c3p-160, 0.0, 0.0,
     0x1.3f94eea60bfb6p-357, 0.0, 0.0, 0.0, 0x1.6294e6b146195p-911,
     0x1.cd2dfa5f8eddap-902, 0x1.d3bc624fa52d2p-813, 0.0, 0.0, 0.0,
     0x1.b3ab14e5fcc68p-872, 0.0, 0x1.5885e35e6ddb8p-264, 0.0, 0x1.823c575c85cffp-206,
     0.0, 0.0, 0x1.7a417f8f68f61p-421, 0x1.41fa82c7f6c57p-639, 0.0, 0.0, 0.0,
     0x1.6974896b87ad8p-814, 0x1.e4cff28f660ap-821, 0.0, 0x1.9ffa85b816244p-465, 0.0,
     0x1.67a121d8817p-188, 0.0, 0.0, 0x1.c61d6305bb9f7p-334, 0.0,
     0x1.efc7a3a2971ccp-227, 0x1.54d026ff3a7abp-954, 0.0, 0x1.27317c208a781p-897, 0.0,
     0.0, 0.0, 0.0, 0x1.03197803b656dp-951, 0x1.34573c74fdf3dp-57, 0.0, 0.0,
     0x1.2a91b64de8e06p-215, 0x1.4a7c2ec06fe06p-386, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.515a768d2f312p-282, 0x1.9a623ed3e3b8fp-117, 0x1.ce46efbc61c56p-594, 0.0,
     0x1.e10279c98b8ebp-745, 0x1.da83bf2f250b4p-731, 0x1.da40d82f380f1p-179,
     0x1.97dd7824ff543p-768, 0x1.a2947667cfec1p-543, 0x1.4759cb9a6f3dfp-156,
     0x1.578ea1a86c317p-406, 0.0, 0x1.b370aa9dcf825p-2, 0.0, 0x1.ff44947e5f4b8p-177,
     0.0, 0x1.1190dc7574491p-315, 0x1.197b400255ac9p-33, 0x1.1934232766f8dp-694,
     0x1.a30793bd8c207p-34, 0.0, 0.0, 0x1.33e807e5cd22p-701, 0.0,
     0x1.a0d514ca6dba7p-929, 0.0, 0x1.1a9ccb13724e7p-892, 0x1.28060c1cbf764p-645,
     0x1.217afdd8871eep-247, 0x1.87970304ce3c5p-394, 0.0, 0.0, 0x1.1edade10c9bc5p-668,
     0x1.7b6244d8ff5e7p-750, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.46468dc8fc02fp-401,
     0.0, 0.0, 0x1.bac4b1cd438bp-403, 0.0, 0x1.713b1ee98873bp-867, 0.0, 0.0, 0.0,
     0x1.d3901a9ab81bcp-302, 0.0, 0.0, 0.0, 0x1.b59ab63668becp-503,
     0x1.7e8f90723b21dp-526, 0.0, 0x1.bf32a451e1152p-1000, 0x1.3a1c4f8ee23c3p-446,
     0x1.ed032e4a83a5bp-22, 0.0, 0.0, 0.0, 0x1.e6f5dedd4aaa2p-550,
     0x1.a105dd840346cp-776, 0x1.ec207ad903c8fp-294, 0.0, 0.0, 0x1.2888c16d19405p-413,
     0.0, 0.0, 0x1.6686dd2ff4376p-286, 0x1.da76bce8a4f4cp-230, 0.0, 0.0,
     0x1.66c6e056df69fp-61, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5d9e681457a88p-911,
     0.0, 0.0, 0x1.e5f0ec0b8dcfdp-372, 0.0, 0.0, 0.0, 0x1.7c9f2e545561p-797,
     0x1.f43c248d8c031p-1016, 0.0, 0x1.16a0f9a15fa0fp-317, 0x1.2a67a28f09936p-211,
     0x1.70868dfd39ad7p-84, 0x1.25ec1623ca66bp-244, 0x1.84ee6c7a6f2bcp-541,
     0x1.ed402615b87a8p-928, 0x1.db6a642fe3d8fp-996, 0.0, 0x1.4ee1b0144f5aep-821, 0.0,
     0x1.8d5aa40bf42f9p-420, 0x1.a12020cfbf948p-576, 0.0, 0.0, 0.0, 0.0,
     0x1.d1ca12136ffd4p-290, 0x1.c9852de58b117p-564, 0.0, 0x1.ea50e11e9fe11p-84,
     0x1.5263a68f6ed7ep-1021, 0x1.d4b118332862ap-222, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.bbb9c2e6ff46dp-59, 0x1.5205a1923c5fdp-598, 0x1.4458311463bcbp-124,
     0x1.8531041a8d098p-810, 0.0, 0x1.0090288cd10d1p-899, 0.0, 0.0, 0.0,
     0x1.a30c7862f2ac1p-67, 0x1.4a812ab788ae3p-564, 0.0, 0.0, 0x1.328d78804f37ap-94,
     0.0, 0.0, 0.0, 0.0, 0x1.7176c844cdb07p-557, 0x1.17524eeecf938p-911, 0.0,
     0x1.e8768f78b5b01p-716, 0.0, 0.0, 0x1.6baf0beb8c86p-492, 0x1.4dc2344b4d0a4p-70,
     0.0, 0x1.ad1d1de7c46f5p-340, 0.0, 0.0, 0x1.bb9e17d1612dfp-815,
     0x1.c3fa5a00ebba5p-346, 0.0, 0x1.b165626c4412ep-502, 0.0, 0.0,
     0x1.b5c39c89f7bc5p-104, 0.0, 0x1.242f2861525dap-402, 0x1.3bcd9533b111dp-19, 0.0,
     0x1.a4c5887548152p-895, 0.0, 0x1.8a90a56bbd327p-539, 0.0, 0.0,
     0x1.2b056885bed4dp-97, 0.0, 0x1.d7dbb8b9d060dp-80, 0.0, 0x1.09be2c598040dp-319,
     0x1.790374a42f937p-360, 0.0, 0x1.22db29297d853p-619, 0.0, 0.0,
     0x1.c1a1f6eb69575p-732, 0.0, 0x1.51549d04284d5p-157, 0x1.40422e0e5d4p-11,
     0x1.6ee963913b03bp-14, 0x1.f9880e1bce806p-1019, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.854f249ca709ap-915, 0x1.ad7066ed2dbc9p-938, 0x1.61caae10a44fbp-516, 0.0, 0.0,
     0.0, 0x1.d0da43e70a0dbp-845, 0.0, 0x1.e41dd1681e23bp-608, 0.0, 0.0, 0.0, 0.0,
     0x1.b2fbdd22a5f41p-411, 0.0, 0.0, 0x1.26dc183c8d161p-936, 0x1.69150788cf02p-643,
     0.0, 0.0, 0x1.490fd03b9645ep-743, 0.0, 0.0, 0x1.f67555547524dp-219,
     0x1.a0e2e130bd2d1p-910, 0.0, 0.0, 0.0, 0x1.031d1f3a863fp-619, 0.0, 0.0, 0.0,
     0x1.5d4a64df8939fp-626, 0.0, 0x1.de3a0ccd59895p-11, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c0584778fe78cp-133, 0x1.3d85944bb6a29p-988, 0x1.e9cd7275a0acfp-805,
     0x1.bc598c7ca979cp-154, 0.0, 0x1.06018ed1bcaaep-834, 0x1.273f15f7dfb0ep-167,
     0x1.72e941ed58b36p-62, 0x1.f7dcbe59d2c78p-948, 0x1.637ded6395885p-140, 0.0, 0.0,
     0x1.a12503e6ed0eap-498, 0x1.c02b6a2cfc121p-948, 0.0, 0x1.c22d2034a9ae1p-541, 0.0,
     0x1.e1b8dd3e325ecp-748, 0x1.ce1d381fd4a44p-802, 0x1.d09aaff86d508p-994,
     0x1.a56de2e91db2dp-883, 0.0, 0.0, 0x1.6b7eab97660e5p-590, 0.0, 0.0,
     0x1.3c9b467cfaec4p-658, 0x1.50997b12baad6p-203, 0x1.e0ed41a909da1p-697, 0.0,
     0x1.71d2bb2516e67p-522, 0.0, 0.0, 0x1.74639f149e554p-1017, 0.0,
     0x1.d8ca77e8b2bf8p-193, 0.0, 0x1.e1d8c72fcc597p-914, 0x1.6086c7e2c6f15p-612,
     0x1.f59536fb4a616p-1001, 0.0, 0x1.20e17fc9b6557p-707, 0x1.c3f70fd695629p-428,
     0.0, 0.0, 0.0, 0x1.0fc2d7ff2da05p-534, 0x1.1bdd026e0fd7p-701,
     0x1.c8c70c6087a8cp-637, 0x1.b4a03716e5081p-565, 0.0, 0x1.6c240dfce29eap-715,
     0x1.2ff56d158346ap-804, 0x1.0603565ce3ce9p-557, 0x1.599e8301b0cd7p-807, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.a2177385e6f4ep-215, 0x1.3e4714a60a7b8p-91, 0.0,
     0x1.cdb314b1cf4cap-6, 0x1.59b5f147beedap-724, 0x1.590bfb9b81641p-414, 0.0,
     0x1.2cd331f414392p-405, 0x1.25104c5dbcb9cp-745, 0x1.f0fbaf4b00067p-417,
     0x1.3cd5dfdaf2b7cp-446, 0x1.5b3884fd1fcdbp-441, 0.0, 0.0, 0x1.9a1d972c2baefp-432,
     0x1.a9a9175635534p-675, 0x1.4e36e55a7fbebp-169, 0x1.3fe248e7f85aap-876, 0.0,
     0x1.eee096499a108p-781, 0x1.ff7dcfcc56301p-287, 0.0, 0.0, 0x1.d69de2fecfb7fp-740,
     0x1.e93abd0ebdea8p-283, 0x1.81042d648a994p-247, 0.0, 0.0, 0x1.05f6931da2dc3p-850,
     0x1.0fee7a107e8aap-600, 0x1.c581c5f9c33f2p-147, 0.0, 0.0, 0x1.407a9b7bd8fa3p-519,
     0.0, 0.0, 0.0, 0x1.a89210e834b46p-194, 0.0, 0.0, 0x1.5cc6994241b05p-752,
     0x1.9c529be90118p-633, 0.0, 0x1.8b3af61378a56p-432, 0x1.003b7e33a19d6p-728, 0.0,
     0.0, 0x1.bea4648560379p-968, 0.0, 0.0, 0x1.6111c06cd3e06p-329,
     0x1.82f0f17915301p-860, 0.0, 0.0, 0x1.ddc52e21cd31dp-60, 0x1.482badbcc3d46p-545,
     0x1.518c0320bca06p-469, 0.0, 0x1.f4088ea187333p-295, 0x1.ac9d9d3b35c08p-796,
     0x1.e369f1aa2d636p-470, 0.0, 0x1.c9c7df5c20afep-889, 0x1.e1d7411a470fdp-885, 0.0,
     0.0, 0x1.d32878a41e913p-97, 0x1.95da5b1882ce5p-717, 0x1.5500e54348eep-16,
     0x1.e59adb6fbf17fp-440, 0x1.0ab5a7111880ap-731, 0.0, 0.0, 0x1.d3632fbd43a83p-51,
     0x1.d63cdce4f2f91p-728, 0.0, 0.0, 0.0, 0x1.69935fe065532p-706,
     0x1.c7c408367525cp-400, 0.0, 0x1.8fb094674bb06p-937, 0x1.c9617aed4c278p-507,
     0x1.7218a540fc6eep-1017, 0.0, 0x1.0cea85857d13ap-432, 0x1.02babe5ebb7b2p-901,
     0x1.8b187cc09ad76p-401, 0x1.15884778a1fc8p-317, 0x1.f3667255cdb7p-791,
     0x1.78f1c0da09612p-571, 0x1.adcd91260b88cp-144, 0.0, 0.0, 0x1.fef0bd0c177b3p-43,
     0x1.700e13e4b0d15p-954, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ca30c1d2a86d9p-537, 0x1.57b52975ed878p-936, 0x1.1b041d58a9fcp-577, 0.0, 0.0,
     0x1.64c3d938f6666p-667, 0x1.1ffa85a0a4dd1p-38, 0x1.6ed89e2c35ed5p-521
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
            tmp1 = Sleef_finz_sinhd2_u35avx2128(tmp0);
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
    printf("Sleef_finz_sinhd2_u35avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sinhd2_u35avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
