/**
 * generated using metalibm 1.1
 * sha1 git: b'"b98b0dd715eaee59a00e6526870d9930655188d8"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_sind2_u35kvx.c --function Sleef_sind2_u35kvx --headers \
 *     sleef.h,ml_support_lib.h --input-formats binary64 --precision double \
 *     --vector-size 2 --function-input-vector-size 2 --bench \
 *     --no-embedded-bin --target kv3
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
     0.0, 0x1.156e93b4108d2p-706, 0.0, 0x1.6c046bb6ab558p-592, 0x1.34073195513bp-340,
     0x1.1ee3d97cd2d27p-620, 0x1.413e1530acbbp-775, 0x1.25d552833b36ap-688, 0.0, 0.0,
     0.0, 0x1.2423d29dc85abp-893, 0.0, 0.0, 0x1.a1d9efcee4c5cp-37, 0.0, 0.0, 0.0,
     0x1.b90bd3ea10a2bp-138, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c38670aaf8457p-183,
     0x1.c3e0c219224b6p-908, 0x1.12119953de243p-238, 0.0, 0.0, 0.0, 0.0,
     0x1.3019decf04d85p-143, 0x1.d59fdf526ccc7p-494, 0x1.6df0506384044p-1000, 0.0,
     0x1.4236cd680a9abp-732, 0x1.4469efc786606p-889, 0x1.d8203136f7e3bp-34,
     0x1.7d7ffc508a5bdp-296, 0x1.364a1b9e9323fp-629, 0.0, 0.0, 0.0,
     0x1.e05d404c60e33p-143, 0.0, 0x1.8d0d784717adp-59, 0.0, 0x1.e921dba640575p-303,
     0x1.4025752f2342ep-340, 0.0, 0.0, 0x1.3ce72c910d241p-382, 0.0, 0.0, 0.0,
     0x1.c95b498f45adfp-322, 0.0, 0x1.54c9412692b26p-552, 0x1.43f2058e4c67cp-583,
     0x1.01517265a8e6dp-304, 0x1.c5e7d5e11e572p-721, 0.0, 0.0, 0x1.0e1525e0fe20ap-462,
     0.0, 0.0, 0.0, 0.0, 0x1.1fa29085aed4dp-983, 0x1.ef365b4d09a28p-739,
     0x1.85f86b8e31e92p-748, 0x1.69e10bacfcdecp-280, 0.0, 0.0, 0.0,
     0x1.beff11f58024cp-989, 0x1.d0cd3686ad216p-346, 0x1.951d9de2d0f79p-388, 0.0, 0.0,
     0x1.bd638c305841bp-899, 0x1.fe075b73d6351p-978, 0x1.ededc9a5e8591p-188, 0.0,
     0x1.2169d4644d053p-898, 0x1.2ca87df349e34p-966, 0x1.bab94edcf0562p-520, 0.0, 0.0,
     0.0, 0x1.f898e25373dcep-917, 0x1.14886a463df9p-733, 0x1.0dabb12ddf671p-362, 0.0,
     0.0, 0.0, 0x1.c254c75208b56p-928, 0.0, 0.0, 0x1.061c7e8b32b5p-580, 0.0, 0.0,
     0x1.3a4f087a3d268p-963, 0.0, 0.0, 0x1.a83f010cfb92p-929, 0.0, 0.0, 0.0,
     0x1.f4033774a9dedp-499, 0.0, 0x1.3ab1f8520dadap-212, 0.0, 0x1.badcaa3a33422p-495,
     0.0, 0x1.6fec410c352f7p-890, 0x1.f312bf7d4af5p-13, 0.0, 0x1.934d40e8599a7p-59,
     0x1.50c30e0275f8ap-965, 0x1.e32259ba3905dp-314, 0x1.7ea18447e279dp-918,
     0x1.8adcde57daa76p-131, 0.0, 0.0, 0x1.9535852663a7ep-971, 0.0,
     0x1.da09274b6080dp-764, 0x1.88df0d10232ecp-559, 0x1.460e3fda53b93p-188,
     0x1.5b80a3bd9463dp-195, 0.0, 0.0, 0.0, 0x1.95e2d1818abe5p-819, 0.0,
     0x1.f6b64551d39ap-415, 0.0, 0x1.44b3ba9cdd08fp-30, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2f93142cc2bdcp-674, 0.0, 0.0, 0.0, 0x1.a54f7ab4b98e4p-619,
     0x1.867e921751e4ap-190, 0x1.ea0f263855177p-673, 0x1.1024bec82fe3bp-937,
     0x1.79d128c41541dp-859, 0x1.09e06dd5a6eeep-48, 0.0, 0x1.a6dc0b12423f6p-1008, 0.0,
     0x1.867432f66828ap-978, 0x1.728527df6047p-897, 0.0, 0.0, 0x1.dc38aa92712d4p-992,
     0.0, 0x1.0dcb517d7799ap-866, 0.0, 0.0, 0x1.4c43678488c02p-794,
     0x1.e5af2c4f39c33p-184, 0x1.f8c35c1b61715p-214, 0x1.77528ff3638d5p-779, 0.0, 0.0,
     0.0, 0x1.1b9ca053469a9p-991, 0.0, 0x1.d1cac7658537dp-6, 0x1.b0fb22ee26f27p-71,
     0x1.383c1ec0fd4bcp-506, 0.0, 0x1.4219224565c1ap-1002, 0.0, 0.0,
     0x1.d735c93e3bc27p-665, 0.0, 0x1.1e944d662a30dp-753, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.9dbe293434b94p-251, 0x1.748fdf8a189cap-912, 0.0, 0x1.f5b47daf19caap-690, 0.0,
     0x1.809f5aed5123bp-380, 0x1.388a494c826c3p-540, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.8459a6cc18a91p-48, 0.0, 0x1.fc62a9f5fc0d9p-697, 0.0,
     0x1.c804bbd67da6bp-1007, 0.0, 0x1.6429426aaa654p-803, 0.0, 0x1.b1eb1a5c525a2p-98,
     0x1.d388cf11d00aep-540, 0.0, 0.0, 0.0, 0x1.7fe5671fd0af6p-232, 0.0,
     0x1.6e4ae9b3a6692p-391, 0.0, 0x1.0191da385b79cp-932, 0.0, 0x1.13fd3f60682efp-850,
     0.0, 0x1.2efb7d34a9603p-694, 0x1.3d2cbe181df0ap-115, 0x1.4561dec3903e5p-897, 0.0,
     0x1.464b9183511f1p-912, 0x1.17f54f4fedc3fp-720, 0x1.6c454fd551b6ap-877,
     0x1.a3de0b3d14213p-561, 0x1.cefff8323b3a8p-175, 0.0, 0x1.e537a58d084d6p-880,
     0x1.562167efd2723p-261, 0.0, 0.0, 0.0, 0.0, 0x1.da043ccfefccp-160, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.0f8ab104b1e89p-323, 0x1.d1a571a7f362ap-430, 0x1.041e8a2bbb5p-919,
     0x1.56fe2f2f99f04p-253, 0.0, 0.0, 0.0, 0x1.cd1233a5ff7a1p-805, 0.0,
     0x1.4a423c4d09143p-784, 0x1.55bf0d43491c7p-99, 0.0, 0.0, 0x1.fce6893da3155p-598,
     0x1.33c930e295404p-1004, 0.0, 0.0, 0x1.f7a908313bc13p-307, 0.0, 0.0,
     0x1.7ecf506cbccbp-315, 0.0, 0.0, 0x1.93a26f969d37dp-503, 0x1.bb29a99486198p-4,
     0x1.8a691e4caab64p-707, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9da959a0846ecp-541, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9d2fc6c6d083fp-330, 0.0,
     0x1.7c35cb4dc3b6ep-731, 0.0, 0.0, 0x1.4564a1f107191p-468, 0.0,
     0x1.b1a61daa28226p-923, 0.0, 0x1.860c0bc041299p-241, 0.0, 0.0,
     0x1.802462bfe7495p-388, 0x1.b0b6b5359b24fp-201, 0x1.82da4569c6108p-63,
     0x1.3f474a8a0340bp-90, 0.0, 0x1.902504fc9b428p-818, 0.0, 0x1.a54124b620b57p-959,
     0x1.dfacb87342ad2p-644, 0.0, 0.0, 0x1.7c06457327819p-508, 0x1.9c0038ea8dac5p-676,
     0.0, 0x1.8c81699a6372p-249, 0x1.30ebcc5879367p-237, 0x1.8b6df28369509p-483, 0.0,
     0x1.f58f0f355e54p-853, 0.0, 0.0, 0x1.077ef554a09edp-74, 0.0,
     0x1.844bfcf395119p-476, 0.0, 0.0, 0x1.55e4b7b3b3b8p-133, 0.0,
     0x1.0aea84d99ec76p-1002, 0x1.89e09b01e4f8p-193, 0x1.ed8ca7fd9fb47p-110,
     0x1.9bf419db6d4fbp-259, 0x1.4eecba705eb83p-291, 0.0, 0.0, 0x1.d2caffeabf188p-539,
     0.0, 0x1.13c44391eac34p-868, 0.0, 0.0, 0.0, 0.0, 0x1.b006c8a4bed96p-506,
     0x1.3369d74f454f5p-181, 0.0, 0.0, 0.0, 0x1.46e94e160e9f7p-157, 0.0,
     0x1.db3eafe708d91p-141, 0.0, 0x1.e6243b6ace786p-221, 0x1.167f9ae184617p-746, 0.0,
     0.0, 0x1.e7c3347c795e9p-318, 0.0, 0x1.fe272e15a3346p-7, 0.0,
     0x1.78585591b3c6bp-251, 0x1.484c5a763505fp-889, 0.0, 0.0, 0x1.e053807d809f2p-105,
     0.0, 0x1.b641f8f936ae9p-525, 0.0, 0x1.d52083784164bp-651, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.928f3b3693324p-238, 0.0, 0.0, 0.0, 0x1.e23c4e053ad28p-750,
     0x1.04c96c164d2e9p-831, 0.0, 0x1.65e11d0fe2965p-180, 0x1.a2f45ea376c6fp-783, 0.0,
     0x1.77c3da49f4734p-334, 0x1.06149adfdac6ap-67, 0.0, 0.0, 0x1.fff30147db8d7p-1011,
     0x1.68a630e59bf54p-168, 0x1.a00822972ce01p-534, 0.0, 0.0, 0x1.9bf0b19521dd7p-689,
     0.0, 0x1.d595aeb44916dp-815, 0.0, 0.0, 0x1.be4b56e9e5f9cp-859, 0.0, 0.0,
     0x1.0a377aa9edf5dp-601, 0.0, 0.0, 0.0, 0x1.e7e056a4e2536p-427,
     0x1.ac498a59cf452p-899, 0.0, 0.0, 0x1.985522b0f6275p-548, 0x1.b8205b336c8bcp-872,
     0x1.23804cdda76d1p-427, 0.0, 0.0, 0x1.2d9458b604014p-945, 0x1.6e505cd8ea747p-351,
     0x1.e81f3cf59p-147, 0x1.98bee432e04a5p-60, 0x1.11d5bea39c99ap-24,
     0x1.367f3b96de9bcp-753, 0x1.e6f79888cb3c3p-746, 0.0, 0x1.53904e5637216p-626, 0.0,
     0.0, 0x1.bc98c90475ac3p-166, 0.0, 0.0, 0.0, 0x1.639834e60a47fp-672,
     0x1.6d31adcabb723p-833, 0.0, 0.0, 0.0, 0x1.df30873b28c6ap-346, 0.0, 0.0, 0.0,
     0x1.8433b54a0eee3p-44, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0f77e1ca82f17p-448, 0.0,
     0x1.dbe3ae9d2077fp-15, 0.0, 0x1.131360ddcfbadp-811, 0x1.cbdb976ddf508p-327, 0.0,
     0x1.5a525bd0e84a9p-262, 0.0, 0.0, 0.0, 0.0, 0x1.2f394f200d65cp-777, 0.0,
     0x1.5fe7ed087ded4p-1020, 0x1.7909daf7c4ad7p-804, 0x1.1e4d0764105dep-82,
     0x1.7d01b82073b55p-556, 0x1.357826dc20447p-519, 0x1.2028e7d8944d1p-966, 0.0,
     0x1.1998a6dfb6404p-357, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3f4a2d618460fp-613, 0.0, 0x1.a9440f888b55ap-969, 0.0, 0.0,
     0x1.c54dda2eb0c08p-160, 0.0, 0x1.c1fea063315edp-6, 0x1.2f152389cad7ap-958,
     0x1.0f451f8e34cc5p-273, 0.0, 0x1.357bea68c155p-407, 0.0, 0.0,
     0x1.4b682e8f466c6p-663, 0x1.bff3d4d420cedp-320, 0.0, 0.0, 0x1.8a8611c9ce212p-369,
     0.0, 0.0, 0.0, 0.0, 0x1.5bed8d163750bp-775, 0.0, 0.0, 0x1.a708d01d4804bp-690,
     0x1.eaa82d046dcb6p-311, 0.0, 0.0, 0x1.d81c61ff87ba1p-176, 0x1.0f0529216ff43p-997,
     0x1.b6e78337d6421p-881, 0.0, 0x1.9e62ebcc3b602p-820, 0x1.9ce3549d10fd3p-754,
     0x1.d82196692e38fp-496, 0x1.6f845ed7df378p-312, 0x1.912d3e8a9e0fp-776,
     0x1.0ed67a02da476p-1011, 0x1.e5b81687dcc29p-867, 0.0, 0.0, 0.0,
     0x1.067a14043d4f3p-572, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d3a030c14bd97p-139, 0.0, 0x1.dcf69d7fdeb29p-655, 0x1.b441cf54fc734p-821, 0.0,
     0x1.1de353675ed4cp-891, 0.0, 0x1.622c65b5b84fap-13, 0x1.d9932246dd2cp-266,
     0x1.9d13665997765p-281, 0x1.a168dc2df4676p-895, 0x1.caa9e9bfa1349p-296, 0.0,
     0x1.7266474ea8a83p-921, 0.0, 0x1.97ab8c184792fp-583, 0.0, 0x1.bbca25d7cd25bp-607,
     0x1.6d83331a4916bp-813, 0x1.00d760972ca01p-770, 0.0, 0x1.7c211d7ad8dc2p-375,
     0x1.260c7b8866abep-451, 0.0, 0.0, 0x1.10fc3eacc5cb1p-150, 0x1.6af36e42795c7p-823,
     0x1.79d9fa1cb60efp-194, 0.0, 0x1.d3406313cb0b9p-791, 0x1.386aa2f082627p-817, 0.0,
     0.0, 0x1.870a50097c243p-240, 0.0, 0x1.a09f213348636p-252, 0x1.7b7aced561b35p-240,
     0x1.44226101d3764p-66, 0.0, 0x1.2dfab05f8862p-37, 0x1.5c14d4eea355ap-925,
     0x1.dde3fae76fc5fp-791, 0.0, 0.0, 0.0, 0x1.d059bc63a2121p-599, 0.0, 0.0, 0.0,
     0x1.d9dbeda0f582fp-976, 0x1.d2f73bc9f6d2ep-822, 0.0, 0x1.275cf455769bbp-628,
     0x1.445b7b120c717p-43, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.edfca96c26d63p-119,
     0x1.c74a63b8b43ffp-571, 0x1.753b21f40c505p-644, 0x1.bdfe3d18be152p-619, 0.0,
     0x1.666dc590e47c3p-418, 0x1.22cae76f07e2p-666, 0.0, 0.0, 0.0,
     0x1.ca57532097ddfp-515, 0.0, 0.0, 0x1.c9d6ebba10c01p-705, 0.0, 0.0, 0.0, 0.0,
     0x1.8a079b1bb3395p-912, 0.0, 0.0, 0.0, 0.0, 0x1.5319295ac5ecfp-649,
     0x1.5b220cbd770c1p-109, 0.0, 0x1.2fa5cfd5caaf2p-262, 0x1.0016e416263e2p-25,
     0x1.1bf5b573de302p-251, 0.0, 0x1.948d24044f1f8p-298, 0.0, 0.0, 0.0,
     0x1.de8fc14f14f65p-172, 0x1.cee9454308478p-290, 0.0, 0.0, 0x1.190fcd008db2fp-185,
     0.0, 0.0, 0x1.926e6a1a82002p-520, 0.0, 0x1.cf4c53ad303bap-327,
     0x1.5943df314e791p-950, 0x1.8bd484705e71dp-590, 0.0, 0x1.000495a43aca6p-737,
     0x1.fff1100545608p-929, 0.0, 0x1.634cc7c90c99p-890, 0x1.1fbbe226deb09p-855, 0.0,
     0x1.b2b409ed47eafp-367, 0x1.8201b3bcbceedp-333, 0.0, 0x1.1804c975a963bp-396, 0.0,
     0.0, 0.0, 0x1.9609ac4ef7d44p-581, 0.0, 0x1.5308a3f2e087p-427, 0.0,
     0x1.145ffbf788606p-286, 0x1.493178b37bfc9p-136, 0x1.a984eb9a45c1p-587, 0.0, 0.0,
     0.0, 0x1.d906b1a1912f9p-753, 0x1.95661663f6dbfp-97, 0.0, 0x1.c08f191c35dcbp-536,
     0.0, 0.0, 0x1.5419962f0773bp-402, 0x1.652b7e61ba61bp-397, 0.0, 0.0,
     0x1.613bddc99675fp-793, 0.0, 0.0, 0x1.00a75f38a829cp-598, 0.0, 0.0,
     0x1.8656e108025d5p-446, 0x1.f9dab4cc5b68dp-703, 0.0, 0.0, 0.0,
     0x1.6b10e82a712a8p-127, 0.0, 0x1.36e4e747221a3p-703, 0x1.5d90293b7f173p-658,
     0x1.a35ab0ea8e119p-426, 0x1.531ae210676ebp-700, 0x1.2be4907642448p-385, 0.0, 0.0,
     0x1.9e396c534df18p-648, 0.0, 0x1.623cb4879fe26p-956, 0x1.3195a353229adp-439,
     0x1.9fdc688165459p-590, 0x1.1dbc8ccc41b12p-332, 0.0, 0.0, 0x1.c21cdf607f279p-186,
     0.0, 0.0, 0x1.face4bffb3b89p-203, 0x1.5a78e293f62d9p-457, 0.0,
     0x1.34fec8f96f2ffp-726, 0x1.21d3885ed55ep-972, 0x1.2c6ed39c875cep-850, 0.0,
     0x1.8900f26ec7f72p-133, 0x1.84c18660aba7cp-210, 0x1.d7f93f6ec9aefp-586, 0.0,
     0x1.95d22fd237ee6p-670, 0.0, 0.0, 0x1.82fcb0036c1c5p-393, 0x1.b877fca450731p-186,
     0.0, 0x1.c533eae8fef1fp-870, 0.0, 0x1.63f0bf4b717d3p-855, 0x1.51e3e4f79d406p-133,
     0.0, 0x1.3024e5aa02d7p-187, 0.0, 0x1.bb46349f1bab1p-298, 0x1.00d9cd165c2fap-431,
     0.0, 0x1.23b3bbbcd2663p-727, 0x1.76e198980ae35p-220, 0x1.1657cb152265fp-917,
     0x1.7a0f3be59a798p-373, 0x1.ca24d65cf076dp-926, 0x1.50b7aeb70fap-764,
     0x1.917f0afba712bp-617, 0.0, 0x1.d7b2174b1b409p-787, 0.0, 0x1.d4fe71e219507p-202,
     0.0, 0x1.5046e4cd0f5e5p-174, 0x1.965fc6c4833d6p-369, 0x1.74b5057a224eep-963,
     0x1.ce341860b3559p-901, 0x1.d32a4c961df7bp-957, 0x1.4343d91ab9c75p-73,
     0x1.7f91f142c1b59p-50, 0.0, 0.0, 0.0, 0.0, 0x1.791f57a366934p-784, 0.0, 0.0, 0.0,
     0.0, 0x1.1089b192b39b3p-471, 0x1.5e8044bc55224p-664, 0.0, 0.0,
     0x1.5d630e197767ap-149, 0.0, 0x1.69ce8c587bb6dp-591, 0.0, 0.0, 0.0, 0.0,
     0x1.ae724dc664a32p-940, 0x1.c7b63794df114p-1022, 0x1.7ee30f9dd8e23p-693, 0.0,
     0.0, 0x1.660cd5ea7f075p-697, 0.0, 0.0, 0x1.8ac28d100d956p-897,
     0x1.4cf8cff2ff7c7p-784, 0.0, 0.0, 0.0, 0.0, 0x1.7e506cbaa0d95p-544, 0.0, 0.0,
     0x1.e3403ca7cf43dp-875, 0.0, 0.0, 0x1.8b9e1bdfe70d7p-192, 0x1.c0566929253f8p-703,
     0x1.9e7ebb4e65515p-990, 0x1.981acc28d2ea5p-419, 0x1.6a2ede2fb4dbbp-995,
     0x1.951673a531a7ap-409, 0x1.ddfa32f276c7cp-759, 0.0, 0.0, 0.0,
     0x1.f63191c5082c4p-613, 0.0, 0.0, 0x1.178c5daf6eb6cp-280, 0x1.711a4944eb95dp-700,
     0x1.84f60c71e043cp-317, 0.0, 0x1.b89f8d7fae03cp-728, 0x1.c1ce930cb94afp-1000,
     0.0, 0x1.446bf26084c09p-800, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.58b87ec37cd1bp-180,
     0x1.c4e26da333df8p-513, 0x1.94132f8ca8c29p-147, 0x1.296625798341ep-473,
     0x1.7521fd65c07e8p-579, 0.0, 0.0, 0.0, 0.0, 0x1.2a6b22f7f2bcap-58,
     0x1.d37df447b8d64p-181, 0x1.7e5d06cb2442ep-156, 0x1.0917878a35c17p-827,
     0x1.a6cafd0a1f0fap-26, 0.0, 0.0, 0.0, 0.0, 0x1.8c469b655cf11p-162,
     0x1.61ad78736208fp-245, 0.0, 0x1.ce7e4e771c32cp-599, 0x1.7255c8b85b88dp-588, 0.0,
     0.0, 0.0, 0x1.33d938da7cc3fp-638, 0x1.faa4fd07edb1ap-710, 0.0, 0.0, 0.0,
     0x1.b729c8fdf7228p-997, 0.0, 0.0, 0x1.b6050b8dcb3d6p-63, 0x1.dac6cddd5e9b6p-831,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.59b3b59745521p-336, 0x1.095d3ca688c53p-51,
     0x1.176ad9206572cp-25, 0.0, 0.0, 0x1.dcf883618ddc1p-136, 0.0,
     0x1.c8cfefc424c7ep-993, 0x1.0cf85f968fecfp-976, 0x1.30462ab387a52p-184,
     0x1.7beb671d9faaap-913, 0.0, 0x1.1678636d96f52p-457, 0x1.3f4d3edd92a63p-473,
     0x1.c2bffcb5b6ff2p-271, 0x1.ec29f500b7dc6p-493, 0.0, 0.0, 0.0,
     0x1.6b44ffd8d3c57p-645, 0.0, 0.0, 0.0, 0.0, 0x1.097e2fbd9e226p-612,
     0x1.b3568ddf650ecp-694, 0x1.9503d3c7e8c25p-870, 0.0, 0.0, 0.0,
     0x1.01f0516a9176dp-634, 0.0, 0.0, 0x1.986c1b3c3b556p-962, 0x1.f17a4c2bf58bdp-136,
     0x1.611c3fc99856p-103, 0.0, 0x1.7da48b36f298ap-50, 0x1.432401677b692p-46, 0.0,
     0x1.110b7f023d77ap-994, 0x1.4f3075c4321d9p-799, 0.0, 0.0, 0x1.beeb2f273990fp-90,
     0x1.bae84a81189b1p-584, 0.0, 0.0, 0x1.bd88b16d41f19p-365, 0x1.5718467ead3ebp-903,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.a1520a717ba69p-453, 0.0, 0.0,
     0x1.e390eeab12954p-512, 0x1.c8a4afada00a4p-810, 0.0, 0x1.5c19881b8eecep-363,
     0x1.4ce726e712f7fp-865, 0.0, 0x1.7b530c9125c44p-933, 0x1.c7e3da257d89p-815,
     0x1.0e8118e8a5d16p-495, 0x1.583b8f88de33fp-84, 0x1.90a4d9aa61e79p-652, 0.0, 0.0,
     0x1.2707042fa2549p-739, 0x1.3d0f64430203cp-96, 0x1.d3872171677c6p-269,
     0x1.a0d6198cd2e45p-388, 0x1.22a738fe339bap-535, 0x1.0e6b837ee18b6p-785,
     0x1.b8e54f3e5d54fp-634, 0.0, 0.0, 0x1.c103dc0cc5fd6p-64, 0x1.9c42b156d1a57p-26,
     0.0, 0x1.1e468441a2987p-931, 0.0, 0x1.1959a560adbe2p-324, 0x1.8a22c5acc0cacp-345,
     0.0, 0x1.566507953e49ap-64, 0.0, 0x1.a34d5a29deb7fp-10, 0.0,
     0x1.ab9a08f7bbf07p-838, 0x1.7ac128338c084p-802, 0x1.acb4a47fb7c88p-293,
     0x1.63708da7319d7p-535, 0.0, 0x1.0d11115f917f4p-526, 0.0, 0.0, 0.0,
     0x1.5d51d1edc1dbep-341, 0.0, 0x1.1511d19dcc305p-389, 0.0, 0.0,
     0x1.fc0f0621a317bp-969, 0.0, 0x1.20f697fce66adp-846, 0.0, 0.0, 0.0, 0.0,
     0x1.189e360a90d4ap-140, 0.0, 0.0, 0.0, 0x1.7a1839b1745a5p-966, 0.0,
     0x1.2a2da7948ec5fp-239, 0x1.0d55867476db9p-33, 0.0, 0x1.5c167133ff16dp-573, 0.0,
     0x1.149133b7c49fp-14, 0.0, 0x1.3f7ceb3742674p-33, 0x1.9510de8c8fe85p-500, 0.0,
     0x1.eeed27f4d588cp-427, 0x1.339446884c8cap-550, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.e38a314ab17f5p-750, 0x1.742c0307d0692p-635, 0.0, 0.0,
     0x1.e3d8d56dab107p-430, 0x1.4a49b07224686p-204, 0.0, 0.0
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
            tmp1 = Sleef_sind2_u35kvx(tmp0);
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
    printf("Sleef_sind2_u35kvx %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10020000), timer, cpe_measure);
    printf("Sleef_sind2_u35kvx bench acc [%a, %a]\n", global_bench_acc[0], global_bench_acc[1]);
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
