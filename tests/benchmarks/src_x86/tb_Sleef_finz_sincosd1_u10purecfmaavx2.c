/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/sleef_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sincosd1_u10purecfma.c --function \
 *     Sleef_finz_sincosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision sleef_sd2 --bench \
 *     --no-embedded-bin --target x86_sse2
 * 
**/
#include <stdint.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const Sleef_double_2 external_bench_wrapper_cst = {.x = 0.0, .y = 0.0};
static const Sleef_double_2 external_bench_wrapper_cst1 = {.x = 0.0, .y = 0.0};
volatile Sleef_double_2 external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0.0, 0.0, 0.0, 0.0, 0x1.beab385b795bap-190, 0.0, 0x1.133af12842f4dp-404, 0.0,
     0x1.c14c85cee2952p-5, 0x1.0fe75c53b0a9fp-608, 0.0, 0x1.2ac343e946f96p-540, 0.0,
     0x1.799a022a16909p-495, 0x1.092cb04133c4dp-88, 0.0, 0x1.b37a21ba0cc45p-75, 0.0,
     0x1.ef22156ab22b5p-41, 0x1.e5ac5a03ba86dp-678, 0x1.34878ff470048p-397, 0.0, 0.0,
     0x1.98b897fda8076p-181, 0.0, 0x1.61f94689ef056p-126, 0.0, 0x1.b20727a7d4859p-876,
     0x1.9596cb41e2efep-999, 0x1.da6e37a86c93ep-507, 0x1.9b19fcc1ef196p-659, 0.0,
     0x1.c6f079f6de339p-776, 0x1.01659cfe236fdp-282, 0.0, 0x1.d93678d18125dp-761,
     0x1.3f97b003cd5cp-997, 0.0, 0.0, 0x1.3fb83ca2b4bbcp-842, 0x1.aaaacc70b0323p-405,
     0x1.92b0924df27dep-900, 0x1.982aef8a3dcd7p-231, 0x1.79ce374bd4461p-866, 0.0, 0.0,
     0.0, 0.0, 0x1.98a362e661b07p-428, 0.0, 0x1.f7b3918d91cd8p-847,
     0x1.c92f113c3163fp-8, 0x1.cb96bc47b8c3ep-280, 0x1.fa187b8267979p-479, 0.0, 0.0,
     0x1.cf47905a8693fp-311, 0.0, 0x1.e46ce7fdab22fp-1012, 0.0,
     0x1.bb1b470594ba6p-760, 0x1.1c93e13e931ebp-159, 0.0, 0x1.82cd2d8998f7bp-313,
     0x1.14d2195217fd3p-112, 0.0, 0.0, 0x1.aee7f7febb7c2p-129, 0.0, 0.0,
     0x1.2d0381e5d53d8p-292, 0x1.73367efe0f18ep-787, 0.0, 0x1.8c00aa45e8574p-877,
     0x1.c79c3df2dd55cp-705, 0.0, 0.0, 0x1.73892701b1bdbp-288, 0x1.ad7d3cdbeb2cdp-534,
     0.0, 0.0, 0.0, 0.0, 0x1.af93d21b554fp-894, 0x1.4d2719a37becfp-999, 0.0,
     0x1.187abafb11139p-446, 0.0, 0x1.7a11f23ae15b6p-763, 0.0, 0x1.a8cdc867f6c22p-207,
     0.0, 0.0, 0x1.f59e7866fab24p-679, 0x1.93b37efa77332p-295, 0.0,
     0x1.466a3bda41afp-345, 0.0, 0x1.b141052d239e7p-399, 0.0, 0x1.6bcfbd70ab5e7p-506,
     0x1.39ecb6d3fd605p-257, 0x1.6175519e7d68ep-887, 0.0, 0.0, 0.0,
     0x1.637b01856af4dp-928, 0.0, 0.0, 0x1.2dd507e0b9153p-97, 0x1.9ae9d606706fdp-441,
     0x1.5a283a12d3961p-302, 0.0, 0.0, 0.0, 0x1.fb2798207b385p-391,
     0x1.50b9fa3712476p-412, 0x1.3913640ce28e1p-325, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8910f9bcf34ep-512, 0.0, 0x1.42f4c9d2a0611p-858, 0.0, 0.0,
     0x1.f1700ef095b04p-308, 0.0, 0x1.6c08dfd3edf63p-256, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.78d2108ffd8eep-685, 0.0, 0.0, 0x1.ad36ee25f1c96p-585, 0.0, 0.0,
     0x1.6794af6c44da2p-796, 0.0, 0.0, 0x1.322f8fc26a8ccp-503, 0x1.8ed1a5f816a8ap-405,
     0x1.a0262278671fbp-778, 0.0, 0x1.d2a7e6189e4d6p-164, 0.0, 0.0,
     0x1.eb15ac2670fd6p-769, 0.0, 0x1.529d1599da8cap-415, 0x1.f58101769387fp-87, 0.0,
     0x1.e95d758fd29d8p-684, 0.0, 0x1.d1df2ff1da80bp-963, 0.0, 0.0, 0.0, 0.0,
     0x1.95efabc9515c7p-631, 0.0, 0.0, 0x1.8fe1fa2c58173p-701, 0x1.8fa3a1f2911e1p-407,
     0.0, 0x1.7643cb404b7abp-959, 0.0, 0x1.e032371ea8054p-426, 0.0, 0.0,
     0x1.186bd37e87e21p-395, 0.0, 0.0, 0.0, 0x1.33ca3fce5c7e2p-78, 0.0,
     0x1.1be6ccbc971fap-959, 0x1.820745263c2ecp-158, 0x1.eac3d4c164a21p-671, 0.0,
     0x1.0b2fbba0aac5p-531, 0.0, 0x1.1330411e03561p-968, 0x1.3e4c57b76357cp-736, 0.0,
     0.0, 0x1.2db81b32282e9p-541, 0.0, 0x1.020766f3eae7ep-271, 0x1.2fa098616708ep-447,
     0.0, 0x1.5ede081be0f06p-907, 0x1.d76272f0bc3aep-700, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.29aad18542ed8p-29, 0.0,
     0x1.5d867df88ef01p-543, 0x1.d0835fe9b795ep-469, 0.0, 0x1.638f089a6f699p-547,
     0x1.5c854a5b1c3eap-534, 0x1.e018c7cbb0b63p-279, 0.0, 0.0, 0x1.eab619a12617p-649,
     0x1.e5f92e3f1ce2bp-941, 0.0, 0.0, 0x1.0992190b50fe6p-442, 0x1.518e4f498d70ap-700,
     0x1.8c51b69669998p-853, 0.0, 0.0, 0.0, 0x1.782e33734fdd8p-285,
     0x1.8a6f3003bd164p-669, 0x1.f40ef935d6496p-334, 0.0, 0x1.d66ec08734209p-182, 0.0,
     0x1.4eebb8d3108a6p-807, 0x1.f488ddbcabc61p-777, 0.0, 0.0, 0x1.66ff0dea1ee3p-629,
     0.0, 0.0, 0x1.b2bb54ee745cdp-277, 0x1.547ffe5803abbp-544, 0x1.4fd230d0bb9c9p-983,
     0x1.dd08ed747d493p-283, 0x1.b0dc4bcd44d6ap-377, 0x1.574893c7f7d4dp-762, 0.0, 0.0,
     0.0, 0.0, 0x1.017acb0514697p-399, 0.0, 0.0, 0.0, 0.0, 0x1.0cd2fb9177e2bp-799,
     0.0, 0x1.7b2e6f29bdee6p-479, 0x1.51a94316d9f0ap-100, 0x1.cdde047b83f1p-124,
     0x1.334933b4cef4dp-378, 0x1.348d52df68ba6p-771, 0x1.28708331ffdcp-558,
     0x1.1f59c2ac4dbfbp-194, 0x1.3a9b69b5b596ep-797, 0.0, 0x1.95c6a2aba5441p-875, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d926c72532575p-594,
     0x1.c0672e2cf1c11p-510, 0x1.cd0a222f2ac3ap-1020, 0x1.55457c511a475p-934,
     0x1.33469ac22746ap-749, 0.0, 0.0, 0x1.c971c587d1005p-500, 0.0,
     0x1.1282f97aeee58p-806, 0.0, 0.0, 0.0, 0x1.51a04b065abf9p-363,
     0x1.6a5728aae16d2p-721, 0.0, 0x1.90f12cd3732c4p-582, 0x1.d712cae2a7666p-514, 0.0,
     0.0, 0.0, 0x1.b01887344c37cp-1007, 0x1.75e17ef963865p-833,
     0x1.8206290305c66p-919, 0x1.5c94cc7ccfd7ap-941, 0.0, 0x1.6f9449007459bp-897,
     0x1.1e9cf1524a58cp-972, 0.0, 0.0, 0x1.02fe86a41f836p-387, 0x1.c7eabea8bb57fp-922,
     0x1.b5f7c034bdc66p-540, 0x1.bdc30f9b70213p-166, 0x1.e4ab375c3ee62p-435,
     0x1.034e531fb27bep-966, 0x1.168f2061e1f1dp-923, 0x1.9336539efee72p-938,
     0x1.2ed76c9730dafp-512, 0.0, 0x1.bc71d424a2b15p-347, 0.0, 0.0,
     0x1.bd873b94aff3ep-465, 0x1.837e652f90c1bp-339, 0.0, 0x1.cb5d43809bb82p-104, 0.0,
     0.0, 0x1.0dcc5076517ccp-525, 0x1.a9fc668c45359p-735, 0x1.2560a10070deap-210, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.38f0dd79f78cap-217, 0x1.605fe8162b9b2p-858,
     0x1.7a500fd41cfcbp-311, 0.0, 0.0, 0x1.1bd5a19a73453p-85, 0.0, 0.0, 0.0,
     0x1.229c697076505p-422, 0x1.4139993abdeb4p-675, 0x1.846007c923a8cp-632, 0.0, 0.0,
     0x1.1b5f249a3103ep-639, 0x1.f868be8f29f29p-287, 0x1.1cf8b1799c88fp-335, 0.0, 0.0,
     0.0, 0x1.6225fa50a42e4p-393, 0x1.05ebc3007ffd4p-45, 0x1.500b272486446p-453,
     0x1.b3123c0749826p-340, 0x1.51abded4ee809p-603, 0.0, 0.0, 0x1.f2400ef6c6347p-176,
     0.0, 0x1.86314cdf2627ep-159, 0.0, 0.0, 0x1.3a5c3911b2e05p-722,
     0x1.fe48bb7dc9cf3p-418, 0x1.b1e2f81f99eadp-363, 0x1.fff18b529e886p-41,
     0x1.1b3efbec5a13bp-829, 0x1.50222fff0615dp-174, 0x1.5bcdf282522b2p-19, 0.0, 0.0,
     0x1.d8cf063c219d5p-369, 0.0, 0x1.d02ffc10312dbp-969, 0x1.3546c56b94eefp-795, 0.0,
     0.0, 0x1.408d403739b05p-987, 0.0, 0.0, 0.0, 0x1.1ed1b163d6971p-39,
     0x1.f1194dc7322bcp-270, 0.0, 0.0, 0.0, 0x1.08474413bd787p-510,
     0x1.1a850ad6b9fe5p-879, 0.0, 0x1.2d4f7cb3df56fp-117, 0.0, 0x1.e3c872350e989p-78,
     0x1.0afcd509df3fcp-420, 0.0, 0x1.298c207c798b7p-425, 0x1.f8db32e921fbbp-1003,
     0.0, 0x1.eb9b7648d5f22p-904, 0x1.a0a1b40b4ef4ep-1007, 0x1.54790692c829dp-391,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.072734c096784p-476, 0.0, 0x1.9425da09d7569p-156,
     0.0, 0x1.3b993d5bb5f4p-445, 0.0, 0x1.2041301e05e9cp-404, 0x1.fd556516fd592p-314,
     0.0, 0.0, 0.0, 0.0, 0x1.e5f5f34c7bc04p-591, 0x1.49382c1a1efc4p-526, 0.0, 0.0,
     0.0, 0x1.6afa94444cbf4p-338, 0x1.f340420bb54d6p-318, 0x1.fefbc0d3a61a6p-249, 0.0,
     0.0, 0x1.933b3497d549cp-348, 0.0, 0.0, 0.0, 0x1.edab392866e6cp-896, 0.0,
     0x1.093af587dc7adp-503, 0x1.d297821bbc2d2p-60, 0x1.4852229c8ee94p-182, 0.0, 0.0,
     0.0, 0.0, 0x1.72305b90c4f5ep-258, 0.0, 0x1.8df7efe43b264p-988, 0.0, 0.0, 0.0,
     0x1.adca2312245e7p-749, 0.0, 0.0, 0x1.9ebce86360808p-507, 0x1.0b048fac03c5p-204,
     0x1.63d84a9e9a628p-383, 0.0, 0.0, 0x1.460f4f2bffa71p-729, 0.0,
     0x1.502e77c03d479p-950, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.472f5931159e1p-73,
     0x1.464d6aa43dc48p-964, 0.0, 0x1.286b6de6ec549p-445, 0x1.84d419e69c2d7p-875, 0.0,
     0x1.58c8ba34d5158p-148, 0x1.e7b87867aed27p-141, 0x1.7ccd156e895f1p-256, 0.0, 0.0,
     0x1.2fc0bc85794d4p-846, 0x1.eae71698af8e1p-385, 0.0, 0x1.7ecdb2e410666p-117,
     0x1.7906f821a705ap-877, 0.0, 0.0, 0x1.6f3de8fea0a0ep-417, 0x1.57e10755de9e6p-754,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fea2a873b557p-428, 0.0, 0.0, 0.0, 0.0,
     0x1.2840001c2e8bbp-938, 0x1.eb4995a9bcec5p-91, 0.0, 0.0, 0x1.d115a710bafacp-282,
     0x1.9fac4b993d1cp-200, 0.0, 0x1.576aeb9cc7c5bp-709, 0.0, 0.0, 0.0,
     0x1.a02ead4e389dep-431, 0.0, 0.0, 0x1.2ad0f8ce726b7p-442, 0.0,
     0x1.027f3bf76054dp-581, 0.0, 0x1.980e5c31eb197p-523, 0.0, 0x1.3a17970c3ea86p-996,
     0x1.e2bacf1b1546cp-650, 0.0, 0.0, 0x1.b895e608fd428p-412, 0.0,
     0x1.7b81bf71255c1p-978, 0x1.1bae28371d363p-19, 0.0, 0x1.95e0df0b8625dp-252,
     0x1.c16bb3e876dfap-455, 0.0, 0x1.2b053c78c3deep-750, 0x1.b5dd0daa679dbp-264, 0.0,
     0x1.b620301c32c17p-1018, 0.0, 0x1.32a67cf84248ep-783, 0x1.a7a1d66b3dab3p-636,
     0.0, 0.0, 0.0, 0.0, 0x1.313ca2f10e38fp-874, 0x1.54a5e7fcae9d9p-933, 0.0, 0.0,
     0x1.05927e8c0500dp-385, 0.0, 0.0, 0.0, 0x1.b34975d968d1cp-998, 0.0,
     0x1.952d195b465d4p-621, 0.0, 0.0, 0x1.8f89ff5e73464p-651, 0.0, 0.0,
     0x1.2a0546f381626p-20, 0.0, 0x1.31dd8f0a14091p-653, 0x1.c6a3687c3ac5cp-853,
     0x1.8f8c7f7ddaed6p-395, 0x1.b9d682afe6eb7p-420, 0.0, 0.0, 0x1.c8cc321a88f5fp-479,
     0.0, 0x1.b268cd6cbe6e5p-412, 0x1.b1389ab50cf4cp-564, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.473977e1cfec8p-97, 0.0, 0x1.84e6730c7c353p-635, 0x1.aaf1b6b548bd5p-929,
     0.0, 0x1.40824f141da7cp-620, 0x1.d3ea69e1bdf41p-271, 0x1.e93122692203ap-496, 0.0,
     0.0, 0x1.581dca8fc55a1p-650, 0x1.7d3168df95836p-268, 0.0, 0x1.8797ae6b726c7p-513,
     0x1.27077d04abebcp-457, 0x1.4cf624ed6bbc3p-189, 0x1.cec93fda0b7e7p-889, 0.0,
     0x1.49ae1ec98e6d9p-880, 0.0, 0.0, 0x1.2ecb852c7dec7p-749, 0x1.cd732244ce7cep-350,
     0.0, 0x1.bc0d3fc348ac3p-850, 0.0, 0x1.1dd93dc308d0ep-879, 0.0, 0.0,
     0x1.2d6f35b969667p-713, 0.0, 0x1.2b5ea6d46b31fp-92, 0x1.6851c156fad5p-544, 0.0,
     0x1.b8cb394b7019ep-89, 0x1.31dd83e2a2c82p-420, 0x1.d89c08ca1c512p-665,
     0x1.017fdf5775457p-510, 0.0, 0.0, 0x1.d2cfc95988bc6p-784, 0.0,
     0x1.97843a8010a97p-631, 0x1.c28242e33642dp-684, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d424700ca83e4p-546, 0.0, 0x1.4b7bf2799848ap-718, 0x1.a7085aa44c06ap-583, 0.0,
     0x1.d0aa18de931aep-450, 0x1.eb17d2f13833bp-809, 0.0, 0.0, 0.0, 0.0,
     0x1.602e0097a082dp-936, 0.0, 0.0, 0.0, 0x1.c5e63c2c79d0bp-712, 0.0,
     0x1.8bb3e9391d801p-3, 0x1.bb6eba1744561p-213, 0x1.ea8fed45e0877p-797, 0.0, 0.0,
     0.0, 0x1.b52ac8d0c726ep-662, 0.0, 0x1.be447e2684a42p-158, 0.0,
     0x1.90a6e8de19456p-667, 0.0, 0x1.cede59815518fp-615, 0.0, 0.0,
     0x1.b89ebb7479319p-281, 0.0, 0.0, 0x1.1d12b3879b1b7p-506, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.5da96837a1bb9p-604, 0x1.fda8f62e81b28p-338, 0x1.427450df3d578p-720,
     0.0, 0.0, 0x1.9ae6dc586c1b2p-753, 0.0, 0x1.4ca1090fc3f6fp-521,
     0x1.e91ddd9abd644p-517, 0.0, 0x1.35c03db6928f2p-724, 0x1.6f16033508aa1p-745,
     0x1.5821f700e425dp-449, 0x1.a98466aaf6f7ap-803, 0x1.90f7ad389b7a4p-616, 0.0,
     0x1.86ff7c95e4778p-255, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.524f3a53cdcd3p-634, 0x1.d576d4210734ep-304, 0.0, 0.0, 0x1.93b2d2de72113p-48,
     0.0, 0.0, 0x1.599fb904c63d4p-157, 0x1.13482c36e4425p-1018,
     0x1.491ee297d0796p-205, 0x1.4837b7b11419ap-860, 0.0, 0x1.9c354378b3007p-671,
     0x1.3db9c40b50e96p-944, 0.0, 0.0, 0x1.c61b15e147f94p-409, 0x1.85f32de3f0c29p-445,
     0.0, 0.0, 0.0, 0x1.8666aad60e264p-878, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.abd31c471bdb3p-577, 0.0, 0.0, 0x1.dff853d56fbf1p-984, 0.0,
     0x1.47d7622c83c91p-437, 0x1.8aa5415cd8bfap-1000, 0x1.e22b17330cb35p-323,
     0x1.3cc38d983bddfp-724, 0x1.3367dab720cc6p-260, 0x1.fc072e1892e5ep-558, 0.0,
     0x1.c1835fbddc414p-632, 0x1.2434e1badac12p-29, 0x1.9ded48a870cb9p-995, 0.0,
     0x1.2a13cfbed668bp-342, 0.0, 0.0, 0x1.3ff91701292efp-55, 0.0,
     0x1.29abfbb12f45cp-269, 0.0, 0x1.24f0899c379f8p-931, 0x1.38b6acf97a38ap-602,
     0x1.222af8188c5c4p-211, 0x1.0e8291d0d010ep-753, 0x1.2edf1460a5555p-92, 0.0,
     0x1.f9b6a8ea4be7bp-512, 0x1.c935b7265752cp-818, 0.0, 0.0, 0.0,
     0x1.7fcc50910f9a6p-391, 0.0, 0x1.bf392fded84acp-306, 0.0, 0.0, 0.0,
     0x1.152dfc7ac34eap-258, 0x1.f0fca00f98d5ap-820, 0.0, 0x1.cac8d96b303b9p-221,
     0x1.529ea0cdd923ap-974, 0x1.c6a9b3b767de4p-691, 0.0, 0.0, 0x1.5f98236aaa9fbp-985,
     0.0, 0.0, 0x1.0294eb294374ap-981, 0x1.8b376f27ad799p-590, 0.0,
     0x1.522cb4239c90ap-984, 0x1.5f31df5354169p-61, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.06b6cda3a849ep-667, 0x1.bc303c28ebfe6p-63, 0x1.7e4f68d3c0bf6p-1011, 0.0, 0.0,
     0x1.43cbc5db73d42p-706, 0x1.2331a5abfab3ap-15, 0.0, 0x1.02f0a422002bp-269,
     0x1.c4598622c6267p-620, 0x1.9e46aa8e935fcp-312, 0x1.c15d975c5fa2cp-8,
     0x1.c17242af5159fp-508, 0x1.5ccb5ca203ee3p-323, 0.0, 0.0, 0x1.6d5805671d36cp-564,
     0x1.f491c5393891fp-896, 0x1.41b516a897d9bp-731, 0x1.815e45d37090fp-297, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.0ef014da9b8d5p-392, 0x1.fea837adf73d6p-433, 0.0,
     0x1.826c8db17f4p-87, 0x1.9e40d600dd4c7p-876, 0x1.38d8ecb4671d8p-324, 0.0, 0.0,
     0x1.1c669e631d9fep-470, 0x1.f4ebc63c490e9p-186, 0.0, 0.0, 0.0,
     0x1.07e8f0c06fd04p-551, 0.0, 0x1.b2278155f6098p-783, 0x1.668797dc62bc7p-667,
     0x1.4ba2aa70f22b8p-695, 0.0, 0.0, 0x1.8d611b5068993p-434, 0.0, 0.0,
     0x1.4a8e05495a0a8p-505, 0x1.12f1562107834p-840, 0x1.9bce2cf1ee70fp-765, 0.0, 0.0,
     0x1.625a321cead4ep-325, 0.0, 0.0, 0.0, 0x1.1dc8d1bd6c123p-735, 0.0,
     0x1.1ed662dd74f64p-587, 0.0, 0x1.be85914cbb11bp-246, 0x1.cf83098815005p-178,
     0x1.345d829179d02p-524, 0x1.606f7fb2fe047p-577, 0x1.6369501005ec3p-41,
     0x1.2ab002b00ca0bp-220, 0x1.572c7db282062p-450, 0x1.1e93defdde42ep-332,
     0x1.9d23c12f9408p-401, 0.0, 0x1.40058d2dc3e5cp-343, 0.0, 0.0,
     0x1.2daf11d76676fp-44, 0x1.f2eabad7edfaep-880, 0.0, 0.0, 0x1.2accb85ffc61cp-467,
     0.0, 0x1.56fb6a8429753p-145, 0.0, 0.0, 0.0, 0.0, 0x1.58f26de7b496ap-659,
     0x1.712a09d5d4aa1p-327, 0x1.e5e0c3fa8c34dp-957, 0x1.cb54427013e99p-123, 0.0,
     0x1.54d3ca65e2685p-449, 0.0, 0x1.ea7cac17b22a2p-284, 0x1.da391ef6d4c65p-918, 0.0,
     0.0, 0.0, 0.0, 0x1.b0d8762bf1e7p-164, 0x1.d53fd03c96cbcp-86, 0.0,
     0x1.fe673421f8093p-748, 0x1.2d4903dcf83afp-346, 0.0, 0x1.0fecb2894c536p-615, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.ee988c3e5a7ddp-310, 0.0, 0.0, 0x1.fa48eff91ac8dp-755,
     0x1.097b582d4701p-920, 0.0, 0.0, 0x1.764aaadd4d5fep-464, 0x1.b112ae185e8d8p-752,
     0.0, 0x1.73c8965f51d45p-913, 0.0, 0.0, 0.0, 0x1.b30c44707881bp-396,
     0x1.b55890296fe28p-301, 0x1.079c2000597efp-1000, 0x1.e7ade50c1c5ddp-55,
     0x1.aa852e3112642p-134, 0.0, 0.0, 0.0, 0x1.3d50cc0775c56p-156, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4fb8c835b52a1p-885, 0.0, 0.0, 0.0, 0x1.03d122bc49ac6p-340,
     0x1.3f7bb966f2645p-912, 0.0, 0.0, 0x1.cdeabde09ef3ep-973, 0x1.72c40ed119ccp-560,
     0x1.2554f1fc6bac3p-165, 0x1.7b26f077e0b0bp-937, 0x1.9df7b4ce6d023p-246,
     0x1.9888336f577d9p-434, 0x1.0648a89fba16fp-917, 0x1.91d7e6cd955bbp-593, 0.0, 0.0,
     0x1.e35d6aea23911p-113, 0.0, 0.0, 0x1.25afe737cc763p-911, 0x1.a621dcf3876a8p-22,
     0x1.ff98e4ef6fe19p-453, 0.0, 0.0, 0x1.677dcf68d3c2cp-414, 0x1.89ae7ea6a66e1p-778,
     0.0, 0.0, 0x1.54e0ef8ae199ep-551, 0x1.2fa4637481d56p-636, 0.0,
     0x1.1de33d4fb3ebcp-670, 0x1.41c2a0bab26d7p-626, 0x1.5bc8069bf76a7p-580, 0.0, 0.0,
     0.0, 0x1.3a602e02a10d4p-730, 0x1.79e1a478bc605p-367, 0.0, 0.0,
     0x1.196f86d889e9cp-752, 0x1.8b04248bd36e1p-872, 0.0, 0x1.b10a2017d36c8p-540, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2f1af3ffa77e1p-303, 0x1.67e1f43cc65afp-93,
     0.0, 0x1.b89022a7348eep-826, 0.0, 0x1.ce3a1773efd0fp-578, 0x1.a8bd6fdab729dp-695,
     0x1.53c1a5db1e378p-342, 0.0, 0.0, 0x1.92d345b93a83ap-545, 0x1.9d6b7cc62000bp-504,
     0x1.dc29d59a39242p-218, 0.0, 0x1.8149d81ee790cp-287, 0x1.fdc6017409f1p-810,
     0x1.e50abc3b3d316p-770, 0x1.09ba24fc7975cp-856, 0x1.db18d9b55db6ep-213, 0.0, 0.0,
     0x1.cd1267141c9aap-911
};

double bench_wrapper();
int32_t main();
double bench_wrapper(){
    Sleef_double_2 global_bench_acc;
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
        Sleef_double_2 bench_acc;
        int32_t i;
        double tmp0;
        double tmp1;
        double tmp2;
        double tmp3;
        double tmp4;
        double tmp5;
        Sleef_double_2 tmp6;
        int32_t tmp7;

        i = INT32_C(0);
        bench_acc = external_bench_wrapper_cst1;

        for (;(i < INT32_C(1001));){
            double tmp0;
            Sleef_double_2 tmp1;
            double tmp2;
            double tmp3;
            double tmp4;
            double tmp5;
            double tmp6;
            double tmp7;
            Sleef_double_2 tmp8;
            int32_t tmp9;

            tmp0 = external_bench_wrapper_input_table_arg0[i];
            tmp1 = Sleef_finz_sincosd1_u10purecfma(tmp0);
            external_bench_wrapper_output_table[i] = tmp1;
            tmp2 = bench_acc.x;
            tmp3 = tmp1.x;
            tmp4 = tmp2 + tmp3;
            tmp5 = bench_acc.y;
            tmp6 = tmp1.y;
            tmp7 = tmp5 + tmp6;
            tmp8 = ((Sleef_double_2) {.x=tmp4, .y=tmp7});
            bench_acc = tmp8;
            tmp9 = i + INT32_C(1);
            i = tmp9;
        }
        tmp0 = global_bench_acc.x;
        tmp1 = bench_acc.x;
        tmp2 = tmp0 + tmp1;
        tmp3 = global_bench_acc.y;
        tmp4 = bench_acc.y;
        tmp5 = tmp3 + tmp4;
        tmp6 = ((Sleef_double_2) {.x=tmp2, .y=tmp5});
        global_bench_acc = tmp6;
        tmp7 = j + INT32_C(1);
        j = tmp7;
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
    printf("Sleef_finz_sincosd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_sincosd1_u10purecfma bench acc {.x=%a, .y=%a}\n", global_bench_acc.x, global_bench_acc.y );
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
