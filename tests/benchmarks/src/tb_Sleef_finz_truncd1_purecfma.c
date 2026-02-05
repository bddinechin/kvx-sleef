/**
 * generated using metalibm 1.1
 * sha1 git: b'"22239828d835d090d4bdca0e118b74e391f5088b"'(dirty)
 * 
 * WARNING: git status was not clean when file was generated !
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_finz_truncd1_purecfma.c --function \
 *     Sleef_finz_truncd1_purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.3db9c1572977bp-57, 0x1.b6917fd274706p-554, 0.0, 0x1.920e94283cc31p-455, 0.0,
     0.0, 0x1.e20995cca7691p-623, 0.0, 0x1.3fd4e84f94221p-984, 0.0, 0.0,
     0x1.c66fe49a384bfp-131, 0.0, 0x1.d7be50df2d321p-84, 0.0, 0.0,
     0x1.dfd0c3c81932ap-420, 0x1.1eae1904e4873p-241, 0x1.7a7d44c42c4adp-96,
     0x1.dd81edfc949a4p-99, 0.0, 0x1.fd49ab548589bp-928, 0x1.6c0cb231df609p-480,
     0x1.e4f2c0643be67p-743, 0x1.b2488d4021744p-151, 0.0, 0.0, 0.0,
     0x1.5ac73b3c3b43p-242, 0.0, 0.0, 0x1.8021381555d3p-670, 0.0,
     0x1.b8fb6b74f9384p-679, 0x1.8f25df0adc036p-523, 0.0, 0x1.471b48558a266p-682, 0.0,
     0x1.d2bafc6755cc2p-902, 0x1.99597dd2b83e3p-573, 0.0, 0x1.6cb5388bfd1e2p-653,
     0x1.d3a2abcb1fe13p-1007, 0x1.a7166d5af2369p-51, 0x1.56205523bc983p-245, 0.0,
     0x1.bd39cd2d3377p-746, 0x1.f5ad9d8da6f46p-843, 0.0, 0.0, 0.0, 0.0,
     0x1.03269335b6f26p-32, 0x1.e0fe291496e7ap-859, 0x1.9e14bbe7d811cp-214, 0.0,
     0x1.d9f42a0ec74e7p-424, 0x1.7feb4700a0484p-793, 0.0, 0x1.3d041656856bap-483,
     0x1.99d260eb25ecfp-979, 0x1.462a0412c25cdp-470, 0x1.8f8e622429283p-89, 0.0,
     0x1.9d50a5b61994cp-354, 0.0, 0x1.8f9246b94ff24p-767, 0.0, 0.0, 0.0, 0.0,
     0x1.914fd1c2dd4a8p-980, 0x1.4c6f03a66f7e5p-378, 0.0, 0x1.f11c0646383f7p-200, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.1a0ad6187ca46p-169, 0.0, 0x1.6c5f2e139d757p-982,
     0x1.cb38c064f11fbp-290, 0x1.ddd3cc4af8dc5p-326, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.3ba0573404e53p-172, 0x1.2073856d081ebp-879, 0x1.2b85f59da94efp-241, 0.0,
     0x1.9b92c84b3402p-1006, 0x1.1ce446adac07ep-33, 0.0, 0x1.a7319bd1969e1p-138,
     0x1.63cc374498803p-372, 0x1.0549b2290b328p-419, 0.0, 0x1.e4bc21395ed3p-670, 0.0,
     0x1.014aed4154d7fp-865, 0x1.ac6b1bd07fdebp-319, 0x1.c3f11537cdd49p-406,
     0x1.545252492621ap-890, 0.0, 0x1.f3452c193f63dp-1007, 0.0,
     0x1.72e3725a8e1c9p-180, 0x1.8c020ca20af9bp-186, 0.0, 0x1.b2372fbf76975p-497, 0.0,
     0.0, 0.0, 0x1.c641d0e62a40fp-716, 0x1.16aebe6060e81p-13, 0.0,
     0x1.290e40a82206ep-291, 0x1.b757279b9b38p-638, 0x1.ac791e21e3784p-106,
     0x1.451b9c87fd23bp-561, 0x1.455eef1bc3d4dp-14, 0.0, 0.0, 0x1.e032d2a3f9078p-126,
     0x1.b62e64b112a8cp-308, 0x1.752a6f09abf4ap-38, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.4429aca3b960cp-1005, 0.0, 0.0, 0x1.9f123c9a4cf59p-724, 0.0,
     0x1.5dcb68906541p-373, 0.0, 0.0, 0x1.54321aa40bea6p-386, 0x1.87280593a685fp-617,
     0x1.5c246431df9bfp-4, 0.0, 0x1.fa79b40621338p-973, 0x1.4f94d1c82de9fp-2,
     0x1.1f65a679c3e55p-111, 0x1.de9fcf760539ap-990, 0x1.1b920a8b7d73bp-697,
     0x1.50c5e39bc8c3fp-556, 0x1.b8d5b0beb68bdp-710, 0x1.3dc73866c863ep-206, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.7afa5378da726p-801, 0x1.952a41b7165e4p-118,
     0x1.bb07ed002882bp-832, 0x1.e673e31ea4283p-58, 0x1.5726617756f71p-437,
     0x1.e3fd0eb8cf645p-894, 0x1.048ef71239d3cp-156, 0x1.d911aec8cf7dcp-4, 0.0, 0.0,
     0x1.09b1c575e06b8p-544, 0.0, 0.0, 0x1.ddd93d4d5c794p-592, 0x1.6cf157538bcd5p-712,
     0.0, 0.0, 0x1.0fb27f0d6f3a4p-48, 0x1.37108cdaea88dp-418, 0x1.a6f0ff5f64baep-462,
     0x1.fe88dd577421ap-391, 0x1.2067b7f0dd5ap-336, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.ed237773236edp-31, 0x1.4b0e26f60e3a6p-376, 0x1.2deda50848f08p-446, 0.0, 0.0,
     0.0, 0.0, 0x1.df1ec4874b629p-949, 0x1.a9cff530fb05p-599, 0.0,
     0x1.76af7ec183e97p-375, 0.0, 0.0, 0.0, 0x1.d80bd5be25619p-440, 0.0,
     0x1.fe71fd7b31e81p-111, 0.0, 0x1.78c5bdb54d162p-488, 0.0, 0x1.dbfe03862b1e1p-803,
     0x1.a641bb2fb5f64p-184, 0.0, 0x1.a7d364d86be26p-879, 0x1.291ea343f2f78p-284,
     0x1.a85bdc85cfeb7p-578, 0.0, 0.0, 0x1.44a66b68e6b2fp-420, 0x1.6804ecab50d76p-420,
     0.0, 0.0, 0.0, 0x1.5c88989961d06p-285, 0x1.22f32229ef723p-631, 0.0,
     0x1.a041a17e6ec34p-72, 0x1.d3d84931b54b9p-949, 0.0, 0.0, 0x1.a066c94f1987fp-562,
     0.0, 0x1.7f6e24b4b8fe1p-774, 0x1.ed7f9c49cac5fp-969, 0x1.cc0d6f1a2c43p-470, 0.0,
     0x1.60c47447fd10dp-197, 0.0, 0x1.8c484540ac80ep-79, 0x1.ba7992df0f484p-87,
     0x1.ad8392e4eefd8p-431, 0x1.682b349351977p-328, 0.0, 0x1.f9c30144fa148p-322,
     0x1.6a4b7f413317bp-683, 0.0, 0x1.491da64126c9bp-706, 0.0, 0.0, 0.0, 0.0,
     0x1.ba6e37e32eb81p-843, 0.0, 0.0, 0.0, 0x1.29d5e26c71106p-734,
     0x1.591d583ceb3f8p-21, 0.0, 0x1.6f43b524cb4e1p-414, 0x1.95f6a16c577aep-89, 0.0,
     0.0, 0x1.5298131bf33f7p-498, 0.0, 0x1.ed99b2334a471p-586, 0.0, 0.0, 0.0,
     0x1.c3910b0e4528ap-672, 0.0, 0x1.6f156c56b7e08p-53, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.9c38b58adc9c2p-390, 0.0, 0x1.ded63ff9f9183p-181, 0.0,
     0x1.b934813e30b78p-812, 0x1.fcf7195701b5ep-598, 0.0, 0x1.9f827db52b4cp-420,
     0x1.f6f87b44af988p-337, 0x1.36ecf47f55a1cp-887, 0.0, 0x1.6ba11e9bbdcccp-336,
     0x1.5b46fde303bcbp-808, 0.0, 0.0, 0.0, 0x1.5c92203913392p-240, 0.0,
     0x1.0a0a260bf4379p-646, 0.0, 0x1.3382958fe1dbdp-369, 0.0, 0.0,
     0x1.9ae5251191b52p-88, 0.0, 0.0, 0.0, 0x1.4c2a5ccf5c9a9p-844, 0.0, 0.0, 0.0,
     0x1.7f1203472401dp-215, 0.0, 0x1.3088cc1ae0288p-555, 0.0, 0x1.b1f3c125274dbp-870,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.fde1ac0f70201p-294, 0x1.34c1f4038265p-585,
     0x1.64d0014951d3cp-804, 0.0, 0x1.399a81a5341bdp-253, 0.0, 0x1.0a9fc157b3fd7p-379,
     0.0, 0.0, 0x1.ab75f80bad044p-735, 0.0, 0x1.9f48ccfe4c248p-552, 0.0,
     0x1.17ffff46442f8p-472, 0.0, 0.0, 0.0, 0.0, 0x1.a9f37ee6a3963p-468,
     0x1.7aeeaf695b876p-283, 0x1.b03c0a2155447p-931, 0x1.90eb15ffdf7b2p-620, 0.0, 0.0,
     0x1.f30fec054158ap-660, 0x1.e3cb8d08b9ec4p-880, 0x1.e1e630f95268p-107, 0.0, 0.0,
     0x1.074005396de9dp-173, 0x1.9bc88560a0d93p-748, 0x1.7796d3fcd8551p-857, 0.0,
     0x1.b67c3c759c805p-970, 0x1.86956246f56bep-443, 0x1.91a286c10df99p-368,
     0x1.02fae8d784a59p-660, 0.0, 0.0, 0x1.3421712b2569dp-964, 0x1.1501eeb727ba5p-90,
     0x1.7a61fc2d0b72bp-498, 0x1.66c920ebd8c1ep-118, 0.0, 0.0, 0x1.219dc83e48decp-651,
     0x1.a2a630053f1dbp-534, 0x1.8a1790aeb8593p-511, 0x1.0afc7ebc8959p-112,
     0x1.6ba4beeefae07p-59, 0x1.1a82bf042e405p-585, 0.0, 0x1.021d3fdbd1f4ap-428,
     0x1.c77e59c73c54p-849, 0.0, 0.0, 0x1.fedf837a24c44p-797, 0x1.7eaf99a69885dp-307,
     0.0, 0x1.24a8458f4076ep-40, 0.0, 0.0, 0.0, 0x1.cc4ca8fea93eap-8, 0.0, 0.0, 0.0,
     0.0, 0x1.6f254068b2dccp-814, 0x1.13c0550b7a8dp-531, 0x1.3a3a320f6ab34p-224,
     0x1.305c7396f0e61p-12, 0x1.0f7e6097d111ep-455, 0x1.40b200b3cf953p-604, 0.0,
     0x1.1b2f9e818f782p-539, 0x1.a7da073b42a5dp-740, 0.0, 0x1.964c7d0575f4p-463,
     0x1.9ae5fd67fbd7ep-104, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.7bb18b22aa7fp-627,
     0x1.5a52cd1e9fa5dp-179, 0x1.68a8683961f32p-520, 0.0, 0.0, 0x1.b90648285037bp-652,
     0.0, 0.0, 0x1.5b16e0c8980d2p-273, 0.0, 0x1.379d00e632e38p-674,
     0x1.dce1e9b7cdb3cp-497, 0.0, 0x1.8c303fc08d273p-553, 0.0, 0.0, 0.0,
     0x1.b8dd6b7760a71p-664, 0.0, 0x1.3072c6a4866dfp-438, 0.0, 0x1.db75cc53013f3p-139,
     0x1.29bf7107dbe99p-817, 0x1.f7603f5ddbfdbp-308, 0x1.892ea351f93abp-985,
     0x1.9d6785112b57ap-381, 0.0, 0x1.f80e6bc439a77p-39, 0x1.26a0f15211313p-767, 0.0,
     0x1.65f396dc4553cp-535, 0x1.c843b618ecbfep-163, 0x1.4dc46e8f6aff1p-44, 0.0, 0.0,
     0.0, 0x1.410d2c3392843p-546, 0.0, 0x1.9fc2788d43824p-848, 0.0, 0.0, 0.0,
     0x1.39d258a2485bdp-921, 0.0, 0x1.5637daf2ca21cp-873, 0x1.e97fb6eeacca7p-795, 0.0,
     0.0, 0.0, 0x1.07de1e6026f57p-187, 0x1.1fd053ff432a7p-569, 0.0, 0.0, 0.0,
     0x1.fd6041d98be5fp-324, 0x1.db3339d40dfep-493, 0x1.0e5c04b4fcdefp-557, 0.0, 0.0,
     0x1.41944a46f7136p-404, 0x1.00500858e35e4p-816, 0x1.253438a2953d8p-809, 0.0, 0.0,
     0.0, 0x1.b141b8e9a5636p-867, 0x1.2c3f7bf9f828dp-430, 0x1.fc55a0d0905f5p-469, 0.0,
     0x1.bd93c2600b6e7p-1011, 0.0, 0x1.dd255b22d1e97p-687, 0.0,
     0x1.9d4941b087074p-797, 0.0, 0x1.6013076b01a4p-746, 0x1.88cb8bd9c6a28p-329, 0.0,
     0x1.591050f7cdadbp-792, 0.0, 0x1.287311f1fa583p-303, 0x1.6ef7493463c1p-849,
     0x1.5d11fc3dc51c3p-700, 0x1.f983dc2955879p-726, 0x1.9e6f2db0acebap-260, 0.0, 0.0,
     0.0, 0x1.4a2e0127cc8e1p-967, 0x1.6ea434334da85p-546, 0.0, 0.0, 0.0,
     0x1.709cc851fef02p-1007, 0x1.d46bd35abba5bp-604, 0x1.792bc181f6095p-302,
     0x1.a1427a08be2dcp-309, 0x1.301ef868b88f8p-148, 0x1.bfe369c5ad652p-427,
     0x1.e540eef42a411p-666, 0.0, 0x1.93ee59567f0adp-326, 0.0, 0x1.0601ff90f8ffbp-160,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.bbc4867b64ca2p-571, 0.0, 0.0,
     0x1.86b68212feebcp-945, 0.0, 0x1.259ac070dbccap-183, 0.0, 0x1.abb934acf4094p-735,
     0.0, 0x1.a6d68b6ea4d9ap-799, 0.0, 0.0, 0x1.0193757032f82p-77, 0.0,
     0x1.51ec83ec2752fp-304, 0x1.1e8a5b2aa3593p-495, 0.0, 0x1.312f885cf49b1p-381,
     0x1.7df0dafbfd49cp-580, 0x1.00e714dd42932p-111, 0.0, 0x1.0f55c66ff1a7ap-549,
     0x1.d263c8248207fp-431, 0.0, 0.0, 0x1.e881f9e966021p-910, 0x1.1e0d4247115a4p-972,
     0x1.17fd5d4128917p-393, 0x1.b1ddfeb451a0fp-993, 0x1.4ce163252d82ap-250, 0.0, 0.0,
     0x1.1175656e8c3b5p-1003, 0.0, 0.0, 0x1.8113b08b51395p-48, 0x1.b4bdc511a2a8fp-487,
     0.0, 0x1.b75638ea1353cp-643, 0.0, 0.0, 0x1.f3a58ded27201p-436,
     0x1.c248fae04d9ddp-717, 0x1.293c0dee9d45p-459, 0x1.da6db1e9f8189p-910, 0.0,
     0x1.e78f0ff5d0b6bp-43, 0.0, 0.0, 0x1.ddb15055c647ap-367, 0.0,
     0x1.cbb1a3f5f88e4p-164, 0x1.bd795e7d5e7f9p-863, 0.0, 0x1.afa9945ad5515p-465, 0.0,
     0x1.c71470b65e64p-717, 0x1.f6ad9cd23d9dcp-603, 0x1.c1a69e2c9773ap-952, 0.0, 0.0,
     0.0, 0x1.1cb087a44e5f8p-92, 0.0, 0.0, 0.0, 0x1.b819b617fb844p-726, 0.0,
     0x1.e73dd6d68ea6dp-719, 0.0, 0.0, 0.0, 0x1.79d72362d8df4p-346, 0.0,
     0x1.52b8ce921acbcp-322, 0.0, 0.0, 0x1.7b9db83c80a01p-822, 0.0,
     0x1.547f325851e5bp-1016, 0x1.fe95cdba5266dp-266, 0.0, 0x1.64968098cefffp-148,
     0x1.08b6f16c3faeap-666, 0x1.0791f84684f0dp-632, 0.0, 0x1.579047a16a5d4p-964, 0.0,
     0x1.92d8e1a652b13p-817, 0.0, 0.0, 0x1.5d37de927dbc6p-876, 0x1.be131f369238dp-743,
     0.0, 0x1.feee9e6fc9616p-167, 0x1.f3b340b80a6c7p-174, 0x1.665ac913a9907p-148, 0.0,
     0x1.ad611f0d890a7p-619, 0.0, 0x1.f8eccc40d9694p-916, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0x1.63b044249c256p-592, 0x1.da7c7954169a2p-887, 0.0, 0x1.32f22775a3dfcp-982,
     0x1.40330d0473934p-252, 0.0, 0.0, 0.0, 0.0, 0x1.4262c67849807p-743, 0.0,
     0x1.c3c4c5efd4fb8p-400, 0x1.72d9bd05484bcp-181, 0.0, 0x1.3ab8ac8190023p-822, 0.0,
     0.0, 0x1.c866bd812661bp-117, 0x1.2b02c727db8ffp-398, 0.0, 0x1.c5d561aa833e3p-121,
     0x1.f9ddcf754e5e8p-164, 0.0, 0x1.080f1ff3cc4c9p-857, 0x1.848577618b602p-270,
     0x1.8aaca10b73ac5p-277, 0.0, 0.0, 0x1.62e08fc69b4e4p-811, 0.0,
     0x1.21eddd16562bcp-602, 0x1.79d6e306fe81ep-386, 0.0, 0.0, 0x1.c6618cd65f11dp-10,
     0x1.88369970be8b9p-218, 0.0, 0x1.e3c24c6cf149fp-968, 0x1.985cd3d8cc3f7p-199, 0.0,
     0x1.6d17fd18e006bp-673, 0x1.f7b51996e179ep-270, 0.0, 0x1.6095ea8f707f3p-760,
     0x1.41fe4192a41f2p-398, 0x1.ffba1cf692e16p-1007, 0x1.acfe0b344ea17p-23, 0.0,
     0x1.1cf4a8fe30dfcp-590, 0x1.559a8a5e58d73p-677, 0x1.9b032386dd0fbp-956,
     0x1.b93878110df3bp-251, 0.0, 0x1.c2dbb99a6affbp-27, 0x1.acb8b6a67ef3bp-916, 0.0,
     0x1.bb3da0594d202p-733, 0x1.81301c0b3ab15p-238, 0.0, 0.0, 0x1.a646a75936609p-570,
     0x1.74f50600a9bd1p-975, 0.0, 0x1.17fb1355e47bfp-909, 0x1.c1ea1b9b60d4ap-398, 0.0,
     0x1.e836f2f570f3fp-63, 0x1.af796e0ef81aep-654, 0.0, 0x1.2feaacd7bd76fp-420, 0.0,
     0x1.597dd3f6e668dp-953, 0.0, 0.0, 0.0, 0x1.1bbc956c92b61p-419, 0.0, 0.0,
     0x1.b15f5aca919d7p-78, 0.0, 0.0, 0x1.a268845797522p-613, 0x1.1470d2c6248ccp-982,
     0x1.2549becd5f7dp-367, 0x1.9f42b6c0a2f58p-185, 0.0, 0.0, 0.0, 0.0,
     0x1.5ebb1921a0f1ep-184, 0x1.2bf63df477b02p-399, 0.0, 0.0, 0.0,
     0x1.36289c1cc2f57p-220, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.4d1d7e7d8461fp-369,
     0x1.4639af1ce9f78p-663, 0x1.2585633c2ad31p-604, 0x1.c70d5fa9261f7p-646,
     0x1.32992e3907173p-583, 0.0, 0x1.7c2f9a90ba32dp-703, 0x1.0bf3fbb70a269p-877, 0.0,
     0.0, 0.0, 0x1.8a4b545b1d09fp-784, 0x1.145f396379d98p-187, 0x1.33112f6e5b0dfp-958,
     0x1.55fc14c1b8849p-79, 0x1.4acfe7d5827bfp-194, 0x1.36c2b0ead74dfp-109, 0.0,
     0x1.c4a51031b9352p-447, 0x1.40d3dd966e2a9p-81, 0x1.277aeb0a127abp-101, 0.0, 0.0,
     0x1.93076f0a53e49p-307, 0.0, 0x1.bc0ec44870083p-959, 0.0, 0x1.ff41589f2a67fp-43,
     0x1.d6c8b336f4d5ep-506, 0x1.b32b55172d8b2p-528, 0x1.d65f4786cc2bep-243, 0.0, 0.0,
     0.0, 0x1.ecad744dbd557p-760, 0.0, 0x1.ed02a8c224aedp-114, 0x1.91a1b82be543ep-364,
     0.0, 0x1.7598d09e04d4bp-733, 0.0, 0x1.1959f139bf868p-678, 0.0,
     0x1.53dc51aa73389p-132, 0.0, 0.0, 0.0, 0x1.986d6790fc717p-1017, 0.0, 0.0, 0.0,
     0x1.c82a1a7e1272dp-409, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.f55df5ce124a4p-421, 0.0, 0x1.2bab8bcff3b4dp-819, 0.0, 0.0,
     0x1.96ec9307a753cp-479, 0.0, 0.0, 0x1.5293f6a7cfa6fp-33, 0x1.9e05dd6bbf0f1p-874,
     0.0, 0.0, 0.0, 0x1.7ac644308850ep-238, 0x1.79a7f38d88e02p-40, 0.0, 0.0, 0.0,
     0x1.bb357676ea363p-687, 0x1.dfbb815faf2afp-814, 0.0, 0x1.61229608c8b9p-272,
     0x1.d28a4f9fb758p-33, 0x1.66a1b867591cp-439, 0.0, 0x1.943e14b5e30fap-717,
     0x1.6d18ae23f686fp-1008, 0x1.e80f955a7c083p-200, 0.0, 0x1.8e342511267f6p-89, 0.0,
     0.0, 0x1.e48a36a73766cp-724, 0.0, 0x1.7d5ec9cbd6815p-794, 0.0,
     0x1.b585dc3afce78p-646, 0.0, 0x1.b2e035abc9968p-659, 0x1.90ae978a0b13dp-390, 0.0,
     0x1.ea5d2ea36e5a3p-8, 0x1.41ed217e36856p-503, 0x1.004050ea399dbp-694, 0.0,
     0x1.d897fed1d52b9p-645, 0.0, 0x1.2db6060b22634p-177, 0x1.b42914dc6035bp-990, 0.0,
     0x1.9280210a6a93dp-487, 0.0, 0.0, 0.0, 0x1.9ea878c8b7f19p-134,
     0x1.ba3bc3ecfe96bp-498, 0x1.7a3d62f0cf6cap-525, 0x1.69755a6e3c98dp-186, 0.0,
     0x1.c9bf0e8ca014ep-60, 0x1.d438e192be72fp-831, 0x1.3d330bda041a1p-874, 0.0, 0.0,
     0.0, 0.0, 0x1.224e678fac3cep-393, 0.0, 0.0, 0x1.f9b198731712fp-631,
     0x1.c790676fd76e8p-961, 0.0, 0x1.d7e12fce8684fp-483, 0.0, 0.0,
     0x1.67e6b68b211a6p-649, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.c314fdde12ca7p-578, 0x1.c3ad869f5e666p-844, 0x1.fdf151f506c38p-476, 0.0, 0.0,
     0x1.e932dc5c788d6p-880, 0x1.4600f55fd0accp-26, 0.0, 0.0, 0x1.1f2f618fea2f7p-467,
     0.0, 0x1.aeab24b0bea38p-214, 0x1.8e3dbb77dd033p-1016, 0.0, 0x1.5ddcfe11b6607p-15,
     0x1p0, 0x1.0941585d22b44p-243, 0x1.4df84d1a9f525p-195, 0.0, 0.0, 0.0,
     0x1.75ce374254aecp-916, 0.0, 0x1.ef981f12c2113p-1005, 0x1.04416e920461ap-790,
     0x1.d8a45566c045ap-765, 0.0, 0x1.32a20711edcfcp-147, 0x1.432b847800233p-140, 0.0,
     0x1.a9f08c2986573p-850, 0x1.f1b56afbea473p-718, 0x1.5e0ad10b335e5p-508, 0.0, 0.0,
     0.0, 0x1.4f32f195d95f9p-389, 0x1.56e523c2ad8afp-117, 0.0, 0.0,
     0x1.7ba0a70bca0fdp-417, 0x1.c372a80b09221p-471, 0x1.b31eb4cdc6926p-807,
     0x1.6ef0f093d01d1p-808, 0x1.be22c5734a429p-393, 0x1.5cb507b8d2acfp-899,
     0x1.cc7cf9bf8f752p-680, 0x1.581d090e9596p-361, 0.0, 0x1.d9c7569307fa8p-508, 0.0,
     0.0, 0.0, 0x1.d891be20798b6p-221, 0x1.38016a2c06646p-919, 0x1.5c7a05acc0256p-10,
     0.0, 0x1.37964aa84b12ep-642, 0x1.7b00c0bfa2eabp-49, 0.0, 0.0,
     0x1.bbceab79b55b8p-40, 0.0, 0x1.a93b06f9c1ff6p-1009, 0x1.9ea73b6f79a9bp-500, 0.0,
     0x1.dd01343a3a9b8p-971, 0x1.c0cf8b82c28d9p-869, 0.0, 0x1.86f1841d4abe4p-427, 0.0,
     0.0, 0x1.4ca66dff1d2d9p-543, 0.0, 0x1.279f6062debacp-938, 0.0, 0.0, 0.0, 0.0,
     0x1.5ed1589161619p-72, 0x1.33bc4a02e24d8p-310, 0x1.d70238c1b1a7dp-708, 0.0, 0.0,
     0x1.2f4d667f0ee25p-165, 0x1.a41c1ac13a5e7p-873, 0x1.6a9f58ddb59f3p-481, 0.0, 0.0,
     0.0, 0x1.9d4a7588e931cp-863, 0.0, 0.0, 0.0, 0x1.728236fb77bb7p-218, 0.0,
     0x1.12bd864f49026p-575, 0x1.3fe571c84dbe9p-452, 0x1.bb3ce77a31c45p-653,
     0x1.395184ad35d8fp-394, 0x1.a6d4e5058de52p-483, 0.0, 0x1.7fc8f82b32f4ap-359,
     0x1.cda0fa52db9c7p-973, 0.0, 0x1.2b3dfa684c8e5p-765, 0x1.448c8a7e1b26bp-450,
     0x1.ec518cdbe138bp-823, 0.0, 0x1.62fcb4a6adf36p-43, 0.0, 0.0,
     0x1.6b574e98b3374p-834, 0.0, 0.0, 0.0, 0.0, 0x1.83905145b9eap-976, 0.0, 0.0,
     0x1.c937b130e4c08p-320, 0.0, 0.0, 0.0, 0.0, 0x1.8513f6e4992bdp-3, 0.0,
     0x1.725ff7bcda585p-631, 0.0, 0.0, 0.0
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
            tmp1 = Sleef_finz_truncd1_purecfma(tmp0);
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
    printf("Sleef_finz_truncd1_purecfma %"PRIi64" elts computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_finz_truncd1_purecfma bench acc %la\n", global_bench_acc);
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
