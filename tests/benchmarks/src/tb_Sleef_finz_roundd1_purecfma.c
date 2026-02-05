/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_roundd1_purecfma.c --function \
 *     Sleef_finz_roundd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.e065f37199024p-547, 0x1.78483c93523e1p-681, 0.0,
     0x1.1c17e86ad20a2p-941, 0x1.81538dc932ffap-184, 0.0, 0x1.a90b96a7710a7p-158, 0.0,
     0x1.e0f4e692a0b1cp-118, 0x1.92adc31328d09p-627, 0x1.d41719cbfe666p-140,
     0x1.9aea316171f64p-864, 0x1.4a2f019f31216p-540, 0x1.f3122485b30ebp-985,
     0x1.a930e29523a3dp-508, 0x1.7695bcf063b8ep-670, 0x1.10b3410593eddp-571,
     0x1.d2d1328fd916cp-224, 0.0, 0.0, 0x1.276666604be78p-816, 0.0, 0.0, 0.0,
     0x1.563f9af6caa2p-923, 0.0, 0.0, 0x1.c42b6a98bfd2ap-141, 0x1.c846f8fb69014p-513,
     0x1.43817b4329339p-413, 0.0, 0.0, 0x1.fa2ac8032d7f4p-223, 0.0, 0.0, 0.0, 0.0,
     0x1.c08a72d416c1dp-146, 0x1.7b63af2063907p-697, 0.0, 0x1.eb4b1166de2d5p-209,
     0x1.5ceb69921f6b6p-789, 0x1.25b71a30f5622p-590, 0x1.9a8666c09878bp-859,
     0x1.407981b8625d1p-378, 0x1.1088fab52ce29p-738, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9e081b171c6a6p-540, 0.0, 0.0, 0.0, 0x1.250fe1cb157e1p-884, 0.0,
     0x1.7a4947430d2a6p-410, 0.0, 0.0, 0x1.f6e73be1ef661p-614, 0.0,
     0x1.08ae8bbff09d6p-637, 0x1.46a9a620b1953p-529, 0.0, 0x1.ee038f38ab182p-653,
     0x1.8f270c4f14df8p-797, 0x1.cd32fb8e96dfap-936, 0.0, 0x1.2c017b10a9594p-305, 0.0,
     0.0, 0.0, 0.0, 0x1.59628a859c256p-65, 0x1.f4b8a6f5fe4aep-395,
     0x1.4145b158562ddp-987, 0.0, 0x1.427233a74262bp-226, 0.0, 0x1.d04492434227ep-978,
     0.0, 0.0, 0.0, 0x1.3717ddda5b46cp-680, 0.0, 0.0, 0x1.d88b117a37996p-290,
     0x1.8b747078f4d9ap-44, 0.0, 0.0, 0x1.34c5d6591cd5dp-921, 0.0,
     0x1.adae6df7d9b16p-678, 0x1.5996d1de734f2p-681, 0x1.5683bb64c1276p-570, 0.0,
     0x1.402c18f98993bp-48, 0.0, 0x1.a81d8fa7e0b7ep-416, 0x1.5baeb52456716p-837,
     0x1.26db9dc38b129p-437, 0.0, 0.0, 0x1.2f7067dc70f92p-1003, 0.0,
     0x1.bc6f044fab50ep-222, 0.0, 0.0, 0.0, 0x1.676f2610a7f13p-564, 0.0, 0.0,
     0x1.0bb36576d3362p-503, 0x1.04749db1bc5aep-940, 0x1.4279cfabaa021p-990,
     0x1.28507b2a85906p-493, 0.0, 0x1.c3a6705dfee0ap-359, 0.0, 0.0,
     0x1.29e64ce6175d4p-469, 0.0, 0x1.3a54a4fc2a0bfp-818, 0.0, 0.0, 0.0,
     0x1.436366daaa2c2p-674, 0.0, 0x1.86f89c70ff8fp-922, 0.0, 0.0,
     0x1.a11c333dcdb61p-50, 0x1.11ea474c1c12bp-573, 0.0, 0x1.5cbfbc5494782p-500, 0.0,
     0.0, 0x1.16caf82a0405ap-513, 0x1.6be2056877355p-915, 0.0, 0.0, 0.0,
     0x1.8a620f46da4fep-896, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f746990a67ce9p-360, 0.0,
     0.0, 0x1.98d85825d49fcp-449, 0.0, 0x1.ad982b538daf8p-616, 0.0,
     0x1.d1afe4dc45595p-849, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.abc2cdd59666ep-442,
     0.0, 0.0, 0x1.677bf4e3d1ffap-960, 0.0, 0x1.17f5f8465c74ap-854, 0.0, 0.0, 0.0,
     0.0, 0x1.3a7eee56cbb84p-635, 0x1.3cc5b5112f3cep-830, 0.0, 0.0, 0.0,
     0x1.63b08fa68faf3p-417, 0x1.185cb96f3900ap-737, 0.0, 0x1.809e44ccbd9e3p-78,
     0x1.9f9b3a9301f85p-605, 0.0, 0.0, 0.0, 0x1.8730d00850831p-955, 0.0, 0.0, 0.0,
     0x1.3fa46acc02254p-316, 0x1.ca19a23863166p-960, 0.0, 0x1.381ac47f305c8p-325,
     0x1.dd8a46f6e4b77p-1021, 0x1.95b31bc7a2f3cp-601, 0x1.c3d5b40aadb51p-22,
     0x1.a69e9660e4109p-344, 0.0, 0.0, 0x1.0393ca73bf29fp-719, 0x1.b3b196696b54fp-126,
     0.0, 0.0, 0.0, 0x1.6bcf298bf86d9p-487, 0x1.b6e2063cbce07p-15, 0.0, 0.0, 0.0,
     0x1.dc5c7908e27a4p-566, 0x1.b95566aea0fa6p-616, 0x1.1f02e70faee54p-962,
     0x1.861410e6a51b3p-579, 0.0, 0.0, 0.0, 0x1.c1d002b41c35ep-916,
     0x1.f18689e03f4ffp-31, 0.0, 0x1.973240861113fp-114, 0x1.0549f8a1bb438p-825, 0.0,
     0.0, 0.0, 0x1.b4a3a79a3eda8p-259, 0.0, 0x1.cc95d08f5bfc7p-533, 0.0, 0.0, 0.0,
     0x1.6d72703a622dcp-642, 0.0, 0x1.ecd30b2b9cbf3p-814, 0.0, 0.0,
     0x1.39c28e25bfa0fp-1020, 0x1.862e633fcd2f1p-919, 0x1.650e8f004b96bp-781, 0.0,
     0x1.84ac336bd798cp-562, 0x1.05537a854febap-644, 0x1.a983dc6a28e0bp-972, 0.0,
     0x1.f4652361a6cb9p-234, 0x1.d0e3623693477p-592, 0.0, 0x1.84c71713c1c67p-352, 0.0,
     0.0, 0x1.197cf43f5492ep-511, 0.0, 0x1.4fb5d11676faap-696, 0.0,
     0x1.e372aa3cc2dd5p-86, 0.0, 0x1.1cdbb4e351015p-379, 0x1.88c4a6d5c13c3p-705,
     0x1.a53943ef3ca5fp-730, 0.0, 0.0, 0x1.8d5da29601f28p-819, 0x1.0287b6f9a8709p-418,
     0.0, 0.0, 0.0, 0.0, 0x1.0f5e26138fdap-409, 0.0, 0.0, 0x1.8f90e15f1f6efp-322,
     0x1.e6ffc620f8576p-797, 0.0, 0x1.c404bdf59685p-426, 0x1.7386a32dd9248p-876, 0.0,
     0x1.44b06d6950129p-460, 0.0, 0.0, 0x1.f489586cfa133p-556, 0.0, 0.0, 0.0,
     0x1.bf63421c617b1p-748, 0.0, 0x1.1f9d5994d3c82p-474, 0.0, 0.0,
     0x1.966f3cb980403p-578, 0x1.e6caefc2b552fp-555, 0.0, 0.0,
     0x1.ab9fb55319ea1p-1009, 0x1.9c152a4fc862dp-408, 0x1.660d28a9efd0cp-892,
     0x1.f137fd01013b3p-524, 0.0, 0.0, 0.0, 0x1.d3b93bd72fba7p-764, 0.0,
     0x1.cd79211ebb74fp-79, 0x1.53b6e976cc051p-883, 0x1.4ff31d0f98457p-830, 0.0, 0.0,
     0x1.37bb32365ef42p-402, 0.0, 0x1.671493efae3dap-915, 0.0, 0.0, 0.0,
     0x1.23d9c99c7edfp-314, 0.0, 0.0, 0.0, 0x1.3c96ae5cc705dp-739, 0.0, 0.0, 0.0,
     0x1.4de0cb1b165bcp-111, 0x1.1dbc53de20ddfp-898, 0x1.67a3cff63b128p-528,
     0x1.1b343b538982cp-138, 0x1.8668f4d53c7a7p-945, 0x1.c97e7cbb161c8p-555,
     0x1.d3c14701207fap-401, 0.0, 0x1.5461c3791fecfp-478, 0x1.f428719f5801cp-124,
     0x1.cd9b65733dc8dp-757, 0.0, 0x1.378bc548e1338p-369, 0x1.c96472265d62bp-222,
     0x1.7c432a995aff8p-361, 0.0, 0x1.af80a2100411ep-251, 0.0, 0.0,
     0x1.a8bcedc321105p-1008, 0x1.7dba07061bedap-474, 0.0, 0.0, 0.0,
     0x1.cffcdccb54d1p-898, 0.0, 0.0, 0x1.ad28d1e644c86p-812, 0x1.85f858bebbfd7p-487,
     0x1.c67e72634648dp-90, 0x1.87cffde667123p-102, 0.0, 0.0, 0x1.25c43d58b8066p-84,
     0x1.b7cf0b59a9933p-793, 0x1.a9cd2927cd6a1p-63, 0.0, 0.0, 0.0,
     0x1.05dcd4d79fd11p-208, 0x1.e132e1a2777d1p-745, 0x1.94a0fd82c5fc7p-40,
     0x1.15940f8a63c8fp-622, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.65396ddbf05cfp-976,
     0x1.b0f0ad7c0545ep-999, 0x1.66110c83aabf3p-429, 0.0, 0.0, 0.0,
     0x1.d0530269a37ecp-717, 0.0, 0x1.95c91f4c7ff4ap-146, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.51cf2d4040502p-489, 0x1.81f9150ece691p-389, 0.0, 0x1.456a02eb946a7p-766, 0.0,
     0.0, 0x1.5d9b2c63c162bp-992, 0x1.e39f1e7d48c5p-905, 0x1.3fd7827ccaf8p-632,
     0x1.11a2e4e52d9c8p-951, 0.0, 0.0, 0x1.5427f64bbef35p-676, 0.0, 0.0,
     0x1.ba08cfc5ecf7cp-112, 0x1.5f12cd4068478p-888, 0x1.63819d6f6aad9p-594,
     0x1.02d1bdf97ac14p-409, 0.0, 0x1.3f0fddacdfb29p-877, 0x1.69fdb1e09c5f9p-119, 0.0,
     0x1.c43cd68b5a396p-232, 0x1.d4aea6a65d54cp-612, 0x1.ac476ea33e301p-354, 0.0,
     0x1.7b70bd4a74fd6p-649, 0x1.54643c737e375p-445, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.acbd98d469c0ap-113, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2196d87bc0937p-816, 0.0,
     0x1.8048f03122c8ep-938, 0x1.624b84b1838ap-99, 0.0, 0x1.7310beb3ec5d6p-944,
     0x1.97eae699430b8p-121, 0x1.572c3ec171be5p-49, 0.0, 0.0, 0.0,
     0x1.235b3449ead8ap-288, 0.0, 0x1.2c289f8f1df89p-673, 0x1.d7b02c703d6dbp-774,
     0x1.0d33b318a7e25p-339, 0x1.ab38f6b2e5e6ep-123, 0x1.9aa0d03967e44p-538,
     0x1.7e6d02282218fp-996, 0x1.2528948024753p-923, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e0f7b6c12697bp-657, 0x1.0cb22aff7e9bep-596, 0.0, 0x1.2087ebb9c03bcp-615,
     0x1.c1b1bf8e9c59bp-981, 0.0, 0x1.c92293c18b22bp-370, 0.0, 0.0, 0.0,
     0x1.e014bfc1e360ep-743, 0x1.43a242129f1a4p-376, 0.0, 0x1.151fddc6ee9cp-668, 0.0,
     0.0, 0x1.c98a17852d42bp-1021, 0x1.7a26ed6318385p-334, 0.0,
     0x1.1fc9273e9bb64p-473, 0.0, 0x1.7aa26d2e82158p-181, 0x1.79f7a9c9cd644p-748,
     0x1.8a16557082a07p-1020, 0.0, 0.0, 0x1.031c3f681d5f3p-557, 0.0,
     0x1.23278c98cec8bp-137, 0.0, 0.0, 0.0, 0x1.53782be9b2453p-92,
     0x1.29366b965ba4cp-134, 0.0, 0.0, 0x1.211246e4957f1p-143, 0.0, 0.0, 0.0, 0.0,
     0x1.189ac84349052p-522, 0.0, 0.0, 0x1.4819c30b82eap-753, 0x1.f9089ea207f01p-717,
     0x1.2f61217df8aa3p-972, 0.0, 0x1.52fe1ff79a796p-785, 0.0, 0.0, 0.0, 0.0,
     0x1.93fb172474a02p-828, 0.0, 0x1.eed23cdb8cd29p-612, 0.0, 0.0,
     0x1.4d01d627879dap-925, 0x1.85357affd17bep-471, 0.0, 0.0, 0x1.db8cfc136b693p-711,
     0x1.6729c3d76a4a9p-731, 0x1.b20850f11ef87p-750, 0x1.f22eadb2d707cp-438, 0.0,
     0x1.3d6442d4a577fp-846, 0.0, 0.0, 0x1.6eaa0ac0a54c6p-20, 0x1.49baaaff0e0bap-753,
     0.0, 0.0, 0x1.12b7a1cb5efd9p-393, 0x1.6bafe37497493p-102, 0x1.1759da229b223p-495,
     0x1.9587023f094c7p-378, 0.0, 0x1.67283a76a5651p-296, 0.0, 0x1.6e8a0a9dcd0c4p-7,
     0.0, 0.0, 0x1.6edd2da6a7f59p-388, 0.0, 0x1.9797d58a24e55p-879, 0.0,
     0x1.30633c7aff8a8p-220, 0.0, 0x1.a4212bb9bf368p-39, 0.0, 0x1.ecd3bb08ec3p-236,
     0x1.eb2af35641bf1p-838, 0x1.3531e3dc5f182p-639, 0x1.3703379941dbep-415,
     0x1.4d0a7577ec54ep-775, 0.0, 0x1.6d2f585ceba3p-705, 0x1.44306f39c12e7p-437, 0.0,
     0.0, 0.0, 0.0, 0x1.ca94673f05434p-856, 0.0, 0.0, 0.0, 0x1.aa3101dec2cdbp-175,
     0x1.b86b506bca8ep-730, 0x1.d6aba97a31664p-641, 0x1.d0849a033ad29p-130,
     0x1.cc5d89b60c4ffp-984, 0.0, 0.0, 0.0, 0.0, 0x1.43296fc235bcep-584, 0.0,
     0x1.025b9c593d45p-775, 0x1.9e78eb1e8b8eep-547, 0.0, 0.0, 0.0,
     0x1.4dfab93e12b5dp-247, 0x1.a85bafdb509f3p-753, 0x1.18134a5cb3f81p-853, 0.0, 0.0,
     0x1.a241004b619a7p-484, 0x1.826ea520bc899p-405, 0.0, 0x1.2f755df73b5efp-271, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.16c9ccc2d5019p-83, 0x1.f2a2e3026ab4ap-151,
     0.0, 0x1.51bd9cc66cf9cp-335, 0.0, 0.0, 0x1.20df80cad3b72p-834,
     0x1.79ab6ab8e7a09p-551, 0.0, 0.0, 0x1.660ae65192f7cp-492, 0.0,
     0x1.d699dec525023p-301, 0.0, 0x1.42245321a4a09p-127, 0.0, 0.0,
     0x1.f27e11a65bc5p-87, 0.0, 0.0, 0x1.85ef7438eb78bp-153, 0x1.f6eb47188d475p-853,
     0x1.7339b0c28b2cap-571, 0.0, 0.0, 0x1.0ba3b4e3dd115p-507, 0x1.be423ae80d062p-267,
     0.0, 0x1.16b369227ab03p-740, 0x1.a40b5918426aap-200, 0.0, 0x1.fab13af781eaep-483,
     0x1.7c12765c18f0ap-680, 0x1.68a9f2e0a39edp-748, 0x1.0207b0192df98p-176, 0.0, 0.0,
     0x1.47f4485314c9p-996, 0.0, 0.0, 0.0, 0x1.468499e3303b7p-755,
     0x1.4d116d51039bp-315, 0.0, 0x1.3a25dde99a53dp-125, 0.0, 0.0,
     0x1.35a971d4d22a9p-973, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51545e6cce1a4p-810,
     0x1.3390bf2a86cd1p-349, 0x1.10821b1d98df9p-138, 0x1.2883d2e2d9ee4p-601,
     0x1.21e258b1c3b6dp-513, 0.0, 0.0, 0.0, 0x1.cf31c8f46e71fp-668,
     0x1.821fd281eaffap-411, 0x1.43f562c4e213cp-611, 0x1.1db82e603175dp-949, 0.0, 0.0,
     0x1.966764bcdc1d6p-659, 0.0, 0.0, 0.0, 0x1.c855e948f266cp-937, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.eacd506d5ee33p-786, 0.0, 0.0, 0x1.065c3f8e29a5bp-850,
     0x1.fa2446c298ef6p-993, 0.0, 0x1.80ee845a953adp-46, 0.0, 0.0, 0.0,
     0x1.91f148d231e0ep-21, 0x1.390fa6fa9cba1p-650, 0x1.7a1584e4d1da5p-487,
     0x1.3f3d8c2a57917p-549, 0x1.0d2250696a3e5p-1022, 0.0, 0x1.7cc86bf25d361p-957,
     0x1.386050b1f6ccap-256, 0.0, 0x1.92b1b6f09bf24p-838, 0x1.265780d9aee4ep-146,
     0x1.334650d5771d9p-938, 0.0, 0x1.027b7ad441536p-750, 0.0, 0x1.1abebe600dea3p-142,
     0x1.b0288203842eep-480, 0.0, 0x1.872346509d86fp-714, 0x1.479e11d06cbb2p-247,
     0x1.cdd21ead3281ap-450, 0.0, 0x1.69abbb9782408p-821, 0.0, 0.0,
     0x1.cbbe98e6db793p-271, 0x1.d9234b5545329p-509, 0.0, 0.0, 0.0,
     0x1.317aa0f894327p-746, 0x1.2967fe002fc3ap-804, 0x1.bf6a7500bc287p-1016, 0.0,
     0x1.0e280f2d8c872p-205, 0.0, 0.0, 0x1.53de7b247e1d4p-20, 0.0, 0.0,
     0x1.3185ba882bc5ap-358, 0x1.e943537e18a5fp-523, 0x1.530de82c7b11p-998, 0.0, 0.0,
     0.0, 0x1.1b717379def33p-770, 0x1.949114920fbcep-743, 0x1.5e6dfa4be98f1p-859, 0.0,
     0.0, 0x1.de202da808099p-443, 0.0, 0.0, 0x1.463fd071966e6p-577,
     0x1.e2d1d789af41p-783, 0x1.5826c039f24edp-210, 0x1.c9bfe8dbb2151p-305,
     0x1.add31ad257543p-329, 0x1.feeb6626b91ccp-858, 0x1.91dfdab1bb488p-768, 0.0, 0.0,
     0x1.d0fcd2a93f837p-457, 0x1.6bb2c0dfa6789p-70, 0x1.7beca354e0c64p-23,
     0x1.e4de0d40a1da7p-405, 0x1.75217b9c72d3ep-499, 0x1.a09880b147f8fp-426,
     0x1.fe3de3772a21fp-180, 0x1.b3505cb9dfb5dp-61, 0.0, 0x1.582cc1275f0cfp-126,
     0x1.b1cafa238f9a2p-219, 0x1.c6940324fb26dp-17, 0x1.003f30e9060ecp-969, 0.0, 0.0,
     0x1.2b5e2034bbc44p-560, 0x1.375c6f027a626p-20, 0x1.a641e7dde0085p-739,
     0x1.d513127b5c4ebp-31, 0x1.a3e34315a3be1p-856, 0x1.992497dcce1dep-377, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cb94233fd26d2p-392, 0x1.d7b2c4fff4ec2p-163, 0.0,
     0x1.e0ffd7f0ae5edp-279, 0x1.845d03f48556cp-750, 0x1.32cfbb11cac66p-997,
     0x1.f0616ea1de25bp-859, 0.0, 0.0, 0.0, 0x1.b8c3bbbb9da2dp-931,
     0x1.887fb3c7a963dp-592, 0.0, 0.0, 0x1.c841e15875781p-542, 0.0, 0.0,
     0x1.9cbf50a188585p-624, 0x1.5813d19dc1b5ep-317, 0x1.79ac4fbcc9cffp-804, 0.0,
     0x1.3330841e5342ep-425, 0.0, 0.0, 0x1.829deae93232cp-618, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1210a96f44faap-401, 0.0, 0x1.e8823acba947dp-224, 0x1.ef05d99f12327p-320,
     0x1.a0841f6563858p-316, 0x1.6669312fc05e6p-183, 0.0, 0x1.ae756c6110515p-211,
     0x1.1ec504c2a91e4p-259, 0.0, 0x1.552c7b5715e79p-666, 0x1.8bb1a0961e3fcp-151, 0.0,
     0x1.82372edc822bfp-59, 0.0, 0x1.2c7544ca48f1p-225, 0.0, 0x1.4de84189c1aa9p-609,
     0.0, 0.0, 0.0, 0.0, 0x1.4535603bc5925p-347, 0x1.ce3e8099baa6fp-918,
     0x1.d91ed1dbc894p-591, 0x1.04e5e502c5944p-449, 0.0, 0x1.fcdc512ba7c95p-110,
     0x1.24d5796a7fd4bp-456, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.dad169b5a93b3p-526,
     0x1.8be0487f46d6ep-807, 0.0, 0x1.beebe03ad07cap-744, 0.0, 0.0, 0.0,
     0x1.d089aeb842a6p-142, 0.0, 0.0, 0.0, 0x1.51d249abc0088p-867,
     0x1.6f4f767a40f83p-696, 0.0, 0.0, 0x1.0d3bc341159e3p-931, 0x1.b644401794f77p-564,
     0.0, 0.0, 0.0, 0.0, 0x1.095dd523ca394p-759, 0.0, 0.0, 0x1.52ba4496285edp-448,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a30c7f35e892p-455, 0.0, 0x1.ca880b0efd4dfp-960,
     0.0, 0x1.4b7c4c7bd4809p-632, 0.0, 0.0, 0.0, 0.0, 0x1.e42e9f3757a24p-4, 0.0,
     0x1.8929a52cb7bc3p-339, 0.0, 0x1.4453c6aa921d5p-817, 0x1.640e0d80d4d86p-393, 0.0,
     0x1.f7b6df59b9fe7p-97, 0x1.3dafe3a9ff4dbp-298, 0x1.41ac9e3b7e137p-537,
     0x1.f944d336ea0a9p-944, 0x1.8a3c3f0e0ce46p-22, 0x1.25de3818ddd94p-632, 0.0,
     0x1.780fd20967bf4p-819, 0.0, 0.0, 0x1.5e0a7d4a9fe1p-947, 0.0,
     0x1.b8462b2077e39p-211, 0x1.fe58de9f96c3bp-923, 0.0, 0x1.035bfa06deccbp-937,
     0x1.8b7d39589c8ep-168, 0x1.fb14fd024c812p-62, 0.0, 0.0, 0.0,
     0x1.eec7bb99962f9p-788, 0.0, 0x1.349ef08eebb77p-85, 0x1.6b31f4d6a2585p-934,
     0x1.c835ec857247cp-635, 0x1.861add2a8b39ap-979, 0.0, 0x1.f5041467ea296p-95,
     0x1.0b6a59ab2561cp-318, 0x1.65e459753d83dp-820, 0.0, 0x1.6dd73d5593e54p-1015,
     0x1.2d9e7bdb803abp-859, 0x1.799003fb7a70fp-841, 0x1.2433e9cdb329ap-66, 0.0,
     0x1.d01b578d25647p-753, 0x1.19d53cb4b392dp-303, 0x1.99374cd61268ep-643,
     0x1.723cea9ba9872p-164, 0x1.e686ec5c4d124p-29, 0.0, 0.0, 0.0, 0.0,
     0x1.4d1c5d777278bp-486, 0x1.2050c95d58a72p-710, 0x1.e25659f7199cp-760, 0.0, 0.0,
     0.0, 0.0, 0x1.edddfa385b58fp-125, 0x1.d9de568015a01p-779, 0x1.cd8cfcc350029p-578,
     0.0, 0.0, 0x1.2064b70cbeda2p-641, 0.0, 0x1.345bcb847691cp-885,
     0x1.a4f0616cff724p-676, 0x1.f9123d84448bp-722, 0x1.0cec178abe9ffp-898,
     0x1.1b88968a84af5p-3, 0x1.2bdb5a56a2a94p-858, 0x1.561b50972e443p-825,
     0x1.a66e0099eaabdp-910, 0.0, 0.0, 0x1.12771e79b95fp-101, 0.0, 0.0, 0.0,
     0x1.e83f35c40e0edp-763, 0x1.d08353a331c72p-645, 0x1.43052a28689bep-189,
     0x1.c218ff7aa6cdp-240, 0.0, 0x1.e67e8b29c3282p-1018, 0x1.ddb255b352804p-761,
     0x1.9c587ce2f0f5bp-36, 0x1.9b28b554b42f5p-595, 0.0, 0.0, 0x1.d9a73daa6e925p-376,
     0.0, 0.0, 0x1.8c6d3ca7ba217p-151, 0.0, 0.0, 0x1.74999b9d85046p-423, 0.0,
     0x1.d19f4d8a0744ap-762, 0x1.8366ae148a049p-617, 0.0, 0x1.3815203c4f012p-295,
     0x1.cd1dbc6549dafp-865, 0x1.d3d6ed2076d82p-305, 0.0, 0x1.df63a02290eb5p-24, 0.0,
     0.0, 0x1.90cb5fc3e6d75p-782, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bd42ace02e46p-41,
     0x1.f974b8f90ab32p-326, 0x1.3ce444d0810a2p-366, 0x1.6f2a564b5f008p-1016, 0.0,
     0x1.b529c0325efddp-830, 0.0, 0x1.17f087fd5d286p-829, 0x1.05767c20962c4p-234,
     0x1.d257f5a9bc108p-224, 0x1.5679e592014e4p-190, 0x1.fef29fa11e56fp-4,
     0x1.46e55efea4e02p-622, 0x1.a48ab1063ff46p-336
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
            tmp1 = Sleef_finz_roundd1_purecfma(tmp0);
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
    printf("Sleef_finz_roundd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_roundd1_purecfma bench acc %la\n", global_bench_acc);
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
