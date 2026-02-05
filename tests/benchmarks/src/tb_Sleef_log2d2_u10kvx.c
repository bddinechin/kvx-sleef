/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_log2d2_u10kvx.c --function Sleef_log2d2_u10kvx \
 *     --headers sleef.h,ml_support_lib.h --input-formats binary64 \
 *     --precision double --vector-size 2 --function-input-vector-size 2 \
 *     --bench --no-embedded-bin --target kv3
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
     0.0, 0.0, 0.0, 0x1.b280b285cbe84p-331, 0.0, 0.0, 0x1.192f657e61dd5p-376,
     0x1.139d324c91e79p-656, 0.0, 0x1.19a1672e228bep-686, 0x1.315350952bbcdp-723, 0.0,
     0x1.36c93f59907e5p-223, 0x1.38280f5019149p-527, 0x1.0763ab38c5f9ap-997,
     0x1.5cda653347c2bp-651, 0.0, 0x1.982b9a8d6f966p-298, 0x1.cbe29b6dc6b74p-705,
     0x1.60a0a6801812dp-60, 0x1.2762b5d61d4acp-788, 0.0, 0.0, 0x1.660d76f2327afp-788,
     0x1.197cf2d05d972p-842, 0.0, 0x1.0bebce30f19a9p-785, 0x1.0c0c2574c40ap-386,
     0x1.a819bbd3e7507p-218, 0.0, 0x1.db882f1e91b44p-1022, 0x1.e3cd037018805p-135,
     0.0, 0x1.41c085fb11f45p-697, 0.0, 0x1.c1a25c0c66835p-442, 0x1.ea73791ced77ap-721,
     0x1.6adadf8fed4d1p-217, 0.0, 0x1.230d92259dea4p-767, 0.0, 0.0, 0.0,
     0x1.9e5bda19b3e5dp-534, 0x1.8f21307e5370ep-550, 0.0, 0.0, 0.0,
     0x1.703934b8dfe35p-36, 0.0, 0x1.ed0e30ce72b46p-34, 0x1.5d1413f7b9ba2p-59, 0.0,
     0x1.2933cb912ecaap-478, 0x1.011fb3347e884p-1002, 0x1.811c1a1bb8d9ep-771,
     0x1.5bc9af94583c3p-796, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.00b17714f90aap-1007,
     0x1.d9c2b65ddc084p-854, 0.0, 0.0, 0.0, 0.0, 0x1.92b3e5400bc04p-44,
     0x1.0adfb9c04313bp-187, 0x1.9340f82e02bcfp-163, 0.0, 0x1.ab468d7a92a2fp-698, 0.0,
     0x1.10e5ed1cc56b3p-309, 0.0, 0x1.f634cc4043ff4p-926, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7373ea2e3ba17p-416, 0x1.541ab4800ae96p-481, 0.0, 0.0, 0x1.01f2b37127224p-781,
     0.0, 0.0, 0x1.1bcfe6367b98dp-184, 0.0, 0x1.8c5dd031872dcp-103, 0.0,
     0x1.b724f2faca61p-856, 0x1.c9142029cd32cp-431, 0x1.43f305ddb947ep-909, 0.0, 0.0,
     0x1.6a79ee0352146p-694, 0x1.c9d09f1e44057p-162, 0x1.ec79c50b9523p-609,
     0x1.cce950f812ab1p-1019, 0.0, 0x1.b889889f2faeep-120, 0.0, 0.0,
     0x1.f2c6e42621a86p-269, 0x1.99f5cca32c3bcp-189, 0x1.ca4709cd77d88p-24, 0.0, 0.0,
     0x1.7764ee89ac8c8p-323, 0.0, 0.0, 0.0, 0.0, 0x1.17934c26a0498p-514, 0.0,
     0x1.e2f33cfd28a9ep-18, 0x1.9a24f6de24b78p-245, 0x1.022f8e598d0d9p-652,
     0x1.be4709f6e4679p-226, 0x1.58b2670099262p-135, 0.0, 0x1.ce0b2ca3c2ab7p-670, 0.0,
     0x1.151c054a646d7p-505, 0.0, 0x1.8e016518cd2c3p-206, 0.0, 0x1.157e70f97b8ddp-944,
     0x1.aed079f198b4ap-282, 0x1.6bb809284e969p-377, 0x1.809893fbfcf78p-246,
     0x1.6d3b8feab435ap-130, 0.0, 0.0, 0x1.c4edb7329b438p-187, 0x1.d38ace2af19bp-927,
     0.0, 0x1.0027080e605dbp-374, 0.0, 0.0, 0x1.ce5ebc2e829dfp-478,
     0x1.129a635f30354p-616, 0x1.5d1ffd44716c9p-961, 0.0, 0x1.1fed73b7cd299p-111,
     0x1.282ef8f1d5113p-910, 0.0, 0x1.251bf771bbc7ep-242, 0x1.fc6996766f28bp-284, 0.0,
     0x1.d3f2badf2179fp-571, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.98437b1427d7dp-1018,
     0x1.7d5060005e7d9p-797, 0.0, 0.0, 0.0, 0x1.e27b483f47fc1p-379, 0.0, 0.0,
     0x1.a3bf394c02b58p-835, 0.0, 0.0, 0.0, 0.0, 0x1.13e75a8f54ae9p-131, 0.0, 0.0,
     0.0, 0x1.e88b60199a278p-381, 0.0, 0.0, 0x1.18b63133b091ep-171,
     0x1.63e673cc0d7e5p-266, 0.0, 0x1.249bab0ef8ab4p-857, 0x1.5db8226eb2b2bp-3, 0.0,
     0.0, 0.0, 0x1.ef29bbfdafc6cp-979, 0.0, 0x1.5fe3d8bcea939p-391, 0.0,
     0x1.e87add30d4f62p-405, 0x1.5280df1fb3194p-334, 0.0, 0x1.7970737913656p-834,
     0x1.945ce86d508ddp-903, 0.0, 0.0, 0x1.e7ef50a017aeep-804, 0x1.8b345ac524c28p-11,
     0x1.e25bae43c4d69p-265, 0x1.6f156a56844f6p-706, 0.0, 0x1.037e2eb627d2fp-611, 0.0,
     0.0, 0x1.0a4b90022d5e8p-597, 0x1.fbaefadcaad81p-994, 0x1.5e641e3381f4dp-787,
     0x1.0eca3388eaa9cp-69, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.05c7fd79bd84ap-996, 0.0,
     0x1.527c4cdd2ad6cp-852, 0.0, 0.0, 0.0, 0x1.cee04769d2356p-433,
     0x1.810842349cf66p-280, 0x1.0656a711740eap-405, 0.0, 0x1.c00078b067e49p-510,
     0x1.e23167a9e2964p-161, 0.0, 0.0, 0x1.b7df203988d5ep-70, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.6e690323dff05p-527, 0x1.6a749ac639c5ep-298, 0.0, 0x1.36fd98bc6a85cp-744,
     0.0, 0x1.e2102b1f5cae2p-1018, 0x1.087a46fe6b175p-153, 0.0, 0.0, 0.0,
     0x1.76abfced93334p-441, 0.0, 0.0, 0x1.ade5e208e3884p-96, 0x1.65083ffa3e0f7p-54,
     0.0, 0.0, 0.0, 0.0, 0x1.dfcb0c6057ee3p-893, 0.0, 0.0, 0x1.e80e6cbfe99b1p-362,
     0x1.3baf249a2f087p-69, 0x1.eeb31285879edp-371, 0.0, 0x1.c8546a7c26af1p-568, 0.0,
     0.0, 0x1.4b6f45e02efe6p-52, 0.0, 0x1.7dbc5c273007dp-43, 0.0,
     0x1.4a2185b02c8dfp-472, 0x1.518fdfe4b5916p-17, 0.0, 0.0, 0x1.d173f238fa806p-58,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.b585645c19f7p-359, 0x1.7bcae8a9ec43fp-455, 0.0,
     0x1.c940d8582c7acp-479, 0x1.e3f5b54faed42p-163, 0.0, 0x1.6172511db4c1fp-723, 0.0,
     0x1.84ef4bafea87bp-647, 0x1.78ee2963a5a93p-579, 0x1.53e7f4f57d6dap-255, 0.0,
     0x1.2e4749ba70665p-668, 0.0, 0x1.778e6d6203bd7p-190, 0.0, 0.0, 0.0,
     0x1.543ee5915948ep-765, 0x1.5ec59352e594cp-54, 0.0, 0x1.a5d8e8f5c6ccp-338, 0.0,
     0x1.69260ca72e21dp-667, 0x1.06aacbc7f08e7p-529, 0.0, 0.0,
     0x1.79c18c414a254p-1006, 0.0, 0.0, 0x1.0d44fd006597bp-146, 0.0,
     0x1.8dfd820b0a0b8p-791, 0x1.a65e79b33edc9p-723, 0x1.85d3f2323e6b5p-370,
     0x1.bc686b39ea377p-209, 0x1.d97833b581a26p-641, 0x1.d7b05f24b5242p-842,
     0x1.b931fecdf686p-765, 0x1.8a28985bc2dbfp-133, 0x1.8829ec831e825p-323,
     0x1.145dfb473f2fep-938, 0x1.7cd908ced56c9p-888, 0.0, 0.0, 0x1.bd5d8ad1ef8f9p-869,
     0.0, 0x1.37cff665f84a9p-854, 0x1.506da77c1d65fp-499, 0x1.0864408e819b1p-852, 0.0,
     0x1.e907484751bf5p-277, 0x1.bb5e530f34114p-298, 0.0, 0.0, 0x1.ee7608cab1f71p-820,
     0.0, 0.0, 0x1.daada0b0b78f3p-792, 0.0, 0x1.966e12dda0699p-860, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.87721daa2ecbcp-385, 0.0, 0x1.2d9083406eca6p-750, 0.0, 0.0,
     0x1.aac0b6a9d4ce3p-391, 0x1.2a503e7b1d111p-113, 0x1.7142744588a27p-52,
     0x1.608892b269b2ap-170, 0x1.c468100f884d2p-233, 0x1.03908a87c1dbcp-1006,
     0x1.a7453ed9b9bccp-399, 0.0, 0x1.a9121225e039cp-223, 0x1.25d26d1af8c98p-931,
     0x1.18a8a4284ff55p-845, 0.0, 0x1.f917660259cb7p-639, 0x1.967e4bca2f898p-985, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.f7a36f125b80cp-2, 0.0, 0x1.c22da19f357f2p-154,
     0x1.e179a97a2f9c2p-528, 0.0, 0x1.03ff6d4adb2f7p-294, 0x1.409758ee856afp-56, 0.0,
     0x1.42ced428a3ac6p-139, 0x1.68bc6f47b00d7p-895, 0.0, 0.0, 0x1.2e28faabc84f7p-440,
     0.0, 0.0, 0x1.da8704094612ap-1006, 0.0, 0x1.2c0a97365474ep-82, 0.0,
     0x1.dc617e0ce9157p-497, 0.0, 0.0, 0.0, 0.0, 0x1.9be667d2b8a42p-368, 0.0, 0.0,
     0x1.da9e8e9d315e1p-403, 0x1.66e8290e5371dp-447, 0.0, 0.0, 0x1.7f40ae1396c79p-78,
     0x1.7d9ec3f7ac355p-780, 0x1.1ff1211cfc8d4p-104, 0.0, 0x1.6eb6a72b7919fp-733,
     0x1.99c98c4df046ap-534, 0.0, 0.0, 0.0, 0.0, 0x1.cefad93a856a9p-547, 0.0,
     0x1.3fc5316724611p-510, 0x1.a4cee75ef6773p-666, 0.0, 0x1.1f5adcc3017dap-625,
     0x1.aa885711159a9p-99, 0.0, 0.0, 0x1.f39b044b2474dp-393, 0x1.c4ec410c1dd99p-297,
     0x1.c5fc5dfb8f34cp-296, 0x1.9358f7d584035p-236, 0.0, 0x1.d9c9c4dd83e5fp-413,
     0x1.90d9d1454c4a4p-469, 0.0, 0.0, 0x1.ce4c4d611637ep-341, 0x1.6ab0e5d329dc5p-691,
     0x1.a2c453a0e21d1p-52, 0.0, 0x1.a8478c8b84f68p-522, 0.0, 0.0, 0.0,
     0x1.6fcf5e6aeed15p-512, 0.0, 0.0, 0.0, 0.0, 0x1.020396eca23d5p-126,
     0x1.50d9bd1eb47f7p-826, 0x1.180eca03f9407p-82, 0.0, 0x1.cc64c74d952dbp-319,
     0x1.09c5785ff87c2p-27, 0x1.fd7b8f46a1768p-520, 0.0, 0x1.f7ab1a41b8a03p-304,
     0x1.8b91b9a32412bp-719, 0x1.d22ec0b60f1bdp-926, 0x1.a2d1f49d88ea1p-409, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1ed7bbd83db99p-570, 0.0, 0.0,
     0.0, 0x1.9e2c82be72aa4p-44, 0x1.a181f16ed1ab1p-424, 0.0, 0x1.9c9c1a40a9d23p-818,
     0x1.2320a5844965fp-129, 0x1.b3863968207cfp-190, 0.0, 0.0, 0x1.e7172948852abp-270,
     0x1.d227c3cc88dd3p-440, 0.0, 0x1.bb4e81a6a0735p-669, 0.0, 0x1.fb316be882cdp-391,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.061183581ed95p-879, 0x1.109b00854a4e4p-4, 0.0,
     0x1.7587ca5cc429ap-889, 0.0, 0.0, 0.0, 0x1.b6996471c1eccp-162,
     0x1.1de49cb2d6a0ap-1009, 0.0, 0x1.f23322380561p-473, 0.0, 0.0, 0.0, 0.0,
     0x1.531b83ef4d9e9p-778, 0.0, 0.0, 0.0, 0.0, 0x1.eec2addadeb17p-613,
     0x1.e19d2029fda78p-161, 0.0, 0.0, 0x1.9ba3cbfa2483bp-235, 0x1.33a880ba37084p-676,
     0.0, 0x1.547d7169cbb6ep-301, 0x1.1c16b926bcda8p-46, 0.0, 0x1.8ea181b1efed8p-755,
     0x1.906eed3f98cb4p-241, 0.0, 0.0, 0x1.8b17fff25cda6p-577, 0.0, 0.0,
     0x1.9cf89eed688d8p-620, 0x1.521bcbd5c890dp-872, 0.0, 0.0, 0x1.db038d25d57f5p-80,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fe2039153f3d4p-173, 0x1.f728eba883369p-294,
     0x1.f92f97e4fdcf1p-636, 0x1.c0bdef3bb2c41p-484, 0x1.8d84dc7597ff6p-732,
     0x1.e4b554f7656c3p-870, 0.0, 0x1.d4b30a88e7d6p-669, 0.0, 0.0,
     0x1.d277f8e18ee0cp-1012, 0x1.cc9116fa34b16p-141, 0.0, 0.0, 0.0, 0.0,
     0x1.e17e971b1222ap-618, 0.0, 0x1.99300937372edp-151, 0x1.d15ae17c58476p-730, 0.0,
     0.0, 0x1.699f0074d4ddep-193, 0.0, 0.0, 0x1.7205859396d14p-51, 0.0, 0.0, 0.0,
     0x1.1da8a0963e8a7p-87, 0x1.f93bdc22e4451p-412, 0x1.d50bcbf6a6b4ep-379,
     0x1.d4902ff25586fp-70, 0.0, 0.0, 0.0, 0x1.d1a1a16632dedp-624,
     0x1.9647118df4681p-943, 0x1.2ee5d88437f71p-673, 0x1.f308989b88048p-483, 0.0,
     0x1.339ce7f0ae527p-435, 0.0, 0.0, 0.0, 0x1.c4896d36e3ffap-190,
     0x1.a601e536ea05bp-668, 0.0, 0x1.4b965165f51aap-922, 0x1.5f27ac2ee55c2p-208, 0.0,
     0x1.094b050181a96p-858, 0x1.940a8f5d85e25p-618, 0x1.2f313746cf201p-817,
     0x1.ae8aeba20a4d8p-127, 0x1.772dfd3968771p-586, 0x1.babe66c21b0b5p-132,
     0x1.b4bd2e37adb92p-887, 0.0, 0.0, 0x1.162949559816bp-708, 0x1.6f65ffec15a23p-541,
     0x1.12f485f23c73p-559, 0x1.4072e639313f2p-205, 0x1.9f65792c977b4p-225, 0.0,
     0x1.41f6a40233ba5p-302, 0x1.e175a7fe94852p-945, 0x1.8671558775a46p-50, 0.0, 0.0,
     0.0, 0.0, 0x1.db341c9b09df1p-182, 0.0, 0x1.28555610deecap-881, 0.0,
     0x1.df1670c32f3ccp-589, 0x1.5379109fbda76p-465, 0.0, 0.0, 0x1.089e54c145fdp-360,
     0x1.623d9606758cbp-522, 0x1.5d3117c52ccccp-142, 0x1.2b297d42ba6e7p-66, 0.0, 0.0,
     0x1.b2dd8f3ce1ec3p-31, 0x1.f2bc71d4f1e65p-409, 0.0, 0x1.1e63d42e924e7p-852,
     0x1.78bdb319eb78cp-141, 0.0, 0.0, 0x1.8e61c52b2ea62p-565, 0x1.bc5fcc35bbf77p-616,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.91141edb635ddp-199, 0.0, 0.0, 0.0,
     0x1.70b97ce0c954p-786, 0.0, 0.0, 0.0, 0x1.edfc7cc09fd02p-259,
     0x1.22910491ca7adp-371, 0x1.dc3d08681f55dp-94, 0.0, 0x1.fed0fdd34b225p-323, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.b828199fbecb6p-762, 0.0, 0x1.04d82f29b85a4p-661, 0.0,
     0x1.232630c146be3p-1009, 0.0, 0.0, 0x1.f55460c815306p-659, 0.0,
     0x1.5d6ab1c3140e7p-911, 0x1.5c9e4cd9abd5ep-541, 0x1.8d512a8a61cp-188,
     0x1.d7cc49f7430bfp-250, 0x1.acf090f123adap-724, 0.0, 0x1.3a6f053c56724p-627, 0.0,
     0x1.ca4198e43daefp-999, 0x1.d026ea0d20236p-695, 0x1.c16c22af113cfp-711,
     0x1.142ea93903e8cp-160, 0x1.4a1d87807322fp-443, 0.0, 0.0, 0x1.76d88bd438cf5p-229,
     0.0, 0.0, 0.0, 0x1.177bf189ca37ap-42, 0x1.1a3bf26715d69p-112, 0.0,
     0x1.c0c0471157b6ep-512, 0x1.a198084d93a13p-282, 0.0, 0x1.625c4ca360a73p-914, 0.0,
     0.0, 0.0, 0x1.26578b641be01p-618, 0.0, 0.0, 0x1.1d75c8e14e23ep-120, 0.0,
     0x1.e0c9c736f1389p-95, 0x1.f8cbc24fe1c52p-918, 0.0, 0x1.9a1c02f2afe25p-210, 0.0,
     0x1.3d22ef07ee923p-767, 0x1.79c46df1994abp-927, 0.0, 0.0, 0x1.b2b03abb2b1eap-528,
     0x1.d53d47e2f4929p-591, 0.0, 0.0, 0x1.b16161611a9f8p-509, 0x1.08168c200528dp-740,
     0x1.98513aae9578dp-97, 0.0, 0.0, 0x1.9b3fff6d230a7p-1006, 0x1.1b901d7e66972p-933,
     0.0, 0x1.a43717a6a28aep-93, 0x1.eb20ce311ec14p-763, 0.0, 0.0,
     0x1.2d61cb2b6c24cp-179, 0x1.383f8bdfbd9ddp-763, 0x1.dcbd773df73c2p-827, 0.0, 0.0,
     0.0, 0x1.ef6fec3bfc062p-734, 0.0, 0x1.cbb24cf0971bp-171, 0.0, 0.0, 0.0, 0.0,
     0x1.8b25752abe7cdp-844, 0x1.c0dafc912742cp-530, 0x1.e689e31a14cf2p-441,
     0x1.ba7c9d876a834p-19, 0.0, 0x1.f326b9887f43ep-290, 0.0, 0.0,
     0x1.843e17a76d4bap-272, 0.0, 0x1.e4daff19c417dp-1014, 0.0,
     0x1.13bbd2ded2952p-393, 0x1.ed8f58bfccc56p-645, 0.0, 0x1.3ac6704498ca5p-390,
     0x1.1ce8bfe69fbf8p-566, 0x1.79c4dcc15906ap-114, 0x1.f6d6b6b7f7b04p-651, 0.0,
     0x1.b7ef08acada28p-203, 0x1.13b4524315f92p-642, 0.0, 0.0, 0.0,
     0x1.05b984f91bfa6p-633, 0x1.b589e1f51309p-902, 0x1.3f27909013659p-753,
     0x1.4e56c05604bc7p-725, 0x1.444cad9fbecf9p-850, 0.0, 0x1.bd05f638315bp-870,
     0x1.7985c4e443f9cp-780, 0x1.3b8ebe29a2ebp-929, 0x1.64fd4ca6ca58fp-179, 0.0,
     0x1.62c5fb5c090e1p-383, 0.0, 0x1.9a4af4d1c7329p-937, 0x1.7beaab6160e46p-679, 0.0,
     0.0, 0.0, 0x1.4f811eb8add6fp-807, 0.0, 0.0, 0x1.86a87d4b3cb77p-607, 0.0,
     0x1.a3d2c26202104p-323, 0.0, 0.0, 0.0, 0x1.e3b8b2d09ad9cp-250,
     0x1.cd23d189c371dp-818, 0.0, 0.0, 0.0, 0x1.9cfcf72826f21p-332,
     0x1.580b3d8ca011bp-931, 0.0, 0.0, 0.0, 0.0, 0x1.a3d3a54b97b4ep-482, 0.0, 0.0,
     0.0, 0x1.474bf962d6f05p-584, 0.0, 0.0, 0x1.1d0c2195f2d3ep-502,
     0x1.fe97d70774dc1p-265, 0.0, 0x1.652f4420ac6b9p-1003, 0x1.b14c7ef60232ap-669,
     0.0, 0.0, 0.0, 0x1.e793a7641a617p-667, 0x1.de640692b972bp-861, 0.0, 0.0, 0.0,
     0.0, 0x1.d10233c7b0781p-411, 0x1.a31804f033d37p-504, 0x1.c57d52782f31bp-708,
     0x1.747dde746e9e6p-459, 0x1.4e843e604e9e2p-614, 0.0, 0x1.b11f77c00682fp-228, 0.0,
     0.0, 0x1.57fd01805f7edp-988, 0.0, 0x1.7d776d9befbefp-456, 0.0,
     0x1.663d973623391p-204, 0.0, 0.0, 0.0, 0x1.44c869f8d1599p-613,
     0x1.08ea1238a2896p-452, 0.0, 0x1.ec0d9d7b94899p-405, 0x1.6c0e879d0aeebp-501, 0.0,
     0.0, 0x1.d1162eff90bcfp-222, 0.0, 0.0, 0x1.6face88c254bep-278, 0.0,
     0x1.edc0a7dd60f86p-950, 0.0, 0x1.06c63bc01db9p-561, 0.0, 0x1.2a3d1ef3f11acp-531,
     0.0, 0x1.d66ee6fa64af8p-768, 0x1.81d82b24b07abp-904, 0x1.8a7f6fb8ebe1dp-775,
     0x1.bb5ccf7972ed4p-352, 0.0, 0.0, 0x1.a70c56ad5b8ecp-776, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.44879b7b180f4p-538, 0x1.c37e92acac646p-777, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.31b861e160b4p-510, 0.0, 0x1.62e2c88cd99c2p-65, 0x1.b4d73cc2791d3p-931,
     0.0, 0.0, 0x1.633218e301daep-385, 0.0, 0.0, 0x1.1db42d71c5ac1p-160,
     0x1.71b94fb7cd56p-530, 0.0, 0x1.48a7b1c0f9496p-515, 0.0, 0.0,
     0x1.23c15f1780f24p-948, 0x1.95978db8eda5p-690, 0x1.1183f5b8fc266p-180,
     0x1.8fc98079365a8p-859, 0.0, 0.0, 0.0, 0.0, 0x1.c3a2688c90971p-985,
     0x1.865a98633a8dep-633, 0.0, 0x1.b7d41c3a02d8bp-579, 0.0, 0x1.48717db31522ep-705,
     0x1.b6bef42fbdfa2p-179, 0x1.acae3b1261641p-40, 0x1.00497f79a969ep-99, 0.0, 0.0,
     0x1.c3537226b4a9p-403, 0.0, 0x1.e920dd53c8947p-761, 0x1.c864409b0bfb8p-977,
     0x1.40531fc1c0866p-703, 0.0, 0.0, 0.0, 0.0, 0x1.63cf61c0d3278p-967, 0.0, 0.0,
     0.0, 0x1.3c18c7fcd9585p-1004, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ade5f27012c94p-363,
     0x1.e5fe24f0b4b89p-148, 0.0, 0.0, 0x1.6139d95087eb3p-901, 0x1.6a87b72aef6d5p-723,
     0.0, 0x1.f2a880050edeap-906, 0x1.ff8d803835096p-934, 0x1.2f870da608b9p-698,
     0x1.f2aefd8657c0cp-224, 0.0, 0.0, 0x1.8ea8691f04697p-870, 0x1.9df0ccf0734c3p-815,
     0x1.e8ec3f489e7aap-116, 0x1.a478eaddeef48p-318, 0.0, 0.0, 0.0,
     0x1.5f803f7434a85p-617, 0.0, 0x1.c4d3d54500294p-953, 0.0, 0x1.50879a0414d1fp-449,
     0.0, 0x1.9e0fb500b002fp-877, 0x1.44b47b3f03204p-648, 0x1.e1b5947133d45p-674,
     0x1.e27cfbdec1eb9p-423, 0x1.c845015de6f3fp-1004, 0x1.6169ca3c9b092p-618, 0.0,
     0x1.e38021a10fe53p-502, 0.0, 0x1.aef347003805ep-817, 0.0, 0x1.c97d979b2b99ap-319,
     0.0, 0.0, 0x1.4c03b44c558abp-811, 0x1.a8f1a152871f1p-930, 0x1.d6b22c21a602fp-135,
     0x1.c738e13b42e3fp-615, 0x1.dacccba62a2dp-953, 0x1.6fee17396c3f3p-136, 0.0, 0.0,
     0x1.0c6a7561f274ap-939, 0.0, 0x1.5da8dc01467fep-469, 0x1.3d2fe3093b894p-94, 0.0,
     0.0, 0.0, 0.0, 0x1.c730059059bffp-874, 0x1.2d1769265540dp-57, 0.0, 0.0,
     0x1.9156edf056114p-423, 0x1.40e3a0e0c3b5fp-18, 0.0, 0.0, 0x1.0ea8b43cdd4bbp-147,
     0.0, 0.0, 0x1.1d81d32ecac9dp-716, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_log2d2_u10kvx(tmp0);
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
    printf("Sleef_log2d2_u10kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_log2d2_u10kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
