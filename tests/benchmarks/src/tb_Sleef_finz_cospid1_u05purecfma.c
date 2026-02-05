/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cospid1_u05purecfma.c --function \
 *     Sleef_finz_cospid1_u05purecfma --headers sleef.h,ml_support_lib.h \
 *     --input-formats binary64 --precision double --bench --no-embedded-bin \
 *     --target kv3
 * 
**/
#include <stdint.h>
#include <mppa_cos.h>
#include <sleef.h>
#include <ml_support_lib.h>
#include <stdio.h>
#include <inttypes.h>


volatile double external_bench_wrapper_output_table[1001];
static const double external_bench_wrapper_input_table_arg0[1001]  = {
     0x1.4d0dcda8f8982p-984, 0x1.b739d314cecaap-768, 0x1.065db13c4ecdcp-700,
     0x1.76fd4a84e158bp-657, 0.0, 0x1.6a867e72f4668p-687, 0.0, 0x1.b9e567045ed7fp-752,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8a92d23164002p-170, 0.0, 0.0, 0.0, 0.0,
     0x1.ee16dfd723a96p-187, 0.0, 0.0, 0.0, 0x1.b62ccf99c97fap-315, 0.0,
     0x1.0747890f74192p-136, 0x1.7f9a1987afbedp-608, 0x1.60e2d9da6e6dbp-2,
     0x1.2d8f2313a9307p-420, 0.0, 0.0, 0x1.fd3e7bc7dd5abp-779, 0x1.81d7fd7c1a284p-292,
     0.0, 0.0, 0.0, 0.0, 0x1.b1710989feffp-330, 0.0, 0.0, 0x1.98f31109d52a6p-957, 0.0,
     0.0, 0.0, 0.0, 0x1.ecde6073578dfp-179, 0.0, 0.0, 0.0, 0x1.5a85d8360e9e6p-330,
     0.0, 0x1.23136b2f8a174p-825, 0.0, 0x1.94467c486891p-555, 0.0, 0.0, 0.0,
     0x1.474b1f23d4687p-328, 0.0, 0x1.22fc46e3f1cffp-847, 0x1.00a77f5f3289ep-857,
     0x1.f8ca6ce23941p-100, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e5995b8011d8p-262, 0.0,
     0x1.33c301eac5c81p-602, 0.0, 0.0, 0x1.e0c1a3453f45ap-821, 0.0,
     0x1.30939b664275dp-180, 0.0, 0.0, 0x1.f5b14ea9457efp-872, 0.0,
     0x1.efb51ad84a434p-351, 0.0, 0x1.cd7ae01137846p-702, 0x1.859188438576ep-247,
     0x1.f5abcf0261a18p-299, 0.0, 0x1.fc3db842115a4p-481, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.39a797e21243ep-379, 0.0, 0x1.bd8a925d4b8bp-711,
     0x1.7f962afd0188fp-353, 0x1.9367265fc7489p-227, 0x1.3d76a3fa907c3p-284, 0.0, 0.0,
     0x1.aa26e0a06c818p-628, 0x1.b5df4f97f799ap-808, 0.0, 0x1.e12133cdf2cd3p-65,
     0x1.40fd3c160254p-571, 0.0, 0.0, 0x1.f63b5d15f1389p-745, 0x1.410195e0bdb96p-949,
     0.0, 0x1.5cc8bd2d37eb4p-12, 0x1.10af7b3f06bp-148, 0.0, 0x1.e2938afc04cdp-365,
     0x1.f51c3d739ccc7p-720, 0x1.b56bbd3e2533cp-920, 0x1.17b90a59d8343p-384,
     0x1.9971801b593cfp-517, 0x1.3bcec32309f05p-903, 0.0, 0.0, 0.0, 0.0,
     0x1.748f6b89c9b54p-479, 0.0, 0x1.8e56b216a74d7p-48, 0.0, 0.0, 0.0,
     0x1.781a3eb9fdad3p-869, 0.0, 0.0, 0.0, 0x1.b6838653d876p-77, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bf19d3633d77p-510, 0.0, 0.0, 0x1.cc7b7c2b939p-10,
     0.0, 0.0, 0x1.b9bdc07d1a934p-892, 0x1.b19726f64429ap-904, 0.0,
     0x1.18fabd7952bf4p-978, 0x1.bf99a716e3a56p-187, 0x1.73920081ea5fbp-20,
     0x1.a24c9e6a5dc28p-44, 0x1.d78c5e8d598ecp-146, 0x1.f928c1d21ecaep-293, 0.0, 0.0,
     0.0, 0x1.5263102f05f85p-524, 0.0, 0.0, 0x1.be8c1697394dap-434,
     0x1.04c539fe9b7edp-393, 0.0, 0.0, 0.0, 0.0, 0x1.ed74ce6acadcap-389, 0.0,
     0x1.a10f0d1826a72p-711, 0.0, 0x1.724bb31c8e6ebp-743, 0.0, 0x1.f35d4e88ab8aep-709,
     0x1.7ea0095dbd10dp-193, 0x1.f353d6e3f6d52p-850, 0x1.ea026186a483dp-643,
     0x1.7d159b268311p-171, 0.0, 0.0, 0.0, 0x1.d23e9063b48b5p-178,
     0x1.e8ccf768b0c53p-845, 0.0, 0x1.ab2f80fc736a5p-690, 0x1.149e6a1fb884bp-37,
     0x1.348a441a6cc19p-930, 0.0, 0.0, 0x1.cdc90a60f342p-11, 0x1.04da8763fec3cp-304,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.541c42adda127p-603,
     0x1.f4c5d454f0d82p-630, 0x1.033abfa110757p-333, 0x1.4397fedc4df1fp-360,
     0x1.b549b0f4ffc81p-51, 0.0, 0x1.10c3310ab5c3ep-423, 0.0, 0.0,
     0x1.d602f5f08c74fp-415, 0x1.3e714624faf6ap-345, 0.0, 0x1.2edbe38d58d56p-770,
     0x1.6f4df7e84a476p-822, 0x1.567a4cbce35c6p-445, 0x1.a040ab86d27f7p-759,
     0x1.45ff207f4c3acp-677, 0.0, 0x1.cdeed8773f51cp-87, 0.0, 0x1.ff386bc421706p-767,
     0.0, 0x1.3432ada0217cfp-70, 0.0, 0x1.e8deedf2e554ap-173, 0.0, 0.0,
     0x1.f140eba7b8474p-325, 0.0, 0.0, 0.0, 0x1.59cd39b66342fp-647, 0.0,
     0x1.625a430e8c48ap-980, 0.0, 0x1.342e226c676cfp-451, 0.0, 0.0,
     0x1.3ee9022391adp-732, 0.0, 0x1.4e03185e3530cp-764, 0x1.9c47a710b6dap-235,
     0x1.b5c23129329bp-820, 0.0, 0x1.e605b8febc106p-819, 0.0, 0.0,
     0x1.ca0322dab8294p-82, 0x1.66a5a42824e0dp-936, 0.0, 0x1.b9018291c308p-534,
     0x1.a2a6eb7b6fffbp-398, 0x1.f2ce1e3a98a76p-567, 0x1.dd3cd338f96d4p-424,
     0x1.303f027a80e0bp-3, 0x1.df51fe357761dp-883, 0x1.d37343759021dp-1013,
     0x1.dcc8a5b6e5fadp-408, 0x1.b4f553e6b398fp-479, 0.0, 0.0, 0x1.f8816ee78b0bap-268,
     0x1.92913794b1f54p-314, 0.0, 0x1.756594c36d3cfp-317, 0.0, 0x1.8b46e7e557d3fp-178,
     0x1.5522f8709ebd8p-274, 0x1.bab68eece7cc1p-140, 0x1.7114a6de7445bp-882,
     0x1.98726eb459efp-204, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.96027bad270acp-738, 0.0,
     0x1.2a3aacdc214bep-410, 0x1.1266729c0e4cfp-501, 0x1.9db1d2ed9f0ccp-115,
     0x1.3c1d2e3dde92ap-263, 0.0, 0.0, 0x1.b9abb3749d8f3p-63, 0x1.afb4efb848f3bp-465,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.648b0c35d2794p-717, 0.0, 0x1.2912f425663d3p-906,
     0x1.3bd7992ed75cbp-145, 0.0, 0x1.9c80d9bc26298p-728, 0x1.43348c8d024f5p-161,
     0x1.e0f2d776a69efp-521, 0.0, 0x1.d3107384d11cap-892, 0x1.ab0cc18f6f6dp-864, 0.0,
     0.0, 0x1.9152ff925de68p-422, 0.0, 0x1.8cf6d57d7bfd9p-734, 0x1.21a57132b8076p-347,
     0x1.1c1b1cf44a0adp-82, 0x1.edeaaf7a11db1p-742, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e78b3ca009992p-932, 0.0, 0.0, 0x1.300aa92e80bccp-850, 0x1.3f4fa93112179p-314,
     0x1.056cc7d60daf5p-904, 0.0, 0x1.0488d655a04a6p-282, 0.0, 0.0,
     0x1.d2308385eb2c1p-340, 0.0, 0x1.d7300bec73903p-581, 0.0, 0x1.553c6af96fccap-540,
     0x1.0d83614e5692fp-72, 0x1.a4eec9f04bf83p-2, 0.0, 0.0, 0.0, 0.0,
     0x1.ac77398a89421p-238, 0x1.ac512503e111ep-938, 0.0, 0x1.155af9ea203eap-462,
     0x1.e602ced14f6c3p-931, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.62a3441a29ec5p-843, 0.0,
     0.0, 0x1.c15a81024b7c9p-120, 0.0, 0.0, 0x1.606c2de07b1b5p-459,
     0x1.0a4e335e612c6p-1015, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2abaad985c626p-781,
     0.0, 0x1.cc32f36512981p-377, 0x1.f06a5377e4e66p-430, 0x1.c622996722fcfp-378,
     0x1.eb6049692904p-720, 0.0, 0.0, 0x1.1d8bb012524ccp-434, 0x1.71dc9fc3219b1p-853,
     0.0, 0.0, 0.0, 0x1.fb229ff953ed6p-303, 0x1.f2acfb5b61f77p-186,
     0x1.18e4630066ddp-308, 0x1.c3d64967af58cp-708, 0x1.da0de0e134a3ep-582, 0.0,
     0x1.98c6d62b52c43p-428, 0x1.589c301c7ceb1p-14, 0x1.1be0d58efd2a3p-553, 0.0,
     0x1.df0f2de548c8cp-787, 0.0, 0x1.991f4a58dc7c8p-307, 0x1.ac5c7f64bff7p-713,
     0x1.86cdf7d7d5997p-488, 0.0, 0.0, 0x1.8347f6fe0cc6bp-725, 0.0,
     0x1.3cd240abc0468p-11, 0.0, 0x1.4b73f19607edcp-648, 0x1.7b091d3588fa1p-736, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.2d23297283f53p-1016, 0.0, 0x1.40c9fd0d50933p-466, 0.0,
     0.0, 0x1.2bdb92a4a5c2ap-355, 0x1.879e792c03f25p-333, 0.0, 0.0,
     0x1.f63029124a0b1p-27, 0x1.bf0b3b87d1cp-1016, 0x1.65a0a035d262ap-421, 0.0,
     0x1.c159db0f85824p-248, 0.0, 0x1.548acac10c2c4p-313, 0x1.8d6d92c0c63e2p-609,
     0x1.6199d6d37f35dp-2, 0.0, 0.0, 0x1.252adb08d54afp-832, 0x1.6d1618fb3c65dp-464,
     0.0, 0.0, 0x1.60720d569d117p-444, 0x1.b731e951a55afp-343, 0x1.fe4137dca8b13p-848,
     0.0, 0x1.56ec80eda5d4fp-899, 0.0, 0x1.2aae12ee1c2f3p-164, 0x1.f200577d79f2ap-1,
     0x1.5f88fda3f1e5ap-446, 0.0, 0.0, 0x1.161fed284076ap-690, 0x1.7d7fe1c3a9e71p-234,
     0x1.c8d5f46ec3c28p-254, 0.0, 0.0, 0.0, 0x1.fb5fbe2be7575p-490, 0.0,
     0x1.a27b1a956076ep-677, 0x1.fd2261ab6d03ep-265, 0.0, 0.0, 0x1.24e6880e1bdd9p-577,
     0.0, 0.0, 0x1.210570563de9ep-645, 0x1.e1bf8e48c6e7ep-463, 0x1.9d9f232b90d25p-881,
     0x1.8b75759b28a99p-780, 0.0, 0x1.a089de1ad0013p-851, 0x1.e9c453a0c39bep-736,
     0x1.6ffa130f92dcbp-644, 0x1.1495288444343p-497, 0.0, 0x1.f3224517e77f8p-327, 0.0,
     0x1.8751af6a21251p-748, 0x1.5ec980a8a7728p-839, 0x1.aace2eb712da8p-710,
     0x1.1d646ea0216b5p-549, 0x1.38528079f7e06p-604, 0.0, 0.0, 0.0, 0.0,
     0x1.2942e1c2a13aap-636, 0x1.8af641878f829p-223, 0.0, 0.0, 0x1.bd8cccd593818p-332,
     0.0, 0.0, 0.0, 0.0, 0x1.657429d684a79p-984, 0.0, 0.0, 0x1.e1f826f8a7059p-821,
     0x1.27ede78431d5bp-374, 0x1.3fa937bd4e02fp-745, 0.0, 0x1.2213c68db08e1p-906, 0.0,
     0.0, 0x1.d821ac9c25fa5p-672, 0x1.41c1d1fe5452cp-998, 0x1.6c1f78ccdfceep-1022,
     0x1.96d74b0f14fe8p-425, 0.0, 0.0, 0.0, 0.0, 0x1.7b25350a0cefdp-921,
     0x1.14f8bc2e03a9dp-448, 0x1.3a4b7af8991acp-51, 0x1.93c18967814f2p-130, 0.0,
     0x1.2f9b18d25a222p-351, 0x1.68c1cbdd642cap-175, 0.0, 0.0, 0x1.5d9c73ec50966p-805,
     0.0, 0x1.4b3e966726026p-758, 0x1.32174e3237e99p-751, 0x1.23293e1ae6103p-602, 0.0,
     0.0, 0.0, 0x1.54791e318556dp-145, 0x1.e29fa8815258p-1009, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.df74c9c518fe5p-132, 0x1.29e27753b9b4dp-972, 0x1.c9899bf2177b3p-706, 0.0,
     0.0, 0x1.d8523fbafda2ep-77, 0x1.72e40f7834b82p-654, 0x1.4ee409108cf7dp-236, 0.0,
     0x1.c63c070479818p-957, 0x1.173b6658e923dp-548, 0x1.0f4bb0846790ep-613, 0.0,
     0x1.9f62372cee4c8p-141, 0.0, 0x1.1864edda8ad42p-228, 0.0, 0.0,
     0x1.4b7376d1f2854p-696, 0x1.a3b47eea34eadp-427, 0x1.757d7ec0c014fp-214, 0.0, 0.0,
     0x1.4b6328bcfca0cp-966, 0x1.89052cf970081p-118, 0x1.b3f9559fcae5dp-695, 0.0, 0.0,
     0.0, 0x1.713ca01123a56p-916, 0x1.e79af3ebbf68p-372, 0.0, 0.0, 0.0, 0.0,
     0x1.4eb428cfc0e14p-335, 0.0, 0x1.ac5c9a6d4bcf7p-470, 0x1.d7297515e804p-959,
     0x1.68b4585c00046p-32, 0.0, 0.0, 0x1.f145e17510e88p-584, 0x1.f273e6fe4b8cep-718,
     0x1.66f9f26e5270dp-537, 0x1.577891ceb3f9p-782, 0.0, 0.0, 0x1.c3d26d71fbb6fp-1009,
     0.0, 0x1.5e8b5a4984d96p-112, 0x1.be085b1e80d97p-1004, 0.0, 0x1.f4f3c91f0ceap-276,
     0x1.b89d844e437bcp-32, 0.0, 0.0, 0x1.2887da32ccb8dp-744, 0.0,
     0x1.28bbe9afa42dbp-619, 0.0, 0x1.98d3c9dd4aba9p-54, 0.0, 0x1.47a1a0bca10e1p-511,
     0.0, 0x1.5fe584fc6ef32p-511, 0x1.d44f24e88d873p-320, 0x1.c4269c0dd235ap-82,
     0x1.c3e3b4487537cp-492, 0.0, 0x1.36a905ef95061p-555, 0.0, 0.0, 0.0,
     0x1.fac83bb7881efp-40, 0.0, 0x1.b40aeb2b35a4p-1, 0x1.2a24bb9c1de4bp-253,
     0x1.b03d653ec3f6cp-475, 0.0, 0x1.a820c8de72e9cp-373, 0.0, 0x1.03ee286917642p-534,
     0x1.ba9caf3930b64p-126, 0.0, 0x1.fcea6bc0d15f8p-814, 0.0, 0x1.26f9a043d1a11p-757,
     0.0, 0x1.6fac3981ca44p-189, 0x1.ae88a9ea97369p-727, 0.0, 0.0,
     0x1.df2113d16cb36p-1016, 0x1.8ddae44a0ea13p-744, 0.0, 0.0, 0.0, 0.0,
     0x1.a926cf3237101p-146, 0.0, 0.0, 0.0, 0.0, 0x1.3739426f18411p-21,
     0x1.57a5bac2a12a1p-808, 0.0, 0x1.49e102c75895ep-577, 0.0, 0x1.c32e70a242106p-491,
     0x1.e6bbb66fb7682p-610, 0.0, 0x1.5615c32057a3cp-161, 0.0, 0x1.0f3241fa3d582p-809,
     0x1.f2c78d7eea62ep-420, 0x1.e21c6bbd04c8ap-91, 0x1.4c2b89ca62e3fp-201, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8bcf39ac0d882p-136, 0.0, 0x1.0e580b381caep-679, 0.0,
     0.0, 0x1.5888fdddda48cp-709, 0x1.c60560a04c87dp-67, 0x1.653da06cafd85p-379, 0.0,
     0x1.2a8c9d103a4dcp-312, 0x1.b9058f11a045ep-690, 0.0, 0x1.0319ce87fa935p-331, 0.0,
     0.0, 0x1.73b945fefb6b1p-210, 0.0, 0.0, 0.0, 0x1.13c8313bd0a64p-700, 0.0,
     0x1.d271606b1f93cp-242, 0x1.0ccb77d9ebe67p-162, 0x1.f68a85075b51fp-990, 0.0,
     0x1.80dbb59d92093p-391, 0.0, 0.0, 0.0, 0.0, 0x1.d4535606b911cp-801, 0.0,
     0x1.38bc0195442fap-507, 0.0, 0x1.2ea8a1b044c26p-6, 0.0, 0x1.b17214ab84acfp-873,
     0.0, 0.0, 0.0, 0x1.19ffabefc77eep-430, 0x1.f6afdb5d98404p-321,
     0x1.8326437e088e2p-830, 0x1.7b0674370cc6bp-67, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.ba15b85af80ecp-463, 0x1.bc540cb26c6a2p-117, 0.0,
     0x1.a87fc66f66c85p-587, 0x1.83e19d3a6425ep-512, 0x1.7769d90f54429p-10, 0.0, 0.0,
     0x1.c497b8ed8e0b8p-588, 0.0, 0.0, 0.0, 0.0, 0x1.f810202023876p-64,
     0x1.95792a125be2cp-465, 0.0, 0x1.ef8a444498872p-397, 0x1.b179db152e6f6p-640, 0.0,
     0x1.e0d75dcfef95ep-715, 0x1.cc0bc488ee20bp-28, 0.0, 0.0, 0x1.0b32bcd926b3p-532,
     0x1.2e70057c9441fp-649, 0x1.fc3b3e9a3907fp-909, 0.0, 0x1.89d8858c39493p-786,
     0x1.af824287337a1p-874, 0x1.5e06b7c4a696ep-967, 0.0, 0x1.a7c2bf5e14f57p-98,
     0x1.f42b33c6eeb51p-160, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8ef504892ea7dp-475, 0.0, 0x1.718c252ffa17cp-776, 0.0, 0x1.06577ee168936p-586,
     0.0, 0x1.9bedb5f3710d6p-34, 0.0, 0x1.c22c33cfd2f9bp-402, 0.0,
     0x1.96631bcf255abp-416, 0.0, 0x1.168e4f0b1287p-179, 0x1.e7f1259cb18d3p-450,
     0x1.1c817eeb48423p-407, 0x1.491c8895e501ap-866, 0.0, 0x1.702298c84994dp-500,
     0x1.742a2731bd8b1p-303, 0x1.3fb53aaf515cap-587, 0.0, 0.0, 0.0, 0.0,
     0x1.121d086a90d2ap-991, 0x1.1d0cdcebfefa4p-6, 0.0, 0.0, 0.0, 0.0,
     0x1.21b48c7768257p-639, 0.0, 0x1.f9f2d45b2f77p-497, 0x1.4d93ff78203fcp-495,
     0x1.1f7874d755d54p-176, 0x1.bd120af42c27ap-268, 0x1.541fc5606a4edp-107, 0.0,
     0x1.cad5bb4bc025cp-589, 0x1.d8b04ff7fad23p-941, 0.0, 0x1.4497685b681bp-206,
     0x1.811ff1e2b0cdp-814, 0x1.c0e3bf3090d54p-250, 0.0, 0x1.e3f75483b1c29p-42,
     0x1.0a99cde2ee8c3p-262, 0.0, 0x1.96156fb4ecdb8p-611, 0.0, 0.0, 0.0,
     0x1.3574f88c5c3c1p-913, 0.0, 0x1.bc49d6691b83p-866, 0.0, 0.0, 0.0,
     0x1.b6c1838abe4ap-752, 0.0, 0x1.dbc4554accee4p-754, 0.0, 0.0, 0.0,
     0x1.d33e80a62a641p-870, 0x1.b324411eedbdfp-554, 0.0, 0.0, 0x1.e5018888e2518p-582,
     0.0, 0.0, 0.0, 0x1.85ac0d2a40d59p-402, 0x1.c7aeb1196f4e8p-262,
     0x1.272eb9d57e096p-391, 0x1.1df7777ff5e71p-615, 0.0, 0x1.90dfab13e17a6p-619,
     0x1.621d03b79447fp-808, 0.0, 0x1.a7732db5da49ap-213, 0x1.04df4310ac76p-843, 0.0,
     0x1.92620dc17ca17p-84, 0.0, 0x1.7239670d0cdbbp-110, 0.0, 0x1.dc2277bd33d9bp-876,
     0.0, 0.0, 0.0, 0x1.db87dc349ccc5p-158, 0x1.42da15cdbf2a8p-495,
     0x1.203528c150592p-110, 0.0, 0x1.5de8aea061cc9p-522, 0.0, 0.0,
     0x1.9ca18d97fe363p-329, 0.0, 0x1.29e2e134705a6p-258, 0x1.c14c30b8d39dcp-128, 0.0,
     0x1.2abdc2e3affa6p-867, 0x1.ae8a2b85b8d6fp-56, 0x1.dfc34357336dep-712,
     0x1.686b9c4d46428p-179, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9792b88d21956p-594,
     0x1.2ad46716ca1dap-365, 0.0, 0.0, 0x1.09ed6dbc0068cp-413, 0x1.7dbd4e958701ep-681,
     0.0, 0.0, 0.0, 0.0, 0x1.da079569bcbefp-214, 0x1.ca6688b016cd6p-162, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9c43aff5993b6p-1008, 0x1.8b67ada1e08c4p-946,
     0x1.9bd166c501516p-457, 0.0, 0x1.dcb75886d10bap-965, 0x1.3cb92ff58b33p-748, 0.0,
     0.0, 0.0, 0x1.5106fe4d77ffep-938, 0.0, 0.0, 0.0, 0x1.51c2f0e8d28fcp-406, 0.0,
     0x1.b2268b182d41dp-712, 0x1.ec20555c73eacp-233, 0.0, 0x1.b87033990d7bdp-388,
     0x1.cbc665dd5a581p-324, 0.0, 0x1.3442a282908e3p-377, 0.0, 0x1.cb35ee779c36cp-339,
     0.0, 0x1.6b536dec06f4dp-363, 0x1.0a6a0b40d6ff7p-177, 0x1.d4518e03faebcp-1014,
     0.0, 0.0, 0x1.50aed00cd92fap-801, 0x1.659c9423e1143p-824, 0x1.0605f75b0c243p-905,
     0x1.2641df9e4d598p-144, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dea64b46da8dap-896, 0.0,
     0x1.60003a52a1e94p-997, 0x1.4214b35dc78f1p-953, 0x1.3e2fb8c22d9bap-367, 0.0,
     0x1.0a48368827ce8p-867, 0.0, 0x1.82402cfe44cd8p-557, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.0cb78b9ca60ep-482, 0x1.e4ff470f6a9aap-807, 0x1.f8bdff4729476p-303,
     0x1.bb45a32090d6fp-782, 0x1.9b3055543b2dap-539, 0.0, 0.0, 0.0, 0.0,
     0x1.626a5b173f103p-571, 0x1.8ca12cb4e039bp-331, 0.0, 0.0, 0x1.2896f62d077bdp-285,
     0x1.d0f0aaff202f4p-576, 0.0, 0.0, 0.0, 0x1.2015f12235fe2p-801,
     0x1.6c0f7afa0e32ep-105, 0.0, 0x1.5dc671002e9edp-982, 0.0, 0.0,
     0x1.d34f086da4fffp-617, 0.0, 0x1.cb3d005d4f51bp-674, 0.0, 0.0, 0.0,
     0x1.a8c452adaeacap-815, 0x1.60aa71eff4854p-589, 0x1.ec360950a60dcp-818, 0.0,
     0x1.61153ed57872ep-541, 0.0, 0x1.d8a7c5969c9e4p-526, 0x1.1e203c014828cp-308,
     0x1.d632ff668c686p-352, 0.0, 0x1.c9629aaa65a9dp-132, 0x1.08683dfce8478p-712,
     0x1.fa582c6d16812p-135, 0x1.3f1c35fe75e8fp-12, 0x1.a0518c209e4f6p-159, 0.0,
     0x1.bb607c7d91323p-949, 0x1.fefe4d6ef8ec2p-700, 0.0, 0x1.7e8022ae6c8fdp-749, 0.0,
     0.0, 0.0, 0.0, 0x1.abe22ee70dbc8p-567, 0.0, 0.0, 0x1.2c08d7aed57a3p-366, 0.0,
     0x1.7c3cc560152c1p-195, 0.0, 0.0, 0x1.7f9bde2542253p-820, 0x1.16fa03020f77bp-708,
     0.0, 0x1.92c17431013eep-622, 0x1.d903ca43549b2p-235, 0x1.4231cc3cc7864p-16
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
            tmp1 = Sleef_finz_cospid1_u05purecfma(tmp0);
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
    printf("Sleef_finz_cospid1_u05purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cospid1_u05purecfma bench acc %la\n", global_bench_acc);
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
