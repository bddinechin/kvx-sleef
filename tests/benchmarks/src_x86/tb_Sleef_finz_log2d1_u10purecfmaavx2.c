/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_log2d1_u10purecfma.c --function \
 *     Sleef_finz_log2d1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1173aa01a28c9p-383, 0.0, 0.0,
     0x1.94f4643926846p-187, 0x1.a7e787d5383b8p-634, 0x1.2425800a75fbep-920, 0.0, 0.0,
     0.0, 0x1.bb11f9e219013p-52, 0x1.ac8644113d9f6p-24, 0x1.dcd82f616466p-302,
     0x1.f82ffeb467249p-920, 0x1.a41ac39c2baf8p-976, 0.0, 0.0, 0x1.d9a29d297c032p-880,
     0x1.b2a67c6c85111p-712, 0x1.4a0d101dea0b5p-389, 0.0, 0x1.c1617ac9accd9p-84, 0.0,
     0x1.7a33e9be47ca6p-6, 0.0, 0.0, 0x1.e7bd4d1104cf8p-12, 0x1.5e5c186807ea3p-47,
     0.0, 0.0, 0x1.9172259c037f4p-841, 0x1.3872da7587647p-355, 0.0, 0.0, 0.0,
     0x1.8fdd3f3537884p-417, 0x1.0412e71f13a9ap-863, 0.0, 0.0, 0.0,
     0x1.46f5da3fd1ea8p-926, 0x1.e449b53f5f996p-691, 0.0, 0x1.8f77e425feecp-555, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.950be9e6d8f11p-980, 0x1.e9efa68958b45p-326,
     0x1.c05721b2feeebp-562, 0.0, 0.0, 0x1.647c86a0bec7cp-377, 0x1.fb7d4d17842dfp-416,
     0x1.a9ab5ecccd94fp-631, 0x1.8c18bac8db3bp-961, 0x1.20915b7e914a8p-432,
     0x1.9530dae7eb36cp-149, 0x1.3c8f03c9fd101p-184, 0x1.b008864ed3a3p-248,
     0x1.81b1e9f30fbd3p-350, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1c8b87af235d6p-982, 0.0,
     0x1.126ac9ea69ed5p-230, 0.0, 0x1.cd6e401bc83f1p-571, 0x1.52636b580232fp-644, 0.0,
     0.0, 0x1.3da822f3fba43p-532, 0x1.92c1d91cd980ep-89, 0.0, 0x1.d1095f21f2d6ap-940,
     0x1.6d1bbe2f22a9ap-161, 0x1.48e525f442b94p-951, 0.0, 0.0, 0x1.dbdedd26b7ccep-475,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c8ec214d07969p-815, 0.0, 0x1.4d08c72579a2fp-475,
     0x1.d12dedf0748fcp-889, 0.0, 0x1.d7c6344a53877p-440, 0x1.df2428b62553fp-36, 0.0,
     0.0, 0.0, 0x1.e1ba3cbf85017p-550, 0.0, 0.0, 0x1.328946c0a3c1fp-744,
     0x1.f93d6be17cfafp-195, 0x1.bd773900d3ed7p-921, 0x1.0d7c354034036p-925, 0.0, 0.0,
     0.0, 0x1.002f7324bd99dp-604, 0x1.ec61a2c1945d6p-947, 0.0, 0.0,
     0x1.2b9527b12487dp-211, 0.0, 0.0, 0.0, 0x1.28bd70f4e74fcp-383, 0.0, 0.0, 0.0,
     0x1.46cbdb810368dp-656, 0.0, 0.0, 0.0, 0x1.02a3119ed5d8p-215, 0.0, 0.0, 0.0, 0.0,
     0x1.dc14035da9f34p-390, 0x1.62b0a71e2b769p-638, 0x1.5f01263d100c4p-745,
     0x1.01cb8fdeafaddp-535, 0.0, 0x1.73280a6626c8ap-447, 0x1.6e8c4a89aac0dp-394,
     0x1.dd97180033316p-46, 0x1.702a98cc0c80fp-385, 0x1.7dfe513601844p-697, 0.0,
     0x1.55d8b8966c9fbp-983, 0x1.96a5ba3e36676p-453, 0x1.d75edfe8adcdfp-290,
     0x1.8aba4e4767f1dp-553, 0.0, 0x1.51a300090342bp-89, 0x1.1139aebd8b961p-169, 0.0,
     0.0, 0x1.b2606dc1721f1p-989, 0.0, 0x1.c627f7dcf5a3fp-39, 0x1.59fc4c998d6a3p-804,
     0.0, 0x1.9c4a061ff9bp-14, 0.0, 0x1.2ca42e5e362e3p-832, 0.0, 0.0,
     0x1.932412da03174p-758, 0.0, 0.0, 0x1.a95803aa41b0ap-591, 0.0,
     0x1.0a9ef53a6de5bp-987, 0.0, 0.0, 0.0, 0x1.73b5e04eada09p-765, 0.0, 0.0,
     0x1.c15b0e4e88383p-648, 0x1.0672ae8bece7cp-730, 0x1.7c5382b6f46e3p-197,
     0x1.2d40781050d03p-459, 0.0, 0.0, 0x1.0697700f852b7p-846, 0x1.147e22d425f2cp-609,
     0x1.637a834866d33p-301, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fa265cf5234c2p-244, 0.0,
     0x1.6a02bba3397c2p-476, 0.0, 0.0, 0.0, 0.0, 0x1.cc4e417f180bdp-599, 0.0, 0.0,
     0x1.9a01f3545895dp-403, 0x1.bca20431f5a96p-901, 0x1.4e39c69b5ff67p-597,
     0x1.6c598763e535ep-667, 0.0, 0.0, 0x1.d2278f0f48786p-896, 0x1.5ee47046bbc82p-581,
     0.0, 0x1.67b8e7b4179adp-509, 0x1.ea43e5deb242ep-51, 0x1.0681225814797p-146, 0.0,
     0x1.6dcf93de9ce47p-625, 0x1.685e293ee6a99p-590, 0x1.df7c71fe48d02p-889, 0.0, 0.0,
     0.0, 0x1.935ebb1cc8535p-965, 0x1.a479be0659147p-151, 0x1.d37845b4866bep-906, 0.0,
     0.0, 0x1.c8408f3c92bcdp-446, 0x1.d25823a72e1c9p-190, 0x1.8a72cc332fd3dp-448, 0.0,
     0.0, 0.0, 0.0, 0x1.00a5050ba5204p-938, 0x1.6d49c5fd4eb09p-210, 0.0,
     0x1.4b028b6f836b1p-922, 0x1.327b68efad018p-739, 0.0, 0.0,
     0x1.15ad8f88dad31p-1009, 0x1.a195ae02c6f73p-642, 0.0, 0x1.818f32e8d182dp-919,
     0.0, 0x1.de26261251038p-52, 0x1.f255ab605642ap-499, 0.0, 0.0,
     0x1.54dd1e408737ap-807, 0x1.ffc0fb1096bd6p-214, 0.0, 0.0, 0x1.b67f5190403f2p-365,
     0.0, 0.0, 0.0, 0x1.e4ad3d1b7b3a8p-648, 0x1.1a7679de7fd14p-996, 0.0,
     0x1.c2127aa19e0d2p-996, 0x1.5ff7ccb26384ap-658, 0.0, 0.0, 0x1.e515649a114e6p-244,
     0.0, 0x1.342dad8723fc9p-498, 0x1.2b83b31525303p-994, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.297a965725ea5p-867, 0x1.6eefb53d5fa41p-618, 0x1.63e6c15dd05e6p-313,
     0x1.1c2884b8760b3p-167, 0.0, 0x1.80db31ab93821p-1008, 0.0, 0.0,
     0x1.b21b6a5c5eeffp-411, 0x1.c2dd444ea3843p-420, 0.0, 0.0, 0x1.ab2e8c23fb2p-2,
     0x1.ccd76e7401111p-520, 0.0, 0.0, 0x1.8796e07907aa8p-805, 0x1.e925aa3b83121p-78,
     0.0, 0x1.09a44b73b24a8p-486, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d32543fd9a742p-37,
     0x1.4b17c5bb3dda4p-136, 0.0, 0x1.554290ccb6a8bp-514, 0.0, 0x1.7f20de26dbc1dp-886,
     0.0, 0x1.774c5b9c52098p-421, 0.0, 0.0, 0.0, 0x1.b3ac5d710b188p-928,
     0x1.a810d2cf013b6p-168, 0.0, 0x1.53aad8fe52fd1p-721, 0.0, 0x1.8b2f12af958e4p-975,
     0.0, 0.0, 0x1.a67de3eb9c61p-170, 0x1.5c219d9a845afp-425, 0x1.62bc9292dc7ep-625,
     0.0, 0x1.2f5cb1ddced7ap-900, 0.0, 0x1.c00ed5ef1a436p-230, 0.0, 0.0,
     0x1.867755603999bp-608, 0x1.ddc570ad75715p-905, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.7433b473840efp-604, 0x1.7e8289a82ff84p-454, 0.0, 0x1.86e70662cf6bdp-86, 0.0,
     0x1.d474f441e60f2p-898, 0x1.870b6f7b0561ep-71, 0.0, 0.0, 0.0, 0.0,
     0x1.8abf0fa009941p-587, 0x1.3acc9c689a4dep-963, 0.0, 0x1.4cff711aa05aep-862, 0.0,
     0.0, 0.0, 0.0, 0x1.8af143aba4d15p-177, 0x1.0d0c9056e6c7cp-416,
     0x1.4cb205597acd7p-965, 0.0, 0x1.41fc2f1586b71p-694, 0.0, 0.0, 0.0,
     0x1.2051eee87bc4dp-743, 0.0, 0.0, 0x1.2120f42bb0c76p-67, 0.0,
     0x1.dee2dc564b68ep-512, 0.0, 0.0, 0x1.999632dd20d19p-267, 0x1.cb7105b7fc943p-249,
     0x1.d2cae029fc88p-61, 0.0, 0x1.911d26878127ap-467, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d1af248169915p-571, 0.0, 0x1.73584f8df5d94p-724, 0.0, 0x1.052cdb4cf3b2cp-25,
     0x1.fe77a6d6d12a2p-155, 0x1.9d49f9128ed26p-509, 0x1.790c033345e31p-270,
     0x1.449d6bbbea0b5p-843, 0.0, 0.0, 0.0, 0x1.b6a1cd4cd37a4p-746,
     0x1.3c971797db279p-45, 0.0, 0.0, 0x1.cfbef01a5dd0dp-811, 0x1.77761dd05dffp-3,
     0x1.7e041b08922b2p-983, 0x1.c6e568d26a7dbp-738, 0.0, 0.0, 0.0, 0.0,
     0x1.101fc613fea0ap-629, 0x1.b7eb4a0da0503p-173, 0x1.3e26b5451702cp-454,
     0x1.8b95dd227465dp-343, 0.0, 0.0, 0x1.86d8bb8fee88ap-706, 0.0,
     0x1.bc59010a8cfa8p-281, 0x1.cf12b5c749231p-53, 0x1.99ed216d08c1fp-903, 0.0,
     0x1.eee294924465ep-281, 0x1.37af69174f99bp-306, 0x1.79b36e3e89b99p-1009,
     0x1.880f331938f23p-638, 0.0, 0.0, 0.0, 0x1.dccb36be73478p-842,
     0x1.59d05916880dp-322, 0.0, 0x1.8d4154c898cd6p-615, 0x1.48746906f7b85p-646, 0.0,
     0x1.2c7021144e312p-116, 0.0, 0x1.1d296f5495596p-993, 0.0, 0.0,
     0x1.d0e0af6032251p-979, 0.0, 0x1.fa345fc88bf7cp-38, 0.0, 0x1.6eedc16c9dbb7p-450,
     0.0, 0x1.28896e3ef3c7ep-5, 0x1.9f48202ef5d01p-562, 0x1.24414bdc5eee8p-535,
     0x1.3027295146305p-905, 0x1.5291ca415eac5p-63, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.208fe1ef7a6c3p-578, 0.0, 0.0, 0x1.8bc830dfe4e3p-470, 0x1.91fdb21bfbfbdp-164,
     0.0, 0x1.41a02e9efc623p-678, 0.0, 0.0, 0.0, 0x1.2cf8eaf344569p-253,
     0x1.cedfda258d429p-660, 0x1.6bcd647b6069p-687, 0x1.cc4c88d019ed8p-362, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.da7070e4f7feep-147, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e8bad06574448p-310, 0.0, 0x1.e6c5676acb3ccp-168, 0.0, 0.0,
     0x1.13f45481bf37ap-307, 0x1.2dec05daef179p-45, 0.0, 0.0, 0x1.2e42e02d0bae8p-708,
     0x1.a30f0d9c6b131p-839, 0x1.f2d2f706fa7a5p-289, 0.0, 0x1.07016a7271e6cp-813,
     0x1.303535435048ep-728, 0x1.11226c14c417p-42, 0x1.45449a38f3c63p-106,
     0x1.f729b4830bbcdp-16, 0x1.a3a1c45e84c2dp-733, 0x1.9a475b56d1c2ap-481,
     0x1.36179a4da479dp-872, 0x1.d906d7df69557p-544, 0.0, 0x1.2bb118e965e36p-8,
     0x1.2eb6f6a948adap-679, 0x1.43eb8fff5236p-898, 0x1.5a14716db4419p-264, 0.0,
     0x1.7f25dafa3bf0cp-935, 0x1.e8d4b543dc4d4p-102, 0.0, 0x1.8e392328149a7p-229,
     0x1.dbcd31d9af30ep-2, 0x1.0a1fc51dcca1p-498, 0.0, 0x1.cec20d851e969p-300, 0.0,
     0x1.e444a8ad29189p-562, 0.0, 0x1.331177fbf8d28p-319, 0x1.1132d525ccc3cp-132,
     0x1.c9222749605afp-840, 0.0, 0x1.8a42117b11897p-69, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.216834a053d51p-399, 0.0, 0.0, 0x1.d9058cbb39a47p-324, 0.0,
     0x1.ad3b6be404d7dp-501, 0.0, 0.0, 0.0, 0.0, 0x1.9006f70c541b7p-137, 0.0, 0.0,
     0.0, 0x1.e959a1996d5dp-805, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ce465f6e3dbep-711,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.1abe824c4c48cp-783, 0x1.1b3c5906e6569p-556, 0.0,
     0x1.af657dd519d7bp-292, 0.0, 0x1.7eb85b6be54fdp-601, 0.0, 0.0, 0.0, 0.0,
     0x1.c6e04ffaf5675p-440, 0.0, 0.0, 0x1.b4a6343c9486bp-85, 0.0,
     0x1.ce00c03f2493dp-594, 0x1.f418de63414dap-347, 0.0, 0x1.0e455125fb889p-419,
     0x1.40145a5598958p-16, 0x1.d331252f487f5p-48, 0.0, 0x1.f63efd88c6f18p-34, 0.0,
     0.0, 0x1.759387c6525cbp-160, 0.0, 0.0, 0.0, 0x1.38d5978f58a0dp-37,
     0x1.a06c10538575p-558, 0.0, 0.0, 0x1.6750f8dd1aa34p-196, 0.0, 0.0, 0.0, 0.0,
     0x1.918a74168aa22p-96, 0.0, 0x1.07421dccd0852p-172, 0x1.eb390fd667f8fp-841,
     0x1.cfdd94933ec4ep-224, 0.0, 0.0, 0.0, 0x1.58e1d6bb6690ap-905,
     0x1.06524d9ae33fap-846, 0.0, 0x1.73c992ee13f85p-686, 0.0, 0.0, 0.0,
     0x1.a54a67371329p-545, 0x1.483b9ac0ede4p-423, 0x1.21bf302024a53p-133,
     0x1.a7b371433d5bep-266, 0.0, 0x1.f684f9759fdaep-561, 0.0, 0.0, 0.0,
     0x1.52aa1ae79cb4ep-737, 0x1.d3c2a4a0e7abcp-279, 0.0, 0x1.663143ce61a72p-101,
     0x1.65d1713013336p-494, 0x1.c72adbb93ed2dp-179, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.2e0447af2afbep-1004, 0.0, 0x1.47ab83aa51a2p-479, 0.0, 0.0,
     0x1.a3330bf020c04p-269, 0.0, 0x1.90b1412d6d5acp-207, 0.0, 0.0,
     0x1.0ba0b139ee18p-240, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d36bbf6ef91c4p-63,
     0x1.c6a812dd5b8bdp-727, 0.0, 0.0, 0x1.23a314e460b4ap-314, 0x1.ff73313601056p-767,
     0x1.8a341bf680e07p-421, 0.0, 0x1.e5dae9e7a2ca4p-164, 0x1.10e87c4a19b6p-934,
     0x1.17aae8664e0ep-258, 0.0, 0x1.3b0ec9c39f407p-744, 0.0, 0x1.47fe5edcee15fp-191,
     0x1.1c5eeec0f5a4p-892, 0.0, 0.0, 0.0, 0.0, 0x1.faea1e40df0adp-1016,
     0x1.0d04637c931d7p-754, 0x1.8b44737291687p-849, 0.0, 0x1.d1f90c259b683p-38, 0.0,
     0.0, 0.0, 0x1.1f94d94820021p-898, 0.0, 0x1.a8dbd945afb2cp-216, 0.0, 0.0, 0.0,
     0.0, 0x1.803d0f973e19dp-842, 0x1.0dbc6c786bc26p-895, 0.0, 0.0, 0.0, 0.0,
     0x1.78eab1f3c4e0fp-227, 0.0, 0.0, 0.0, 0x1.a2fc3b2e02215p-62,
     0x1.1c53e31232ce5p-210, 0.0, 0x1.39f9167ce2903p-895, 0.0, 0.0, 0.0, 0.0,
     0x1.3ecced9fbb78dp-555, 0.0, 0x1.4fb9926a502d6p-131, 0.0, 0x1.65fc246605e13p-153,
     0x1.45cc4fcfeaeddp-520, 0x1.c20c73b8bc536p-246, 0.0, 0.0, 0.0,
     0x1.39269be5f1e3fp-598, 0.0, 0.0, 0.0, 0x1.fca71172ed37cp-395,
     0x1.1d1301c457081p-119, 0.0, 0x1.c0d494672a18ap-977, 0x1.11811317b7decp-912, 0.0,
     0x1.abc4282242dd4p-556, 0.0, 0.0, 0x1.72818861f7826p-223, 0x1.51d2ba59f64b3p-407,
     0.0, 0.0, 0x1.dcbc93af7a06ap-425, 0x1.049cb45bdc157p-126, 0x1.0b605bac53324p-861,
     0x1.70e4d93265529p-728, 0.0, 0.0, 0.0, 0x1.98985dc80f5ap-766,
     0x1.2ad4a932a8d8fp-420, 0.0, 0x1.c63d13fd3f519p-296, 0.0, 0x1.667c901fa99fcp-141,
     0x1.fdc33e1bbc32fp-858, 0x1.9f4549fddd905p-34, 0x1.1d5de78a6bc65p-634, 0.0, 0.0,
     0.0, 0x1.a9aaa1882bd0cp-194, 0x1.1a092e7ae366ap-354, 0x1.53da261db75cdp-727, 0.0,
     0.0, 0x1.aefff7dd7f40cp-266, 0x1.089bc9d99bc52p-647, 0x1.a20ee79835aep-116,
     0x1.0393d40a29525p-436, 0.0, 0.0, 0.0, 0.0, 0x1.107f4a090258p-476, 0.0,
     0x1.abf1cbf6fca1ap-729, 0x1.25ee54676713cp-64, 0.0, 0x1.e01d8466059eep-83, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.8b3ba92231762p-516, 0x1.2b27b6cc0fe5p-577, 0.0,
     0.0, 0x1.2024972753193p-822, 0x1.096631a7c8481p-656, 0x1.7ffc46d175d74p-934,
     0x1.47ded95e9f2e2p-623, 0x1.008c139a6d223p-234, 0.0, 0x1.15a714953c4c1p-199,
     0x1.962ad57c50277p-913, 0.0, 0.0, 0x1.200536ee7477p-643, 0x1.3ddf95afc79afp-663,
     0.0, 0.0, 0x1.05af497a0b4d5p-269, 0x1.b81cabb6b3358p-378, 0x1.6b660e66d3e73p-344,
     0.0, 0.0, 0.0, 0x1.b817552448ffdp-378, 0.0, 0x1.e149960a6076cp-606,
     0x1.7ff2dab98d012p-618, 0x1.baaab612e0d8cp-631, 0.0, 0.0, 0x1.a9a16b3a6af65p-456,
     0x1.d9d223b5a51b2p-292, 0.0, 0x1.a488927f2f558p-397, 0x1.73943c654ba8fp-448, 0.0,
     0.0, 0.0, 0x1.c6e3be06438eep-577, 0.0, 0x1.61344af52facfp-859,
     0x1.47c67d2144339p-491, 0.0, 0x1.e178dbdedbd12p-313, 0.0, 0x1.87aa1677243edp-826,
     0.0, 0.0, 0.0, 0x1.d5e66675b55a9p-642, 0x1.1bed43b1ca4a5p-877,
     0x1.9299bcfda1c35p-314, 0.0, 0.0, 0x1.b1112b5d7ca4ep-295, 0x1.88ba5972df5d9p-717,
     0.0, 0x1.a8b9ff720b05ep-661, 0x1.db8cee670cfb7p-737, 0x1.84193bd8ba361p-583, 0.0,
     0.0, 0.0, 0.0, 0x1.c69ff84ec166ep-633, 0.0, 0.0, 0x1.0697743baf144p-540, 0.0,
     0.0, 0.0, 0x1.3257d9ec61596p-17, 0.0, 0.0, 0x1.f72c3accfbe39p-484,
     0x1.120b88bb2786bp-750, 0.0, 0x1.5e95a5562d528p-243, 0x1.564d2ec2543d2p-464, 0.0,
     0.0, 0x1.2019358ce5cedp-1004, 0x1.040ca0154d75p-827, 0x1.3df9e2a44c10ep-395,
     0x1.626106bf16668p-335, 0x1.8b5e1f0274374p-890, 0.0, 0.0,
     0x1.f3074fd69f103p-1020, 0x1.6282656a111cap-733, 0.0, 0.0,
     0x1.eaa07c7f4ddf8p-939, 0x1.a2dd34f4bf676p-193, 0x1.96843d9a3d783p-730, 0.0, 0.0,
     0x1.6900100bb6915p-625, 0x1.a8d1ea20fc63ep-459, 0.0, 0x1.11496174259f5p-5,
     0x1.d0420560909f1p-126, 0.0, 0x1.af7a566c5dd9bp-733, 0.0, 0.0, 0.0, 0.0,
     0x1.d410208fb4a83p-994, 0.0, 0.0, 0.0, 0.0, 0x1.a288987283e93p-690, 0.0, 0.0,
     0x1.cead6ea448bbep-34, 0.0, 0.0, 0.0, 0x1.bb0282c9ae1c3p-605,
     0x1.dd27b553d67c3p-250, 0.0, 0.0, 0x1.0faea6b21f305p-137, 0.0, 0.0,
     0x1.e8c723da3c52bp-891, 0.0, 0.0, 0.0, 0x1.d18e78a2efb4cp-553, 0.0,
     0x1.212c58d3f0bf4p-775, 0x1.c302f29676c09p-597, 0x1.66c8700446712p-646, 0.0, 0.0,
     0.0, 0.0, 0x1.a238133b10d67p-156, 0.0, 0x1.0f6474fe98b5fp-299, 0.0,
     0x1.21cb8d8e56182p-736, 0x1.1dd6a08f59a4bp-486, 0x1.fa6a436a356bfp-539,
     0x1.8ba2f0e39a688p-912, 0.0, 0.0, 0.0, 0.0, 0x1.73ee98edadcf5p-377,
     0x1.23b1e1263158cp-491, 0x1.142f4bbb730a1p-580, 0.0, 0x1.43174453d41ccp-834,
     0x1.c1f9d0be45a05p-290, 0x1.9fa382eb4c7cp-337, 0.0, 0.0, 0x1.605b77d719c78p-512,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.029c3b7b53b21p-819, 0x1.eb1d1741eb0a9p-161,
     0x1.c1fdb2c588eb6p-632, 0.0, 0.0, 0x1.a490b5bbe26f1p-77, 0x1.588197f003d98p-299,
     0.0, 0.0, 0x1.dfa3cc8e0f617p-540, 0x1.68425cfe9918ep-987, 0x1.bcc4b487b802cp-943,
     0x1.00a81518dd88ap-842, 0x1.46fcab7b266c6p-227, 0x1.69fc6383df526p-493, 0.0,
     0x1.7540cbd36ee4fp-464, 0x1.be67e3e32afc4p-204, 0.0, 0x1.3cf4724508747p-763,
     0x1.05fa00248f601p-577, 0x1.18e98a0f36b1ep-224, 0.0, 0x1.c62a3a8f48e91p-617,
     0x1.95f84c4d6d90dp-690, 0.0, 0.0, 0.0, 0x1.ffe78739000f3p-6,
     0x1.5ee553842baaep-507, 0x1.256fff4272b18p-352, 0x1.91053830f9b02p-520,
     0x1.103287f28bc8ap-432, 0x1.dbd8f5b983c0fp-855, 0.0, 0x1.202b9ee48a45cp-951,
     0x1.c026240444aacp-443, 0x1.d5063837338cfp-531, 0x1.769ef85a76b6ap-444, 0.0,
     0x1.56df14086d756p-97, 0.0, 0x1.258e145a664b1p-523, 0.0, 0x1.f1d6a6f73c505p-1018,
     0x1.955b23fa8e8f4p-313, 0x1.853ee8ca3da0ap-83, 0.0, 0.0, 0x1.2ec36e6296e0bp-871,
     0x1.ac942e67ccb1dp-772, 0.0, 0x1p0, 0x1.02e97f33f7e8cp-80,
     0x1.434e02e3e4af9p-310, 0.0, 0.0, 0.0, 0x1.5275f380bb581p-486, 0.0, 0.0,
     0x1.26557ebee5589p-614, 0x1.f57b65701f2b3p-722, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_log2d1_u10purecfma(tmp0);
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
    printf("Sleef_finz_log2d1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_log2d1_u10purecfma bench acc %la\n", global_bench_acc);
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
