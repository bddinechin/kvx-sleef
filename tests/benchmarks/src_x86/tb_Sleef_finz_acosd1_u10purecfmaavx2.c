/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_acosd1_u10purecfma.c --function \
 *     Sleef_finz_acosd1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.0f335dc9fc4cfp-71, 0x1.45662dcfbc7f9p-990, 0.0, 0x1.b8016f49fe1e8p-674, 0.0,
     0x1.c868c8ac164ddp-194, 0x1.160b34346a855p-291, 0x1.edd5d335aac0ep-887,
     0x1.639a387e943a8p-988, 0x1.366555f65294ap-384, 0x1.e3a0fc65550f9p-793,
     0x1.83490568b9729p-762, 0.0, 0.0, 0.0, 0x1.3dbba64068185p-852,
     0x1.1f46e21a413e9p-4, 0.0, 0.0, 0x1.f3335b8409a31p-445, 0.0, 0.0, 0.0,
     0x1.403349226b30fp-753, 0.0, 0.0, 0.0, 0x1.87abbcc25182dp-339, 0.0, 0.0,
     0x1.532c05d5a2f31p-727, 0x1.6d494915293d8p-867, 0x1.6853bc371b7a4p-324, 0.0, 0.0,
     0x1.47af372353976p-888, 0.0, 0x1.de8f1ab2d83bcp-103, 0x1.a90da2db504c9p-883,
     0x1.038ca755fe578p-552, 0x1.bafc0549f422fp-609, 0x1.cbd318ba85ddcp-3,
     0x1.e6d3d92bb7226p-140, 0.0, 0x1.2d35c5b075c4ap-519, 0.0, 0x1.0b556823dab64p-56,
     0x1.2d3c9e4d8a9a6p-705, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.492283ee7d71dp-959, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.7ee9db28b770bp-992, 0.0, 0x1.729d30522a612p-139,
     0x1.58b4966ce2f14p-132, 0x1.9f27d9f89abap-516, 0.0, 0x1.754e149bd98f3p-1013,
     0x1.d486686e4c5dfp-396, 0x1.63cad5ac6c579p-600, 0.0, 0.0, 0.0, 0.0,
     0x1.836a58b2ae741p-675, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.607ffbb908ad1p-188,
     0.0, 0x1.7d6976a298b45p-47, 0x1.501e1164b5708p-589, 0.0, 0x1.d139ab0f8b97dp-564,
     0.0, 0.0, 0x1.fa7bf7d9346a1p-52, 0x1.7ff8e63c60551p-878, 0.0, 0.0,
     0x1.1dcad7f18ab4cp-225, 0.0, 0.0, 0.0, 0x1.e54ea334c7193p-710, 0.0, 0.0,
     0x1.66667d1613ca7p-1010, 0x1.fc9eae6c1431ep-130, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.90b5e2f59ba9fp-877, 0x1.609fb2847949ap-253, 0x1.2a702fc599cfep-380, 0.0,
     0x1.18490a2001904p-713, 0.0, 0x1.25685cae71f8bp-687, 0x1.49b0da199e52ap-159, 0.0,
     0x1.3954cf4f1a5ap-776, 0x1.99a0eaa5c768p-312, 0.0, 0x1.1e6a591e0c657p-599, 0.0,
     0x1.1fff2bbb218bap-843, 0x1.7d66cb5e32677p-55, 0.0, 0x1.b11dd23b5135bp-702, 0.0,
     0x1.60c21d2191251p-754, 0x1.5a8265b1c5983p-660, 0.0, 0.0, 0.0,
     0x1.140756edc96cbp-540, 0x1.c3972093add8ap-676, 0.0, 0.0, 0x1.35dee0a0c1f28p-199,
     0.0, 0.0, 0.0, 0.0, 0x1.deb7151fde62ep-12, 0.0, 0.0, 0x1.f40825dde4b2bp-646, 0.0,
     0.0, 0x1.c77e1d2c78d8p-299, 0.0, 0.0, 0x1.46082608fca2dp-299, 0.0,
     0x1.cbc6f11d2a0c5p-409, 0.0, 0x1.417d302a1e136p-529, 0x1.80f27c697e056p-339, 0.0,
     0x1.5dabdf80bd7fap-924, 0.0, 0x1.1b54c7adb843bp-40, 0.0, 0x1.6e978b80d3a6dp-69,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.6246b5e8cddf5p-951,
     0x1.48bfced38a0b5p-652, 0.0, 0x1.755f158141962p-294, 0x1.2899b48e684bdp-177, 0.0,
     0x1.475f190be6595p-1018, 0.0, 0.0, 0x1.703812de7b4a7p-375, 0x1.7b27b21995d5p-198,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1714f7bc484efp-129, 0.0, 0x1.537773f25e4ccp-811,
     0x1.7adf75009f228p-779, 0x1.f50140aeb1264p-764, 0x1.923d7ee582da2p-722, 0.0,
     0x1.47f6ae2ddb116p-710, 0x1.0b7531af7da4ap-484, 0.0, 0x1.cbbffbbeb3254p-99, 0.0,
     0.0, 0x1.d03077e9e14c5p-315, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.664e18c07208ep-273, 0x1.ddcd2045ccd2p-642, 0x1.b67a5d730563fp-787, 0.0, 0.0,
     0x1.fe72adb63a658p-692, 0x1.0a168474a8093p-866, 0x1.5010c7e6756edp-785, 0.0, 0.0,
     0.0, 0.0, 0x1.3e3056601faecp-85, 0.0, 0x1.e0fca6720969dp-209, 0.0,
     0x1.fc3c957b0efbp-57, 0.0, 0.0, 0x1.4d299eb5ed282p-158, 0x1.7ebce64a97adcp-578,
     0x1.2ad9f04dac72bp-32, 0x1.fd1289c16b57cp-197, 0.0, 0x1.7eb47cd9b199bp-126, 0.0,
     0x1.5285125b37734p-83, 0.0, 0.0, 0x1.3d8eca9546ac2p-990, 0x1.79906cc14cbe9p-764,
     0.0, 0x1.c08a7ec0931abp-579, 0.0, 0x1.2a958503a6eb7p-697, 0x1.70aed44113301p-19,
     0.0, 0.0, 0.0, 0.0, 0x1.87e986da49678p-821, 0x1.a34e860205b97p-549, 0.0, 0.0,
     0.0, 0x1.9649810b2073p-263, 0.0, 0.0, 0x1.e3d7a118f5de3p-88,
     0x1.ab0d850166335p-152, 0.0, 0x1.45c92107c957bp-286, 0x1.b2baa265f783p-598,
     0x1.656a050c894bbp-669, 0.0, 0.0, 0x1.5c0195c13a1bcp-857, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.4d36f179d9ce9p-449, 0x1.2e186923580f7p-434, 0x1.a7e6d000396bp-766, 0.0,
     0x1.9cbad5cdbc965p-833, 0x1.19ce74362ed68p-349, 0x1.5b0625bf80e44p-679,
     0x1.b0ce0edf6fa6dp-321, 0.0, 0x1.c459a97a2053fp-217, 0x1.7e262248560aap-784,
     0x1.422a2a38ee824p-26, 0x1.8758a41ed27c8p-133, 0.0, 0x1.1fb59cb41da41p-88, 0.0,
     0x1.830b5e890758p-126, 0.0, 0.0, 0x1.014d1e9e6f6bcp-120, 0x1.3bac3b4a83789p-751,
     0.0, 0x1.3121fa806bdafp-411, 0.0, 0x1.5172e6e0bd7cap-985, 0.0, 0.0,
     0x1.ca5f6d2f73f01p-332, 0.0, 0x1.434aece2bcf71p-182, 0.0, 0.0, 0.0,
     0x1.395dda775ce5cp-980, 0x1.fedd1e53de3e3p-791, 0x1.758570d57dd5bp-730, 0.0, 0.0,
     0x1.43d618e07e068p-632, 0.0, 0.0, 0.0, 0x1.5928efb96bdf5p-38, 0.0,
     0x1.e90aab386421p-1010, 0.0, 0.0, 0.0, 0x1.732e322d00f51p-673,
     0x1.5f940c5259093p-999, 0.0, 0x1.4f8f1bb3c1f89p-229, 0.0, 0x1.6ca6504793009p-265,
     0.0, 0.0, 0x1.4297949a16dd1p-119, 0x1.1fb687834e0a7p-417, 0.0,
     0x1.1c4373ae0f003p-725, 0x1.acbbb952d6895p-680, 0x1.e53be27701851p-3,
     0x1.36cbad397817bp-763, 0.0, 0x1.e9d9096c1d9fep-484, 0x1.b439e901a22fcp-15,
     0x1.295f9ac12b1dp-990, 0x1.c16f67e31950cp-909, 0.0, 0.0, 0x1.d6e008b757b4fp-65,
     0x1.aa0d25b82f333p-356, 0x1.0ce18fb065d05p-145, 0x1.7a0e2d2d5bb11p-344,
     0x1.f088d26ce46fp-182, 0.0, 0.0, 0x1.8657d3d738afap-363, 0x1.8979f8d757d4bp-74,
     0.0, 0.0, 0.0, 0x1.93ffb982ae517p-996, 0x1.15bc745c9f236p-76, 0.0, 0.0,
     0x1.5d1cd5299a505p-518, 0.0, 0x1.ef44b6eb74cc9p-315, 0x1.61a24d7febf1ep-973, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.cf3ca6ca719b6p-517, 0x1.b062d78be270dp-10,
     0x1.61c117daa3622p-399, 0x1.59e4214166fa9p-831, 0.0, 0x1.3120e6d7f40a6p-895,
     0x1.31d62bbe80f45p-817, 0x1.d80baf5cc5e08p-992, 0x1.ef498dd3ee321p-797, 0.0, 0.0,
     0x1.b9c798e0ebe18p-264, 0x1.a205dd5a962cap-863, 0x1.e106eb46491dcp-320,
     0x1.57441269a1fb6p-469, 0x1.9364b9a0ab9a3p-1020, 0x1.f4423cdc111f2p-281, 0.0,
     0.0, 0x1.d674606493174p-713, 0x1.fb5ca6ac0cefp-740, 0x1.2b6d9435f6ca3p-344, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9cfeab8093462p-965, 0.0,
     0x1.0e20b180cb459p-98, 0.0, 0.0, 0.0, 0.0, 0x1.eaad9cca9c285p-390, 0.0, 0.0, 0.0,
     0.0, 0x1.be9dcfdbaba8bp-682, 0x1.e52faba23a79ep-679, 0x1.9c3793dd89087p-11, 0.0,
     0x1.c70703b528d29p-38, 0x1.a3ebe4ba1e98dp-238, 0x1.5e77ca33638f7p-326,
     0x1.771bfa41d8e04p-352, 0x1.eae87c2a7c5aap-642, 0x1.40340d157c182p-287,
     0x1.96add05a6eb91p-132, 0.0, 0.0, 0x1.ce37cfaffc154p-237, 0x1.1f95e6461e323p-966,
     0.0, 0x1.5f115b59c2357p-195, 0.0, 0.0, 0.0, 0x1.04f9e6af51b6cp-466, 0.0, 0.0,
     0.0, 0x1.fb64399fcd635p-687, 0.0, 0.0, 0.0, 0.0, 0x1.b6b9f6ffdf65ep-3,
     0x1.2ea009e12bdc6p-948, 0x1.76bac099fc33ep-138, 0x1.769bd76e205bep-194, 0.0,
     0x1.1946fc4c8b4bcp-552, 0.0, 0x1.ac774e1448024p-732, 0.0, 0x1.20c4bceacc91dp-557,
     0.0, 0x1.a23922bc1102p-471, 0x1.e33a2182f613ap-618, 0.0, 0x1.8c12d5578f801p-890,
     0x1.0cea95f2979f4p-913, 0x1.e9d4055bb4f21p-898, 0x1.1a5e558860127p-193, 0.0,
     0x1.11e375f3c4dcp-151, 0x1.210caf2d882d3p-186, 0.0, 0.0, 0.0,
     0x1.b73be2ca7af76p-306, 0.0, 0x1.3bcb21759d612p-635, 0.0, 0x1.90ec80338287cp-567,
     0.0, 0x1.9e50a9664db55p-106, 0.0, 0.0, 0x1.e570cdaf41cd5p-159, 0.0, 0.0, 0.0,
     0x1.0638fd204a16ap-604, 0.0, 0x1.56e90f7965f96p-117, 0x1.ff244ed95315fp-296, 0.0,
     0x1.2569df560cceap-439, 0.0, 0.0, 0.0, 0x1.587bdb8d5f978p-923,
     0x1.39c5f838b2f3bp-536, 0.0, 0x1.2a706e12a43b1p-753, 0x1.8d96c2ef4bfecp-992, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.53e1ca7f239b1p-406, 0.0, 0x1.58b158f8fc2b9p-809,
     0.0, 0x1.0d9457c4a9e2p-512, 0.0, 0x1.96cc24ed510dp-615, 0.0,
     0x1.bf764f0f29a1ap-790, 0x1.a30ef9dfc4466p-699, 0.0, 0.0, 0.0,
     0x1.11eaa8afe026ap-503, 0x1.050b0749ce59fp-599, 0.0, 0x1.41c91fc7d5379p-780,
     0x1.e232f2bda6648p-145, 0x1.8ade65cd7eef2p-550, 0x1.cd06bd40f40d3p-841,
     0x1.f857b63254441p-794, 0x1.8c08c13542fedp-1021, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f850f043a1d25p-435, 0.0, 0x1.9980b3829f635p-372, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.10176613a421ap-504, 0x1.ed4a8ea2fb03ap-412, 0x1.1360ab0bbf4cp-935,
     0x1.49ec2a1affa9dp-28, 0x1.61825f86cb897p-553, 0.0, 0x1.6d440d8c639d9p-567,
     0x1.b7305e589db47p-767, 0.0, 0x1.5cfae2d6845cdp-369, 0.0, 0.0, 0.0,
     0x1.aa11c002d37cep-681, 0x1.8fda34bbdf4f1p-62, 0.0, 0x1.7df0bf400e441p-983, 0.0,
     0.0, 0x1.99e990af9345cp-289, 0x1.29ebdcbd87b5ep-588, 0x1.0e9d395adc61fp-110, 0.0,
     0.0, 0.0, 0x1.47eb603bbfd37p-797, 0x1.928caecba2c45p-492, 0.0,
     0x1.e4d0fa2a787b6p-945, 0x1.e4c6f5a660bf3p-879, 0x1.c1c4bf72d6a6fp-743, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b7c527ba228cdp-652, 0x1.6880c80ee5e1p-214,
     0x1.9eb090b10a143p-924, 0x1.ce0041074ddacp-978, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.04a694396fe06p-30, 0x1.0784355f26766p-163, 0.0, 0x1.d5b2c48156c8p-175, 0.0,
     0x1.8429c638e402p-662, 0.0, 0x1.08979b7f9885p-191, 0x1.cdb3e5b6ae993p-28,
     0x1.a8344583f1321p-462, 0x1.274a12ee9711ep-97, 0x1.17ce34aab5011p-741, 0.0,
     0x1.ea2c3c7a5c16cp-1019, 0.0, 0.0, 0x1.b9b1221b22692p-965,
     0x1.19c9e70c35b6bp-400, 0x1.2ef0e248e984dp-461, 0.0, 0x1.bc45cd9a96ed5p-359,
     0x1.1af6e494b80fap-78, 0x1.f491bdd772e57p-907, 0x1.8620dbb6aeap-451,
     0x1.0f55021eb42d5p-245, 0.0, 0.0, 0.0, 0x1.9c086427bd6fap-90,
     0x1.4112abf4e2096p-269, 0x1.e893b3304ac96p-504, 0.0, 0.0, 0.0,
     0x1.0561ab77c38c4p-717, 0x1.62ca5f21e1216p-362, 0.0, 0x1.d0bbb7d6ae694p-376, 0.0,
     0x1.f0fa2d8534223p-594, 0x1.e3dbb07a8df88p-85, 0x1.b6066721aba33p-265,
     0x1.78a8156297a8cp-696, 0.0, 0.0, 0x1.9d636910d025ap-756, 0.0,
     0x1.12f08c755944dp-8, 0.0, 0.0, 0.0, 0x1.ce3300e8db127p-853,
     0x1.097311d40b957p-252, 0x1.8747181f70b5cp-290, 0.0, 0x1.0f6911bef3c3cp-855,
     0x1.683dc90ae6711p-46, 0.0, 0x1.3c3f44537cb6dp-15, 0x1.576153e46d749p-213,
     0x1.0af83dbda7124p-416, 0x1.4bb7be36995a1p-976, 0x1.26852ee8157e6p-297, 0.0,
     0x1.a2bc26086ab21p-1017, 0x1.cd6f1e6f5aee9p-348, 0.0, 0x1.47c5b41ac2ca9p-26,
     0x1.63a666516271bp-991, 0.0, 0.0, 0x1.b6e434d331057p-61, 0x1.f8b30ff52e43fp-861,
     0x1.761afbc9ace19p-469, 0x1.2e193f855600cp-584, 0x1.aab8c0d6b539ep-171,
     0x1.cc3d0f85a0b56p-499, 0x1.5cf34d27f433p-941, 0x1.e334269d188aap-655,
     0x1.6662141470f66p-857, 0x1.34c8c01125406p-497, 0x1.77c35050617f2p-813,
     0x1.af4c8b71729cfp-265, 0x1.a2d2bf5ea3d61p-741, 0x1.d4b98d3431dd9p-636, 0.0,
     0x1.5b34289126c7ap-502, 0.0, 0x1.7330a76da9b76p-737, 0x1.5d5e971147f31p-58,
     0x1.48dad57c1fc4ap-208, 0x1.af1ee292be25fp-731, 0.0, 0.0,
     0x1.622f953943691p-1012, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2356b04f6929ep-575, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f62c1d293a63ep-991, 0x1.5006af0f96756p-975,
     0x1.4ebfe0e3ba58fp-753, 0x1.b87f344774ad9p-385, 0x1.a773315c6b099p-404, 0.0, 0.0,
     0x1.b20d33996355ap-189, 0x1.e84014b2c614dp-206, 0x1.1b49c3fc140a9p-697, 0.0,
     0x1.6433408adceffp-512, 0.0, 0.0, 0.0, 0x1.44ea8daeaccdep-145, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.f1a7399bdda7ap-876, 0.0, 0.0, 0.0, 0x1.182ca1960354cp-912, 0.0,
     0x1.10ce376d1f01cp-751, 0.0, 0x1.b06c09669af0cp-401, 0x1.c5dd0df283437p-803, 0.0,
     0x1.e3946fca3baap-484, 0x1.b337e0c14b18p-1004, 0.0, 0x1.41e2572eb0937p-522,
     0x1.438333642f3f1p-499, 0x1.f728046d6065bp-724, 0.0, 0.0, 0x1.0e37240b5ad79p-897,
     0.0, 0x1.eaec789e774c8p-80, 0.0, 0.0, 0.0, 0x1.cd7a4d447a73fp-395,
     0x1.6517b9c95c5f6p-463, 0x1.818f2897f14d6p-453, 0x1.03e1800fe92p-42,
     0x1.c6a3796ef9d66p-288, 0.0, 0x1.8b371c6659fbep-818, 0.0, 0.0,
     0x1.783b21920597bp-372, 0.0, 0.0, 0.0, 0.0, 0x1.b3fdeed46ee7cp-117, 0.0, 0.0,
     0x1.75a1942286798p-644, 0x1.b1a1a2b69ef02p-390, 0.0, 0x1.67235cf9e09f7p-81, 0.0,
     0x1.b8fde55ad41d3p-469, 0.0, 0.0, 0.0, 0x1.a7021a2692055p-128, 0.0,
     0x1.d78d72a722d97p-469, 0.0, 0.0, 0.0, 0.0, 0x1.5d95b793fcdc7p-764, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.80c756dee1346p-17, 0.0, 0.0, 0x1.6fb899f7f1a89p-743, 0.0,
     0x1.b9b34219e4974p-516, 0.0, 0.0, 0x1.edfd851121deep-38, 0x1.764f951ff9cf4p-298,
     0.0, 0.0, 0x1.ee0f555860689p-561, 0x1.f753bd5fdb036p-182, 0x1.80ebd74d0a598p-282,
     0.0, 0.0, 0.0, 0.0, 0x1.508ce0d1bbcedp-212, 0.0, 0x1.f9ac8bbd55cp-639,
     0x1.94db39508ebd4p-404, 0.0, 0x1.49608bbae87bbp-638, 0x1.045680a985d9ap-168, 0.0,
     0.0, 0.0, 0.0, 0x1.86177e9ba36dep-449, 0x1.27f4f5e8d79a6p-291, 0.0,
     0x1.c14872c0e8dfap-378, 0.0, 0x1.231f776468eadp-752, 0x1.066a474916df5p-267, 0.0,
     0x1.163dc622b82b7p-492, 0x1.2dc8e0324b78ep-383, 0x1.dba89cdfb8d1dp-509,
     0x1.618fb63cb8251p-15, 0x1.3bd5bcaaebc6ap-795, 0.0, 0.0, 0x1.96304323e2957p-761,
     0x1.c3d9245f9712fp-815, 0.0, 0x1.a2bf93b97b677p-706, 0x1.3c3a5b2204f3dp-763,
     0x1.0a8e69aa44a06p-975, 0x1.f02523607aed5p-623, 0x1.a27c308044848p-484,
     0x1.0d756301b1aabp-545, 0.0, 0.0, 0x1.7db831d7a2a7fp-47, 0x1.30c3b6b00bddep-1021,
     0.0, 0.0, 0x1.3353b01cfbce5p-831, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.53dd781f08b39p-684, 0.0, 0.0, 0.0, 0x1.0f2861fe8cc87p-567,
     0x1.9b888d326f415p-569, 0.0, 0x1.fe6ffa6819cf3p-810, 0x1.bd313cea140bp-515, 0.0,
     0.0, 0x1.b73b16509327dp-963, 0.0, 0x1.78750bf295388p-521, 0.0,
     0x1.ac47810df6115p-407, 0.0, 0x1.aff81c01e619dp-953, 0.0, 0.0, 0.0, 0.0,
     0x1.e4b1aad379138p-620, 0x1.0a8602669b126p-768, 0.0, 0.0, 0x1.f7e63c275ad67p-851,
     0x1.a9908edd3fc16p-710, 0.0, 0x1.59d3ef340e047p-669, 0.0, 0.0, 0.0, 0.0,
     0x1.0f3854a1e9a33p-723, 0.0, 0x1.02811683d649dp-694, 0x1.a97776a409b2ap-128, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.46f566aaac397p-475, 0x1.abf5ce0a3131bp-99,
     0x1.d7ed8bd8b660dp-943, 0x1.37093774bee5ep-942, 0.0, 0.0, 0x1.82df528968765p-749,
     0x1.26b8cb7c37299p-194, 0x1.301090a38e98fp-629, 0.0, 0.0, 0x1.828ccfb1c120fp-976,
     0x1.2c677dd50f2d4p-917, 0x1.67c3fe9466a89p-499, 0.0, 0x1.f46f9c2bd5a14p-775,
     0x1.793450eaba4f2p-721, 0.0, 0x1.8f3d6af74277ap-50, 0.0, 0x1.a3f0aa50c6af2p-796,
     0x1.d2016b7965f6ep-474, 0x1.2a578596d7168p-489, 0x1.b70edcfb36833p-914,
     0x1.a4ac17496cc4cp-886, 0.0, 0.0, 0x1.01a425118c634p-1001,
     0x1.77bb55a177361p-384, 0x1.a9a0fe231401ap-544, 0x1.b8d516976ce24p-743,
     0x1.2807b36f505b3p-734, 0.0, 0.0, 0.0, 0.0, 0x1.cdf9625938b7ap-1021, 0.0, 0.0,
     0.0, 0x1.63296f678c9d3p-724, 0.0, 0.0, 0.0, 0.0, 0x1.56fba863946a1p-558, 0.0,
     0x1.ef6419653c205p-1021, 0x1.7378ec79d3f11p-416, 0x1.6f56b5b1c8f23p-678,
     0x1.21704a7ab387dp-953, 0.0, 0x1.4f6bfccf53545p-839, 0x1.8c4a01cd8ad16p-190, 0.0,
     0.0, 0.0, 0x1.6db83b1f32a5ep-913, 0x1.946726177873bp-471, 0.0,
     0x1.42273332fafd1p-647, 0.0, 0x1.814ccc209cae1p-745, 0.0, 0x1.642746472d8c3p-50,
     0.0, 0x1.f589337eb941ep-482, 0.0, 0.0, 0.0, 0.0, 0x1.50d53ae86ceafp-603,
     0x1.df390a2d33757p-887, 0.0, 0x1.b5e92aab9fc76p-248, 0x1.f5cbd29728c3dp-174,
     0x1.226e875f36c3fp-281, 0x1.c087313482047p-818, 0x1.da4bc26ca285dp-877, 0.0,
     0x1.e34ecdab4db11p-100, 0.0, 0x1.59f42a27277p-5, 0.0, 0x1.797e96a0b71fp-740, 0.0,
     0x1.3dd4334e847d7p-715, 0.0, 0.0, 0.0, 0x1.ad9de3205023fp-534,
     0x1.2f13315bcbb33p-695, 0.0, 0.0, 0x1.2d77bf0d67f47p-317, 0x1.404e77000e13cp-257,
     0x1.cc5e1c6771f8cp-498, 0.0, 0.0, 0x1.458c3dec68869p-894, 0.0,
     0x1.45887cd27b3e1p-657, 0.0, 0x1.3ca9ab92e032ep-357, 0x1.d49bf8bab5039p-27,
     0x1.471f4974bfc7p-182, 0.0, 0x1.af815f54156cdp-359, 0.0, 0x1.d231c7a0d4f45p-481,
     0x1.1427fb683347fp-449, 0x1.c87dab55b2357p-495, 0.0, 0x1.2a1d54713e0adp-86, 0.0,
     0.0, 0.0, 0x1.46008b195234bp-975, 0.0, 0.0, 0.0, 0x1.d96b620d1d4bcp-780
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
            tmp1 = Sleef_finz_acosd1_u10purecfma(tmp0);
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
    printf("Sleef_finz_acosd1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_acosd1_u10purecfma bench acc %la\n", global_bench_acc);
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
