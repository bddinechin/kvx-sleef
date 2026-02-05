/**
 * generated using metalibm 1.1
 * sha1 git: b'"53abe65c8bff16eccdb6bb9b6702837bebb13101"'(clean)
 *
 * INFO: git status was clean when file was generated.
 *
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cosd4_u35kvx.c --function Sleef_finz_cosd4_u35kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 4 --function-input-vector-size 4 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0x1.d5c2708c1007bp-936, 0x1.7a7017f88a5fcp-632, 0.0, 0.0,
     0x1.113660a2b4a3p-448, 0.0, 0.0, 0x1.2160f231f1b4p-186, 0x1.1dd483957fd71p-41,
     0x1.22fa218929029p-882, 0x1.04031db6fd046p-225, 0x1.f68ac3bd696bp-34,
     0x1.8db43f0a0d805p-452, 0.0, 0x1.9870018f71fd5p-786, 0.0, 0.0, 0.0, 0.0,
     0x1.c6555597abd3bp-480, 0x1.668f07c6bea21p-641, 0x1.2e9ec2c43a624p-362, 0.0,
     0x1.5c5ac1d299e8cp-897, 0.0, 0.0, 0.0, 0x1.bf6d2b4087096p-345,
     0x1.ba59787fb0563p-967, 0x1.85124d7a51363p-725, 0x1.f9d4fa6f288b2p-788,
     0x1.01dc828a304d8p-242, 0.0, 0.0, 0x1.d9e0fe524a61fp-523, 0x1.c75625a29c29dp-919,
     0.0, 0x1.f94c2e395eb6ep-52, 0.0, 0x1.e6666e8f17704p-239, 0x1.010e1588a5014p-497,
     0.0, 0x1.1a394b82a47f8p-59, 0x1.c5bffc4598eafp-889, 0.0, 0.0,
     0x1.0478a3e08e6cep-562, 0x1.23d50e89aa26ap-1022, 0.0, 0x1.98261aca8df1p-14, 0.0,
     0.0, 0x1.44b261b125c0dp-206, 0.0, 0.0, 0x1.b4d6e08b3a95ep-331,
     0x1.6c7501abd222ep-396, 0.0, 0x1.68b1ac4a5ffd1p-383, 0x1.89b9706553f0ep-27, 0.0,
     0.0, 0x1.a2b837a929335p-625, 0.0, 0x1.adcac4e203136p-505, 0x1.8970acd1fc471p-951,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b70ad76dc5208p-333, 0.0,
     0x1.3ea4071c3b0d8p-456, 0x1.356e438ac9645p-904, 0x1.8710146fb9417p-285, 0.0, 0.0,
     0x1.baf8d2278e8c8p-997, 0x1.cd23250575effp-105, 0x1.93dc18df08d6fp-407,
     0x1.c4a77294b5d34p-95, 0.0, 0x1.485454e138795p-165, 0.0, 0x1.adadac560af77p-194,
     0.0, 0.0, 0x1.23fa4e5c9d944p-217, 0x1.a93373a4806d3p-72, 0.0,
     0x1.8d1c081845b4dp-43, 0x1.6eaa51444ec92p-603, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6d504a1eb095ap-200, 0x1.2a9ec650d8425p-559, 0x1.6615152cd448p-490,
     0x1.0ff154ca587d1p-719, 0x1.e1df5b6ceb994p-15, 0.0, 0.0, 0.0,
     0x1.b92ad0ffe119dp-408, 0.0, 0.0, 0x1.9e67020a3021fp-916, 0x1.cb22ed3e0c73bp-778,
     0.0, 0x1.1135ee8d062dcp-942, 0x1.bd7c7c996f887p-931, 0.0, 0x1.1d3ec7a0add65p-733,
     0.0, 0x1.990e771acf1c6p-239, 0.0, 0.0, 0.0, 0x1.04114d62b00bfp-846, 0.0,
     0x1.38564538b21bep-252, 0.0, 0.0, 0x1.a55ffee32cad7p-75, 0x1.663b7a8b6a46fp-219,
     0.0, 0x1.3ac4c775fffcdp-134, 0x1.6160ea6070a31p-918, 0.0, 0x1.6793c9acd451dp-18,
     0x1.845081722f697p-43, 0x1.3be4dadb0d854p-154, 0.0, 0.0, 0x1.83c0fa4061737p-800,
     0.0, 0x1.f190c7f878f74p-686, 0.0, 0.0, 0.0, 0.0, 0x1.93f4c0976acc7p-209, 0.0,
     0.0, 0.0, 0.0, 0x1.ebad40a0fd459p-186, 0x1.4c397702d4f5dp-392,
     0x1.2b62a31a4105dp-384, 0.0, 0x1.27d6809b204dcp-921, 0x1.d2557c2cfd0acp-433,
     0x1.6704ab14c5698p-244, 0.0, 0x1.8374c887a130dp-274, 0x1.6095e971d1521p-402, 0.0,
     0x1.ca27f780f10a2p-357, 0x1.05826d48a15ccp-846, 0.0, 0x1.56c80313bfbb3p-372,
     0x1.31b00074cf312p-478, 0.0, 0.0, 0x1.3d4fd6e76e764p-533, 0x1.d34514e3b7bd1p-675,
     0x1.0777a13229d1p-617, 0x1.ef4fec7a3c66bp-761, 0.0, 0x1.cf55fb4da47ecp-405, 0.0,
     0.0, 0.0, 0x1.969d48e269dd4p-828, 0x1.95fb613596afep-760, 0.0,
     0x1.f6b7b6c386481p-427, 0x1.b7b5da91d7ab6p-368, 0x1.bc253d308d77ap-555, 0.0,
     0x1.2139cdbcd7a0ep-185, 0.0, 0x1.ae349a11a94dcp-284, 0.0, 0x1.2c4e793d5c3e1p-467,
     0x1.b57948f88fac3p-2, 0.0, 0x1.13e47c0870dfp-103, 0.0, 0.0,
     0x1.680c86a5a38e6p-433, 0.0, 0.0, 0x1.f5db4d5fc5a34p-916, 0x1.dc665abf60b21p-288,
     0.0, 0.0, 0.0, 0x1.304ac9387a61ep-485, 0x1.a92ea2512c498p-462,
     0x1.313e87f0441e7p-649, 0.0, 0.0, 0x1.59ec985ef20b3p-806, 0x1.b6febdcae2f1ep-544,
     0.0, 0x1.ecc85ed9d35f8p-516, 0x1.cdf033e0fe008p-683, 0x1.e8daf6a486ac2p-1020,
     0.0, 0x1.fc317ac8a4d8bp-284, 0.0, 0.0, 0.0, 0.0, 0x1.432bb6a8b931cp-843,
     0x1.9c45616983da3p-133, 0x1.f74bff08bae53p-728, 0.0, 0x1.3319714559662p-296, 0.0,
     0x1.b857a9bd42252p-836, 0.0, 0.0, 0.0, 0x1.a77df463f726dp-79,
     0x1.eb46ad2703b91p-61, 0x1.9e19509debcdp-306, 0x1.8749da8bf7f2cp-364, 0.0,
     0x1.fb9d41ccf340ap-218, 0x1.789ebea3fbdb2p-578, 0x1.f6525d065d3ecp-339, 0.0,
     0x1.3987d385b8989p-610, 0x1.9336aefa7eba7p-638, 0.0, 0.0, 0.0,
     0x1.60d6b049d1cc7p-289, 0.0, 0x1.db0c282671773p-418, 0x1.c2cbb7e920e22p-280, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c0048d225fbc8p-891,
     0x1.57d7bfa570592p-621, 0.0, 0x1.aaf92daa0f7e5p-105, 0.0, 0x1.b6e46dab07009p-702,
     0.0, 0.0, 0.0, 0x1.a4b6828c1155fp-886, 0x1.a8e34b44d9dfbp-49,
     0x1.d91809c0320cdp-882, 0x1.d7e6b450bac77p-400, 0x1.5c6c3e1eb8a6cp-791,
     0x1.3ff44b7da550ep-746, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c2966ea8a52fbp-433,
     0x1.deaa16026ab4ap-356, 0x1.004ec896b0bf6p-882, 0x1.baba1dbdb1fa1p-236,
     0x1.28d0d65e413b3p-11, 0x1.4683dfc9b2592p-752, 0.0, 0x1.95fd3e2c976f8p-951,
     0x1.e9780039e966cp-348, 0x1.8e6067c8ff188p-860, 0.0, 0x1.aef00111f58a5p-893,
     0x1.47b71d1652e9ap-609, 0.0, 0x1.d4c2d7be08623p-769, 0.0,
     0x1.693c48d2dc896p-1017, 0.0, 0x1.4fc561b1f3987p-211, 0.0, 0.0,
     0x1.894f4b46f098ap-38, 0x1.8a0fdafa09badp-665, 0x1.c01a3c63d59a9p-358,
     0x1.e99927cb6891p-465, 0.0, 0.0, 0x1.c3903f88ab784p-621, 0.0,
     0x1.cc8a88612d66ep-524, 0.0, 0.0, 0x1.7326ab1605b4dp-396, 0.0,
     0x1.9f23d69fba581p-444, 0x1.464d36aadd523p-290, 0x1.4560363677d04p-27,
     0x1.5400eb1edbf1fp-409, 0.0, 0x1.c8f3d072db403p-232, 0x1.ef54f3644396bp-828, 0.0,
     0x1.94b91910d9b8fp-477, 0x1.80617f4ac028bp-153, 0x1.e171f9fc092b2p-541, 0.0,
     0x1.f8393e50aa57fp-876, 0x1.0cfb08ff56981p-622, 0x1.d84868c04a12dp-269,
     0x1.0ac5c02669677p-754, 0x1.a7f59783eb017p-354, 0.0, 0x1.b0643411d5352p-343,
     0x1.be37feb9efe97p-640, 0.0, 0x1.d82fe3325241bp-314, 0x1.32e34db309e1p-704,
     0x1.b4129c2a29d68p-770, 0x1.a2342fe119574p-604, 0x1.e6f3051c24fe9p-716,
     0x1.2200bce2e648fp-412, 0x1.02d46978c02f4p-288, 0x1.1abc2bb031ff2p-629,
     0x1.0f98cf596622fp-180, 0x1.f62a1a8cce1aap-482, 0.0, 0.0, 0x1.9099bd39cfa33p-48,
     0x1.06fde03e9fe7cp-91, 0x1.8404f50c08ac3p-555, 0x1.f5c9bd96a7a26p-715,
     0x1.77b202361a248p-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.78f9152f1ff16p-956,
     0x1.ee38f9c39b163p-779, 0.0, 0x1.6eb5d1a036d89p-383, 0x1.ae19029d50aa8p-21,
     0x1.d623bb1549307p-219, 0x1.2d0f5b78b31c5p-559, 0.0, 0x1.de0a6b5f442fp-182,
     0x1.a3656bf6e89fap-114, 0x1.a34ce2fb0f874p-336, 0x1.1793c72787ce8p-238,
     0x1.c18372e5dccbdp-384, 0x1.8483418625106p-813, 0.0, 0x1.2ee179077fadap-201, 0.0,
     0x1.5a85da7a653dp-641, 0x1.9878e1fd2265fp-734, 0x1.d58e2fe008a0dp-767, 0.0,
     0x1.975ce1375043dp-723, 0.0, 0x1.7ef9158d5fdd5p-946, 0x1.bd209801caa2cp-741,
     0x1.75cd7fa28e4cp-481, 0x1.8e2ffe8613f06p-328, 0.0, 0x1.57c1f0bf4e543p-728, 0.0,
     0.0, 0.0, 0x1.6046bc668b1dfp-1002, 0.0, 0x1.009cf963a9152p-115,
     0x1.1cfa275460e11p-249, 0.0, 0x1.21391d5940f58p-697, 0.0, 0.0,
     0x1.44337a9284998p-996, 0.0, 0.0, 0.0, 0x1.68e1b2e54bf51p-99,
     0x1.17bba05ebf26ap-216, 0.0, 0.0, 0x1.811a97b2e4142p-495, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.af2b9d8854f9bp-787, 0x1.586bbc2b85795p-202, 0.0, 0.0, 0.0,
     0x1.6e95f7625aa5ep-214, 0x1.884ebf087cd8fp-867, 0.0, 0.0, 0x1.aee0c3afc49a3p-115,
     0.0, 0.0, 0.0, 0x1.3b4b3a20446f5p-998, 0x1.9116ac220a578p-936,
     0x1.89af4a1a28a0dp-215, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5c6d89e97d4f4p-67, 0.0,
     0.0, 0x1.98bc81a93773cp-951, 0.0, 0.0, 0.0, 0x1.e980abae8b758p-679,
     0x1.aa57341cd343fp-449, 0.0, 0x1.2606e160b5917p-358, 0x1.00dc5d24c0693p-655, 0.0,
     0.0, 0x1.ce978b35c42f5p-441, 0.0, 0.0, 0.0, 0x1.438fd0d5d03c1p-117, 0.0,
     0x1.81badfcf3471fp-554, 0.0, 0.0, 0x1.9e7d4bcfbe712p-887, 0.0,
     0x1.7f869cfe3d253p-119, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.88a9d88a82805p-974, 0.0, 0.0, 0x1.4bba70733dc6p-650, 0.0, 0.0,
     0x1.9ed312f8bd216p-87, 0x1.6aef6c21d9cecp-153, 0x1.2527ca0108309p-465, 0.0,
     0x1.f7ea5b88a7eedp-221, 0.0, 0x1.c7018cec5d6c3p-581, 0.0, 0x1.80bc6c5f65eb8p-735,
     0.0, 0x1.6dbee18d8a1b4p-722, 0.0, 0.0, 0.0, 0x1.b76581eb8615ap-393, 0.0,
     0x1.cdbc7885f41b2p-853, 0x1.76f00e652e84dp-742, 0.0, 0.0, 0.0,
     0x1.09809ffc21ab3p-306, 0.0, 0x1.61cef3b81882bp-75, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.555d02a3ca31ep-573, 0x1.e21d73f433a7bp-1018, 0x1.b948c38b7e3bp-465, 0.0,
     0x1.3f3b8b0138cefp-276, 0x1.bca613a159856p-791, 0.0, 0.0, 0x1.b65fa8c386177p-3,
     0x1.9ee8e4d9fd44bp-244, 0x1.33316c71cb40ap-815, 0.0, 0x1.1df95cf49f984p-555,
     0x1.947828c445497p-185, 0x1.dd1858c03e06p-398, 0x1.be637b5296254p-155,
     0x1.e30a93f594c2ep-64, 0.0, 0x1.619aca4d9a814p-728, 0x1.5705a14ec07bap-434, 0.0,
     0.0, 0x1.83d393fe75fc9p-839, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b53516a2e475p-1017,
     0x1.b7e86c3a12925p-742, 0.0, 0.0, 0x1.426ed99a9fe9p-814, 0x1.c9336828885bep-921,
     0.0, 0x1.6886dea550954p-309, 0x1.1b705e553b762p-247, 0x1.1a44cde952db2p-571,
     0x1.431adedd941afp-170, 0.0, 0.0, 0.0, 0x1.273790a1ef485p-65, 0.0, 0.0,
     0x1.326d86e29cea8p-719, 0.0, 0x1.c7c93f187f7dbp-424, 0x1.67fa75170b205p-835, 0.0,
     0.0, 0x1.19911b7725b85p-606, 0x1.e64c708745632p-203, 0.0, 0x1.4c494396307c4p-919,
     0.0, 0x1.34c654831223cp-397, 0x1.4eeee4edb5703p-449, 0x1.5ea6cee628fd3p-193,
     0x1.b5f763daf7596p-397, 0.0, 0x1.cd8ebb8ac5925p-890, 0x1.995121b1e0e56p-563, 0.0,
     0x1.bedcb2894703dp-489, 0x1.a099da142aa3dp-517, 0x1.6524e846f650ap-46,
     0x1.98d1c8140579p-431, 0x1.e98a4bba4f8d7p-570, 0x1.411079ae2ef4dp-110,
     0x1.264bb5f781447p-680, 0.0, 0.0, 0.0, 0x1.19d89c8fb8f84p-964,
     0x1.15490af8aaadcp-255, 0x1.30478b04aae52p-593, 0x1.d0731e1cf2bf4p-658,
     0x1.a8484eac0d585p-548, 0x1.7280025631f55p-94, 0.0, 0.0, 0.0,
     0x1.ce993a09ce0a6p-330, 0x1.396f73c74eacap-415, 0x1.37168012fdc74p-307, 0.0, 0.0,
     0.0, 0.0, 0x1.00ed88675fb75p-75, 0x1.5e15283f02c08p-253, 0.0, 0.0,
     0x1.09a145ce126a5p-398, 0x1.3de61ef09eadfp-628, 0.0, 0.0, 0x1.7675905277d43p-104,
     0x1.a8a213a2a7f5cp-340, 0.0, 0x1.aed5314055ac1p-855, 0x1.fc876e7371a18p-817, 0.0,
     0x1.a2f2ab07fc69ep-1022, 0.0, 0.0, 0x1.a462ac1dbf5dfp-844,
     0x1.31039dcf4d662p-766, 0x1.4e859873cb367p-506, 0.0, 0.0, 0x1.2758542f62d7ap-502,
     0.0, 0.0, 0x1.72bf3746c108fp-100, 0.0, 0x1.9527f8693d97ap-103, 0.0,
     0x1.9cfe56fba8007p-679, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.af88077ffc6edp-71, 0.0,
     0x1.4ceca3f6ce9ap-882, 0x1.b133157e4e2dep-432, 0x1.15896b713cfebp-552,
     0x1.1f5c17c6d40e1p-145, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7ce2bd92338dp-609,
     0.0, 0x1.9b5d31a1e3259p-168, 0x1.cd20288f111b1p-185, 0x1.077fe532136acp-858,
     0x1.74daabe4e2857p-121, 0.0, 0x1.e45d082d270eap-696, 0x1.d31e8a45206ffp-246,
     0x1.c34190bcdfe0dp-299, 0x1.2be482b829042p-815, 0.0, 0x1.939f4d6654913p-676, 0.0,
     0x1.1be12de1d14c4p-719, 0.0, 0x1.7fb6bb22d3138p-124, 0x1.52a602d11064dp-502,
     0x1.622a74be18b27p-370, 0x1.15051a68313cap-997, 0.0, 0.0, 0.0,
     0x1.4b0959e7b1132p-565, 0.0, 0.0, 0x1.ec6040c03fe6fp-995, 0x1.ff2f7b175c56dp-694,
     0x1.c12d011a0a2aep-972, 0.0, 0.0, 0x1.61adcb31a8cf1p-921, 0.0,
     0x1.29d75a6d461f6p-7, 0x1.505122b717c17p-127, 0x1.6bfeb82acc145p-408, 0.0, 0.0,
     0.0, 0x1.14cfb87fcf801p-192, 0.0, 0x1.a19fe2bc2c3f7p-650, 0.0,
     0x1.835f482cae6e2p-304, 0x1.1e9fa0fec303p-671, 0.0, 0x1.81c88ac64c47ap-478,
     0x1.688fc55d7ef37p-514, 0x1.da484e68b9268p-1005, 0x1.f7d8b341f8574p-115,
     0x1.fedf6e401d5eep-564, 0x1.d11cf6c8916e1p-58, 0x1.8db653a3fd2a2p-1018, 0.0, 0.0,
     0x1.c7bdd78d01d4fp-620, 0x1.5fc170cf2bb62p-96, 0.0, 0.0, 0x1.cd3f0144c0023p-177,
     0.0, 0x1.a0fdc8e7b5926p-640, 0.0, 0x1.11513aedf052ep-741, 0.0, 0.0, 0.0, 0.0,
     0x1.60c9ff67e47d4p-538, 0.0, 0x1.a71786a13320cp-567, 0.0, 0.0, 0.0,
     0x1.53ca90d085b54p-821, 0.0, 0x1.45240a31de53dp-37, 0.0, 0.0, 0.0,
     0x1.1154dd6c8b1f6p-996, 0.0, 0.0, 0.0, 0.0, 0x1.330b4667f053fp-435,
     0x1.07119b6366b2ap-145, 0.0, 0.0, 0.0, 0.0, 0x1.a935d75813787p-381,
     0x1.422a6461e12fp-745, 0.0, 0.0, 0x1.cb2656bfcbd4ap-702, 0x1.64d20db4b935fp-745,
     0x1.2a39f35bddf92p-835, 0x1.f6446fe6065fp-80, 0.0, 0.0, 0x1.b8cd77760eafap-440,
     0x1.7a9bb0b07eb09p-675, 0.0, 0.0, 0x1.b54ff273c5b82p-357, 0.0, 0.0,
     0x1.d04c3274d90a9p-302, 0x1.9ae5e383f328ap-173, 0x1.93f2c766cb8afp-858,
     0x1.6eb9fdd427eb8p-170, 0x1.e32937562ce77p-739, 0x1.ea5c7b33b5f39p-77, 0.0,
     0x1.fd116df07cb27p-775, 0.0, 0x1.83dddcb38299dp-283, 0x1.20ee477e6e5f4p-339,
     0x1.97a249a7340b2p-340, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7c78851a2b662p-276,
     0x1.46059840506f4p-916, 0x1.eb65f6c920d78p-431, 0.0, 0.0, 0x1.b4f8b36ea0559p-483,
     0x1.b7fec473589e2p-536, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7625a0e8584a9p-769,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f8d950276c1bfp-336, 0x1.c4e3feb21dddp-377,
     0x1.9350d7dcfc62ap-31, 0.0, 0.0, 0.0, 0x1.c68e9913dcd9ap-33,
     0x1.f70c494f4f46p-46, 0x1.3b4a337983bbap-820, 0.0, 0x1.f9851fb46e351p-287,
     0x1.5caf73e159dd6p-497, 0.0, 0.0, 0x1.a8b9a90f42606p-720, 0.0, 0.0,
     0x1.0b4f944967befp-194, 0x1.88543c333f99p-518, 0x1.5d9e4e46dbe87p-478,
     0x1.3d61be3174203p-61, 0x1.6eb42dcf5136dp-181, 0x1.ccf7f343e8ed4p-989, 0.0, 0.0,
     0x1.20ef17ab2e537p-672, 0x1.c1e7d9682964p-323, 0x1.1e5a25933c54cp-886, 0.0, 0.0,
     0.0, 0x1.530d64b105fd6p-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.16c74ec609ea7p-414, 0x1.6966b24c7e60ap-119, 0.0, 0x1.28372f35009aep-155, 0.0,
     0x1.b53f4691a0397p-237, 0.0, 0x1.94962addff80fp-107, 0x1.8418d50135b79p-798, 0.0,
     0.0, 0.0, 0.0, 0x1.9b6bfc3f81cb5p-218, 0.0, 0.0, 0.0, 0x1.5cdc8a1e03449p-606,
     0.0, 0x1.9e3183e7c6031p-735, 0.0, 0x1.69046aed2eb36p-401, 0.0, 0.0,
     0x1.24b51c79186bep-919, 0x1.76a0bb1f9a815p-484, 0x1.e634b7ee29d45p-103,
     0x1.95c352b88400dp-297, 0x1.f6107f1c5c907p-678, 0x1.648c19b19a4e7p-779, 0.0, 0.0,
     0.0, 0x1.778a1eb30ef8fp-59, 0.0, 0.0, 0x1.a8ddd55d07ce5p-92,
     0x1.7fb8174c2f83fp-350, 0x1.511bc85660a5bp-139, 0.0, 0.0, 0x1.aaa834ea9bc34p-834,
     0.0, 0.0, 0x1.377e5ba1b320ap-461, 0.0, 0.0, 0x1.ccc79c0f787e1p-111,
     0x1.73f139031548p-1022, 0x1.64e30e3c1c04p-46, 0x1.c74c760931dd8p-338, 0.0, 0.0,
     0x1.7a9da5b6567a2p-711, 0.0, 0x1.814c37021632dp-792, 0x1.1b35e737e45fbp-483,
     0x1.17314583d51e3p-289, 0.0, 0.0, 0.0, 0.0, 0x1.0b5c8f637191ep-521,
     0x1.d1e4c70cda63cp-682, 0.0, 0x1.cb92233cc03c4p-776, 0x1.cd03c29bba947p-822,
     0x1.aed2a26f29efap-158, 0x1.671ed75d9aaa8p-555, 0x1.1547363f02596p-607, 0.0, 0.0,
     0x1.4271e49564088p-408, 0.0, 0x1.74301b3b7d934p-661, 0x1.00230beeb8fd7p-975,
     0x1.52666321d847ap-999, 0.0, 0.0, 0.0, 0x1.1c42427f8df9fp-203,
     0x1.18865f48a8f0dp-988, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d7e5dda2ee30fp-27, 0x1.072be1a790c9bp-291, 0x1.c7e93366c9016p-413, 0.0, 0.0,
     0.0, 0.0, 0x1.07a9b278f49d6p-291, 0.0, 0x1.9b79976a8770ap-671, 0.0,
     0x1.1ae1f3465b96ep-403, 0x1.705a117d6d127p-229, 0x1.ced03ddc9889ep-797, 0.0, 0.0,
     0x1.32b0c0b164408p-900, 0x1.60ea4117c5ddcp-409, 0x1.4980c761b7539p-577,
     0x1.864e5d2f16d57p-845, 0x1.26b69fedbdf29p-602, 0.0, 0x1.8c7dc89f6ad31p-7,
     0x1.01be640a483cdp-668, 0.0, 0.0, 0.0, 0x1.51e22b5361129p-931, 0.0,
     0x1.59126f50d57e3p-484, 0x1.371f14a77398ap-52, 0x1.bb2a41cf24dc8p-138, 0.0, 0.0,
     0.0, 0x1.1179b280066fdp-173, 0x1.eaf4ddc387b8dp-690, 0.0, 0x1.10649f8b8672ep-94,
     0x1.e9665e807727dp-187, 0x1.35fa249eb16acp-529, 0.0, 0x1.c6d9a1d3c82b3p-579,
     0x1.45a47f5a83852p-280, 0.0, 0.0, 0x1.3ac9677cf41e5p-35, 0x1.9a51e8ee1923ap-960,
     0x1.09346471b3f33p-866, 0.0, 0.0, 0x1.8eadd38983173p-572, 0.0,
     0x1.dba98460aa1fcp-787, 0.0, 0x1.e8ccd9a5a88b3p-215, 0.0, 0.0,
     0x1.5a40e76c1471ep-359, 0.0, 0x1.5b3ac6d69d84bp-653, 0x1.af6eee47245f4p-328,
     0x1.e2584671855c1p-185, 0x1.405fbc573afffp-469, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c086a467cc8fdp-789, 0.0, 0x1.ebd245118a38dp-775, 0x1.01f511b6ed014p-901, 0.0,
     0.0, 0x1.fd3c176edd7b1p-933, 0.0, 0x1.3ed3166b65f9p-639, 0.0,
     0x1.b3af1a3eba27dp-545, 0.0, 0x1.c295954be3effp-715, 0.0, 0x1.4a9c532c13f13p-235,
     0x1.3f6c45bfc89d5p-593, 0.0, 0.0, 0x1.92a396a2610dbp-338, 0x1.adade86fe2da6p-712,
     0x1.e5b38dd95a1b9p-732, 0.0
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
            tmp1 = Sleef_finz_cosd4_u35kvx(tmp0);
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
    printf("Sleef_finz_cosd4_u35kvx %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10040000), timer, cpe_measure);
    printf("Sleef_finz_cosd4_u35kvx bench acc [%a, %a, %a, %a]\n", global_bench_acc[0], global_bench_acc[1], global_bench_acc[2], global_bench_acc[3]);
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
