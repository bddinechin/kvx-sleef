/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_sqrtd2_u05kvx.c --function \
 *     Sleef_finz_sqrtd2_u05kvx --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --vector-size 2 \
 *     --function-input-vector-size 2 --bench --no-embedded-bin --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <string.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


static const ml_double2_t external_bench_wrapper_cst = {0.0, 0.0};
static const ml_double2_t external_bench_wrapper_cst1 = {0.0, 0.0};
volatile double external_bench_wrapper_output_table[1002];
static const double external_bench_wrapper_input_table_arg0[1002]  = {
     0.0, 0.0, 0x1.aab731d0786f7p-859, 0.0, 0x1.4b295b81315a6p-815,
     0x1.a2a2260f0c75p-48, 0.0, 0x1.6fa4aeaeb6a48p-218, 0x1.6fb92f4584b8cp-997, 0.0,
     0x1.4b47fc1a7b9d6p-312, 0x1.f8a73bc67a416p-713, 0x1.165ccfc790cf2p-610, 0.0, 0.0,
     0.0, 0.0, 0x1.6d2c355766536p-982, 0x1.4ae51ff0b8e64p-338, 0.0,
     0x1.e745b819b92f6p-99, 0.0, 0.0, 0x1.ef02b0620d956p-648, 0.0, 0.0, 0.0,
     0x1.de1999463b4a4p-867, 0x1.fc00820226272p-624, 0x1.b444d940800eap-353,
     0x1.542a8366b9c5bp-276, 0x1.1a36e33286f03p-337, 0.0, 0.0,
     0x1.be294504f7562p-1005, 0x1.381366b373d1dp-247, 0x1.b86cbdf4081b7p-382,
     0x1.054a9de47d228p-404, 0x1.711d37da30106p-686, 0x1.1abfa4b1ca1bep-576,
     0x1.885f332232c08p-366, 0x1.22951fed85261p-155, 0x1.d9bb00a6b0b5dp-962,
     0x1.f58b9138fded4p-504, 0.0, 0x1.2308701e6c893p-41, 0x1.3649d795f8149p-971, 0.0,
     0x1.589bcbcde954ep-581, 0.0, 0x1.2da95e338552bp-209, 0x1.64700f213f889p-975, 0.0,
     0.0, 0.0, 0x1.72fef52ebdf59p-219, 0.0, 0.0, 0.0, 0.0, 0x1.5567ffe54eb49p-800,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0a96c17e73e02p-590, 0x1.a8d38e70a8304p-945,
     0x1.86b3f538ccc9cp-668, 0x1.5b22533ffdd9ap-679, 0.0, 0x1.2ef600d68841ap-239,
     0x1.1dbe70b1ad698p-824, 0.0, 0.0, 0x1.8c2264d046e9bp-353, 0x1.8d5fff0fe506fp-51,
     0.0, 0.0, 0.0, 0x1.9596bd584fa36p-1001, 0x1.c50650c95c8aep-756, 0.0, 0.0, 0.0,
     0x1.d8447a51af0cap-648, 0x1.e47c51513d9e2p-598, 0x1.1e01a569e2666p-490, 0.0,
     0x1.f8c360716b33bp-879, 0.0, 0.0, 0x1.398cdbf135072p-352, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.7a5ecd46f8fe1p-332, 0x1.20a8a6344711p-880, 0.0, 0.0, 0.0,
     0x1.443d9e00a01cbp-692, 0x1.583da976b278bp-480, 0x1.a83331cf5a35p-496, 0.0,
     0x1.8f1519ca0b7a6p-300, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b4d955cb03011p-313,
     0.0, 0x1.3ece8c1c9c076p-672, 0.0, 0.0, 0x1.364d7db8d74d2p-229,
     0x1.6a945194f4d83p-191, 0.0, 0x1.32264e51b7a6fp-75, 0x1.335ae93ea712p-183, 0.0,
     0x1.812cd88e21bf5p-418, 0x1.d63364060ee17p-994, 0x1.d9eb27b3d2594p-738, 0.0, 0.0,
     0x1.0241ab3c386f4p-688, 0x1.d7381a157af54p-286, 0.0, 0x1.a6b623c949dfbp-947,
     0x1.c87d01529e371p-351, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7df10745a92dfp-963, 0.0, 0x1.2b8989c47b1afp-189, 0.0, 0x1.c286087800bc5p-141,
     0x1.7c7a15d4e371bp-113, 0.0, 0.0, 0x1.2898ab3ca7813p-396, 0x1.c389e526c93e6p-724,
     0.0, 0x1.1c3afb0781ec8p-875, 0.0, 0.0, 0x1.4602569a5ec6bp-151,
     0x1.bc3a9506ff35cp-985, 0.0, 0x1.be4ac06933de8p-144, 0x1.68f45b06ec715p-666, 0.0,
     0.0, 0.0, 0x1.749f2c00b932ap-115, 0.0, 0x1.69c7bfe31b18ep-151,
     0x1.3176bd44dd535p-1022, 0.0, 0x1.c63e4cade4417p-18, 0.0, 0x1.ff093e10123a3p-121,
     0x1.fe98ee9ff9ebp-239, 0x1.9f3229b8df5e5p-525, 0x1.6ad4ca6bf1856p-821, 0.0, 0.0,
     0x1.4029cb337612p-786, 0.0, 0x1.2ccd1af06245fp-618, 0x1.538ad35e3058dp-262, 0.0,
     0x1.7dcecedca2515p-764, 0x1.e917103e7388p-573, 0.0, 0.0, 0.0, 0.0,
     0x1.33ad6d8b5f00cp-502, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.97ee0b0c86c3ep-741, 0.0,
     0.0, 0.0, 0x1.a213ef168f265p-545, 0x1.8411ed2e19a4fp-591, 0x1.ffd0019cec815p-780,
     0.0, 0.0, 0x1.16f3f7363762dp-812, 0x1.ad0ff9a07d17fp-820, 0.0,
     0x1.d7476e29f4777p-845, 0x1.742ad2f9710dep-822, 0.0, 0.0, 0x1.5d5b03b5197ffp-464,
     0x1.4bc59c1943acfp-286, 0.0, 0x1.c4800c75eb6afp-214, 0.0, 0.0,
     0x1.bc89fbb38338bp-524, 0.0, 0x1.b4fe6168ae04p-4, 0x1.72d5f57f3c9c5p-208, 0.0,
     0x1.ce00a41829f3cp-106, 0x1.4a78083daa571p-51, 0x1.eef4d5b3f7f06p-96,
     0x1.8869f1d294523p-25, 0.0, 0x1.7e4c87408d55bp-605, 0x1.fdf4ca5000f7fp-279,
     0x1.95d959aa5d619p-355, 0.0, 0x1.e814082c7062cp-154, 0.0, 0x1.7f5367e5f7055p-436,
     0x1.ee99a94d5ad2dp-849, 0.0, 0.0, 0x1.bca34c8ada9b1p-172, 0x1.6a365bf11e175p-466,
     0x1.22f47c92b24ep-770, 0.0, 0x1.cda98a2dd2a27p-214, 0.0, 0x1.7f4fdb3255fcep-224,
     0.0, 0.0, 0.0, 0x1.6507765ff311fp-432, 0x1.4495f2709891cp-832, 0.0,
     0x1.a6b2257e7e47dp-981, 0x1.2ad07b4fca22ep-797, 0.0, 0x1.09a982814784fp-420,
     0x1.f53a880729f29p-161, 0.0, 0.0, 0.0, 0x1.37f60b633d30fp-50, 0.0, 0.0,
     0x1.70dac9b1bd06dp-87, 0x1.41603e3a66a7ap-283, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.76cbc310937p-642, 0x1.535b8a1daf188p-644, 0.0, 0x1.1fad51f0e3a4ep-117,
     0x1.0d877c239be09p-919, 0.0, 0x1.58667e1ed6d3cp-755, 0.0, 0x1.bd235041c189ap-188,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ea3c1123aa8b5p-71, 0.0, 0x1.3560072e08878p-864,
     0x1.3f357b0796371p-701, 0x1.3613a8dc152c2p-703, 0.0, 0.0, 0x1.21ef5de6c8f8p-728,
     0x1.5f9fb30b449f4p-679, 0x1.4b2806033117p-881, 0x1.786056de9b5eap-390,
     0x1.6b6d063a2bf9cp-593, 0x1.77e41666a6e17p-75, 0x1.ca17a721fb83p-578,
     0x1.d03507c84a234p-357, 0x1.5d89c431af397p-634, 0.0, 0x1.5216902c0b50bp-313,
     0x1.edb64080f4537p-413, 0x1.819539d4ffc02p-350, 0.0, 0.0, 0.0,
     0x1.8d5d383d4035bp-654, 0.0, 0.0, 0x1.8fdfefb329b43p-783, 0.0,
     0x1.722d17a144483p-350, 0x1.1b0f4750e7d8ep-174, 0x1.e35306afd60a2p-852,
     0x1.7bd60919affbcp-914, 0x1.b4669191357fdp-78, 0.0, 0x1.048d485eef875p-977, 0.0,
     0.0, 0x1.95d0ec4b4b1a6p-413, 0.0, 0.0, 0x1.8e075f7a4866dp-767,
     0x1.9e63a47b11431p-323, 0.0, 0.0, 0x1.5c45a314d40dep-878, 0x1.19aa949167e2ep-925,
     0x1.6b82fdfcbc08dp-259, 0x1.6eb9165fb3b0bp-930, 0x1.6aec4d77b14bdp-923,
     0x1.5429d533c4301p-88, 0.0, 0.0, 0x1.9a12feab7a36fp-271, 0x1.cdbc02cf9d97cp-607,
     0.0, 0x1.f32df5eb4f8d1p-261, 0.0, 0x1.ad079fdfb9c92p-153, 0.0, 0.0,
     0x1.7dbb275096d28p-89, 0x1.ca36fdece1672p-168, 0.0, 0.0, 0.0, 0.0,
     0x1.5605a697113d2p-486, 0x1.ba67495963076p-217, 0x1.dc62618af9e52p-798,
     0x1.64a3a42c096e8p-332, 0x1.cf205a6e218cbp-314, 0x1.4a3a787b55b9ap-135, 0.0,
     0x1.6716275cf4dfap-532, 0x1.1b817a215eff2p-992, 0x1.c34ca245424bbp-307, 0.0, 0.0,
     0x1.bfc946ec70b0cp-135, 0x1.0af563491340ep-612, 0x1.73a71a3808b81p-222, 0.0, 0.0,
     0.0, 0x1.f8cd302de8e7cp-603, 0x1.d26e23ed4441bp-434, 0x1.f7bd1ccf796cep-974,
     0x1.7b7e2ff646088p-478, 0x1.8946227436683p-46, 0.0, 0.0, 0x1.8881f5321fe99p-247,
     0.0, 0x1.d473a324db692p-273, 0.0, 0x1.f7fe465e43e36p-135, 0x1.b12b47e886dc3p-824,
     0x1.93283550caa8p-57, 0.0, 0x1.9953b35041435p-257, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0cd3cd27de01fp-51, 0x1.8b1f311982befp-315, 0x1.ba0cd54a0f36bp-889,
     0x1.e7d215f66737bp-859, 0x1.59e380d52fc8dp-551, 0.0, 0x1.8a62c401104d5p-5, 0.0,
     0.0, 0x1.24347fd308e9p-996, 0.0, 0x1.faac2b395e06bp-170, 0x1.2ef9887a5ac62p-151,
     0.0, 0.0, 0x1.6739b1728f84dp-437, 0.0, 0x1.2d852e2ff389ep-295,
     0x1.b4f003d71502p-990, 0x1.93ea6e043f9ebp-334, 0x1.2e5671ac6ca58p-382, 0.0, 0.0,
     0.0, 0x1.8c513af17fef3p-942, 0.0, 0.0, 0x1.493919d7e2c49p-682,
     0x1.81d427da421b2p-691, 0.0, 0.0, 0.0, 0x1.4fe88116de5c6p-506, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d669cc12477b2p-829, 0.0, 0x1.adb218d3f1e08p-675,
     0.0, 0.0, 0.0, 0x1.e1430975023aep-192, 0.0, 0.0, 0x1.76b25ce0eb353p-628,
     0x1.3823b896bf0d3p-176, 0.0, 0x1.8ab81c037ac44p-542, 0.0, 0x1.62549eb2ec3cp-561,
     0.0, 0x1.e1355d53e7ab8p-477, 0x1.ee48f4ed4c46cp-266, 0x1.e2b028d3375eap-300, 0.0,
     0x1.bd6a62736c397p-235, 0.0, 0.0, 0.0, 0x1.21e970d8b625ep-702,
     0x1.fab8b4953d673p-210, 0.0, 0x1.0bebde1a483bap-729, 0x1.9a8d31531e496p-161, 0.0,
     0.0, 0x1.6b715fab38e82p-65, 0.0, 0x1.d010b93169e87p-553, 0.0,
     0x1.9510abd261887p-450, 0.0, 0.0, 0x1.dc48c04b59fc2p-855, 0.0,
     0x1.e1c978963579ep-221, 0.0, 0.0, 0x1.76ed6e66223eep-255, 0x1.e52cd5418ca9fp-475,
     0.0, 0x1.c34e83be63333p-103, 0.0, 0.0, 0.0, 0x1.7e5b3374c95c7p-329, 0.0,
     0x1.34eec5609a429p-134, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dcc4849cbe494p-411,
     0.0, 0x1.37de259bb9dfap-1011, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.538d75e933a3bp-17, 0x1.bcfeac3b6fb15p-838, 0.0, 0.0, 0x1.a670b0500bedcp-105,
     0.0, 0.0, 0.0, 0.0, 0x1.758ba73b7028ep-424, 0.0, 0x1.23d4535df473ep-566,
     0x1.147d220b9b09p-606, 0.0, 0x1.d530bdb7d0f49p-57, 0.0, 0x1.ca81465b131cdp-53,
     0x1.dc0285999409ep-958, 0.0, 0x1.cd8ce759a5479p-742, 0x1.96533432c23d7p-420, 0.0,
     0x1.460856285cfa5p-545, 0.0, 0.0, 0.0, 0.0, 0x1.93a9468b9edfap-328,
     0x1.2a7bfc8e96725p-189, 0.0, 0x1.1b91f4076bb81p-572, 0x1.a50bc1479032p-104,
     0x1.ac3122e6a872p-420, 0.0, 0x1.465c56e15e846p-349, 0x1.2fb341de175c5p-665,
     0x1.d05f61a64a2c6p-352, 0.0, 0x1.aa98a3a5a4afep-798, 0x1.3f980df4287b9p-366, 0.0,
     0.0, 0.0, 0x1.a66a04b60f87ep-563, 0x1.f02226226bc33p-545, 0x1.22181aef2c522p-788,
     0.0, 0x1.a85dab2e079fdp-986, 0x1.d643bbbdfba6bp-564, 0x1.18bab811c980ap-764,
     0x1.daac9c23cde6ep-937, 0.0, 0.0, 0x1.046f16fd40a6bp-262, 0.0, 0.0, 0.0,
     0x1.a4d2b12bfeb69p-874, 0.0, 0.0, 0.0, 0.0, 0x1.520624bb3a844p-83, 0.0,
     0x1.f199761429c3dp-848, 0x1.ad209fc186d8p-586, 0.0, 0x1.677cabcef6d9bp-435, 0.0,
     0x1.c563b74a75302p-988, 0.0, 0x1.42d0ab46e52d2p-624, 0x1.c3e62fcc00d03p-171,
     0x1.a1361301ae454p-577, 0.0, 0x1.cdb9f3cdde9ecp-686, 0x1.842c3d955b89cp-873, 0.0,
     0x1.222757ea706e8p-470, 0.0, 0.0, 0x1.9c4ab4a50d945p-474, 0.0,
     0x1.9e585f878d28ap-194, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fd2167e6be79ep-1011, 0.0,
     0x1.e6f10d846fc45p-454, 0.0, 0x1.5a3429b70ab9bp-315, 0x1.d3459512b5c92p-917,
     0x1.64b68f96ad407p-613, 0.0, 0.0, 0.0, 0.0, 0x1.1a549a84d9349p-442, 0.0,
     0x1.8fc1da9db3f2fp-181, 0x1.ffb94df5a00e3p-992, 0x1.8300a1b99621dp-30, 0.0, 0.0,
     0.0, 0x1.3a94056634a35p-394, 0x1.c8ec8d523204fp-363, 0.0, 0x1.f9639eca1f3d6p-804,
     0x1.e293e435c0bfap-186, 0.0, 0x1.3b2d70beaa5a2p-327, 0.0, 0x1.f8560c377ea49p-46,
     0x1.da23184f0e8d5p-741, 0x1.b815224fd8c4cp-593, 0.0, 0.0, 0.0, 0.0,
     0x1.6feb7c9a8465fp-770, 0x1.d9b84ce8ca77ep-71, 0.0, 0x1.3630f7ab7a91fp-1005,
     0x1.3f0760b9f3a87p-317, 0x1.746d2d3e51795p-878, 0x1.03fac4aa7bedap-336,
     0x1.b1537bc0ebf0fp-713, 0x1.0d61ff5030c13p-867, 0x1.19d3f1d8432d7p-122, 0.0, 0.0,
     0.0, 0x1.470617285ffd3p-972, 0.0, 0x1.b7064facaef5cp-184, 0.0, 0.0,
     0x1.a1cf0f40e3722p-818, 0.0, 0.0, 0x1.25328077ff2cep-898, 0.0, 0.0, 0.0,
     0x1.510324818128dp-648, 0x1.ef7e310b6e4b7p-198, 0x1.0193766f4f18dp-50, 0.0, 0.0,
     0.0, 0x1.d465f6aac6b96p-823, 0x1.bf4b61376289bp-243, 0x1.5cf0e4e2c61d4p-547,
     0x1.5c971926ae86cp-96, 0x1.e4953a87f25c1p-648, 0.0, 0x1.856fb1473a4efp-676,
     0x1.75dbef4b5faddp-987, 0.0, 0x1.0af6fef334da9p-14, 0x1.f60cd640e9ba7p-181, 0.0,
     0x1.6a00f1edf4b52p-230, 0x1.f6d6a61cf22f9p-667, 0x1.fa9c9517c2087p-781,
     0x1.86fcf32bc1eddp-823, 0.0, 0.0, 0x1.907f629e6b753p-610, 0.0, 0.0,
     0x1.ad48a2ccdb64p-733, 0.0, 0x1.2553c8e859c76p-942, 0x1.8c7e8f81ff8aep-728, 0.0,
     0x1.99573f754496ap-302, 0.0, 0.0, 0x1.b3e2a5589a3ep-886, 0x1.68a36513a3847p-983,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ec5b81e294579p-287,
     0x1.2a2946c9f72c5p-735, 0x1.aef27dba2cb34p-104, 0x1.ee67254165e1ep-331,
     0x1.0fa904196cc35p-298, 0x1.8d4d67753fc92p-995, 0.0, 0.0, 0x1.1378700d4ddebp-974,
     0.0, 0.0, 0x1.9d0e5401c3239p-843, 0x1.777019de68d68p-358, 0.0, 0.0, 0.0,
     0x1.665386ef60c43p-572, 0.0, 0.0, 0.0, 0x1.1b0b4329c9f3cp-750,
     0x1.a2dc6273a38ep-635, 0x1.3eb4e2f19f814p-786, 0x1.ed719b8b3f5f5p-885, 0.0,
     0x1.96d4a1d0c4569p-944, 0x1.170645eaa4b77p-895, 0.0, 0.0, 0.0,
     0x1.da4d0419373f6p-145, 0x1.c5234595a79a1p-305, 0x1.308e1f598f40bp-758, 0.0, 0.0,
     0x1.28f88496a3c77p-614, 0x1.3c2e0bc901266p-487, 0x1.2d5aa37a0a097p-790, 0.0,
     0x1.dc6f8ed10112ap-466, 0.0, 0x1.58bfa224f9d5ap-839, 0.0, 0x1.85b4b111c8cadp-96,
     0.0, 0.0, 0x1.440c844f6a272p-348, 0x1.9b05b68739e77p-518, 0.0,
     0x1.9ecca7f715026p-976, 0x1.ea5b0e778e54bp-356, 0.0, 0.0, 0.0, 0.0,
     0x1.857b013d00902p-971, 0.0, 0.0, 0x1.973a827ef2147p-846, 0.0,
     0x1.81b478edbd617p-629, 0.0, 0x1.4a8be0c4d862fp-195, 0.0, 0.0, 0.0,
     0x1.0da752ab7026p-265, 0x1.439169fb29922p-633, 0x1.a0c310495aaa1p-925,
     0x1.2510066e1d916p-530, 0x1.34c9ae4cbe434p-966, 0x1.26d540b3ed286p-613, 0.0,
     0x1.6e3f808a390cdp-867, 0.0, 0.0, 0.0, 0x1.ed2861bd5d0cdp-447, 0.0, 0.0,
     0x1.58b8be22cffdbp-89, 0.0, 0x1.b49adc8d317cep-1001, 0x1.331117d73e801p-1018,
     0x1.bec030a8955a4p-179, 0.0, 0x1.7b4eaed25b646p-864, 0x1.0b88fc07f60a7p-459, 0.0,
     0x1.f1509760b93e2p-207, 0x1.2c4c0c787a56bp-342, 0.0, 0.0, 0.0, 0.0,
     0x1.4dc9ba1765ac4p-795, 0.0, 0x1.32f3507ff53e5p-582, 0x1.959792b071554p-388,
     0x1.0ee8aeba51652p-452, 0x1.498ba19b4e3dap-776, 0.0, 0.0, 0.0,
     0x1.f349c3b570c28p-892, 0x1.cdd7c3786758ap-880, 0x1.1bedc9013945dp-192, 0.0,
     0x1.262f2fa6418f7p-840, 0.0, 0x1.4e79b07beb038p-302, 0x1.30a0977316e6fp-160,
     0x1.84e46c7fa4eap-203, 0.0, 0.0, 0x1.dcc647ce4e7p-229, 0.0,
     0x1.5cc2a8cb5a555p-82, 0x1.115c5e54c7e4p-635, 0x1.c22b5cd3fea72p-1019,
     0x1.c926197a0755fp-304, 0x1.53b8d9f1340b8p-432, 0x1.964bb5e7f88d1p-952, 0.0,
     0x1.8d40b82ea46bap-528, 0.0, 0x1.a0cf270adcb52p-977, 0.0, 0x1.95315742769dcp-980,
     0x1.68a7c3a8ad9a5p-350, 0.0, 0x1.5ec2e17e957c7p-555, 0x1.98c6ae37223d9p-759, 0.0,
     0x1.c36dc6f634302p-660, 0x1.f0a552c82c7bcp-524, 0.0, 0.0, 0x1.c04f94a48bbe2p-471,
     0.0, 0x1.9d4dbc68ca175p-526, 0x1.7ca13f9756225p-823, 0.0, 0x1.a195501afef65p-497,
     0.0, 0x1.bdfe377df38fcp-57, 0x1.e577a3f0dd533p-498, 0.0, 0.0, 0.0,
     0x1.f6fd507975374p-377, 0.0, 0.0, 0x1.f1c4da2b589d9p-623, 0x1.3d6c8c54afcacp-395,
     0x1.2a2f518385eacp-401, 0.0, 0x1.39d332003c25bp-490, 0.0, 0x1.6aa479f6fb99p-751,
     0.0, 0x1.77fa7e2f254p-707, 0x1.ec76bd9b10f7p-228, 0x1.a11d24d1e9fbp-381,
     0x1.72e393dcd4632p-855, 0.0, 0.0, 0x1.51107c306279fp-995, 0.0,
     0x1.746df29e0cc99p-338, 0.0, 0.0, 0x1.780663cafa95ap-921, 0.0,
     0x1.e537652af4e96p-367, 0.0, 0x1.b969bfa0331b9p-343, 0x1.d6d874b854fep-703, 0.0,
     0x1.5d5c3b85d0457p-972, 0.0, 0.0, 0.0, 0.0, 0x1.514971a667b64p-1015, 0.0,
     0x1.61851555f805p-236, 0x1.cf11f3f4d9cc3p-1009, 0.0, 0x1.4e3b4ca8bfb08p-537, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6e9d22ca1b51cp-723, 0x1.d29b5979a136ep-281,
     0x1.04d5d34aae4aap-6, 0x1.10965b3783b93p-409, 0.0, 0x1.9067d4209244p-308, 0.0,
     0x1.65f83fe4cfe52p-723, 0x1.71e63d02e921bp-712, 0x1.cbd9f787abfbap-657,
     0x1.caabb0d02b9e8p-248, 0x1.70524beaa0025p-805, 0.0, 0.0, 0x1.4b1f5a840c59fp-699,
     0x1.64ed7b907d9f4p-87, 0.0, 0x1.4a8eba35d6ab1p-1007, 0.0, 0x1.0e315a444c6fep-766,
     0x1.b0e629afe519ep-592, 0.0, 0x1.1d199c032ebebp-421, 0.0, 0.0, 0.0,
     0x1.da877a11f39cfp-665, 0x1.8553c56f9143p-606, 0.0, 0x1.ee0a3626a5cfep-13, 0.0,
     0.0, 0.0, 0x1.e31a8200c6a18p-130, 0.0, 0x1.d6cb2c6eafdd3p-63, 0.0, 0.0,
     0x1.7b8f4306d1e97p-88, 0x1.6636c3700b346p-681, 0.0, 0x1.d9cec5926612p-757,
     0x1.713584aaf1a9bp-410, 0.0, 0.0, 0.0, 0x1.b6902e0689111p-672,
     0x1.49594af298aabp-708, 0.0, 0.0, 0x1.33016c2ce760ep-172, 0.0, 0.0, 0.0,
     0x1.e631d84013c1p-167, 0x1.59f89b797d736p-1020, 0x1.dc981a0bf396dp-876,
     0x1.e5054bcc91fbap-1007, 0x1.46b36652fd3bep-174, 0.0, 0x1.8e66c95c58acfp-510,
     0.0, 0.0, 0.0, 0x1.a24087b5b037cp-863, 0x1.f4de8aea8f131p-100, 0.0, 0.0,
     0x1.b2ce3e4c5ad9p-1012, 0.0, 0.0, 0.0, 0x1.f8251f99563e6p-362, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98887eba89ea8p-296, 0.0, 0x1.9dafabec87388p-190,
     0.0, 0.0, 0x1.b81b2b0305309p-433, 0.0, 0.0, 0.0, 0x1.c07f9d9c7be76p-29,
     0x1.50a87fde450b1p-715, 0x1.42c1d13d028eap-712, 0.0, 0.0, 0x1.20925a94367cep-168,
     0.0, 0x1.056831a9632bfp-1003, 0x1.b20a329ff50cfp-921, 0.0,
     0x1.7d691421b742cp-148, 0.0, 0.0, 0.0, 0x1.429a2ada6e909p-90, 0.0, 0.0,
     0x1.651746c1d6223p-160, 0.0, 0.0, 0x1.683285e3c8461p-977, 0x1.7e5cd7ba3b9dep-432,
     0.0, 0.0
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
    
    __cos_counter_start(0, _COS_PM_PCC);
    global_bench_acc = external_bench_wrapper_cst;
    tmp = __cos_counter_num(0);
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
            tmp1 = Sleef_finz_sqrtd2_u05kvx(tmp0);
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
    tmp1 = __cos_counter_num(0);
    tmp2 = tmp1 - timer;
    timer = tmp2;
    id_tmp = timer;
    cpe_measure = id_tmp / 10020000.0;
    printf("Sleef_finz_sqrtd2_u05kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_sqrtd2_u05kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
