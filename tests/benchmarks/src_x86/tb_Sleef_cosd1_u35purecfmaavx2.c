/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_cosd1_u35purecfma.c --function Sleef_cosd1_u35purecfma \
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
     0x1.de6a0f63f5636p-393, 0.0, 0x1.2a2d8a98cdfffp-284, 0x1.a855504e1c9a3p-526,
     0.0, 0.0, 0x1.d1a5935a1ee33p-334, 0x1.a79ec58f69c6bp-987, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.8b8fa02e6db29p-603, 0x1.42fa14bb36573p-786, 0.0, 0x1.1b3ad6d490fefp-357,
     0.0, 0.0, 0x1.cd04987531dfap-154, 0.0, 0.0, 0.0, 0x1.1e6e225f6028ep-550,
     0x1.bfbdaa07b9b41p-539, 0x1.9ca20d2c0b78dp-1012, 0x1.e5d8d7b316dc2p-453, 0.0,
     0.0, 0x1.fdc36f6059827p-911, 0.0, 0x1.5277dd19ecea8p-777, 0x1.58a5b347d390ap-450,
     0.0, 0.0, 0x1.1592462942eddp-288, 0.0, 0x1.24a53b505fa4ap-967, 0.0, 0.0, 0.0,
     0x1p0, 0x1.abcaf1671f094p-97, 0x1.d1e99ab26490cp-247, 0x1.f0e53fca13bedp-692,
     0.0, 0x1.c162fdf798a17p-5, 0.0, 0.0, 0.0, 0x1.3d2325336dfecp-671,
     0x1.5d593626bbba9p-798, 0x1.1e34c8d048807p-625, 0.0, 0x1.aef3d5e361063p-789,
     0x1.bcf98ff380386p-33, 0x1.6eb0eadfef992p-114, 0x1.ecc3902b53464p-610,
     0x1.fbea06de8d88cp-372, 0.0, 0x1.96b94e7bf273ep-271, 0x1.188d936ec2c88p-135,
     0x1.431d72c595dfbp-631, 0x1.475756f89a51dp-10, 0x1.cebcb69c285f5p-635,
     0x1.8d1a75d402d27p-982, 0x1.8bf0f5b4f4b94p-28, 0x1.5525786f078dp-561,
     0x1.4fd4b251ee031p-225, 0x1.d9f2f169af20cp-45, 0.0, 0x1.2351899cb55b3p-946, 0.0,
     0.0, 0x1.b23231c853c04p-914, 0.0, 0.0, 0x1.99961c1919ab8p-567,
     0x1.80bc0fbe12f86p-857, 0.0, 0x1.a3872e0794eb2p-1003, 0x1.564cd2065fd18p-872,
     0x1.1a93ff173ac8fp-548, 0.0, 0x1.7b6eb11f4de65p-632, 0.0, 0x1.17da3fbe8e936p-573,
     0x1.66f5f626b2f6bp-649, 0.0, 0.0, 0x1.cefdd7f12e708p-579, 0x1.f4b57a3396bf4p-799,
     0.0, 0.0, 0x1.c3a7ee5af6309p-86, 0x1.c3589b860a5abp-512, 0.0, 0.0,
     0x1.1e10b0184e29dp-905, 0x1.cf462d05afe15p-589, 0x1.499cbdeb0d7f1p-378,
     0x1.2ecc62bfd84dcp-176, 0.0, 0x1.43cb4c04de3fep-152, 0x1.5f3d304dd34c5p-133, 0.0,
     0.0, 0x1.4eabae17bc257p-450, 0x1.456e82adc0cb6p-255, 0x1.147f4fdedd34bp-246, 0.0,
     0.0, 0.0, 0x1.49bd0340f327ap-489, 0.0, 0x1.310ea339f071ap-730, 0.0,
     0x1.46efb05aa4afp-384, 0x1.5ee7c5394c382p-874, 0.0, 0.0, 0x1.9675e48d6d89ap-533,
     0.0, 0x1.2b7b5005b5bcfp-167, 0.0, 0.0, 0x1.65a2c6b6b2553p-640, 0.0,
     0x1.34a48509a400ep-973, 0x1.808356c94c063p-169, 0.0, 0.0, 0.0, 0.0,
     0x1.6610a266a8459p-554, 0.0, 0.0, 0x1.55e0847590863p-575, 0x1.a74601e819c1fp-532,
     0x1.268bd9c664e0dp-561, 0x1.442c39ac005f4p-471, 0.0, 0.0, 0x1.f11d14de43c6dp-757,
     0.0, 0.0, 0.0, 0.0, 0x1.e5ce7f01de26fp-9, 0.0, 0x1.8b026c01bb94ap-846, 0.0,
     0x1.7349ad16b3b56p-811, 0.0, 0.0, 0x1.6c001872b5f9dp-431, 0x1.4673a6e94ee58p-366,
     0x1.82a54a2e981afp-788, 0.0, 0.0, 0x1.f707449db7feep-638, 0x1.b0a15ef2ed1d8p-749,
     0.0, 0.0, 0x1.81493182f029fp-508, 0x1.1788d737fcff8p-46, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.ed4d79547464ep-525, 0.0, 0x1.9742a3cd653bdp-792, 0.0,
     0x1.db6f41763ecb7p-234, 0.0, 0x1.89009c476feecp-896, 0x1.7d98f696a674fp-879, 0.0,
     0.0, 0.0, 0.0, 0x1.931eaf2e42901p-341, 0.0, 0x1.1751fc75fcbe5p-280, 0.0,
     0x1.9e0d97100fe91p-814, 0x1.5b867a2c0ac12p-490, 0.0, 0x1.5c68af912c5b4p-302, 0.0,
     0x1.c1973c80010f6p-169, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.30683a87e2bf6p-528,
     0x1.359037a9bf5bfp-566, 0x1.d0676ae7c2c89p-209, 0x1.9d990c01d1127p-1022,
     0x1.18ad9986d42f1p-666, 0.0, 0.0, 0x1.2f42b23cb6417p-903, 0.0,
     0x1.84f8fc1938586p-927, 0x1.179f975dc716ep-581, 0.0, 0x1.e85606f9e6a85p-287, 0.0,
     0.0, 0x1.5fe6dcdc157edp-202, 0x1.c3e1cb070f389p-48, 0x1.547bef770653bp-529,
     0x1.e1115babf3e3ap-583, 0.0, 0x1.ae7152ce8a9d4p-543, 0x1.2fb3c62e7620dp-16, 0.0,
     0x1.db85a8873e0fap-460, 0x1.e4c0a8e8496dcp-18, 0.0, 0x1.583d89995c3d6p-546, 0.0,
     0x1.6680d646c85d3p-548, 0x1.158e4eff9ad33p-848, 0x1.31fd34fc97d19p-443,
     0x1.662aacdf7e935p-219, 0.0, 0.0, 0.0, 0x1.a4579c4245eb2p-128,
     0x1.a662e4555c156p-517, 0.0, 0.0, 0x1.0b578d3baf8a9p-216, 0.0,
     0x1.c1528ada98c24p-836, 0.0, 0x1.8335f0ffd059ep-148, 0x1.52b355683af41p-999, 0.0,
     0.0, 0.0, 0x1.d635191953ae9p-946, 0.0, 0.0, 0x1.c2a8bc95c4816p-251, 0.0,
     0x1.b3d879b1f5bd5p-916, 0.0, 0.0, 0.0, 0x1.e98aa1e26cc96p-474, 0.0, 0.0, 0.0,
     0x1.f4bd14c6d07p-95, 0x1.a0a064074a61dp-304, 0.0, 0.0, 0.0, 0.0,
     0x1.0d54a346af185p-618, 0.0, 0.0, 0.0, 0x1.5139343a0f97ep-752,
     0x1.f3ad20808621ap-300, 0x1.d2f5ef139e01dp-590, 0.0, 0x1.5b9562698945fp-994,
     0x1.2c2fcf61ff0ecp-475, 0.0, 0x1.f10cff0d62edbp-38, 0.0, 0x1.998b0ecfb90dap-477,
     0x1.db5168c94a3fep-586, 0x1.7e23a2aa4bee1p-829, 0x1.7a2b576526bd3p-693,
     0x1.92d94850238f5p-295, 0.0, 0.0, 0.0, 0x1.f5fd1b81ca33ap-866, 0.0,
     0x1.ed7b3b26e8c37p-121, 0x1.c95a75fdf88fep-472, 0x1.a22a7573f357ep-149, 0.0, 0.0,
     0x1.c1bb60a839a55p-397, 0x1.ab1e54567946ap-901, 0x1.676334034540ap-725, 0.0,
     0x1.09d3aff938b83p-918, 0x1.cc8fe467d9a7cp-118, 0.0, 0x1.b3ba19d4c76c4p-244, 0.0,
     0x1.df55197599bep-726, 0x1.62af551537a6p-287, 0x1.d01d1045d216fp-304, 0.0,
     0x1.dfe9cb9847a18p-689, 0x1.95d00195cc5afp-466, 0.0, 0x1.d4ac54fed8199p-48, 0.0,
     0x1.35fd6d395f3b2p-661, 0x1.54ded4ff70f1ep-514, 0x1.cb038217a0b34p-732,
     0x1.f55e86a742c56p-219, 0x1.1b20b00228258p-94, 0.0, 0x1.9f460a3df55a3p-771, 0.0,
     0.0, 0.0, 0x1.dd3dfb8dfda9ep-41, 0.0, 0x1.c2b007e7bd6f1p-248,
     0x1.fd449445e8527p-136, 0.0, 0.0, 0x1.249f4f311c325p-878, 0x1.31172ea96eaf1p-371,
     0.0, 0.0, 0.0, 0.0, 0x1.e9f24eca881acp-705, 0.0, 0.0, 0x1.37cb07c03e034p-610,
     0.0, 0.0, 0x1.0fc7397cbe948p-238, 0.0, 0x1.8c35315176755p-805,
     0x1.e6b53f3878441p-720, 0.0, 0x1.608ede9a933a7p-104, 0.0, 0x1.0ec536ec22f98p-495,
     0x1.ca19526c6e831p-683, 0x1.17d1047e0926bp-728, 0.0, 0.0, 0.0, 0.0,
     0x1.aab2b38c16608p-307, 0x1.9b492c22d3d8dp-229, 0x1.d40bcd828abefp-230,
     0x1.1d73fcaf8d2c5p-560, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.e133e760a1edp-259,
     0x1.47eeccec2497dp-214, 0.0, 0x1.0682fa25fa2bbp-792, 0.0, 0x1.760922495ab22p-382,
     0x1.659ac1bca5b3cp-420, 0x1.a752f2f208781p-375, 0.0, 0x1.6e1f7530945ap-585,
     0x1.979af2923d815p-761, 0.0, 0.0, 0x1.236c6fd7a3107p-1014,
     0x1.27c6e6adeb0eap-437, 0x1.6ad6be2dae36ap-228, 0x1.ea125c7d693e9p-255, 0.0,
     0x1.48055ce8707e9p-93, 0x1.d9688ae4aefabp-616, 0x1.44e25f044c0c7p-283,
     0x1.b5fc59a3de3e7p-426, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1a10226ed975ep-706,
     0x1.1220fc345a22bp-798, 0.0, 0x1.ecceb07f1351ap-773, 0.0, 0x1.837be69ce7c1fp-206,
     0x1.e89b29e2b76dp-507, 0x1.0cc4a501d1acp-710, 0x1.95e0d872a3e0fp-788,
     0x1.623bb772520dep-684, 0.0, 0.0, 0.0, 0x1.e5ce9e1bf5b67p-229,
     0x1.4e77b5af9dcb9p-889, 0.0, 0x1.7205077ca3171p-1019, 0.0,
     0x1.ae4a3ef63c177p-383, 0.0, 0x1.f640786fb8f6p-281, 0.0, 0.0, 0.0,
     0x1.38045062b8603p-13, 0x1.d12250c9257f1p-299, 0.0, 0.0, 0x1.c9d5396480892p-370,
     0x1.08f97c1ab3d3ep-467, 0.0, 0.0, 0x1.ab6fe7a2d3b21p-189, 0.0, 0.0,
     0x1.b92beadb46457p-835, 0.0, 0x1.5e26dd1abbceep-197, 0.0, 0.0,
     0x1.95cbd750213b4p-518, 0x1.d17fdd3272922p-567, 0x1.05732e7a4e6fdp-363, 0.0,
     0x1.58892c4c2bd01p-468, 0.0, 0.0, 0x1.053a49013d979p-593, 0.0, 0.0,
     0x1.1e4ac35737c17p-669, 0x1.c25a580b4c617p-339, 0x1.0aa5d39f95aa2p-78, 0.0,
     0x1.795866553030ep-233, 0x1.426276e77851cp-143, 0.0, 0x1.1a0e5fec29572p-355,
     0x1.0d350d7a9c28p-51, 0.0, 0.0, 0.0, 0x1.15e8c60cfa709p-206, 0.0, 0.0,
     0x1.e2eea6215b20fp-747, 0x1.d74f8b04c981ap-6, 0.0, 0.0, 0x1.f2a95cdb4d4a2p-81,
     0x1.f1e1d18887183p-898, 0.0, 0x1.45b32afe31b3ap-8, 0x1.e6a14e7b4253p-474,
     0x1.72579465bf20cp-670, 0.0, 0.0, 0x1.2de289bf9ccfap-58, 0.0,
     0x1.4360f13412bffp-161, 0x1.09dc4a6f955fap-994, 0.0, 0.0, 0.0, 0.0,
     0x1.87a2f1a081979p-942, 0.0, 0x1.1ca6076ae6dcbp-166, 0x1.16a01d24828d4p-243,
     0x1.74f8df037eb44p-170, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.386e8e3a1570ep-540, 0.0,
     0.0, 0x1.a190c7a66aad7p-873, 0.0, 0x1.96fe5b9caf8ep-517, 0x1.605956d1747edp-236,
     0.0, 0.0, 0x1.d063a3b3a0c71p-763, 0.0, 0x1.11358c2e9f7cap-902,
     0x1.6825bc9cb64fp-549, 0x1.ca8dc13d6f9eep-858, 0.0, 0x1.21c2f6c25398fp-80,
     0x1.e784c68155d2fp-712, 0.0, 0x1.e0c7e814de69dp-610, 0x1.9b11802f627edp-949, 0.0,
     0x1.f8f245f291de4p-966, 0x1.b21ff68660f21p-762, 0x1.858e47b36268p-437,
     0x1.b2ec4ecea5f43p-497, 0.0, 0.0, 0.0, 0.0, 0x1.d93cbb2cfc462p-482, 0.0,
     0x1.37351425df612p-742, 0x1.dbedc5d70ca4ap-646, 0.0, 0.0, 0.0,
     0x1.62c7ffa2d4aebp-74, 0x1.749bfb1a0c3bep-302, 0x1.8047ca169e2c5p-977,
     0x1.dda7384b0bed4p-106, 0.0, 0x1.5644896eecdf2p-719, 0.0, 0x1.4eb84a07db739p-919,
     0x1.8d8e48b0b5f3cp-643, 0x1.4373af0f23fbp-438, 0.0, 0x1.3281d49a506f6p-132, 0.0,
     0x1.2d6658c3c6906p-281, 0x1.46389935f443p-460, 0x1.ece305b49419p-411, 0.0,
     0x1.eaed95b9ca622p-631, 0x1.a5bb0c43a1e38p-859, 0.0, 0x1.ac2a5e3b6e06bp-354,
     0x1.b620b5ac2a232p-535, 0x1.dd7cf96b5a6b4p-643, 0x1.67e2fe9a310fp-720, 0.0, 0.0,
     0.0, 0x1.a1de84735c7afp-913, 0x1.c80cd4236177p-500, 0x1.e6abd185f3eacp-362,
     0x1.8d60709a3106fp-48, 0.0, 0.0, 0x1.29ab1d691f15cp-104, 0x1.5c0f44cf103c2p-318,
     0x1.72695ec30cd5ap-359, 0.0, 0x1.390529b5f9405p-881, 0x1.04a6eaa4b3af7p-734,
     0x1.1b2185c68a977p-721, 0x1.67aef7c7a8d4fp-529, 0x1.ff02645f50d28p-20, 0.0,
     0x1.900442391cc98p-363, 0.0, 0x1.c275661e023a4p-610, 0.0, 0.0,
     0x1.c3628db0ca84fp-481, 0x1.d818c21fcbd77p-335, 0x1.6746e9286c19p-392, 0.0,
     0x1.4f1b569867518p-41, 0.0, 0.0, 0.0, 0x1.a827215c1ba7ep-926,
     0x1.abd20f982a18fp-616, 0x1.49232db178c87p-423, 0x1.75b8da310b08ap-737,
     0x1.878483bfb28ddp-913, 0x1.6e7b87c1802e7p-197, 0x1.c505616c4a9b3p-958,
     0x1.1c0a66a24642ep-71, 0x1.5c5b348100551p-580, 0x1.f0d91df07db6fp-448,
     0x1.1ca2753fb3178p-526, 0x1.1d275944517adp-764, 0x1.ba68b95fbade6p-144,
     0x1.76153d40cfb9ep-262, 0x1.f6879119c26p-165, 0.0, 0x1.15bf6a45b31ffp-912, 0.0,
     0.0, 0.0, 0x1.ae687ef62d0c1p-779, 0.0, 0.0, 0x1.fdef877e15406p-412, 0.0, 0.0,
     0x1.3c1d02973e278p-747, 0x1.a904e7911a16dp-200, 0.0, 0x1.dfa3a3abc776bp-965, 0.0,
     0x1.a4a50fad544aep-211, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0b386a09ffeap-282, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.bab8545c73ed4p-774, 0.0, 0x1.2be09ae73ac5bp-811,
     0x1.b44610da6ce33p-438, 0.0, 0.0, 0.0, 0.0, 0x1.9707982c0724p-901, 0.0,
     0x1.a7e1c04286b87p-205, 0.0, 0.0, 0x1.ee13681b211dcp-913, 0.0, 0.0, 0.0,
     0x1.230aa614b919bp-411, 0x1.c285b79da4004p-194, 0x1.3527413ddfa97p-887,
     0x1.76e146eccca75p-120, 0x1.fb2ec8cc6bc9cp-541, 0x1.2211d90c2cdf6p-864,
     0x1.6605f6b401f9ep-392, 0x1.3c6adba829d55p-123, 0x1.1511a6ac89a15p-521, 0.0,
     0x1.bad031bbd2e78p-158, 0x1.aa9f47e24c05ep-803, 0x1.8bbd04f272b42p-489, 0.0,
     0x1.a63000c4fa38ep-33, 0.0, 0x1.f5c2b486a4a7p-69, 0x1.0aafa231623ecp-340, 0.0,
     0.0, 0x1.8fddb205057afp-529, 0.0, 0.0, 0.0, 0x1.776255ebcd4d5p-402, 0.0, 0.0,
     0x1.5e21be9d512b7p-626, 0.0, 0x1.a19061012b5acp-449, 0.0, 0x1.c23db1e69ee23p-145,
     0x1.20a75f52602cbp-874, 0.0, 0x1.47ae16bbfca3ap-724, 0.0, 0.0,
     0x1.9bd1d70c0be95p-846, 0x1.cbf134864aca4p-606, 0x1.f1b32dc759c1dp-229,
     0x1.ff5a4d6d1eb2bp-590, 0.0, 0x1.99f5c1e7db97ep-490, 0.0, 0x1.f442cd6ccb978p-317,
     0.0, 0x1.9326e86b21c4cp-846, 0x1.68eaf00555929p-222, 0.0, 0.0, 0.0,
     0x1.4e16bcd73a715p-718, 0x1.b9557c2bfdbbep-674, 0.0, 0x1.d8d19cc3e807fp-740,
     0x1.d4be74a4e99f3p-613, 0.0, 0.0, 0.0, 0x1.4a0b4a2ebfea1p-415,
     0x1.4eddc6103860cp-623, 0.0, 0x1.3a22d4ed53186p-384, 0.0, 0x1.254be8909b6f8p-216,
     0.0, 0x1.fbd797d7d8a01p-820, 0x1.56362b36ccf06p-774, 0.0, 0.0,
     0x1.bd05c0de987e9p-526, 0x1.6d805d7fb2a25p-322, 0.0, 0.0, 0.0, 0.0,
     0x1.3b93e1e658188p-94, 0.0, 0.0, 0x1.081d6c5e815aap-612, 0.0,
     0x1.bbbe1293c7746p-882, 0x1.d598950bb9a3bp-29, 0.0, 0x1.fa0eebb06965ap-714, 0.0,
     0.0, 0.0, 0x1.87bf3fb1c2acp-1003, 0x1.cf4844c6a4969p-283, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b99b3e7d5d0c2p-218, 0x1.fd0692c66fb65p-139, 0.0,
     0x1.e693015831e79p-513, 0.0, 0.0, 0x1.fc5fa9a7e7d5dp-712, 0x1.971c29a5e4085p-336,
     0x1.302601445a6cep-170, 0.0, 0x1.0fea43e53de07p-642, 0x1.fa4ecbc254c73p-45,
     0x1.158ebabb731c1p-1012, 0.0, 0.0, 0.0, 0x1.ff41b6d389f97p-680,
     0x1.86e155fc23697p-7, 0.0, 0.0, 0x1.4632fc239de99p-942, 0x1.02e86edbd08b7p-853,
     0x1.cb3fe53d45d62p-630, 0.0, 0x1.45403c5d168a7p-759, 0.0, 0x1.8e86caf4c5b72p-704,
     0x1.3f506a133ac65p-587, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f286e576baf7fp-62,
     0x1.95a9124fcccdbp-201, 0.0, 0x1.e474d91348092p-189, 0.0, 0x1.c41a1bfc45234p-748,
     0x1.6430665f14bc1p-383, 0.0, 0x1.6a96c6056b27dp-913, 0.0, 0.0,
     0x1.6e2539a27e156p-142, 0.0, 0.0, 0x1.42ae737ac24bfp-431, 0x1.98c76b431df32p-149,
     0x1.7e9bd99c333f6p-930, 0.0, 0x1.2131b63b85c42p-358, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.70d177864ca2ap-626, 0x1.8c478f2054b0fp-486, 0.0, 0.0,
     0x1.55a77ea409b4p-832, 0x1.b5d33b2f298d6p-192, 0x1.4281e1aa72aa1p-667, 0.0,
     0x1.2a3d3dffaf345p-836, 0.0, 0x1.5a82142296112p-942, 0.0, 0.0, 0.0,
     0x1.fb21bfc00ac58p-227, 0x1.305d4d45cf828p-964, 0.0, 0x1.70a7480ff22fbp-1002,
     0.0, 0.0, 0.0, 0x1.d7454d0ccfafbp-194, 0x1.f93747324cfbfp-237, 0.0, 0.0, 0.0,
     0.0, 0x1.5c9ee98184be1p-915, 0.0, 0x1.3eccb02064c5p-405, 0x1.b2ffb0ac3ae1bp-446,
     0.0, 0x1.9d88a90818544p-721, 0.0, 0.0, 0.0, 0x1.cd97493dd1495p-411, 0.0,
     0x1.20d43c7add93ap-687, 0.0, 0.0, 0.0, 0x1.f7fc2838127e7p-905,
     0x1.c6694825f9f7ep-1003, 0.0, 0x1.35f3c37605f5bp-186, 0.0,
     0x1.9f94942abc3abp-995, 0.0, 0x1.bb9225b8ef31ap-905, 0x1.c60ee1a3c3762p-189,
     0x1.b6c0ba62b2181p-34, 0.0, 0.0, 0.0, 0x1.1f37b6779d994p-871, 0.0,
     0x1.5a15fa22f4ea7p-105, 0x1.f97b78b5a2b99p-1018, 0.0, 0x1.b8c224993cacfp-686,
     0x1.df09612b0c051p-430, 0x1.ca8561ec61182p-646, 0x1.b403ec79a4db7p-487, 0.0,
     0x1.d59a2d9e4350dp-479, 0.0, 0.0, 0x1.dc931c612598p-835, 0x1.6867ab2adb02bp-791,
     0.0, 0x1.eb1ab5f8a6362p-90, 0.0, 0.0, 0.0, 0x1.21b6b85dfbc64p-100, 0.0, 0.0, 0.0,
     0.0, 0x1.2524134a3bafbp-588, 0.0, 0x1.092abe3d2506bp-290, 0x1.7eee7881ab183p-256,
     0.0, 0x1.15b8cc65c162ap-327, 0x1.c78fecdf006bbp-573, 0x1.3e41ccc062997p-213, 0.0,
     0.0, 0x1.253c97294134cp-834, 0.0, 0x1.561ea838b3d5bp-885, 0x1.ac87cd3366bddp-582,
     0x1.b01868afaeff4p-639, 0.0, 0x1.98bd84376ae68p-538, 0.0, 0x1.10a8a5abb0707p-958,
     0x1.e85c54b83175cp-342, 0x1.9a89f5055bcebp-819, 0.0, 0x1.6f542f1e0d54p-256, 0.0,
     0.0, 0x1.53a484f421664p-229, 0.0, 0.0, 0x1.69b632af33ac5p-467,
     0x1.b3410b6d3d02bp-19, 0x1.abb48ea71b248p-54, 0.0, 0x1.fc874d9e23e51p-316,
     0x1.9649d34239111p-120, 0.0, 0.0, 0x1.f959884912515p-620, 0x1.d954171ce769ep-752,
     0x1.cfc2afad0e354p-292, 0.0, 0.0, 0.0, 0.0, 0x1.e96f4da03f769p-371,
     0x1.3438c4c828de5p-962, 0.0, 0x1.fc56b38bf677ep-554, 0.0, 0.0, 0.0,
     0x1.79da16ce613f8p-820, 0x1.209c91b8c9b71p-401, 0x1.44ffe77e382b5p-672, 0.0,
     0x1.d8425e6216cbdp-45, 0.0, 0x1.55591fb3ec08cp-176, 0x1.5fd0de220ad6bp-869, 0.0,
     0.0, 0.0, 0x1.23f3243b0a4eep-451, 0x1.e3e071ea455a3p-964, 0x1.9cf82a4a0da1cp-410,
     0.0, 0.0, 0x1.1f3ed5230a9eep-604, 0x1.bb202b7fded78p-853, 0.0, 0.0,
     0x1.ccbd93abf679bp-834, 0.0, 0x1.d1b381997958bp-386, 0x1.583acaef7e204p-577, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.83d5b95893899p-177, 0x1.ee0b5927de16p-684,
     0x1.27cb3a26eeab7p-287, 0x1.5326b3c910053p-297, 0.0, 0x1.020d7bb94762ap-98,
     0x1.ef18956459bc1p-365, 0x1.edbf3474ca907p-426, 0x1.cbb2e8dcbf8a1p-316,
     0x1.63b28aa33c50cp-607, 0.0, 0.0, 0x1.6452003f337f4p-861, 0x1.37dd1e017c434p-116,
     0x1.190f6749fba7ep-557, 0x1.9e0c568119ae2p-444, 0x1.fe90c4cae897fp-313,
     0x1.6e5be8a07196cp-206, 0x1.d357b6e0309b4p-664, 0x1.69a2d5350b40ap-346, 0.0,
     0x1.a2513cc6e4ff6p-263, 0.0, 0x1.bf926ba31515p-959, 0.0, 0x1.1ea2fa9ef21bbp-505,
     0.0, 0.0, 0.0, 0x1.d485a6cac7f48p-876, 0x1.f715aaab12328p-175,
     0x1.daa2b62406c49p-587, 0x1.9a52eefc298c9p-29, 0x1.6c08d733de966p-414, 0.0,
     0x1p0, 0.0, 0x1.93951f699f894p-239, 0x1.192287f8ef86ep-1013, 0.0, 0.0,
     0x1.10701f0735088p-886, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_cosd1_u35purecfma(tmp0);
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
    printf("Sleef_cosd1_u35purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_cosd1_u35purecfma bench acc %la\n", global_bench_acc);
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
