/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_atand1_u10purecfma.c --function \
 *     Sleef_atand1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.d2b480dbd8ffap-244, 0x1.ccbedfa36f653p-642,
     0x1.8c57cdea75029p-748, 0x1.2b60775b6fa48p-890, 0.0, 0x1.66e753d1df3dcp-753, 0.0,
     0.0, 0.0, 0x1.3be472743ae28p-718, 0x1.17bc6d44859fep-797, 0x1.99def0641aef6p-646,
     0.0, 0x1.4d6f1a1fdf424p-598, 0.0, 0.0, 0x1.82add836ec53cp-122,
     0x1.88007cb1d0bc6p-923, 0x1.686ee1196b187p-897, 0x1.2028f8df8c16p-85,
     0x1.44d283533839cp-710, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6196412fd463ap-995, 0.0, 0.0, 0x1.cf088f32d4d6ep-428, 0x1.1661d070530cbp-958,
     0.0, 0x1.b9bfd2808ada8p-124, 0.0, 0x1.dc05d103d84c6p-74, 0x1.ddea29854cde1p-898,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.83c0b418ebdfbp-489, 0.0,
     0x1.ae251ea5fa3b8p-428, 0x1.1d0ec277301dep-134, 0x1.0f507c5020655p-919, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0c4424b5d255p-767, 0.0, 0x1.b220bfd011906p-298,
     0x1.fa659b5844346p-591, 0x1.df535ba29968p-72, 0x1.2bd80484f585dp-672, 0.0, 0.0,
     0.0, 0.0, 0x1.5ea8f2a2b7d62p-895, 0.0, 0.0, 0x1.eb4d4fc3deda7p-531, 0.0, 0.0,
     0x1.6d0879567372fp-684, 0.0, 0x1.018cde0a09ed1p-198, 0.0, 0x1.a5e64763638b2p-152,
     0x1.8d5bce5e1e321p-772, 0.0, 0x1.c423be409ecd7p-150, 0x1.2b21f018c69e5p-824, 0.0,
     0x1.bcb29d20ee86ap-799, 0x1.008e9670deb71p-873, 0x1.25d3ca7909623p-726, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ea1d2619f639cp-835, 0x1.c04102a652793p-837,
     0x1.aa6dabf861c5ep-705, 0.0, 0x1.bfa58c706d479p-330, 0x1.1228d1c021a22p-235, 0.0,
     0x1.7158de55a00ddp-105, 0x1.69fa965b8dfd7p-163, 0x1.1c8557bfe5c9dp-607,
     0x1.736293776463bp-960, 0.0, 0.0, 0.0, 0x1.9df4b7eda36d8p-370, 0.0, 0.0, 0.0,
     0.0, 0x1.4cb6da33de176p-174, 0x1.c01c72f8ccd99p-323, 0x1.c4b85b7a35681p-674,
     0x1.a02bee0304889p-115, 0.0, 0.0, 0.0, 0.0, 0x1.0ae5dc304f572p-738, 0.0, 0.0,
     0.0, 0.0, 0x1.b198920d9776dp-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06301a0dd48adp-862, 0.0, 0x1.c56a12d3868dfp-913, 0.0, 0.0,
     0x1.64c529101acaep-956, 0x1.db8bb8d5f43efp-905, 0.0, 0.0, 0x1.bd3dd9c6c4bb2p-374,
     0.0, 0.0, 0x1.f3928496f0e41p-360, 0x1.9f078a3303ca7p-331, 0x1.4a0345f451f61p-442,
     0x1.87976fd686894p-728, 0x1.25cb63a2bed46p-682, 0x1.317db52ddb261p-969,
     0x1.e7cd6527278d9p-251, 0x1.89f8f5f0c6fffp-732, 0.0, 0x1.f7dc75dadceeep-802,
     0x1.7d359403286fbp-586, 0.0, 0.0, 0x1.29843b86a8831p-21, 0x1.6364994862607p-544,
     0.0, 0.0, 0.0, 0x1.35c1ff237d31dp-4, 0.0, 0x1.8f154e3b2e7f9p-469, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.f76e070e36affp-973, 0.0, 0.0, 0x1.ace42a42b6b64p-62, 0.0,
     0x1.9d53951d08a1ep-183, 0x1.c53d1df7cdd21p-911, 0x1.cb0daf95289c4p-429,
     0x1.ed56e12841cd1p-27, 0x1.db1065207016fp-20, 0.0, 0x1.534b9458a2c86p-805,
     0x1.36efa740dc632p-616, 0x1.7df1e8a9d3b81p-569, 0x1.a2c2304d62411p-17,
     0x1.913857912cd2fp-363, 0.0, 0.0, 0x1.41b0dcab4479cp-481, 0x1.06039786f642ep-198,
     0x1.e571820b6e962p-345, 0.0, 0x1.d11b9e7583d8p-945, 0x1.d82a1c54261a3p-424, 0.0,
     0x1.0749fd5e750a5p-952, 0.0, 0.0, 0.0, 0x1.314637b1a7c61p-367,
     0x1.fa6b24860b0dp-230, 0.0, 0x1.cfc585c71c11dp-52, 0x1.474334214dac3p-41, 0.0,
     0x1.7ded518ff9509p-323, 0x1.904fd8e9c9d45p-158, 0x1.72c70b65f8235p-534,
     0x1.03c50159834dcp-8, 0x1.42d37f82bdbafp-960, 0x1.47a32e711a54fp-443, 0.0,
     0x1.dde11a258ba17p-397, 0x1.60b2665a7d794p-441, 0.0, 0x1.307d2cea997bcp-861,
     0x1.3759c12de28ebp-692, 0.0, 0.0, 0.0, 0x1.eacc463462823p-612,
     0x1.a872d8200ac0ep-345, 0x1.d2e7f20df8575p-49, 0.0, 0.0, 0x1.3b6553e9f009cp-831,
     0x1.46c539e1082a1p-253, 0.0, 0.0, 0.0, 0.0, 0x1.7d8a36d069338p-336,
     0x1.c0d61c835c93ep-915, 0x1.fecec07da19adp-429, 0x1.f34ee084b8b5fp-312,
     0x1.4d297d38e28dp-430, 0x1.a5e62274336d2p-1016, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e238c6788769p-367, 0.0, 0.0, 0x1.5a40b533b2035p-204, 0.0,
     0x1.9b810d031f3a7p-235, 0x1.51acc45ee8602p-801, 0x1.9b333f5eac9fp-870,
     0x1.b29472287317ap-793, 0x1.44b7458b746ccp-205, 0.0, 0x1.705fe7720081ap-384, 0.0,
     0.0, 0x1.14bc70f4fa858p-562, 0x1.2ff6dc7913f54p-899, 0.0, 0.0,
     0x1.3c0299ba22d51p-629, 0.0, 0x1.bb7c72bbd56ffp-719, 0.0, 0.0,
     0x1.7ba5abffbcc0fp-95, 0.0, 0x1.fe088e58800fp-990, 0.0, 0.0,
     0x1.d7c901b68e678p-857, 0x1.5b05a79476ff7p-751, 0x1.800f04673b08ap-975,
     0x1.1e41c8b6785ffp-93, 0x1.5c4495a350c84p-584, 0.0, 0.0, 0.0,
     0x1.ac5b3abf153d4p-418, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0e8d06fdc918fp-807,
     0x1.8a1342fce70c3p-282, 0.0, 0.0, 0x1.b6206501d5faep-675, 0x1.7be3f1654d925p-588,
     0.0, 0.0, 0x1.e05dcf9c0671ap-96, 0.0, 0.0, 0.0, 0.0, 0x1.d53c5ab68aa67p-603, 0.0,
     0x1.f1ee2b19cb02dp-168, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.156f6d0d24f45p-383, 0.0, 0x1.b46c14fcc5d43p-902, 0x1.0c764ff1b2f0cp-349,
     0x1.b41228b90c7cep-290, 0x1.6f50250435af5p-954, 0x1.a2d9e9929f8b8p-863, 0.0,
     0x1.220997c6c224fp-339, 0x1.8a4c41229f542p-390, 0x1.79ef98772a7ap-817, 0.0, 0.0,
     0.0, 0x1.65edf8f182834p-758, 0.0, 0.0, 0x1.e193a2cd398ecp-688,
     0x1.9e35390cf4247p-61, 0.0, 0x1.e312d7fe73ae3p-546, 0.0, 0.0,
     0x1.a93351d2d54bdp-706, 0x1.f82a333e6e84fp-429, 0x1.da5784efd83efp-141, 0.0,
     0x1.26745b67f9f67p-818, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.574a2f39ee179p-219, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.674469a89ad9fp-577, 0x1.6463b91e5429dp-466, 0.0,
     0x1.0576583af05bcp-590, 0x1.d769cc7461026p-320, 0x1.c50ca3ae03deap-617,
     0x1.02abd2d8e5ed7p-992, 0x1.5d89f8d2a5b91p-37, 0x1.6a61e7aeece2bp-406,
     0x1.50d089107858ap-183, 0x1.1a8558bb61c09p-839, 0x1.6c793dcc663c7p-449,
     0x1.314747fa11fabp-838, 0.0, 0x1.f90c8b1fc4ab1p-107, 0.0, 0.0,
     0x1.17c5ef5566546p-20, 0x1.caca4454857a3p-705, 0x1.bf0de2c0f164ep-338,
     0x1.b72159b13bd2ap-225, 0x1.c3e88ecaa51e6p-181, 0x1.fbdbd41d26136p-526,
     0x1.ef0057163b0eep-715, 0.0, 0x1.e15c1c0c9b127p-867, 0x1.2f90f37e7c8adp-516,
     0x1.357c3dcc1805ap-387, 0.0, 0.0, 0.0, 0x1.02fc10f993e0cp-306, 0.0,
     0x1.f84938bd55345p-751, 0x1.ef5a275e0e227p-703, 0.0, 0x1.d882e7df20a6dp-630, 0.0,
     0.0, 0.0, 0x1.87129af1f27bcp-206, 0.0, 0x1.cea3a74919a8p-317,
     0x1.9eca34932ef1ep-978, 0x1.3664eed6bb254p-168, 0.0, 0.0, 0x1.c983c6b4af81p-386,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.706dd642ec909p-520, 0.0,
     0x1.8be0c2411ab0ap-411, 0.0, 0.0, 0.0, 0.0, 0x1.e5a021b44298p-549,
     0x1.750aa003c6b2bp-594, 0x1.107e05402bd4cp-20, 0.0, 0x1.c2f764592edep-210,
     0x1.6db5b6ff9ab0ap-160, 0x1.bdc5709afd08cp-823, 0x1.1eb0a66082482p-84, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5a5e611f795c3p-823, 0x1.cc79d8a63470fp-168,
     0x1.ca72c813ecc92p-52, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.256e2cb7409b8p-166, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e0b7ac8f647aap-89, 0.0, 0.0, 0x1.f4b9c16708fcep-875, 0.0,
     0x1.924570bcf4976p-319, 0.0, 0.0, 0x1.900012fe5a335p-702, 0x1.a0a0ab2a03cbcp-932,
     0x1.b889efb87eee5p-853, 0.0, 0x1.333d5c59439fcp-1000, 0x1.58de6a11d3d13p-315,
     0x1.f76936ecff8ap-1007, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7bb42e1e2df74p-822, 0.0, 0.0, 0x1.7ab2d132c87fcp-675, 0x1.e12c4b422defbp-559,
     0.0, 0x1.b96aee7ef6fdap-969, 0.0, 0.0, 0x1.e93284e1d0205p-541, 0.0,
     0x1.bc9aa0cedad62p-964, 0x1.9402c5c33279dp-982, 0.0, 0x1.d9d23a57a8d86p-374, 0.0,
     0.0, 0.0, 0.0, 0x1.8cc0f8d81f71bp-914, 0.0, 0x1.4f38f3726385dp-1011, 0.0, 0.0,
     0x1.fb9a84543729bp-448, 0x1.d4d289b129732p-782, 0.0, 0x1.66243e9b33c6p-1019,
     0x1.f311185ed82b4p-232, 0x1.3b594ab6ee39cp-341, 0x1.fb3b7cd9065bfp-205,
     0x1.d08e67dbebdc6p-671, 0.0, 0x1.d57d504a20812p-463, 0x1.fd1d285b8c222p-276, 0.0,
     0x1.3ca6a13fceb07p-179, 0.0, 0.0, 0x1.3654cba33c032p-1017, 0x1.ced10276177ep-249,
     0.0, 0x1.8bdb8781b0ad6p-998, 0.0, 0.0, 0.0, 0x1.8d134b5631ab1p-215, 0.0,
     0x1.fd1c943e5ef31p-77, 0.0, 0x1.2e1aa8f56e6fbp-43, 0x1.7b2fa1adb28d4p-789,
     0x1.de52226e3e832p-560, 0x1.94b8a6e30be09p-342, 0x1.179d640fdaa1ep-847, 0.0,
     0x1.6468adb927a53p-807, 0.0, 0x1.de166e1ff704ep-338, 0.0, 0x1.50406e964ca9p-259,
     0x1.c71313cff1c79p-670, 0.0, 0.0, 0.0, 0.0, 0x1.3c683dd8e5fd3p-136, 0.0, 0.0,
     0x1.4e963d6dffdacp-134, 0x1.ee64b1cb7b2d8p-60, 0.0, 0.0, 0.0, 0.0,
     0x1.ea9b651f313fp-533, 0.0, 0.0, 0.0, 0.0, 0x1.4708ce922a874p-339, 0.0,
     0x1.ea031c4f89f68p-272, 0.0, 0x1.ccc4e2eecb2d3p-140, 0.0, 0.0,
     0x1.92e2cfa381d43p-486, 0x1.a97b712705094p-441, 0.0, 0x1.f65f432c5e307p-155,
     0x1.5863fe733f42ap-163, 0x1.9955fa8a0e77fp-422, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.dd84404dfba4bp-303, 0x1.cea5acee02646p-479, 0x1.509f97b024dccp-915,
     0x1.952d21bae3994p-682, 0.0, 0.0, 0x1.ee27bbd41b21ep-709, 0.0,
     0x1.e66bd3b409018p-97, 0.0, 0x1.c9a71b036e558p-127, 0.0, 0x1.c17b1d2de459p-887,
     0x1.43fcc1150f61cp-868, 0x1.d89e8bf2880d6p-387, 0x1.b385eaed364f6p-336, 0.0,
     0x1.98cdb87d0a28bp-249, 0x1.72920cb35df5ep-230, 0x1.78bfb28fe817fp-943,
     0x1.6ca6485289551p-750, 0x1.47838cebfe94p-543, 0.0, 0.0, 0x1.b628b641cce2bp-1013,
     0.0, 0.0, 0x1.3b08a18cb606p-641, 0x1.6b25533fe8523p-422, 0.0, 0.0, 0.0,
     0x1.79a63ed2ddeb8p-94, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0860e1732f54cp-576, 0.0, 0.0,
     0.0, 0.0, 0x1.14957111f55e7p-280, 0.0, 0.0, 0.0, 0.0, 0x1.90cfd0c50a68bp-321,
     0x1.b1039f884e79cp-511, 0x1.5344cb73eed8ap-195, 0x1.1facf72fcdadep-307, 0.0, 0.0,
     0x1.951b9ee251fdcp-144, 0.0, 0x1.36460776ad515p-991, 0x1.f380da3188d93p-20,
     0x1.c189e9162b068p-792, 0x1.8e21d398d3091p-174, 0x1.e66a772b1ac4ep-758,
     0x1.2073244e9ca19p-166, 0.0, 0x1.47f63aab7335p-129, 0x1.6621739cf729fp-253, 0.0,
     0x1.515755868dbep-990, 0x1.adce3d8a397e8p-888, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.fa0297ca59f95p-292, 0.0, 0x1.2a6d9a84ba732p-559, 0.0, 0.0, 0.0,
     0x1.21d27fc679007p-819, 0x1.d127c733c8c85p-153, 0x1.e5aec1740dae8p-835, 0.0, 0.0,
     0x1.91b2b785de78dp-561, 0x1.9dba77aac3a94p-156, 0.0, 0x1.059749e354596p-462, 0.0,
     0.0, 0x1.534f2e95cf8e7p-113, 0.0, 0x1.aeed749e7cf92p-467, 0x1.844ccde47f023p-10,
     0.0, 0x1.57910539e18ebp-286, 0x1.49db7e88be587p-963, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.08128f9411124p-55, 0.0, 0x1.c287e48b34516p-957, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.83c1511d32f46p-818, 0x1.dde16d4e4161ap-353, 0x1.e2ba1683c16f2p-232, 0.0,
     0x1.85c9be74be73cp-637, 0.0, 0.0, 0.0, 0x1.6f75d9347641p-518, 0.0,
     0x1.4fc7806b88357p-135, 0.0, 0.0, 0.0, 0x1.7923e98d4264cp-730, 0.0, 0.0, 0.0,
     0x1.12ad90c887a2p-998, 0x1.bd187595f9cd2p-318, 0x1.603c41883afc9p-878, 0.0, 0.0,
     0x1.22a9022a46e5ep-521, 0.0, 0x1.e1204cbc43f95p-245, 0.0, 0.0,
     0x1.6607f4853e245p-455, 0x1.c1059502648c7p-311, 0.0, 0x1.5f36470735853p-564,
     0x1.a7931410b15dbp-539, 0x1.9e68bd4b7844fp-723, 0.0, 0x1.11f9a35cc4975p-867, 0.0,
     0x1.c170414d8bae7p-690, 0x1.26878b1162927p-727, 0.0, 0.0, 0.0,
     0x1.e69f556c887c4p-756, 0.0, 0x1.837c136ba31d2p-925, 0.0, 0x1.117540776e8ebp-359,
     0x1.b3b1530bf6564p-1011, 0x1.5d978055c0519p-158, 0x1.58e0667645f27p-599, 0.0,
     0x1.f917e76ffa32ap-652, 0.0, 0x1.1a84bcaedf33cp-679, 0.0, 0.0, 0.0,
     0x1.55e6e982c977dp-725, 0x1.2ae28402f230cp-167, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8946a6306f219p-288, 0x1.389f73e42c351p-786, 0x1.eb76617022bb9p-692, 0.0,
     0x1.10f4eb58ffd97p-820, 0x1.8720d08fcc3e7p-410, 0x1.db6985cefc094p-257, 0.0, 0.0,
     0x1.887be9bd18436p-391, 0x1.50596515c4476p-57, 0x1.967b36c453fb1p-188,
     0x1.d3d8b7929d554p-727, 0.0, 0.0, 0x1.c616f46d375dcp-932, 0x1.05d054498180ap-925,
     0.0, 0x1.6c078e60782fdp-718, 0x1.50e1549373e8cp-912, 0x1.8d6cf95666b87p-884, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fddb2c28c0582p-176, 0.0, 0.0, 0x1.dc2e7234baef4p-29,
     0x1.04f16cdb6d2cp-391, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.902cf9dae0b9ap-458, 0x1.4d239ac4b0397p-246, 0.0, 0x1.66a38ac8ad418p-369, 0.0,
     0x1.2e30f14cc1f2dp-229, 0x1.b5d298e80c8f2p-686, 0x1.1a9a3b29af7d5p-623,
     0x1.83ceade4ada6fp-88, 0x1.50a6ba3d105f4p-881, 0x1.9ba5b883e41b1p-574,
     0x1.192934c77d363p-41, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.72a348b3b7fd6p-67, 0.0,
     0x1.b666bec1dae35p-943, 0x1.d006f11586b28p-904, 0.0, 0x1.7c840af5d9c89p-852, 0.0,
     0x1.5862c60327d4fp-728, 0x1.12f1516660d9bp-35, 0x1.326fd88f9b2d6p-790, 0.0, 0.0,
     0x1.647b85fb2785dp-205, 0.0, 0.0, 0x1.f32940d0781ddp-646, 0x1.6f87390924e21p-626,
     0.0, 0.0, 0x1.1e3c03311050cp-754, 0.0, 0x1.c77d8dc88a294p-614,
     0x1.79259dc10e2dp-598, 0x1.e28354f1cb297p-634, 0x1.470d4ad99d604p-797, 0.0, 0.0,
     0x1.47e1b3cc5d7fap-170, 0.0, 0.0, 0.0, 0.0, 0x1.82e294bff240ap-638,
     0x1.322b9d34fc3afp-238, 0x1.c22f83e0dbf58p-995, 0x1.57763ba15896p-934, 0.0,
     0x1.46fe645fc4314p-317, 0.0, 0.0, 0.0, 0x1.550ec7cae0146p-431, 0.0,
     0x1.a33a8e0d7a557p-722, 0x1.e114e53812581p-714, 0.0, 0.0, 0.0,
     0x1.87227f00328bp-213, 0.0, 0x1.a3c96dfa3b73ap-532, 0x1.294396648faadp-560,
     0x1.6f46509a739a7p-79, 0x1.cd39846638391p-548, 0.0, 0.0, 0x1.45c2a10ad52abp-917,
     0x1.933608b2ab4adp-60, 0.0, 0x1.069d82e4672d1p-853, 0.0, 0x1.32066ba8e7ba5p-195,
     0x1.a32a045fe882bp-119, 0.0, 0.0, 0.0, 0.0, 0x1.a95402a30c745p-919, 0.0,
     0x1.93c4de63005bap-950, 0.0, 0.0, 0x1.58c076f73b0dep-814, 0.0,
     0x1.0466806280c0cp-489, 0.0, 0x1.61549c48e6506p-754, 0.0, 0x1.48967fbcbe261p-56,
     0.0, 0.0, 0x1.d2cf8bdcfe9b5p-21, 0x1.1207c5c337f79p-372, 0x1.b8178a05702aep-568,
     0.0, 0x1.ce85610ad1a6cp-628, 0.0, 0.0, 0x1.f8b8a8384238dp-515, 0.0,
     0x1.ae60ee25a389bp-318, 0x1.0959e9943b657p-635, 0.0, 0.0, 0.0, 0.0,
     0x1.87f5347af793dp-791, 0x1.996dbf21f1727p-5, 0.0, 0.0, 0x1.4d289c0083947p-983,
     0x1.d90ef93bb763dp-313, 0x1.66dace85de523p-699, 0x1.7f97f2832ee32p-865,
     0x1.715138c726169p-444, 0x1.411074cb29d79p-503, 0x1.d096ecba0f237p-915,
     0x1.5a6d452acce33p-790, 0x1.d5e86c1618f57p-953, 0x1.67a4ae77fd97ap-540,
     0x1.b1be719181a1fp-914, 0x1.93c4581c2dc64p-377, 0x1.2f2d2d77c407ap-25,
     0x1.ec34d2cee2439p-733, 0.0, 0x1.b1dd5e0b0a472p-269, 0.0,
     0x1.72e28a6915329p-1007, 0.0, 0.0, 0x1.d5c9914f7d37ep-596, 0.0, 0.0, 0.0, 0.0,
     0x1.a108981c0b2e4p-150, 0x1.ebf713205d516p-932, 0.0, 0x1.66c5d065bc17p-534, 0.0,
     0x1.ff2dcb05ea50ap-104, 0.0, 0.0, 0.0, 0x1.e624bcd0b8773p-67,
     0x1.943162951ca8p-379, 0x1.7ea28531253d1p-434, 0.0, 0x1.b4906016ff128p-90, 0.0,
     0.0, 0.0, 0.0, 0x1.7538b67248014p-585, 0x1.ea76a4ed24192p-636,
     0x1.2fac92724cc28p-345, 0.0, 0.0, 0x1.dda303f1a87bbp-489, 0.0, 0.0, 0.0,
     0x1.5849e810dd346p-27, 0.0, 0.0, 0x1.7ae030219962dp-378, 0x1.842ec24e50051p-428,
     0.0, 0x1.974f998cc3c6bp-494, 0.0, 0x1.22485e077c237p-549, 0x1.932685c6ea4cbp-130,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4af716b723241p-610,
     0x1.430835c255d79p-914, 0.0, 0.0, 0x1.6846ddee3cf95p-852, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4b707d5f73a4fp-65, 0x1.1b2d6a6f957dap-842, 0x1.8fd4288b6326p-223,
     0.0, 0x1.27782e43f40d1p-864, 0x1.b47a96765e202p-865, 0.0, 0.0,
     0x1.95b64bcb903dp-87, 0.0, 0.0, 0x1.b52ef1271e2efp-738, 0.0, 0.0, 0.0,
     0x1.20aa3f4960fabp-586, 0x1.c97d3a1412c57p-364, 0.0, 0x1.1b8ee36972d7bp-395,
     0x1.53b467485ddd9p-647, 0.0, 0x1.a6bf9152c7d82p-491
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
            tmp1 = Sleef_atand1_u10purecfma(tmp0);
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
    printf("Sleef_atand1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_atand1_u10purecfma bench acc %la\n", global_bench_acc);
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
