/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhd1_u10purecfma.c --function \
 *     Sleef_finz_atanhd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.04588e38e2433p-422, 0.0, 0.0, 0x1.104b5026b9822p-147,
     0x1.6939c5cbb0b8ap-738, 0.0, 0.0, 0x1.aa3c028e93219p-388, 0.0, 0.0, 0.0,
     0x1.7ecf703e39972p-63, 0x1.13a17830ed81fp-501, 0.0, 0.0, 0.0,
     0x1.ba7727a4bfc3cp-308, 0.0, 0x1.9c93d237d937bp-283, 0x1.e906d8234f0cbp-158, 0.0,
     0.0, 0x1.a26140e09739dp-226, 0x1.8e686cf2e44bdp-250, 0.0, 0x1.49fb0590a9423p-659,
     0x1.808f43ae15e64p-534, 0.0, 0x1.16e170253b776p-137, 0.0, 0x1.0df27aea9138dp-490,
     0x1.15237264fdfd7p-239, 0x1.7aff2f132b9fep-599, 0x1.f4fe64250f5cfp-181,
     0x1.47f17e73d4653p-847, 0x1.d7b863e36e591p-70, 0.0, 0.0, 0x1.7dea95ae16d3cp-655,
     0x1.f9792a92f07bfp-393, 0x1.4a6d96b51baa7p-569, 0x1.d44eda2543dddp-768, 0.0,
     0x1.4673cfaf75d5fp-889, 0x1.f7e9a0c5d5285p-729, 0.0, 0.0, 0.0,
     0x1.25e923f64d90ap-594, 0.0, 0x1.60d5fc62ba4c7p-210, 0.0, 0x1.d61d3e52a09d2p-285,
     0x1.f85c7d6835a08p-824, 0x1.aced695f507b5p-842, 0x1.798ec7d8aa1a4p-319, 0.0,
     0x1.f2d216e7c6eb7p-511, 0.0, 0x1.549e632487d81p-419, 0x1.bb732c46fda0fp-1009,
     0.0, 0x1.a64e4b94fa31fp-848, 0.0, 0.0, 0x1.94158f858313p-291, 0.0,
     0x1.0c2265b2f672fp-766, 0x1.bccfcc5c93bd2p-563, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f2e9245688e12p-286, 0.0, 0.0, 0.0, 0.0, 0x1.2bc2dc0fafdeep-638,
     0x1.fc08323c2cb9p-65, 0x1.602050f522c46p-444, 0x1.0c654340bb3f4p-951, 0.0, 0.0,
     0.0, 0.0, 0x1.236c8f45723e2p-108, 0x1.957b4f6d4e91ap-770, 0.0, 0.0, 0.0,
     0x1.a04b5aee6bdc7p-350, 0x1.c5733c162820dp-22, 0.0, 0x1.84d059f7ec578p-14,
     0x1.429b9758dbc34p-385, 0x1.efc9c6fe21a1ap-909, 0x1.92d31a49b35edp-149,
     0x1.398a7dd617707p-915, 0x1.eafa8c5e5b564p-1003, 0x1.fdb55ae9f746p-496,
     0x1.b2a29aaf831aap-142, 0.0, 0x1.984f44068e183p-527, 0.0, 0.0, 0.0,
     0x1.4cf0aab56c29ep-70, 0x1.7647cc99345p-61, 0.0, 0.0, 0.0,
     0x1.a440507635362p-199, 0x1.1b18a192463f6p-903, 0x1.6d5382fbf0915p-629,
     0x1.271b72427bd8cp-426, 0.0, 0.0, 0x1.cf4ab175229fcp-198, 0x1.d1ae9c89bf496p-220,
     0.0, 0.0, 0x1.7bbaac45b64fcp-675, 0.0, 0.0, 0.0, 0.0, 0x1.01e27ee9b2bf4p-606,
     0.0, 0.0, 0x1.e959b91748d0ap-694, 0x1.38c42f47ad4d5p-894, 0x1.3ec5be1ee3c73p-355,
     0x1.4f5d520d13fbep-185, 0.0, 0x1.ef903e8c12e07p-1006, 0.0,
     0x1.219d359098ce7p-738, 0.0, 0x1.fb478fa8f444ap-436, 0.0, 0.0, 0.0,
     0x1.856394cd56a3fp-927, 0x1.caa28988d383bp-549, 0x1.e9629e4decaf1p-867, 0.0,
     0x1.0ce7864b0b001p-836, 0x1.3b7cbbbf9a16dp-815, 0.0, 0.0, 0.0,
     0x1.8da605eefe874p-23, 0x1.6f1da51f8e63p-800, 0.0, 0x1.77c1bdfc8d664p-425,
     0x1.a73b777ac24eap-902, 0x1.93a956a91e50ap-355, 0.0, 0x1.a4e309595b5aap-1014,
     0.0, 0x1.3dce5dad303d4p-799, 0.0, 0.0, 0x1.de9e7c9e5ce8ep-243,
     0x1.1ac39d293ff96p-96, 0x1.491dc5ddda503p-578, 0.0, 0.0, 0x1.d8ee822850cfdp-831,
     0.0, 0x1.633ef819d0384p-573, 0x1.f382cd764e191p-527, 0.0, 0x1.0d36e7da1f9aep-437,
     0x1.9e5b8e2e26a69p-7, 0x1.0e2a1df8e9a23p-719, 0.0, 0.0, 0.0,
     0x1.c7a70304dd195p-771, 0.0, 0.0, 0.0, 0x1.bc044b03677c7p-62, 0.0,
     0x1.882da14392825p-673, 0x1.652524cf635c3p-645, 0.0, 0x1.ef5ca617c5f67p-825,
     0x1.13a7543b66638p-640, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.3a23897057989p-1000, 0.0,
     0.0, 0x1.50c9b0ea6146ap-739, 0x1.419845ba93a1ap-1008, 0x1.ebd4d559e3448p-911,
     0.0, 0.0, 0.0, 0x1.10e4529b9778fp-312, 0x1.128d918409c87p-356,
     0x1.f80784527cd6bp-732, 0x1.39344259feb68p-499, 0.0, 0x1.0b19db84d9049p-540, 0.0,
     0x1.e30b452ed7b02p-523, 0.0, 0.0, 0x1.cd6160598eed6p-365, 0.0, 0.0,
     0x1.242e228b0279fp-1003, 0x1.72d640f47cd0dp-198, 0x1.03a1f713f90d1p-52,
     0x1.05fd2bdc54e5cp-577, 0.0, 0x1.a3d38e71df51cp-994, 0x1.8223163ae77bap-320,
     0x1.54ce7c1f69781p-433, 0.0, 0x1.bfd4b9f1ca237p-724, 0x1.4762fa65b831dp-851,
     0x1.f92c58ee13d88p-1007, 0.0, 0.0, 0x1.73f01027a9c35p-929, 0.0,
     0x1.61ed8a38f5bf5p-85, 0.0, 0.0, 0x1.ea40563e0695fp-623, 0x1.92047e73885p-130,
     0x1.fc1fd6a839545p-854, 0.0, 0x1.65f9d519e44f1p-860, 0x1.1c3855647d5bep-232, 0.0,
     0.0, 0.0, 0x1.c990853040e15p-551, 0x1.51b8b51186ab4p-789, 0.0, 0.0,
     0x1.5dda3b937dccdp-321, 0.0, 0x1.59526628f6ae6p-201, 0.0, 0x1.9f62a3eed8c35p-191,
     0.0, 0.0, 0.0, 0x1.66cd233975e71p-329, 0.0, 0.0, 0.0, 0.0,
     0x1.f0f127daa2436p-878, 0.0, 0.0, 0.0, 0x1.ae8302c27bf96p-181,
     0x1.c6ed37254c134p-899, 0x1.2d904ed555262p-575, 0x1.2bd6c8174b682p-148, 0.0, 0.0,
     0.0, 0x1.c65fd2cc191dcp-738, 0x1.19a1221ef6f5p-393, 0.0, 0x1.1d6938e84b649p-101,
     0x1.455bfe8ad2d43p-93, 0.0, 0.0, 0.0, 0.0, 0x1.cff8b00bbd648p-327, 0.0, 0.0, 0.0,
     0.0, 0x1.f62422051c73dp-384, 0x1.21c22607f3f7bp-229, 0.0, 0x1.fdf514953c69cp-332,
     0x1.1564c271cdaecp-580, 0.0, 0.0, 0.0, 0.0, 0x1.cf597db5d47e1p-261,
     0x1.4e95f924f1745p-23, 0x1.6875f023467b7p-238, 0.0, 0x1.c153d5c8b0681p-19, 0.0,
     0x1.feeadfb954d6cp-449, 0x1.a0e3af592da3bp-645, 0.0, 0.0, 0.0,
     0x1.36a95626a40bp-726, 0x1.df40ede1708a8p-619, 0x1.5e05e613cb518p-586, 0.0,
     0x1.0ca068628632p-156, 0.0, 0x1.077d4593ffafp-16, 0.0, 0.0,
     0x1.78be045171de1p-513, 0x1.a54d42605c17ep-1000, 0.0, 0x1.fe6df34617a06p-98,
     0x1.2777db4f16165p-94, 0.0, 0.0, 0x1.81f55e2c0652ep-646, 0x1.c36bee21682edp-149,
     0x1.cc896eac48abep-515, 0x1.40683916d2432p-589, 0.0, 0.0, 0x1.e67c59b670791p-492,
     0.0, 0.0, 0x1.70910330036a7p-686, 0.0, 0x1.316f1f3e5fdb1p-442,
     0x1.4761af7b5e172p-578, 0x1.dfba59b84ba28p-198, 0.0, 0x1.2dbbf6bca65ecp-769, 0.0,
     0x1.1ed1394371eafp-973, 0.0, 0x1.6253a2a3587ecp-44, 0.0, 0x1.b2a015dcd31e4p-103,
     0x1.fb05d42c9699ap-129, 0x1.34a001e61ce13p-554, 0.0, 0.0, 0.0,
     0x1.f0d7acf0b7c03p-889, 0.0, 0.0, 0x1.56e34c4dd009fp-475, 0x1.0a360ea7a3196p-450,
     0x1.28564ec63b0dfp-786, 0.0, 0x1.5a2c7d659471p-830, 0.0, 0x1.5621fdfbdc69ap-850,
     0.0, 0.0, 0.0, 0.0, 0x1.d7cf7ab465b56p-575, 0.0, 0.0, 0x1.2aa48e0de23ebp-54,
     0x1.fd03e783685e4p-588, 0.0, 0x1.9e87fb3358d04p-352, 0.0, 0.0,
     0x1.3b1f954455075p-698, 0x1.07a1448ed71c3p-731, 0.0, 0.0, 0.0,
     0x1.8ae34ce09c2afp-769, 0x1.5b45b0748c43fp-194, 0.0, 0x1.895d62f36af3ap-768, 0.0,
     0.0, 0x1.ba3eb258599d1p-647, 0x1.bc9c17e0db24dp-774, 0.0, 0.0, 0.0,
     0x1.30b4a0fd41756p-902, 0.0, 0x1.965a3599f3e1cp-55, 0.0, 0.0, 0.0,
     0x1.2d7ec591da288p-587, 0.0, 0.0, 0.0, 0x1.a528b9ddce44p-99, 0.0, 0.0,
     0x1.7b5650b4a4c1p-885, 0x1.0d5ae395de0a3p-301, 0.0, 0.0, 0x1.c8541ad431affp-606,
     0x1.2851dbea6c54bp-853, 0.0, 0.0, 0.0, 0x1.d3c76dbf46512p-673, 0.0,
     0x1.aef4a5a2e8a36p-618, 0x1.fbd97165e2ffcp-607, 0.0, 0x1.380d4f2b01ea9p-553, 0.0,
     0.0, 0x1.9c3195667d174p-779, 0x1.b65d5f7e80d9fp-379, 0.0, 0x1.d4cce234a023bp-906,
     0.0, 0.0, 0.0, 0x1.91ee72d7a4fbbp-125, 0.0, 0.0, 0.0, 0.0,
     0x1.f223e06dae3c7p-509, 0x1.35c12cc43cd6bp-417, 0.0, 0x1.09abfdb8ac511p-650,
     0x1.f66848c66f863p-116, 0x1.07d04a537e5bfp-271, 0.0, 0x1.923a2314a356p-740,
     0x1.45709e5d56cb8p-916, 0.0, 0x1.4fcc80c0de89ep-418, 0.0, 0.0,
     0x1.ea56db35ffcf4p-123, 0x1.83a9c586d374ep-195, 0.0, 0x1.2417c9224d019p-788, 0.0,
     0x1.c525f9a08863cp-613, 0.0, 0.0, 0x1.4400696ba4b39p-479, 0x1.4f6a578869f48p-63,
     0x1.9f19aa5ca535ap-996, 0x1.e54ccf7bb7798p-212, 0x1.0eda66ce14dbdp-304,
     0x1.263a364f69e03p-531, 0.0, 0x1.66aac4d402514p-939, 0.0, 0.0, 0.0,
     0x1.c97ebb3b0ef2dp-707, 0x1.16051a8d7698ep-864, 0x1.4adba73a6dad8p-538,
     0x1.e3bede85d06c8p-565, 0x1.2803ada6340f4p-125, 0.0, 0.0, 0.0,
     0x1.309b055af54a9p-276, 0.0, 0.0, 0x1.18e2d6a3c4ceap-970, 0x1.3f3fc510732b9p-342,
     0x1.383c52e514279p-614, 0x1.ea979faa99bcep-831, 0x1.a403b595ac0c4p-759, 0.0,
     0x1.6e07b01ef95fbp-684, 0.0, 0x1.9a340d8fdf557p-139, 0x1.a7d0ce11b3a58p-639,
     0x1.2b9f5f51cf15cp-513, 0x1.aa4eb33eaae07p-805, 0x1.30ce2d1b27cf4p-195,
     0x1.feb703947721bp-645, 0x1.55f29dacd021bp-680, 0.0, 0x1.25dae4a598d18p-187, 0.0,
     0x1.e619171e53188p-829, 0x1.8a8916f9c55dep-404, 0.0, 0x1.31f161ba99ee4p-795, 0.0,
     0x1.e56e3ab67d728p-832, 0.0, 0x1.00948a202438ap-904, 0x1.918637e9d871ap-645, 0.0,
     0.0, 0.0, 0x1.3da50bd41a8d6p-120, 0x1.9e91f82d780abp-413, 0.0, 0.0, 0.0,
     0x1.9d42b07d50127p-153, 0.0, 0.0, 0x1.3f44fad0a6cf1p-298, 0.0,
     0x1.7adb9778ef57fp-910, 0x1.2126bf8e6dffdp-45, 0.0, 0.0, 0x1.33d3f898d3b4bp-876,
     0x1.150c4bd562153p-593, 0x1.ca3affdd8abd3p-296, 0x1.234ccbb310fe7p-118, 0.0, 0.0,
     0.0, 0x1.8dee9cebb3caep-68, 0.0, 0x1.2c1c5de5ce081p-443, 0.0, 0.0, 0.0,
     0x1.74ee6bb075132p-156, 0x1.f333e69a7f042p-605, 0.0, 0x1.1f2fd0ed661cbp-308, 0.0,
     0.0, 0x1.55e072f8e9eb6p-769, 0x1.7372affc70a95p-729, 0x1.b70351eed9dd8p-502, 0.0,
     0.0, 0x1.cb5df7488fcc7p-456, 0x1.ab5e59fae9578p-812, 0.0, 0x1.e97c9a63e5ec6p-997,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c096b0db100e7p-802, 0x1.48e32474601b2p-235,
     0.0, 0x1.9c5417d1c69c4p-227, 0x1.0b7fa6ea7613p-510, 0x1.b8809c0ae7643p-32,
     0x1.a7a150c18752cp-1003, 0x1.5c891de2decfcp-160, 0.0, 0.0,
     0x1.2ab35457d05c8p-503, 0.0, 0.0, 0.0, 0x1.414b560efef85p-23, 0.0, 0.0,
     0x1.caa38dc39371fp-406, 0.0, 0x1.4eee01613366bp-148, 0x1.68274100acf2cp-360, 0.0,
     0x1.5e7fa7a6aaf5ep-354, 0.0, 0x1.524e26cdd88aep-175, 0x1.d45914460e3eep-949, 0.0,
     0.0, 0x1.4a88b11f03a41p-936, 0.0, 0x1.55ccc5bf0393dp-260, 0x1.0ea81d2d1524bp-206,
     0.0, 0.0, 0x1.59c27fd4d790cp-830, 0.0, 0.0, 0.0, 0.0, 0x1.bcba604303045p-539,
     0x1.e762a50b8c3ffp-130, 0x1.dceaa6974310cp-171, 0x1.4899f6392fc9cp-643,
     0x1.371aea1d5c74cp-136, 0x1.1c7f279a47fe4p-861, 0.0, 0x1.1dcdc8a406d7p-771, 0.0,
     0x1.2328d875142b3p-790, 0.0, 0x1.ea174f613694bp-516, 0.0, 0.0, 0.0, 0.0,
     0x1.d5306fed73126p-966, 0x1.32887f3f7ae86p-46, 0.0, 0.0, 0x1.2b1df3331a319p-721,
     0x1.67f152c2b63d7p-738, 0x1.d4bfe3ac857b5p-419, 0x1.6c15feb879406p-122, 0.0, 0.0,
     0x1.ec3dfcc222b43p-981, 0x1.4cdf17e986b12p-121, 0.0, 0x1.74523a3ba6e62p-937, 0.0,
     0.0, 0.0, 0x1.2327221198496p-652, 0x1.f538744ea36aep-423, 0x1.53bf40839b5c2p-225,
     0.0, 0x1.38b5912edb4c3p-708, 0x1.bd9f38ad9cf6fp-870, 0.0, 0.0,
     0x1.c27d6c1c23c97p-913, 0x1.e4d4691776edbp-19, 0.0, 0x1.beb6b633fc1c9p-470,
     0x1.153f433544ea9p-704, 0.0, 0x1.f794b666461c9p-429, 0x1.8148830519056p-789,
     0x1.8185368ea8b85p-119, 0.0, 0x1.9808928f5bb84p-587, 0.0, 0x1.50da6601272f1p-539,
     0.0, 0x1.1f9b2c563b509p-248, 0x1.6244bf0efd39dp-351, 0.0, 0.0,
     0x1.d947f7dd50b8ep-700, 0x1.a48dd29f66078p-365, 0x1.25a6ae44169cbp-329,
     0x1.42e55e96d39e9p-860, 0x1.1fd6c87e3a0b3p-795, 0x1.b84dfb578893ap-265, 0.0,
     0x1.d4a09f71fb7c4p-10, 0.0, 0.0, 0x1.7cea42b2be72cp-817, 0.0,
     0x1.bae98524b4401p-551, 0.0, 0x1.1b88a474bdf89p-32, 0.0, 0x1.328a94050ef7cp-321,
     0x1.2e83dcea3ae12p-416, 0x1.ae3f2fa44371ap-362, 0.0, 0.0, 0x1.dd93e5548946ep-102,
     0.0, 0x1.9bc79fa83db77p-105, 0x1.77d086b553b87p-717, 0x1.1007223d805eap-191,
     0x1.d17e9710a6c65p-603, 0.0, 0x1.7a56167a34335p-886, 0x1.eb7585a60e414p-208, 0.0,
     0.0, 0.0, 0x1.07d161c94124cp-664, 0x1.207f49288b336p-1012, 0.0, 0.0, 0.0,
     0x1.50474b28c4aa2p-810, 0x1.8f153b1a79091p-852, 0.0, 0.0, 0x1.2a3bda07d6452p-445,
     0.0, 0x1.24a319856aa8ap-220, 0x1.054f2699ccec1p-969, 0.0, 0x1.bb679052a888bp-900,
     0x1.424225205c8fap-1000, 0.0, 0x1.46997804d4b0fp-346, 0x1.3d306fcb13aaap-258,
     0.0, 0x1.ddc4ab19bb428p-553, 0.0, 0.0, 0x1.44ebc27110df8p-310,
     0x1.085983c3f4d37p-499, 0x1.213b28e36c357p-805, 0.0, 0x1.36baa66a47c41p-792,
     0x1.eccf128e64026p-708, 0.0, 0x1.e04e9f9975cbcp-635, 0x1.af80765ae1c0dp-283, 0.0,
     0.0, 0.0, 0x1.467aac07cd024p-580, 0x1.bd7a46b9be31cp-47, 0x1.060ec8d06ecbp-343,
     0x1.4f012cc35b543p-904, 0x1.391af8b49597dp-464, 0.0, 0x1.5ed3a4de31fb8p-454, 0.0,
     0.0, 0x1.f9023a14c20bep-90, 0x1.26e4a3196189bp-748, 0x1.0868662bd31dfp-152, 0.0,
     0x1.f94875e52195cp-62, 0.0, 0x1.0b9b180ab4b37p-509, 0x1.07e21cfc0aa6ep-478, 0.0,
     0.0, 0.0, 0x1.b32a171426dfdp-580, 0x1.48be18be3d86fp-871, 0x1.fc2b66cc07da7p-903,
     0x1.b0c72cfdb225bp-407, 0.0, 0x1.01e420ffd43b8p-545, 0.0, 0.0, 0.0,
     0x1.c801df047005dp-134, 0.0, 0.0, 0x1.f34a19ea56b42p-568, 0x1.e8657d30c0c78p-282,
     0.0, 0x1.2393d4f7c1374p-757, 0x1.73e31a6bd2bc8p-162, 0.0, 0.0,
     0x1.91b69408d2085p-50, 0x1.be88c3d589738p-942, 0.0, 0.0, 0x1.d171ee99bd928p-420,
     0.0, 0.0, 0x1.5382ad00fa188p-504, 0x1.f0e7d43a336a4p-264, 0x1.49e9fb4304e32p-995,
     0.0, 0x1.933d612538946p-462, 0.0, 0x1.8303bbef884dcp-224, 0.0,
     0x1.1b066acdc63f4p-537, 0.0, 0x1.7a80acb5efea8p-178, 0x1.5d2f5f72d70d6p-542,
     0x1.5c2cc89eabe87p-112, 0x1.213e0319c3b11p-427, 0x1.3e99b93dfcb25p-430,
     0x1.251d38672519cp-834, 0x1.f81613cebccafp-626, 0.0, 0x1.3aa43f85438b1p-414,
     0x1.8600cd5e1284cp-1002, 0x1.522600642c2aep-858, 0x1.2415d1208e67p-731, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9269821ea0a9ep-310, 0x1.39b96bbc8da09p-438,
     0.0, 0x1.03fe0e3b431cfp-702, 0.0, 0x1.3a703f9bcbfc2p-937, 0.0,
     0x1.f1ec18dd9d83ap-90, 0x1.7b7a0250d34a9p-224, 0.0, 0.0, 0.0,
     0x1.0b744e68d73fcp-634, 0.0, 0x1.f8f768e75a69fp-52, 0.0, 0x1.0f741ebadf674p-40,
     0x1.b9ccb30796f4ep-324, 0x1.f2582a5bc93dcp-866, 0.0, 0x1.cda1c62a49c1fp-59, 0.0,
     0x1.84ae7ddb4291fp-904, 0.0, 0x1.c695aa260123bp-393, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.044956fffc33ep-674, 0x1.073a4a6c14b66p-943, 0x1.68051f2357b18p-505,
     0x1.3becbfeb0f435p-595, 0x1.256bf4c2234f3p-907, 0.0, 0.0, 0x1.9abc3632a518ep-226,
     0.0, 0.0, 0.0, 0x1.468240ce2dba8p-867, 0.0, 0.0, 0.0, 0x1.ca0c4a36d333cp-123,
     0x1.84c4b6d536a3ep-717, 0.0, 0x1.c85378a8b8817p-551, 0x1.9ab30306b68ap-350,
     0x1.417218075e8d2p-293, 0x1.2e41c0598f396p-304, 0x1.d9cf460e02bfcp-539,
     0x1.7a102220e952dp-803, 0x1.5c1a7daef6d19p-597, 0x1.6700c1cc38f7bp-129, 0.0, 0.0,
     0x1.4306b1ad9b47ap-419, 0.0, 0x1.b04dcca9e3d12p-953, 0x1.1407cae4117b5p-223,
     0x1.d7c20b83c1787p-119, 0.0, 0.0, 0x1.f657677b2ed44p-848, 0.0,
     0x1.424cf29d0851ep-358, 0x1.5584c0ba946c6p-39, 0.0, 0x1.8a40e508a7229p-443, 0.0,
     0x1.82075cc372e2dp-578, 0x1.bee47925b9ddfp-221, 0.0, 0.0, 0.0, 0.0,
     0x1.af23291b1bb72p-140, 0.0, 0.0, 0.0, 0x1.2158de02cf33ep-958, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.4fef112fdf907p-320, 0.0, 0.0, 0x1.e0e5d714fb178p-721, 0.0, 0.0,
     0x1.91b6c3b6d42d1p-337, 0.0, 0x1.8b1b61f1175e7p-503, 0x1.9d87475c3f7efp-228, 0.0,
     0x1.eccccbf73d961p-167, 0x1.35b41c8e26f3dp-828, 0x1.cf46e02cf5091p-200,
     0x1.5dd6a55fc2fa7p-539, 0x1.7191ff7335e98p-434, 0.0, 0.0, 0.0,
     0x1.2ed77d4f35792p-754, 0.0, 0x1.1c1ab24f50c72p-45, 0.0, 0.0,
     0x1.84886c7fb04b8p-822, 0.0, 0x1.aebd4631281b1p-538, 0.0, 0x1.a9a276d8e0dep-175,
     0x1.87db317b766bp-577, 0.0, 0x1.4b8e283284232p-614, 0x1.9308de6f56c08p-479,
     0x1.f5ff83b036bacp-115, 0.0, 0.0, 0.0, 0x1.031638e5cb79ep-506,
     0x1.2efbef3ddc124p-600, 0x1.f5e52f215aff7p-466, 0.0, 0.0, 0x1.314ff7b86f15ep-280,
     0x1.c255ed3fe2abcp-784, 0x1.c70aff50a7b99p-854, 0.0, 0.0, 0.0, 0.0,
     0x1.8f8e60d63b373p-835, 0x1.2850af277f966p-55, 0x1.2cbbae9614f61p-33,
     0x1.519e8a05873aep-145, 0.0, 0x1.e708dc433ad8cp-703, 0x1.b04cceddc6bep-694, 0.0,
     0.0, 0.0, 0x1.62cac0fd69ap-271, 0.0, 0x1.a63e52543e8f9p-288, 0.0, 0.0,
     0x1.cc3bff2c8672ep-143, 0x1.aff09eef9ede2p-960, 0x1.2f2ddbbb425cep-998, 0.0,
     0x1.1b74c4e3b53fbp-761, 0x1.03da1c16bf2b8p-600, 0.0, 0x1.d1c438b072e0ep-172, 0.0,
     0.0, 0.0, 0x1.b973269b3f26cp-798, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.97d431f3ee0d3p-620, 0x1.99ae0db8cbc6cp-990, 0.0, 0x1.193b31c48744bp-664,
     0x1.02bfef475043cp-472, 0.0, 0.0, 0x1.af3f464df4bb6p-1020, 0.0, 0.0,
     0x1.4f3fc4a8c6d33p-182, 0.0, 0.0, 0.0, 0x1.226279deee29ep-684, 0.0,
     0x1.229b8abcc56bcp-432, 0x1.179bd5bea8b68p-929, 0x1.ab6eee9b61c3p-713, 0.0,
     0x1.532c6d22eb05bp-84, 0.0, 0.0, 0.0, 0x1.118c52642d245p-338, 0.0, 0.0,
     0x1.207664f89ef48p-498, 0.0, 0x1.e81c67ecd9276p-89, 0.0, 0.0,
     0x1.afbf7ee64fa0ep-938
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
            tmp1 = Sleef_finz_atanhd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_atanhd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_atanhd1_u10purecfma bench acc %la\n", global_bench_acc);
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
