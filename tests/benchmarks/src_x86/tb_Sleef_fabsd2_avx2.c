/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_fabsd2_avx2128.c --function Sleef_fabsd2_avx2128 --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target x86_avx2128
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
     0x1.1e0bb74f35ce9p-955, 0.0, 0.0, 0x1.685bd9cba8fcfp-518, 0.0,
     0x1.aa5fefc54609ap-290, 0.0, 0.0, 0.0, 0x1.88f0dca11c184p-640,
     0x1.095f20e210adbp-818, 0.0, 0x1.fc4cafa3049bp-140, 0.0, 0x1.35b64ab3dbdacp-897,
     0.0, 0.0, 0.0, 0.0, 0x1.179d2e6ebe8aap-37, 0x1.5c7bf48f40491p-898, 0.0, 0.0, 0.0,
     0x1.81cca7105a731p-512, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.15b2dc1b0f785p-960, 0.0,
     0x1.b33068be53f93p-389, 0.0, 0x1.6b107282cecbap-201, 0.0, 0.0, 0.0, 0.0,
     0x1.81fdffd4e9434p-25, 0x1.2df86ef3e368p-289, 0.0, 0x1.6260ee3b63329p-405, 0.0,
     0x1.693870e807bfdp-436, 0.0, 0x1.2126ab0ea378ep-340, 0x1.6688f708ae566p-347, 0.0,
     0x1.32e8da36119bbp-568, 0.0, 0x1.2f36d6f128febp-941, 0x1.7f5b168ea8fc4p-664, 0.0,
     0x1.87f155bf58388p-833, 0x1.83b20309ede1p-981, 0.0, 0x1.449249ebf911fp-150, 0.0,
     0x1.c57d24b967e4bp-324, 0x1.f10b7a5d8c8bbp-334, 0.0, 0x1.2bc4913937a72p-424,
     0x1.f526dc4a93e87p-915, 0x1.55bc11b3c7cebp-10, 0x1.092e9281fa9e4p-357, 0.0,
     0x1.bb0150dc20897p-89, 0.0, 0x1.d058a9e2b56cap-146, 0.0, 0.0,
     0x1.6d0f77652b9c4p-346, 0.0, 0x1.61722f86cd8f2p-64, 0.0, 0x1.edf8a3c9dd48ap-771,
     0.0, 0x1.3131e9982603ap-922, 0x1.42ab39eb766d1p-975, 0.0, 0.0,
     0x1.4352d29d4d483p-364, 0x1.5057694c5c3d2p-9, 0x1.f548e07ca200bp-110,
     0x1.4357b0d32114ap-875, 0x1.28391922bce02p-687, 0.0, 0x1.3540b1f7c392p-629, 0.0,
     0x1.da2c3e3814594p-281, 0.0, 0.0, 0x1.458c9386b108bp-986, 0.0,
     0x1.b00b62a70ea3p-681, 0.0, 0.0, 0x1.dfc2fe9c993a9p-143, 0.0,
     0x1.0dc0117b3a14cp-380, 0.0, 0.0, 0.0, 0x1.9e3611f38396fp-606, 0.0,
     0x1.df7fa122062d1p-1022, 0x1.6a170b11764b2p-327, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.d8cc414b1e67bp-418, 0.0, 0x1.6d5ee2da63121p-343, 0x1.15c5a3d15596ep-692,
     0.0, 0x1.7dabe4d122d1p-918, 0x1.663cee57dd99dp-652, 0x1.823a5497a1b5cp-466, 0.0,
     0.0, 0x1.a778cfca2821cp-764, 0.0, 0x1.27f3b44fc46d9p-881, 0x1.792d12d097c38p-543,
     0.0, 0x1.f59d1aa8df1b8p-420, 0.0, 0.0, 0.0, 0x1.0df163447d2f5p-75, 0.0,
     0x1.7412a0670a8c9p-890, 0x1.261b1b00e8b7ap-426, 0x1.fafb34d5fe2d6p-191, 0.0,
     0x1.a83826da9f4abp-228, 0.0, 0x1.4835f830f2e02p-190, 0x1.ed1a9a2d7f7fbp-133,
     0x1.08730b8ce1747p-132, 0.0, 0.0, 0.0, 0.0, 0x1.e9627c755104p-1001, 0.0, 0.0,
     0.0, 0.0, 0x1.c0bd19356be96p-190, 0.0, 0.0, 0.0, 0.0, 0x1.64799e299179ap-533,
     0x1.674a8981a232fp-83, 0.0, 0.0, 0x1.83e748309284p-972, 0x1.2079b4464ce2cp-649,
     0x1.0c843c5e0ac4p-588, 0.0, 0.0, 0x1.12ebc50db3274p-807, 0.0, 0.0,
     0x1.c89fa85a2b1d2p-449, 0.0, 0x1.e51f82f2f7753p-289, 0x1.89aab8c01c04ep-299,
     0x1.3fec5d50275b8p-201, 0.0, 0.0, 0.0, 0x1.9f45413a8aa42p-993, 0.0,
     0x1.cf56e15bb8eeep-429, 0x1.d3083f7c1e773p-505, 0x1.0c8ce951e342bp-958, 0.0, 0.0,
     0.0, 0x1.4512a41a94a81p-541, 0.0, 0x1.a036a1fc1c956p-820, 0.0,
     0x1.6e3154e03b1e5p-206, 0.0, 0x1.47cf8471fe98cp-932, 0.0, 0.0, 0.0,
     0x1.1595f8804cc49p-915, 0x1.8605d39ad84a3p-931, 0x1.755f876c54ca9p-931, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ce9bc29c18014p-720, 0x1.5b450e78d6521p-749, 0.0, 0.0, 0.0,
     0.0, 0x1.6f99cb00214d6p-680, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.af5923247ec48p-70, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65129e58e13a4p-331, 0.0,
     0x1.4fa14be7e81cdp-832, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.10aad8706400cp-944, 0.0,
     0x1.ad7287ff57acp-799, 0x1.bd2fe3f231f0bp-438, 0.0, 0x1.083e8520500fdp-985, 0.0,
     0.0, 0x1.60e47b025982p-768, 0.0, 0.0, 0.0, 0.0, 0x1.34609324e3449p-24, 0.0,
     0x1.0ac554a3dde3fp-712, 0x1.9f140dfa1c1a1p-1001, 0x1.696b881c14193p-86, 0.0, 0.0,
     0.0, 0x1.707b25ed87844p-365, 0x1.d86e4e32db15ep-533, 0.0, 0.0, 0.0, 0.0,
     0x1.3bd8513a3e28dp-606, 0x1.25b0758d897d2p-596, 0x1.95d74e9aa25e2p-724, 0.0,
     0x1.4b3ff64e55e76p-375, 0.0, 0.0, 0x1.da3dce05eeccp-677, 0x1.76898bdcdf2aap-439,
     0.0, 0x1.aabffd71b437bp-1018, 0.0, 0.0, 0x1.ca212a324ac8ep-539, 0.0,
     0x1.612f3820bc71bp-235, 0x1.d8669108f0258p-307, 0.0, 0x1.1ccd78039c046p-266, 0.0,
     0x1.3b625617b61f4p-101, 0x1.29ad294c24c61p-721, 0.0, 0x1.90f0c5b6a9973p-601, 0.0,
     0.0, 0.0, 0.0, 0x1.80890f9f5743dp-822, 0.0, 0.0, 0.0, 0x1.399d7b7689cc4p-775,
     0.0, 0.0, 0.0, 0x1.b221e7e3f6862p-947, 0x1.0269b7067fc42p-308,
     0x1.4336432006cbdp-571, 0x1.ffef1130ecf0bp-559, 0.0, 0.0, 0x1.430dfc8f3fcd5p-476,
     0x1.c844d003d69a4p-860, 0x1.f4b79ef2dde37p-491, 0.0, 0x1.bc9de7ea4acefp-844,
     0x1.66b7399266546p-803, 0x1.4d3aca7701668p-346, 0x1.0297f5dccafb7p-751, 0.0, 0.0,
     0.0, 0.0, 0x1.e6c9303d9f665p-960, 0x1.3f361983f36cbp-967, 0x1.4ef3979b13fe5p-281,
     0x1.872036528bf94p-594, 0.0, 0x1.418df777e19a5p-145, 0x1.9ad90e6c9c45ep-674,
     0x1.0abac89aec48ep-917, 0x1.90fecb45746c9p-765, 0x1.2ac24d8360fedp-923, 0.0,
     0x1.4d50290165fabp-284, 0.0, 0x1.10aec7fed8185p-44, 0.0, 0.0,
     0x1.7540cd80f96a3p-377, 0.0, 0.0, 0x1.1c33dde40d51ap-508, 0x1.8898b9b0ab2ecp-578,
     0x1.ab819b9c9bec1p-43, 0x1.d5955e64d2fbfp-4, 0x1.6ffffa7638b68p-1018, 0.0, 0.0,
     0x1.a260033822d35p-904, 0.0, 0x1.ecffcf2861aafp-709, 0.0, 0x1.f1810e8b81f7ap-100,
     0.0, 0x1.5d4a00b76ff6dp-417, 0x1.dbba6b6b5190fp-75, 0.0, 0.0,
     0x1.b3376bc9338e9p-677, 0.0, 0x1.6864d1c978d84p-638, 0.0, 0x1.0207c6c488ce6p-81,
     0x1.47bc74e4a3ea1p-652, 0x1.0027b835ca80dp-403, 0x1.0c41875088c4ap-273, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.9b0ae777dc925p-961, 0.0, 0x1.94f00fc56772ep-559, 0.0,
     0x1.9b475daad0966p-485, 0.0, 0.0, 0x1.8643eaf15a43ap-782, 0.0, 0.0,
     0x1.274c5543c3f0cp-307, 0.0, 0x1.7385c4beb105ep-109, 0.0, 0x1.c1e023155cadp-483,
     0x1.a875d2b41ca3p-921, 0x1.b4dadac0a30bbp-988, 0.0, 0.0, 0x1.39ceaddb85602p-563,
     0x1.15bcbefd21526p-10, 0x1.e41c2be623711p-115, 0x1.425dd860f6db2p-406,
     0x1.934397c6fe52dp-474, 0.0, 0.0, 0.0, 0x1.af77e7f5ce411p-703,
     0x1.58c664d8a7ecdp-597, 0x1.024d896953be5p-86, 0.0, 0.0, 0x1.75dccde1fca5ap-958,
     0.0, 0.0, 0.0, 0.0, 0x1.490e1fa4d8b6ep-295, 0x1.2ef1a19617653p-458, 0.0,
     0x1.1fe14440b2488p-491, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3c416a9909813p-196, 0x1.8a96edf49b7aap-559, 0.0, 0x1.186342f595afep-97,
     0x1.262c2085d7eb2p-200, 0.0, 0x1.59279ff5722f3p-244, 0.0, 0x1.a1c6d3a00af45p-134,
     0.0, 0x1.56448c92a5eafp-840, 0x1.fa848e93274b6p-215, 0x1.82653bce7b05ap-390,
     0x1.1516d9ef7e51dp-491, 0x1.c3dedd48440d4p-125, 0x1.2b276d1ef6c38p-344,
     0x1.51e7f329dcbdbp-96, 0.0, 0x1.6943d4f8b8271p-366, 0.0, 0x1.c5225fde4ac55p-956,
     0x1.ae7eefddb58f1p-739, 0.0, 0.0, 0x1.fe984a865323ap-617, 0x1.89b9f3f6dfe2fp-385,
     0x1.68dff3695998ep-591, 0.0, 0.0, 0x1.b0f4cdeb9ceafp-811, 0x1.11af5c063c3fdp-598,
     0x1.6d0354aa5f126p-509, 0x1.40534d109e0d5p-187, 0x1.b4890e0b95346p-980, 0.0,
     0x1.07d1fe2bd9d61p-68, 0.0, 0.0, 0x1.f2e15f43499bap-743, 0.0,
     0x1.24d591a42de21p-821, 0.0, 0x1.9f44ed491618bp-133, 0x1.e25b0e28e0ff6p-483,
     0x1.33cb9bf0b5c9fp-698, 0.0, 0x1.b23b7d423d562p-434, 0x1.efa99ee01a61cp-959, 0.0,
     0x1.fe63235a9e1c4p-966, 0.0, 0.0, 0x1.4ca3773625c5bp-366, 0.0, 0.0, 0.0,
     0x1.5b350cdbd1724p-633, 0x1.a9f0d877f4c2dp-144, 0.0, 0x1.93bc6a1e2e662p-256,
     0x1.9a57d815b8f18p-318, 0.0, 0x1.0563db751ccd7p-266, 0.0, 0x1.9dfbbe5621553p-991,
     0x1.06fa637ee9678p-862, 0.0, 0.0, 0x1.c4142c2a47bfap-605, 0x1.31bc3d42fbe97p-279,
     0.0, 0x1.c58cb30a8ed71p-989, 0.0, 0x1.76a0d596a90f9p-525, 0.0,
     0x1.29a0ed674973ap-595, 0x1.a5eb0b3903352p-501, 0x1.a1b73ae613f06p-523, 0.0, 0.0,
     0x1.09705c8597e18p-283, 0x1.464889018ffd5p-394, 0.0, 0.0, 0.0,
     0x1.a2f4585639074p-929, 0x1.524b7f4a2dec2p-222, 0.0, 0x1.9eeb02bd941e9p-48, 0.0,
     0.0, 0x1.2c6fe805387b5p-303, 0x1.7b0db44c9fc5bp-286, 0x1.f01386d2ff71p-563, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.08a640e4b95d7p-999, 0.0, 0.0,
     0x1.c1025c9cda86cp-686, 0x1.9d8dc519dfa3ep-441, 0x1.ec04b19f89261p-916,
     0x1.68fff4e4956fp-936, 0.0, 0.0, 0.0, 0x1.356c9617497cp-1007,
     0x1.4f77cf3dfc8ecp-636, 0.0, 0x1.3d2929cacd8a7p-175, 0x1.ccdfadde4b23ap-532, 0.0,
     0.0, 0x1.92263afaddad7p-306, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.91108672da7b2p-921, 0x1.9fefc6aef775p-956, 0x1.a7b0d356b7e69p-811,
     0x1.3763d46c7a659p-117, 0.0, 0.0, 0x1.2618d0aa2feacp-543, 0.0, 0.0, 0.0, 0.0,
     0x1.24e2a33c08b4ap-970, 0.0, 0.0, 0x1.d1f05f2c39433p-317, 0x1.ea50e4e980e41p-351,
     0.0, 0.0, 0.0, 0.0, 0x1.8817e3f6a5c2ep-113, 0.0, 0.0, 0x1.72cbabaa1635ep-999,
     0.0, 0x1.86735f78fa8f6p-1017, 0x1.a8861a6741481p-47, 0x1.2ce6b33193961p-61, 0.0,
     0x1.a9bb3b663ebb1p-339, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.5bc457ffe8428p-198,
     0x1.cc64d06f5f899p-797, 0x1.f0a96c5b463dcp-619, 0.0, 0x1.4f26c8ea767aap-398, 0.0,
     0.0, 0x1.ec3e888b3afa8p-435, 0x1.37c806169374bp-990, 0x1.34fb416f13f84p-303, 0.0,
     0x1.c2cdb6d3b8fcap-125, 0x1.73ea28f9450abp-885, 0.0, 0.0, 0.0, 0.0,
     0x1.4b3997544936ap-536, 0x1.4355cf874bac4p-773, 0x1.bba5777888917p-20,
     0x1.3f7985f2ba684p-812, 0.0, 0.0, 0.0, 0x1.ab8ea126c4f8ep-724,
     0x1.c7c35de5e60f9p-509, 0.0, 0.0, 0.0, 0x1.4586f68587385p-24,
     0x1.a280923a6d704p-192, 0x1.8b07ed246a46p-369, 0.0, 0x1.016b31fb1112ep-681,
     0x1.52e26984e50e8p-590, 0x1.13a219e84d50fp-203, 0.0, 0x1.1962bdccc049ep-265, 0.0,
     0.0, 0x1.7f22946f98e13p-277, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.98f7205d509dap-1018, 0.0, 0x1.dab6dc2b1100fp-278, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4db1da15f5adep-158, 0.0, 0x1.3263a5889394ap-402,
     0x1.1f444d74832ffp-926, 0x1.c4bd98a9e1f84p-712, 0x1.dc6300288c53fp-485, 0.0,
     0x1.ff5a2373f4717p-34, 0x1.2eaccf9125883p-148, 0x1.a454d07037eb7p-703,
     0x1.c94d7503d5db6p-700, 0.0, 0x1.aa0acd0e3143dp-301, 0.0, 0.0, 0.0,
     0x1.2b5c09f3759b1p-171, 0x1.0f25a6152a54cp-821, 0.0, 0.0, 0x1.7140dba6eb703p-395,
     0.0, 0.0, 0x1.29fdbfc53ea95p-874, 0x1.7e04223436c0ep-930, 0x1.2302a6138a9bfp-385,
     0.0, 0x1.e856d4341bec5p-856, 0.0, 0x1.a089d426f0df4p-24, 0.0,
     0x1.85672940db521p-570, 0x1.2d0160307db0ap-242, 0.0, 0.0, 0.0, 0.0,
     0x1.c3cfe1fff2a94p-235, 0x1.749430d1db197p-56, 0x1.b5ddc5be94181p-31,
     0x1.5c13f248af49ep-672, 0.0, 0x1.fa693d1c6b1bep-638, 0.0, 0x1.ec91210795c7bp-782,
     0.0, 0x1.2ee7ec3eaf7d1p-177, 0x1.3cf75e69b8b86p-16, 0.0, 0.0, 0.0,
     0x1.f1ceade7863eap-208, 0.0, 0.0, 0x1.a49b11e2387c7p-1016,
     0x1.4145860e45403p-531, 0.0, 0.0, 0.0, 0.0, 0x1.8d38fc814197dp-797, 0.0, 0.0,
     0.0, 0x1.a8c0b2ac9167cp-136, 0x1.76230df4a3597p-748, 0.0, 0x1.0376c937b650cp-967,
     0x1.02f66d70c452cp-96, 0.0, 0x1.f18d3db1600c8p-939, 0.0, 0.0, 0.0,
     0x1.348c86648154bp-570, 0x1.4adc4d29c3f84p-633, 0x1.775740c913c08p-379,
     0x1.c54156e9280aap-758, 0.0, 0.0, 0.0, 0x1.a6f4e09fcdb39p-954,
     0x1.516f494a4cd6dp-505, 0x1.65d3068c443ep-974, 0.0, 0.0, 0.0,
     0x1.358fd3d5b2cb9p-376, 0.0, 0x1.aac36ccae7217p-660, 0x1.9691c0691089p-427, 0.0,
     0.0, 0x1.a06bacbe769c5p-723, 0x1.6cee84c14948dp-416, 0.0, 0x1.448b0578d8e53p-967,
     0.0, 0.0, 0x1.30182e3efe1e7p-623, 0.0, 0x1.4e01687eff106p-125, 0.0,
     0x1.000a5adf3dc3ap-319, 0x1.4daddf26f3c5dp-33, 0.0, 0.0, 0x1.5912fd972401bp-844,
     0x1.2937358f60fbep-846, 0.0, 0.0, 0.0, 0x1.c4c5660238337p-54,
     0x1.ff52f87ae1e5dp-1000, 0.0, 0x1.c57423f3c706p-828, 0.0, 0x1.157383dba6144p-637,
     0.0, 0.0, 0.0, 0x1.966ce467ea05ep-313, 0.0, 0x1.5598cb452b2afp-999,
     0x1.8fe5ae8edbaccp-503, 0x1.5dca529b58512p-501, 0.0, 0x1.85a4b6448ce3p-802,
     0x1.b956d21106bd4p-779, 0x1.231e2fdde91f4p-329, 0x1.fae92a72b509fp-672, 0.0, 0.0,
     0x1.2f7b4ff998b34p-999, 0.0, 0.0, 0.0, 0x1.a35667e88dfd1p-633, 0.0,
     0x1.280cbd4116b2cp-383, 0x1.07e61001c18ecp-92, 0x1.0fefa297c3683p-458,
     0x1.10765e70e89ap-599, 0.0, 0.0, 0.0, 0x1.fa6f1d84e3cbcp-819,
     0x1.931678be8e5e9p-375, 0x1.385bb596fa0eap-597, 0.0, 0x1.6103e8e72c031p-317, 0.0,
     0x1.a97b24a109f9bp-200, 0.0, 0x1.b792445eec28p-167, 0x1.2ee0653b93af5p-865,
     0x1.e4620ce6b2245p-271, 0x1.055cc8f5b2a7p-463, 0.0, 0.0, 0.0,
     0x1.c8c58f4b6f406p-480, 0x1.a4d97c9d7667fp-845, 0x1.c9983202be1bbp-76, 0.0, 0.0,
     0.0, 0x1.93f38c1b9fddap-101, 0.0, 0x1.25e0616bc4a01p-638, 0x1.fdd45413af66fp-139,
     0.0, 0x1.32c1a7e367c3ap-880, 0x1.4967e38332a7bp-221, 0x1.4c59a166358e8p-215,
     0x1.109e63602529bp-188, 0x1.fe10f3c14937cp-985, 0.0, 0.0, 0x1.223308f295812p-177,
     0.0, 0.0, 0.0, 0x1.506ddda13589cp-468, 0.0, 0.0, 0.0, 0x1.1aa1be276eb41p-98,
     0x1.3aefc67ce3b85p-222, 0x1.6aefcc0802f5p-915, 0.0, 0x1.3303b2da9f87ap-378, 0.0,
     0.0, 0.0, 0x1.87f85e3ec7bdfp-114, 0.0, 0.0, 0x1.3189069528299p-567, 0.0,
     0x1.4da94a014fac8p-743, 0x1.39ac6414ae6b1p-651, 0.0, 0.0, 0x1.2f0a81fa0b125p-221,
     0x1.963f9569911ap-274, 0.0, 0.0, 0x1.751dcd4c2a932p-673, 0x1.c5a2ffcf4fb38p-508,
     0x1.837b132d6c328p-213, 0.0, 0.0, 0.0, 0x1.f972b83b996ebp-434, 0.0,
     0x1.8027271cf521ep-648, 0.0, 0.0, 0x1.560b8e71b7833p-562, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.245e3e3d944d8p-477, 0.0, 0.0, 0x1.58cec1d5aa0f7p-208,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cd02d53cfa10ap-106,
     0x1.3a55be89a0c34p-542, 0.0, 0x1.c96baec603925p-423, 0.0, 0x1.6051d4acafb96p-948,
     0x1.43dae13400013p-787, 0.0, 0x1.aefcb0482fbb6p-741, 0x1.e814e7b3937d8p-30,
     0x1.8da3510c6d8fdp-1001, 0.0, 0.0, 0.0, 0x1.08a1b136b84edp-1000,
     0x1.5f81a2a5bf7b5p-288, 0.0, 0x1.1d5f11624117p-188, 0x1.4219347e402fap-582, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d763b3d1cc0bdp-276, 0.0, 0.0, 0.0,
     0x1.cdf7aacf3b318p-511, 0.0, 0.0, 0.0, 0x1.1825c417c6f81p-623, 0.0,
     0x1.723365dc9d947p-575, 0.0, 0x1.d0110e510f66fp-289, 0.0, 0.0,
     0x1.1c47fb8a7b251p-837, 0x1.f47b105bd0363p-499, 0x1.d5cc3fa69e34ap-827, 0.0, 0.0,
     0x1.673db196dc03fp-83, 0x1.f48eb36a38b98p-550, 0x1.d7d88d0f70b94p-522,
     0x1.5e5b330e49c42p-252, 0.0, 0x1.7d1c7dddfe85ep-361, 0.0, 0x1.2cdc921d69b87p-360,
     0x1.9e52faa908a4bp-264, 0.0, 0x1.442d501b14cep-706, 0x1.cdb7810cb9d8bp-780,
     0x1.3bc742eac084bp-833, 0x1.517408d956d82p-612, 0.0, 0.0, 0x1.8a91c81f6bd37p-685,
     0.0, 0.0, 0x1.fe73e2681f546p-781, 0x1.30c41556128c6p-31, 0x1.9370bd1ceca07p-565,
     0.0, 0.0, 0x1.a4218aaa3c437p-745, 0x1.d5f5c8fc7e997p-176, 0x1.7995a9d1f0157p-520,
     0.0, 0x1.6e3a91257117bp-979, 0.0, 0.0, 0x1.52b33c9677ca5p-215, 0.0, 0.0, 0.0,
     0x1.d91814f9dbed7p-300, 0x1.d2f8ae2bb209p-463, 0x1.3c949fbab3aecp-102, 0.0,
     0x1.70efe77d5af3ep-10, 0x1.7da0df332eeb3p-194, 0.0, 0x1.1e8dcab855946p-210, 0.0,
     0x1.e409f4481a703p-696, 0.0, 0.0, 0x1.be612ebd16257p-203, 0.0, 0.0,
     0x1.7e681b129f731p-820, 0.0, 0x1.8561402c41a83p-397, 0.0, 0x1.c77a4b83b3b31p-724,
     0x1.7bb898134ea7fp-916, 0x1.e3998fd62471dp-824, 0x1.97e813ad4b1bdp-459,
     0x1.c8039b30a840ap-37, 0x1.fe303e537cbebp-935, 0.0, 0x1.9ce0878e4f78dp-121,
     0x1.3e10f4b5f6105p-739, 0x1.f8a43fb481e11p-57, 0x1.8607e7b75d4fep-485,
     0x1.395e5107b8ab5p-737, 0.0, 0.0, 0.0, 0x1.6ed579596269p-120, 0.0,
     0x1.ca8c3d1c87b12p-611, 0.0, 0x1.7e7e01aad9bd9p-783, 0x1.c3ef54b78a8dap-906, 0.0,
     0x1.934eadb0a17fbp-651, 0x1.036b81ec2469fp-42, 0.0, 0x1.de3babe878699p-74,
     0x1.ad921c7b095aep-429, 0.0
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
            tmp1 = Sleef_fabsd2_avx2128(tmp0);
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
    printf("Sleef_fabsd2_avx2128 %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_fabsd2_avx2128 bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
