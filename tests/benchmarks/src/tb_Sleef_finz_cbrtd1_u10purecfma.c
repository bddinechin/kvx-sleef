/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_cbrtd1_u10purecfma.c --function \
 *     Sleef_finz_cbrtd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0x1.b68a46a0d0e53p-659, 0x1.bf6b4937fc6aap-352, 0x1.331c730c2f94bp-283,
     0.0, 0.0, 0x1.2a045901b7a39p-219, 0.0, 0.0, 0.0, 0x1.86110e8155f1dp-497, 0.0,
     0x1.76a89e143f8b2p-549, 0x1.6726a2c6e7033p-1002, 0x1.79459295902c6p-115,
     0x1.c59edccf42074p-401, 0.0, 0.0, 0.0, 0.0, 0x1.98e33ec82248p-736, 0.0, 0.0,
     0x1.e051a74b4be09p-554, 0.0, 0x1.3594b4635c754p-754, 0.0, 0.0, 0.0, 0.0,
     0x1.0199b9bd45646p-133, 0.0, 0.0, 0x1.cfb99963aab78p-68, 0.0, 0.0, 0.0,
     0x1.726bdd306cd3cp-831, 0.0, 0.0, 0x1.da1c518f215dap-424, 0.0,
     0x1.267e38c8e3ef6p-391, 0.0, 0x1.1979b5168c70ep-820, 0.0, 0.0,
     0x1.24d9cbcd46172p-344, 0.0, 0x1.3dd7aab0d3cep-270, 0.0, 0.0,
     0x1.78e281d2c82ccp-401, 0.0, 0x1.2a5794e03c1a4p-1015, 0.0, 0.0, 0.0,
     0x1.cdc5eb346a2c1p-352, 0.0, 0.0, 0.0, 0x1.8bb1640a7662cp-864, 0.0,
     0x1.c9c60a4f60bf1p-868, 0x1.116e7660cf6dcp-557, 0x1.ced7eef02bec7p-526, 0.0,
     0x1.e2e3f164a4693p-38, 0x1.ce85da818d481p-751, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.69ec86710f06cp-754, 0x1.d596da6ea4ed1p-933, 0x1.5fab0b7f602adp-935,
     0x1.035fee11c71adp-266, 0x1.f1956036b46c6p-919, 0x1.815ec1613fc95p-359, 0.0,
     0x1.6396c0b8e6d06p-42, 0x1.59aaf8be0bfabp-858, 0.0, 0x1.1b758504d38ecp-817,
     0x1.8bbad6161b805p-173, 0x1.7171f974412cep-611, 0.0, 0x1.51b2b1f2615bap-123,
     0x1.4ed9378592641p-194, 0.0, 0x1.b1ed2f3305eb3p-603, 0x1.0d9c909992fadp-706, 0.0,
     0.0, 0.0, 0.0, 0x1.69a3b48bc0a29p-881, 0.0, 0x1.d54ab72b06576p-729, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.42f2b7e11d541p-288, 0.0, 0x1.b76766163175ep-934, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b159fd8c2f0bcp-623, 0x1.51c90e6782e57p-171, 0.0,
     0x1.6e0aa289ac4c4p-642, 0.0, 0.0, 0x1.fb2df8e52ba5p-813, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.1d1e2355cbc8dp-297, 0x1.14d4516077f86p-980, 0x1.b0ce4b6ebe3f8p-929,
     0x1.c959705953436p-902, 0x1.1e3a44a2318abp-532, 0x1.56a33b84275cap-566, 0.0, 0.0,
     0.0, 0.0, 0x1.62d8af2a541e8p-100, 0.0, 0.0, 0.0, 0x1.e329711e2b539p-647, 0.0,
     0.0, 0x1.def237a6def3cp-439, 0x1.7877f4d725fb4p-375, 0x1.dda69693fee44p-82,
     0x1.a73f2dcf8801ep-280, 0.0, 0.0, 0x1.421a8181f19e1p-558, 0x1.032e0b6aa6debp-286,
     0.0, 0x1.0e16f041aebe4p-405, 0.0, 0x1.550c2c88e9725p-663, 0x1.61e453b41d25ap-243,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.508d0ccf8b6bp-44, 0.0, 0.0,
     0x1.ff2dc6a048bd3p-639, 0.0, 0.0, 0x1.a8e17de12254fp-1016, 0.0,
     0x1.d314f1761c3aep-969, 0x1.412c1a15f688bp-935, 0.0, 0x1.8a574259904eap-729,
     0x1.dad4a4a19a8a1p-541, 0x1.f6e32099f89fep-801, 0.0, 0x1.e7a1349a16467p-955,
     0x1.f1f598f1fdebep-261, 0.0, 0.0, 0x1.723f0d2cdfda7p-243, 0x1.eb8f982e64016p-751,
     0.0, 0.0, 0x1.149c6345b0d8cp-947, 0x1.153125d2d604dp-54, 0.0,
     0x1.63c860942385ap-528, 0.0, 0x1.e91f90f2da34bp-238, 0.0, 0x1.fdc7de69713c9p-356,
     0.0, 0.0, 0x1.31cee1e4c59d1p-74, 0.0, 0.0, 0x1.536558be3cefap-596,
     0x1.918ddc6bbdef2p-33, 0.0, 0.0, 0x1.6c649c0e11fddp-1019, 0.0,
     0x1.6574ee40c18p-297, 0x1.36691bd987249p-1020, 0.0, 0x1.b7a66336de3e7p-464, 0.0,
     0x1.794ed93724339p-693, 0x1.6ec7d484ec527p-121, 0.0, 0x1.e14f1bee5cd2ap-631,
     0x1.4589ab67a6e07p-460, 0.0, 0x1.349c80e353177p-457, 0.0, 0x1.a53f936150be9p-801,
     0x1.2ca8e552165c6p-1, 0.0, 0x1.a1468d75b1ae7p-71, 0x1.85a1d2e8e405fp-665, 0.0,
     0.0, 0x1.bb5823f4ed957p-782, 0x1.a73aac853357ep-175, 0x1.bf975cf99c531p-191,
     0x1.2ff2937cf4185p-1005, 0.0, 0.0, 0.0, 0x1.d3eb73cf46b39p-884,
     0x1.12875bd46ff7dp-517, 0x1.9b01e28f20207p-111, 0x1.44cbcba208d73p-149, 0.0, 0.0,
     0x1.c88283530178bp-760, 0x1.000ef73360ccap-654, 0.0, 0x1.8467f68221c63p-753,
     0x1.90b614a1ae07ap-584, 0x1.8b285c01af128p-192, 0x1.1ff9cfc0cd658p-693,
     0x1.bfeae9710a8aep-257, 0x1.e0e5ebffd571ap-1008, 0x1.91c2c2066f21fp-778, 0.0,
     0x1.479f33abb4db9p-952, 0.0, 0.0, 0x1.6c2c107270e9cp-667, 0.0,
     0x1.3a4da2979fdbfp-994, 0x1.1f1f8454fb22fp-339, 0x1.939b9effdf4p-793,
     0x1.3eb0aa72d3348p-861, 0x1.2c1adff8bd3fdp-721, 0x1.c534198912ce5p-302, 0.0,
     0x1.6fd11ccdceb8cp-994, 0x1.fc81830f6f573p-110, 0.0, 0.0, 0.0, 0.0,
     0x1.4093f07d3b4d5p-24, 0x1.aa2165e61d9d8p-376, 0x1.54eac3e36c3b3p-886,
     0x1.bd98aab1a9b4cp-603, 0.0, 0x1.3e60964abd959p-428, 0x1.cc7426dbb237ep-336,
     0x1.dbf2914f778d7p-974, 0.0, 0.0, 0.0, 0.0, 0x1.f27a713bd7855p-605, 0.0, 0.0,
     0.0, 0.0, 0x1.6dcee92d3130ap-897, 0x1.81caf2f1a4d75p-881, 0.0,
     0x1.d3e0d2c688bccp-80, 0x1.3fdd073bd67bdp-573, 0x1.168dc42820ep-665,
     0x1.8f9822bd3a22bp-693, 0x1.308766ce26dc2p-277, 0.0, 0x1.c78ccba1565c8p-356,
     0x1.e1c849a8c3a48p-723, 0.0, 0.0, 0x1.bb4ba1d32c912p-908, 0.0,
     0x1.a6c867d64abcdp-462, 0.0, 0.0, 0.0, 0.0, 0x1.ae9764748f3e6p-340,
     0x1.7ebb8444f12edp-790, 0.0, 0.0, 0.0, 0.0, 0x1.b2a375975d08ap-525, 0.0,
     0x1.48621758d8bccp-648, 0.0, 0.0, 0x1.aff92a75df821p-883, 0x1.d5ba509271c1dp-455,
     0x1.309835f2b3a5bp-405, 0.0, 0.0, 0x1.8a284b5a582e1p-216, 0x1.7c486b53a4c3bp-178,
     0x1.34ffb17c80bdcp-792, 0.0, 0x1.b490d6ab9e8cbp-529, 0x1.c498e6721567ap-390,
     0x1.0e07354b909dp-579, 0x1.5a97e5d693c1fp-464, 0.0, 0x1.145afbcabe7b3p-644,
     0x1.5eaa6b8df002ep-104, 0.0, 0.0, 0x1.de681a9721924p-430, 0.0, 0.0, 0.0,
     0x1.44f6cc5323a8p-746, 0.0, 0x1.1c1a1d0eef2bdp-130, 0x1.0cd7b3db2df2ap-669,
     0x1.98fbac4f8932ep-984, 0.0, 0.0, 0.0, 0x1.229af44096e23p-245, 0.0, 0.0, 0.0,
     0x1.1f4d58c73e9d9p-342, 0.0, 0.0, 0.0, 0.0, 0x1.3146016c9e7aap-184, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bf9ca58907b06p-676, 0x1.678330ce485eep-771, 0.0,
     0x1.bb8c36521e39bp-783, 0.0, 0.0, 0.0, 0x1.bbd61b1a6e6afp-753,
     0x1.62836cf407e78p-545, 0.0, 0.0, 0x1.cde4e7c9e0618p-593, 0.0,
     0x1.94242d14c37dbp-266, 0.0, 0x1.28eefd019aaa1p-323, 0x1.43938553879f1p-24,
     0x1.e98898380dc0dp-149, 0x1.7ef4df2eeb3c5p-196, 0x1.941762d3e193p-390,
     0x1.c98bcab3a8896p-466, 0x1.5ea69e372aed7p-110, 0x1.82a28bde497a8p-287,
     0x1.40114364778d5p-843, 0.0, 0x1.769370e6b7c29p-88, 0.0, 0.0,
     0x1.5bd58be5f2c2cp-748, 0.0, 0.0, 0x1.264424bff9c4ap-916, 0.0, 0.0,
     0x1.d4d19dff0cbfbp-481, 0x1.60452f9f8624ap-139, 0x1.ac3cf01a1bed3p-735, 0.0,
     0x1.72c353f214c49p-891, 0.0, 0x1.b06f9b9a76b62p-203, 0x1.c2fc236997725p-483, 0.0,
     0.0, 0x1.c54d0fb78cb47p-848, 0.0, 0x1.d2fdb329efa23p-760, 0x1.de43e26c86a7ap-966,
     0x1.476a4cc015177p-109, 0.0, 0x1.ce332326da7d8p-5, 0x1.fdda34a16c832p-267,
     0x1.f72f85e84253fp-316, 0.0, 0.0, 0x1.c4e20ee10d9ccp-870, 0.0, 0.0,
     0x1.c9e8078ff7e9bp-236, 0.0, 0.0, 0.0, 0x1.b76fc6fc50955p-752,
     0x1.e9f5bff7cf51cp-158, 0x1.8dfd25ac16692p-217, 0x1.1d85a902dcb5ap-820,
     0x1.d4f94e21ba3a3p-605, 0.0, 0.0, 0.0, 0.0, 0x1.48ed16f30b3a9p-353,
     0x1.e4b2e1bcb5327p-381, 0x1.3a931033eb608p-585, 0x1.fe75326301873p-602,
     0x1.20b72dde04355p-318, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cd6f35c8e859bp-689, 0x1.4bd512e548a63p-305, 0.0, 0.0, 0x1.fc198ceff08ccp-431,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.eaace069994ap-998, 0x1.280c0627195b7p-81,
     0x1.a150a27d965b8p-755, 0.0, 0x1.9daa5f1250dabp-831, 0x1.fd9942fc23501p-399, 0.0,
     0.0, 0x1.c870f7bf75e52p-200, 0.0, 0.0, 0x1.a977d2f8245c6p-1006,
     0x1.b8f1ec00322eep-795, 0x1.74f4429beec1ep-104, 0x1.5ddd85fe1701ap-341,
     0x1.a40ed8cd50958p-973, 0.0, 0x1.1fffc324ad2a4p-579, 0.0, 0.0,
     0x1.eb6f428da2314p-443, 0.0, 0x1.0305ee0615b87p-724, 0x1.ad30413bd936dp-166,
     0x1.97f8431cd1635p-879, 0.0, 0.0, 0x1.61401ab86d981p-406, 0x1.74b39f7ff9ba8p-459,
     0x1.6b3eb3dfa9e66p-615, 0.0, 0.0, 0x1.48399958c01afp-612, 0.0,
     0x1.0c47ef092a9c4p-668, 0.0, 0.0, 0x1.469f50552a67p-309, 0.0, 0.0, 0.0, 0.0,
     0x1.0e7ef26a223bp-13, 0x1.ab83e0a8aca39p-935, 0x1.2db82fe85602ep-538, 0.0,
     0x1.44df5147d3093p-521, 0x1.71d6822a4203cp-136, 0.0, 0.0, 0x1.eaed96d34a027p-52,
     0.0, 0x1.603d7d10e7b65p-331, 0.0, 0.0, 0.0, 0x1.8fb01f20fdefp-581,
     0x1.c59852bfe8625p-360, 0.0, 0x1.88cca64018c91p-269, 0.0, 0x1.094c4170c767cp-752,
     0.0, 0x1.9d753ee8a7e87p-914, 0x1.b5a1f82c4900dp-230, 0x1.c12fc69c149a2p-851, 0.0,
     0.0, 0x1.7ead444deee8ap-633, 0x1.ee193b31ba0b1p-893, 0x1.2e1fd360bc6afp-770, 0.0,
     0x1.b6da035a1380ep-730, 0x1.69b37c58edc99p-432, 0.0, 0x1.3a180a9f9afffp-710,
     0x1.01f393ee1f4fcp-141, 0x1.69c906b6727e2p-694, 0x1.f377fb7b1089fp-618, 0.0,
     0x1.43c34d115d8d3p-47, 0.0, 0.0, 0.0, 0.0, 0x1.4e6fc8924070cp-668,
     0x1.c885384a71b9dp-131, 0x1.6b6d0d6f2ba5fp-976, 0x1.536df59bde33ep-438,
     0x1.f08b537584595p-414, 0.0, 0x1.5b9f66cfc61ddp-325, 0.0, 0x1.87185c590e2dp-927,
     0x1.51ddef2f41508p-256, 0x1.a5d4c82c34bd1p-496, 0.0, 0.0, 0.0, 0.0,
     0x1.42665aed175cbp-688, 0x1.86f4049124744p-409, 0x1.3abc4c35c3d41p-598,
     0x1.89e5144e58878p-364, 0.0, 0x1.3d4683cab9302p-638, 0x1.c9f7a6d911b34p-367,
     0x1.57a3b1f3d7026p-974, 0.0, 0.0, 0x1.e6b3df4f63834p-292, 0x1.4fd093946a23ap-996,
     0x1.5ab8ede6a22efp-590, 0.0, 0x1.37f4cd8676effp-204, 0.0, 0.0, 0.0,
     0x1.676efb2b405dfp-792, 0x1.d8ad4ffea1a0dp-215, 0x1.bed10c6fedb62p-228, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.f0c571d488e78p-716, 0x1.cd56b1ca7d9adp-499, 0.0, 0.0,
     0.0, 0x1.624e75ba90ed8p-679, 0.0, 0x1.de4e660a6bef4p-322, 0.0,
     0x1.a3c4ffeabeda5p-128, 0x1.5f4b63644b885p-849, 0x1.13d956b174e0cp-924, 0.0,
     0x1.a56ae0dc36b79p-875, 0.0, 0x1.57afbef65dda9p-831, 0.0, 0.0, 0.0,
     0x1.aeef419e1ea7dp-621, 0.0, 0.0, 0.0, 0.0, 0x1.3c8a10bb1d3fap-982,
     0x1.37b279943e16dp-468, 0x1.bdfd68a5ae52p-392, 0.0, 0.0, 0.0, 0.0,
     0x1.cc981128f489cp-626, 0.0, 0.0, 0.0, 0x1.168d680101d64p-738, 0.0, 0.0,
     0x1.49fe746bbb8fap-177, 0x1.f42eb2070778ep-296, 0x1.5c9a47fb4d771p-422, 0.0,
     0x1.a1b011434eff1p-159, 0x1.e22286db7f15dp-549, 0x1.b65d7232a2cf3p-334,
     0x1.7e65a6888669ep-227, 0x1.34aa20eee06ccp-333, 0.0, 0x1.742b6d3141f6dp-620,
     0x1.1cd8b7c493a7dp-430, 0x1.78f4575c58054p-261, 0.0, 0x1.320bc4f02a20fp-507, 0.0,
     0.0, 0x1.0ca40dc1b0513p-714, 0.0, 0x1.82e44de10cb7bp-352, 0.0,
     0x1.6324084349289p-239, 0.0, 0.0, 0x1.9d1338027ecd2p-850, 0.0, 0.0,
     0x1.e5faec1e54095p-60, 0x1.e6f95a104a9d1p-686, 0x1.5a7b8560ad7cbp-14,
     0x1.e6d55ef0de0c6p-799, 0x1.82bf7feb30325p-399, 0.0, 0x1.e94ef13b922c6p-99,
     0x1.559e8c55cc0a9p-610, 0x1.606947e2f69fp-264, 0x1.7d21a155495dfp-953,
     0x1.31272cf6d0678p-767, 0x1.6a2276402005ep-963, 0x1.31e4a58ab87aep-377, 0.0,
     0x1.2d4db923e62a7p-445, 0x1.8acbe89aea922p-112, 0x1.f2d2e7667b7cfp-436,
     0x1.9265c504bf826p-535, 0.0, 0x1.e67556bbea3dep-164, 0x1.49d30b24c38c1p-1011,
     0x1.662099404aaa1p-319, 0.0, 0x1.63d4f384254e2p-603, 0x1.6833057c90a6bp-667, 0.0,
     0x1.2290f7b0bdad5p-527, 0x1.3e7291bae1dddp-638, 0.0, 0x1.97475e3fa6abbp-739, 0.0,
     0.0, 0x1.cfd40920a8c0fp-223, 0.0, 0x1.be67becd4d0f2p-578, 0x1.9a6cfb60f2eecp-41,
     0.0, 0x1.659c381b1bd9cp-582, 0.0, 0x1.46754c4574349p-264, 0.0,
     0x1.c6cf8abde0f35p-917, 0x1.694967c1c3db8p-264, 0.0, 0.0, 0x1.7af2a0ebd25fap-277,
     0.0, 0x1.4a1e57eb488c8p-536, 0x1.a26e01d618bcfp-460, 0x1.c2f3589db022ep-75,
     0x1.733483cf6d9cdp-936, 0x1.db002281f41e5p-947, 0.0, 0x1.400b96393286p-463, 0.0,
     0.0, 0x1.62a1972bca09ep-995, 0.0, 0.0, 0x1.e9f42b1c79f71p-346, 0.0,
     0x1.18198e6aa5254p-986, 0.0, 0x1.52094325ea6bep-736, 0x1.358a3d13ce52cp-988, 0.0,
     0.0, 0x1.015fd5150429ep-549, 0x1.4b4faf056b2bfp-837, 0x1.9c3031932cd35p-259,
     0x1.8942cf1d697e7p-255, 0.0, 0.0, 0x1.04938297dc069p-422, 0.0, 0.0,
     0x1.e2643d306a3bbp-830, 0.0, 0.0, 0x1.e93d63980f03fp-899, 0x1.a968c4d4bbdcep-150,
     0x1.d8e2b65ca73d1p-271, 0x1.b8dbd5810815dp-920, 0.0, 0.0, 0x1.93f450a0a8cc4p-875,
     0.0, 0x1.6ae31b9585c52p-178, 0x1.b8ff5f4f339c2p-976, 0.0, 0x1.425344b353678p-786,
     0.0, 0x1.8fd84d245d42dp-977, 0x1.0fbba14fa2301p-630, 0.0, 0x1.4b47f9c230b6dp-830,
     0.0, 0x1.1343781106508p-410, 0.0, 0x1.ff3d9177c57c2p-413, 0x1.fcbf05a66d593p-151,
     0.0, 0.0, 0x1.08d6c5ddfd667p-147, 0.0, 0x1.88e3503e3e143p-246, 0.0, 0.0,
     0x1.58e0648d7a652p-63, 0x1.3225e10c11266p-266, 0.0, 0x1.48f037609b248p-254, 0.0,
     0.0, 0.0, 0x1.c0cbfe340a0f7p-928, 0x1.ec6bdf42af844p-286, 0x1.4e8a29b32b87p-346,
     0x1.d640519d67236p-737, 0.0, 0x1.a05e3dc6ea5a7p-415, 0x1.9734056e223a8p-231, 0.0,
     0.0, 0x1.922378a4fed1cp-781, 0x1.f197b24ae1686p-202, 0.0, 0x1.47e61ee845b09p-138,
     0x1.c1c70e08e7445p-490, 0.0, 0.0, 0x1.0e8b2ea80af55p-803, 0.0, 0.0, 0.0,
     0x1.afce5826cd017p-266, 0.0, 0.0, 0x1.fd1c44375aa72p-818, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.94685004aadffp-931, 0x1.ada53f7f84178p-508, 0x1.31731f8590bb8p-787,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4989777dd9e57p-674, 0.0, 0.0, 0.0, 0.0,
     0x1.1f698676ae9b9p-830, 0x1.cff665787e59dp-362, 0x1.ceaf1e788fd25p-224,
     0x1.addd1022090fep-902, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.425e03c4c280ap-145, 0.0,
     0x1.3e946a2d88c02p-963, 0x1.41740a1a82632p-527, 0x1.f4e85221ea131p-557,
     0x1.bed253a2a059bp-999, 0x1.4cf0c710ea556p-1022, 0.0, 0x1.4ee8134ea3227p-241,
     0.0, 0x1.e920c6d4e916ap-333, 0.0, 0.0, 0x1.ad6972fc8093cp-712,
     0x1.0d0ca8a89ee57p-327, 0.0, 0.0, 0.0, 0x1.9f6d306495dc1p-14, 0.0,
     0x1.d0245b0620f78p-801, 0.0, 0x1.08fdd220b42p-332, 0x1.7780b99c7240ap-669,
     0x1.79439fec4555p-882, 0.0, 0x1.34f3641b79b1p-423, 0x1.92407977b3f9ep-763, 0.0,
     0x1.f4e270b698456p-171, 0.0, 0.0, 0x1.4fc0246ee0b18p-270, 0.0, 0.0, 0.0, 0.0,
     0x1.e4bb73829b246p-855, 0.0, 0x1.74c9e2aa2665fp-329, 0x1.95a89ec203e29p-375,
     0x1.360e68d79bf5bp-252, 0.0, 0x1.0b0876a7e246dp-997, 0.0, 0x1.a3d79c618eeb6p-862,
     0.0, 0x1.58ea4af0476fdp-30, 0x1.a26789b80f6e1p-3, 0x1.97b3708a11da4p-993,
     0x1.9d4df559a659ep-80, 0.0, 0x1.7ed3c1e7fda1fp-785, 0.0, 0.0, 0.0,
     0x1.8625aa79299edp-185, 0.0, 0.0, 0.0, 0x1.81eb9e2afe667p-488, 0.0, 0.0, 0.0,
     0.0, 0x1.32ba4dd15ef4dp-606, 0.0, 0x1.bf0fca4c39626p-278, 0x1.282f6a6dfb8bp-143,
     0x1.a808e98da1445p-180, 0x1.0ca9b8c0c7536p-737, 0.0, 0.0, 0x1.49364f3a14f37p-961,
     0x1.f34d2adcd1c56p-143, 0.0, 0x1.2fb5bcdd78689p-764, 0x1.f793aa64a4c73p-472,
     0x1.72aaa9415aa8dp-68, 0.0, 0x1.5a3914def8ff3p-142, 0x1.0b6896ef2c2dcp-735, 0.0,
     0.0, 0.0, 0x1.9e8184fd51a2ep-928, 0x1.168dc496b5004p-108, 0.0,
     0x1.c292a8cc8c992p-147, 0x1.54eec63d97bcap-579, 0.0, 0x1.99ec1faaca331p-916,
     0x1.c4de80a0fdecbp-89, 0x1.947592683d82p-658, 0.0, 0x1.e449ae41084b4p-392, 0.0,
     0.0, 0.0, 0.0, 0x1.32cab45f8290bp-103, 0x1.7d9531bcf06e2p-123,
     0x1.024a7e5c256dap-226, 0.0, 0x1.5d340e1298905p-303, 0.0, 0.0,
     0x1.edf0f7a1a025fp-967, 0.0, 0x1.5684c32403b7bp-255, 0x1.81f17cdc4a2f3p-387, 0.0,
     0.0, 0x1.af23a143b7d87p-895, 0x1.ceac061288c47p-419, 0.0, 0x1.cb78258303bf6p-320,
     0x1.c8446ab30de54p-884, 0x1.a1a45be8ba965p-301, 0x1.ae72a0c846152p-843, 0.0,
     0x1.1a3503d9c8164p-549, 0.0, 0.0, 0.0, 0x1.e22d7f51bfcaap-75, 0.0, 0.0, 0.0,
     0x1.4a7a398104412p-116, 0.0, 0x1.e2d55847b042ep-888, 0.0, 0x1.30c9e668ace86p-478,
     0x1.f99c4ee02a8e6p-615, 0.0, 0.0, 0.0, 0.0, 0x1.9aa1992769156p-111, 0.0,
     0x1.688044140e406p-551, 0x1.902b7a184a2e1p-470, 0.0, 0.0, 0x1.ae20c266b86e4p-876,
     0.0, 0.0, 0x1.50a89e5c646f4p-54, 0.0, 0.0, 0x1.16650d69d6006p-892, 0.0, 0.0,
     0x1.54476db864b44p-431, 0.0, 0x1.b71ea6522589cp-497, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.c5ca2f62c07b1p-135, 0x1.ffff62a4ec1a9p-730, 0.0, 0.0,
     0x1.c09bebdf0022fp-578, 0.0, 0x1.3cdb842647084p-859, 0.0, 0.0,
     0x1.2d8020fba2a5ap-285, 0x1.61657527126bap-439, 0x1.f9bf0f8d8069dp-486,
     0x1.47179ca2267b2p-550, 0x1.612b74c32f078p-697, 0x1.56a823425cba2p-404,
     0x1.eb0392cc1b1b2p-808, 0.0, 0.0, 0x1.3b5b9fc85aa27p-993
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
            tmp1 = Sleef_finz_cbrtd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_cbrtd1_u10purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_cbrtd1_u10purecfma bench acc %la\n", global_bench_acc);
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
