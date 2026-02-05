/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_atanhd2_u10kvx.c --function \
 *     Sleef_finz_atanhd2_u10kvx --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0x1.add6aa0d48c52p-388, 0x1.df170c4fb367p-200,
     0x1.d6e8c177885c3p-141, 0x1.3fcdc29c2e244p-861, 0x1.443c8240ffe86p-476,
     0x1.ec7f1b3ebb04p-554, 0.0, 0x1.db495c9b7f541p-141, 0.0, 0x1.f0cbb1dc3e6fcp-677,
     0x1.f4c2a42157597p-71, 0.0, 0x1.04afd606862c9p-664, 0x1.03212cec0f97ap-714,
     0x1.a22605cb17f8fp-617, 0.0, 0.0, 0.0, 0.0, 0x1.1d0425f038aa7p-875, 0.0,
     0x1.5b2cddd105838p-11, 0x1.75cab271b491cp-1006, 0.0, 0x1.e3c270b009246p-783,
     0x1.1d678260aaecfp-499, 0.0, 0.0, 0x1.1e3c08a2b402cp-22, 0.0, 0.0,
     0x1.6b95f507665f9p-967, 0.0, 0.0, 0.0, 0x1.677fd6eab515cp-306,
     0x1.ee4b0f2caae55p-143, 0x1.9a3e51f9c1bbcp-1019, 0.0, 0.0, 0.0,
     0x1.67a663734a0cfp-580, 0x1.7baedc1e48012p-736, 0x1.ae4d007be91b8p-625,
     0x1.39c85891ff16cp-590, 0.0, 0x1.769387bab3dp-906, 0.0, 0x1.3a5251e89fae5p-713,
     0x1.0053fc7fdcc35p-948, 0x1.19aa30886af08p-1005, 0.0, 0x1.7894d7390dc5bp-472,
     0x1.fbb4ce4fe04d1p-952, 0x1.b64ff887a43d6p-125, 0x1.319d63f5b5df3p-516, 0.0,
     0x1.1a47afb26461fp-378, 0x1.2a10b316c89cbp-486, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a2f376d46dd54p-668, 0x1.97e476806ab7cp-688, 0.0, 0x1.86117b98c8065p-829,
     0x1.c0d420ca7d7b2p-248, 0.0, 0.0, 0x1.4b3bf1505e07p-491, 0x1.401026899116fp-337,
     0x1.cc7a2465294ap-328, 0.0, 0x1.74eafec5b2d12p-438, 0x1.986586f7ec1b9p-861,
     0x1.8b6b968b97cb6p-210, 0x1.97d1e0d1af2f9p-705, 0.0, 0x1.7249dc5966262p-364,
     0x1.ddada67c094bap-411, 0.0, 0.0, 0.0, 0x1.76a29d75f9d56p-569, 0.0,
     0x1.63388c488258ap-939, 0.0, 0x1.dfb2ad11e9214p-635, 0.0, 0x1.594c3fe4f296ep-751,
     0x1.d87b123d3347cp-494, 0x1.8ec0117f2ca03p-480, 0.0, 0.0, 0x1.f92f97ebdadb6p-925,
     0x1.5beea310ba255p-589, 0x1.9ef8725838761p-512, 0x1.3332a40f6b067p-917, 0.0,
     0x1.0cd9b4e45e3d9p-759, 0x1.8f14ce58dfdc5p-245, 0.0, 0x1.9384a15bc171bp-515,
     0x1.5ce117d60582dp-436, 0x1.3d95e84f72836p-50, 0.0, 0.0, 0x1.2c0217af9a045p-804,
     0.0, 0.0, 0x1.4ea2a7759dab1p-82, 0x1.fe604e70a030bp-622, 0x1.ccea972d32bdep-121,
     0.0, 0x1.3ed3b1ea5028p-131, 0x1.263d38be1346cp-712, 0x1.2936c5fc40acfp-841,
     0x1.6382db0a4d552p-899, 0x1.3387d3656c2ap-425, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.8b805ee4aa98bp-54, 0x1.a0d2c3eccbc32p-233, 0.0, 0x1.cefb28241974dp-395, 0.0,
     0x1.8607060a0b6acp-580, 0.0, 0x1.fdd4768d8aceap-979, 0x1.b80b4dd9a1bf7p-23, 0.0,
     0x1.757bac037219cp-283, 0x1.2b2e484d17139p-119, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.366d11d973deep-499, 0x1.7022d680f7174p-980, 0x1.5d47a8618c813p-126,
     0x1.31b3d3905f62bp-395, 0.0, 0.0, 0x1.71958008e8405p-828, 0x1.bdcad12497003p-916,
     0x1.f5cfcd7bd2b23p-52, 0.0, 0.0, 0x1.cedfd2e022197p-442, 0.0,
     0x1.4469a042861f6p-607, 0.0, 0.0, 0x1.43de72ed1e888p-777, 0x1.8eb962039dedbp-312,
     0x1.6aa3ea2bbee33p-309, 0x1.7947eb6313c32p-330, 0.0, 0.0, 0x1.675486da6f005p-640,
     0.0, 0x1.11cc65b090bbcp-803, 0.0, 0x1.69381b93e3f76p-1011, 0.0, 0.0,
     0x1.dd3d0e73bf619p-427, 0.0, 0x1.76dfa0d554795p-497, 0.0, 0x1.8600d692beedfp-758,
     0x1.cccc203446d82p-643, 0x1.c82fefad6f79bp-253, 0.0, 0x1.bdc4b7bcf8805p-554,
     0x1.b722606629d58p-844, 0x1.840a3bf37fcbcp-774, 0x1.812355003bf1fp-450,
     0x1.52ab42775a69dp-444, 0x1.457631f702b1ap-570, 0x1.39cbe57c7c245p-398,
     0x1.185bc37de17ddp-595, 0x1.56aac319575e2p-433, 0x1.971fc89ca15f4p-119,
     0x1.439e548f8b034p-54, 0.0, 0x1.abbfd655f9f7fp-496, 0x1.f4f4b52d732f6p-784, 0.0,
     0x1.bc5788212170bp-236, 0x1.9a02f2c8d9e0bp-97, 0x1.836095fa55876p-76,
     0x1.8c6f53643f851p-662, 0.0, 0x1.8a3e816810e1bp-491, 0x1.3399f71a541d2p-570,
     0x1.60099f2d38a21p-217, 0x1.5ecc12de73354p-919, 0x1.8da4a0d0d5729p-985,
     0x1.268138ad57397p-702, 0x1.0e3ef043975bep-256, 0.0, 0x1.f12757db25c6ap-554, 0.0,
     0.0, 0.0, 0x1.b27b78103117ep-114, 0.0, 0x1.35730f633936cp-951,
     0x1.330621865f116p-541, 0x1.750e487dbe7ap-847, 0x1.2142bfee0c859p-542, 0.0, 0.0,
     0.0, 0x1.dbfee6257fd73p-929, 0x1.980abb42969cfp-991, 0x1.7c0e18ff49e1dp-488,
     0x1.30666f74eef6dp-699, 0x1.dcb09fcb21dep-928, 0x1.5dbbe06f0f5e5p-981, 0.0,
     0x1.1b6df8d354386p-440, 0.0, 0.0, 0x1.2faf329ed6459p-820, 0.0, 0.0, 0.0,
     0x1.4a86ad5c1a8abp-520, 0.0, 0.0, 0x1.25af7396b0b47p-699, 0x1.b98e0816e49e1p-510,
     0x1.eefa7f1f7ca0cp-525, 0.0, 0x1.5e438a1871417p-817, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.e225be0b2dedep-4, 0.0, 0.0, 0x1.e1a695551c0e6p-50, 0.0,
     0x1.8f643bce5d6e7p-475, 0x1.1cb44564ef76dp-756, 0x1.1ff8074cae3e4p-568,
     0x1.9041e8b4e8c74p-618, 0x1.7e0580b20e8f5p-150, 0.0, 0.0, 0.0,
     0x1.818897d3c9aeap-334, 0x1.6081e0064bad8p-827, 0x1.18d5a17633ba8p-278,
     0x1.188ad23c7c28bp-308, 0.0, 0x1.0807bd75da6ecp-85, 0x1.a10d90ba29adcp-749, 0.0,
     0x1.22b26676cc007p-440, 0.0, 0.0, 0x1.cb01b0a48914cp-583, 0.0,
     0x1.03da07e1486c5p-882, 0x1.6d25e57a8f26ap-610, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.879196b4fe74ep-662, 0x1.57b1e5e574539p-626, 0x1.73300e986be1ep-346, 0.0,
     0.0, 0x1.9350a1853dffdp-321, 0x1.f645a3d460e59p-30, 0x1.8be6f80059fcbp-861, 0.0,
     0.0, 0.0, 0x1.f86ec3dbd9111p-813, 0x1.2c4334d45926fp-530, 0x1.474a1fec08ad7p-26,
     0.0, 0x1.131338ba3cf2p-848, 0x1.921c2081c62bp-42, 0.0, 0x1.dfad13a8e74e1p-741,
     0.0, 0x1.feb67c99560bep-406, 0.0, 0.0, 0.0, 0x1.8a929668287d3p-498, 0.0,
     0x1.46775ae100be1p-256, 0.0, 0x1.eb0fb72cca2b5p-450, 0.0, 0.0,
     0x1.548c77ff78833p-768, 0.0, 0x1.eccd08ff942e1p-872, 0.0, 0.0,
     0x1.36f0703218b1p-773, 0x1.6918abb31eef9p-452, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.64c910dbcffp-629, 0.0, 0x1.26d9161cdd289p-437, 0.0, 0.0,
     0x1.82bd0aca7f6e4p-989, 0x1.36723c76036f6p-785, 0x1.a4e9f58f8bfcbp-882,
     0x1.2506930ec391dp-846, 0.0, 0.0, 0x1.c525d35a97724p-437, 0x1.521c2082e74dap-851,
     0x1.86e23220bf04bp-870, 0x1.3df8076439ea7p-6, 0.0, 0x1.21e8af0de740ap-787, 0.0,
     0x1.7f2ce9d9115c5p-569, 0x1.87604c18fac44p-1008, 0x1.90d9bfd14f4c6p-960,
     0x1.28272f30931bcp-1011, 0.0, 0.0, 0x1.46a8d317257cdp-906, 0.0,
     0x1.e308706668181p-173, 0x1.cf449f64a8082p-756, 0.0, 0x1.c7deebc31f613p-390,
     0x1.4a54a69b70c4p-345, 0x1.915ad625c80cdp-934, 0x1.7d111cbb2fd15p-376,
     0x1.c89ca8d5724b7p-779, 0x1.aac82d429d16ep-729, 0x1.c116e1920a062p-919,
     0x1.4f5b28632443ap-118, 0.0, 0.0, 0x1.119d3c6204419p-749, 0x1.31a68e26c79fdp-715,
     0x1.e1043e149b8a2p-422, 0x1.65feecafbffd6p-470, 0x1.48cb117ad1ad5p-836,
     0x1.2d1d8a0ec866cp-96, 0.0, 0x1.6bf549658e13p-831, 0x1.f994b42cf290cp-296,
     0x1.47cf9db647e55p-65, 0x1.132b1237daed4p-26, 0.0, 0x1.1c3263c3611a6p-393, 0.0,
     0.0, 0.0, 0x1.60263b69954fap-886, 0x1.8be88036c6c5p-551, 0.0, 0.0, 0.0,
     0x1.612790331adf4p-165, 0x1.89f7dfa2a20dfp-996, 0x1.0f69c8c9ec27dp-919,
     0x1.dc4b8d9cece4ep-83, 0x1.c6db0dd41321fp-762, 0.0, 0x1.da2449f693fbep-737,
     0x1.4161201008b47p-461, 0x1.a69173cfb13b7p-171, 0.0, 0x1.0ed511190652cp-137,
     0x1.51c5df3022672p-678, 0.0, 0x1.39a3c92fbdf65p-346, 0.0, 0x1.470664585d9ebp-127,
     0.0, 0.0, 0x1.6a92b445a4ec5p-702, 0.0, 0.0, 0.0, 0x1.421a2b44f68fdp-425,
     0x1.c159711d226a4p-124, 0x1.d29f0005d2ce9p-629, 0x1.b21b280a0ffc4p-783, 0.0, 0.0,
     0x1.a7360bcd3afa7p-872, 0x1.a220247e617cap-725, 0.0, 0.0, 0x1.3b62186cc564cp-273,
     0.0, 0.0, 0.0, 0x1.c3e016bebd61ep-813, 0.0, 0x1.9f45ea3aebb2ep-401,
     0x1.a87ae75bce5a9p-703, 0x1.288224b42efb3p-221, 0x1.5d025a7b0f114p-448, 0.0, 0.0,
     0.0, 0x1.f3ddb4d7aa0b3p-683, 0x1.0acd87e02d51bp-593, 0.0, 0.0,
     0x1.adfc0af22f941p-377, 0x1.3d4614897b0d5p-645, 0.0, 0.0, 0x1.849d708f34c4p-66,
     0x1.1dd28f3424b6ap-125, 0x1.209a2375740d3p-739, 0x1.24262a674f3bdp-1013,
     0x1.96a76f5e0089fp-29, 0.0, 0x1.6a18183a8b0ap-509, 0x1.60cca463f1651p-273, 0.0,
     0x1.5a41aae00d729p-436, 0x1.4640846b7602p-279, 0x1.953b684f1abbcp-293,
     0x1.b721e18fcba77p-854, 0x1.5e8b1b70f2af2p-322, 0x1.f7b87a05ccdfbp-207, 0.0, 0.0,
     0.0, 0.0, 0x1.542a3a4641b1ep-710, 0.0, 0x1.443fad27bd336p-895, 0.0,
     0x1.8edc12b556ff5p-320, 0x1.22ca512da4c7cp-52, 0.0, 0x1.544b1d3726a32p-410,
     0x1.783e356f1455ep-839, 0x1.a6c0df6a3e5e1p-117, 0x1.c98b41900e764p-286, 0.0,
     0x1.ad526d2d113a8p-314, 0x1.37014d358647dp-880, 0.0, 0x1.9f4841eb89263p-882,
     0x1.1378dae5be967p-693, 0.0, 0x1.88f88b3459ef5p-348, 0x1.6a62cb00c8368p-951, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.883ca887033aep-12, 0.0, 0.0, 0x1.4bc6eb174e18p-925,
     0x1.a96f7d8d7bbe8p-877, 0x1.36adf4ebc09c3p-687, 0x1.8b33d6bc9d0d1p-798,
     0x1.1e895be8cb728p-800, 0x1.f738ce806217cp-292, 0.0, 0x1.e9f56e8dc3b7bp-289,
     0x1.fc1c5ebb97285p-410, 0.0, 0.0, 0.0, 0x1.47b229dd73441p-93,
     0x1.ad2a7977a1fc5p-559, 0.0, 0x1.a693b868bc6c5p-888, 0.0, 0.0,
     0x1.5d88519fef513p-616, 0.0, 0.0, 0x1.dc3b9bbaf85b3p-507, 0.0,
     0x1.f3b5b5c334adap-884, 0x1.e2b69335b2988p-963, 0x1.89d185d770769p-593, 0.0, 0.0,
     0x1.bb3da80f004f9p-109, 0x1.b48ba520670a7p-655, 0.0, 0x1.7ff1a5a1db3cep-632,
     0x1.95138cf41c24dp-694, 0.0, 0.0, 0.0, 0x1.997b0a3d6e167p-356, 0.0,
     0x1.144c066f1762ep-1002, 0.0, 0.0, 0.0, 0x1.d3bc5bc0d48f9p-785, 0.0, 0.0, 0.0,
     0.0, 0x1.35143c5c63022p-62, 0.0, 0x1.8e8776c964d49p-496, 0.0, 0.0,
     0x1.d64b558549bf8p-781, 0.0, 0x1.8aa09e7af3dedp-436, 0.0, 0x1.8d2243efca7f1p-27,
     0.0, 0.0, 0x1.5b58d0ea4c3a8p-913, 0x1.adccdef7346bfp-348, 0x1.6f8dc45dae462p-303,
     0x1.a05f53c816469p-668, 0x1.0ad768eb8b048p-215, 0.0, 0x1.772d561606c4cp-616, 0.0,
     0.0, 0x1.629027d9d8955p-70, 0x1.2fa486f8c282ep-92, 0x1.912f4c8a4e928p-891,
     0x1.2ada58a439eadp-130, 0x1.ad9c77f247a58p-879, 0x1.74628ead91f0ap-699,
     0x1.4938606e0c212p-14, 0x1.05adfc3525ca9p-65, 0x1.4115760e2b708p-173,
     0x1.72e1b79a0d56ep-912, 0x1.c6e24e04e0748p-909, 0x1.644d1f42bd7a4p-124, 0.0, 0.0,
     0x1.54de78aee5ad3p-953, 0x1.c847a18cbc0bbp-535, 0x1.e3c827dafdddbp-501, 0.0, 0.0,
     0.0, 0x1.7631eae76eefp-261, 0x1.d36cc43b7a787p-1015, 0.0, 0x1.a2206596dbdc1p-672,
     0x1.c7fcf1c30f482p-739, 0x1.b2c1e4b18b9b1p-594, 0.0, 0.0, 0.0, 0.0,
     0x1.0960cf7d3fb87p-613, 0x1.8f7692e965e0ep-757, 0.0, 0x1.3b3856ba247ccp-334, 0.0,
     0.0, 0.0, 0.0, 0x1.6a960ce0a3e96p-251, 0.0, 0.0, 0x1.fe901836a687ap-53,
     0x1.bc7cc3be717ddp-21, 0x1.4a6625e534abp-855, 0.0, 0.0, 0x1.b94426544eed1p-707,
     0.0, 0x1.66ad4c1128164p-135, 0.0, 0x1.a72755075a55cp-503, 0x1.0b4805a272da1p-451,
     0.0, 0.0, 0x1.b42d5ae3b9b51p-688, 0.0, 0.0, 0x1.6064aa2c242bfp-271, 0.0,
     0x1.a877255cd29a3p-822, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.51df6fa0635bep-178, 0.0,
     0x1.61c58a040b6ap-159, 0x1.d1eef5b2efbeep-943, 0x1.596d07aeffcadp-661, 0.0, 0.0,
     0x1.251304fbdfb1p-47, 0.0, 0x1.d64cbfbd8831ep-88, 0.0, 0.0,
     0x1.8334c83d5dd56p-194, 0x1.d79a920844bdp-3, 0x1.fc51f3f6fb16cp-209,
     0x1.e3d5cc34547abp-763, 0x1.267f9a132c7edp-535, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.a8704d42d6e8fp-278, 0x1.3294a873c817cp-683, 0x1.3a9b94339c07p-982, 0.0,
     0x1.39dc2121e202dp-711, 0x1.c8ee6385f2ea1p-524, 0x1.a6f1550fe3359p-255,
     0x1.33d28daf6057fp-971, 0.0, 0x1.0724e0d185111p-816, 0x1.556232f2e6471p-904,
     0x1.e3df5760b509p-64, 0.0, 0.0, 0x1.d9d8d0410c3c7p-881, 0.0, 0.0,
     0x1.2a475a6a42239p-582, 0x1.83b76670f9662p-134, 0x1.0d5cd11d03d91p-427, 0.0, 0.0,
     0.0, 0x1.952f2fd57c637p-691, 0.0, 0x1.b371fd6f210ebp-95, 0.0, 0.0,
     0x1.3575439006e2cp-62, 0.0, 0x1.833ff9814267ap-36, 0.0, 0.0, 0.0,
     0x1.60c02eac86349p-951, 0.0, 0x1.464cc0b4e0f1bp-786, 0x1.f765af07de792p-202, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.03401840c258fp-461, 0.0, 0x1.2e13a1cda7108p-640,
     0x1.4fe27559e803fp-143, 0x1.3a8618dd22318p-573, 0x1.6dfed5cea2bcbp-792,
     0x1.0e7d9ca558f72p-1, 0x1.ad0f417be0065p-555, 0x1.c074e4cb90f85p-91, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.d31d6a79fcfcap-771, 0x1.99497b7b1dc13p-718,
     0x1.2188a945dc6dep-382, 0.0, 0x1.e9faaa6f4e60ap-975, 0x1.2c67508b920bcp-300,
     0x1.7e4df6e8ce6dbp-329, 0.0, 0.0, 0.0, 0x1.0b2ba3904dc88p-555, 0.0,
     0x1.d2c765dbeccc2p-63, 0.0, 0x1.8d6677dcdeae5p-321, 0x1.e3ef0e38c2d6ap-341,
     0x1.9f7e07fbd603dp-548, 0.0, 0.0, 0.0, 0x1.736faf3717689p-514, 0.0, 0.0, 0.0,
     0x1.cf0ea392a8ccp-247, 0.0, 0.0, 0.0, 0x1.095d123304151p-616,
     0x1.6b5c7f661e216p-906, 0x1.6887a50f89ep-331, 0x1.99ffb6d095aefp-836,
     0x1.54b0774d0b378p-498, 0.0, 0x1.ec65c8001626cp-310, 0.0, 0x1.d93b554b7c296p-43,
     0x1.713df62fb0929p-789, 0.0, 0x1.c31cea8aca48p-242, 0.0, 0x1.aa5204c39ea71p-305,
     0x1.f58ab5a749687p-274, 0x1.02865f69a8c2p-504, 0.0, 0.0, 0.0,
     0x1.2e00c07468f31p-686, 0.0, 0x1.2989b8e2f9974p-668, 0x1.824b272cbe8edp-704,
     0x1.ecd37040db2f1p-907, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e32fcdc083f2p-222,
     0x1.23b6c85b388f9p-675, 0x1.841ea6f69c6f9p-566, 0x1.e90ab1a1e82ep-369, 0.0, 0.0,
     0.0, 0x1.8fa608f368adp-535, 0.0, 0x1.dfb57691d73c4p-377, 0x1.0a3013d0bc33ap-219,
     0.0, 0x1.6d45b303bc965p-540, 0x1.ff053e8f501c6p-300, 0.0, 0x1.445485271a5e1p-837,
     0x1.752b8ecd2be6ep-970, 0x1.2c07d832bd4afp-32, 0x1.804ee6df06bfdp-369,
     0x1.ff6041f38b06p-288, 0x1.7444d6dbe6512p-11, 0x1.d3825ef4b4e86p-394,
     0x1.812c02b930af5p-794, 0x1.d19d369758185p-276, 0.0, 0x1.70a7da12ce077p-753,
     0x1.239ae73e73051p-161, 0.0, 0.0, 0x1.32e6ce2a72ebfp-49, 0x1.092dc66b473cbp-465,
     0x1.ea50b386f823fp-130, 0x1.1baafaaf8a2c5p-723, 0x1.7e38e4fd6793p-936,
     0x1.7ca991cc7da3ep-52, 0x1.d94c0a0af00eap-433, 0.0, 0x1.59bcb49e10a71p-210,
     0x1.a2ce4d5d2f525p-308, 0.0, 0x1.0af6f31fc9cadp-523, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.621be0ace669ap-731, 0x1.ad3725cfd3948p-845, 0.0, 0.0,
     0x1.3a9a253f35952p-153, 0x1.a6979f2757f51p-573, 0x1.bfa29f2e6f098p-662,
     0x1.839af592afba4p-363, 0x1.b17bb04f31606p-926, 0.0, 0x1.7d1b9d343ab96p-584, 0.0,
     0.0, 0x1.d553fb6b3b24dp-860, 0.0, 0.0, 0x1.e1f0e2f786b8ep-12,
     0x1.d8a352df96bfp-427, 0.0, 0.0, 0.0, 0x1.626a92a8ed9d7p-281,
     0x1.f247588466b03p-259, 0.0, 0.0, 0x1.e218faed20b52p-575, 0.0, 0.0,
     0x1.66982a50672cfp-315, 0.0, 0.0, 0x1.e602891eb5508p-786, 0.0,
     0x1.71dc4a16bdb6p-734, 0.0, 0.0, 0x1.28452fcc0d238p-745, 0.0,
     0x1.6f75827a3387ep-150, 0x1.a959e3c8d1d2ap-909, 0x1.78eca6cbac108p-434,
     0x1.3c5da11a263afp-646, 0x1.7163b52fb72f4p-608, 0.0, 0.0, 0.0, 0.0,
     0x1.70e1d03d4f5dep-975, 0x1.11429d8cd1ac5p-635, 0x1.17ee43bc8df7dp-73,
     0x1.b60c4bae6971dp-595, 0.0, 0.0, 0.0, 0x1.f5b56af408547p-465, 0.0,
     0x1.2651bc414c068p-655, 0.0, 0.0, 0x1.82f00ea3f833dp-278, 0.0, 0.0, 0.0, 0.0,
     0x1.1f992e99608aap-565, 0x1.6f281947d78ap-361, 0.0, 0.0, 0x1.782a7600ef541p-858,
     0x1.c0a9b776cfd56p-822, 0.0, 0x1.e2ea88d4f8d26p-994, 0.0, 0.0, 0.0,
     0x1.a4433d38830fcp-850, 0x1.1877f69b6c247p-696, 0.0, 0.0, 0x1.6bfe507227d77p-360,
     0.0, 0x1.a268ee0084bcap-615, 0x1.db32560710dedp-892, 0x1.7885014a7cc21p-834, 0.0,
     0.0, 0.0, 0x1.ca0f9c5990eb7p-969, 0.0, 0.0, 0x1.2c3f55c4a6fbap-418, 0.0, 0.0,
     0x1.e9c0a03eb01e3p-197, 0x1.b372d6e85322ep-816, 0.0, 0x1.f0b0aaaceb2ap-770, 0.0,
     0.0, 0.0, 0.0, 0x1.7ad83df06b0a7p-531, 0.0, 0x1.92c5822a2af07p-307,
     0x1.911996f613be2p-973, 0.0, 0x1.50b33cc21276fp-342, 0x1.bde46c76e4236p-790,
     0x1.b34288b6dfap-898, 0x1.1ee5faea282f3p-464, 0.0, 0x1.a8c550c92db3cp-692,
     0x1.db0a49b252cd2p-890, 0x1.cbdfd05c60f93p-387, 0.0, 0x1.2a45dc13109a5p-398, 0.0,
     0x1.e1896c7ce7ffep-715, 0x1.93eef023c19a8p-395, 0x1.a8437beb21f8ap-931, 0.0,
     0x1.32f2610c08b59p-81, 0x1.bd04d454f4ddep-631, 0x1.181396f0552ecp-693, 0.0,
     0x1.a929b2f4f413fp-75, 0.0, 0x1.4901d26cfcaep-938, 0x1.1c23590f4f935p-34, 0.0,
     0x1.116af7e560b35p-678, 0.0, 0.0, 0x1.afd7c565c50d7p-677, 0x1.b147684cd1f54p-329,
     0x1.7d186fb26233p-697, 0.0, 0x1.16a16ba9787dap-897, 0x1.ac55ffb15361dp-384,
     0x1.b38b318e4be8cp-81, 0.0, 0.0, 0.0, 0x1.3580e439eacb7p-289,
     0x1.faf03b3d9bbd6p-622, 0.0, 0.0, 0.0, 0x1.478f2d54799d1p-488, 0.0,
     0x1.b8a885451c9b5p-396, 0x1.ab9843ccba837p-361, 0x1.92d358857fb7fp-77,
     0x1.651c1f92ec3bap-746, 0x1.fc38c007fb2e9p-177, 0.0, 0x1.efa795cd1f10bp-313,
     0x1.994db539f18f2p-793, 0.0, 0x1.937ca5dd2321ap-639, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.b3cb672c3f777p-89, 0x1.7c109281aac3ep-534, 0.0, 0.0, 0.0, 0.0,
     0x1.42afbd23f475bp-221, 0x1.abbcd2b5c167p-39, 0x1.ff161a77d11c1p-165, 0.0, 0.0,
     0x1.c4348269c1359p-859, 0.0, 0.0, 0x1.3be284a533facp-291, 0.0, 0.0,
     0x1.a996f01223a89p-11, 0x1.24cb28dfc5f6p-594, 0x1.4a4e7e88ab8b3p-368,
     0x1.f069e0061c1c7p-203, 0.0, 0x1.473e66f6e401dp-225, 0.0, 0x1.baa8575726f52p-999,
     0x1.4d5626ad39291p-796, 0.0, 0.0, 0x1.979d08af15b2p-88, 0x1.0c9489f386102p-973
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
            tmp1 = Sleef_finz_atanhd2_u10kvx(tmp0);
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
    printf("Sleef_finz_atanhd2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_finz_atanhd2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
