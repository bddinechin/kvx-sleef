/**
 * generated using metalibm 1.1
 * sha1 git: b'"2f26732634c940103ee589f295019c188f24c4eb"'(clean)
 * 
 * INFO: git status was clean when file was generated.
 * 
 * command used for generation:
 *   ../metalibm/metalibm_functions/external_bench.py --output \
 *     ./tbs/tb_Sleef_tgammad1_u10purecfma.c --function \
 *     Sleef_tgammad1_u10purecfma --headers sleef.h,ml_support_lib.h \
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
     0x1.de75dfa17b8abp-865, 0x1.de504899f8878p-366, 0x1.ff202ec8f02cap-496, 0.0,
     0x1.e4ed64db8db47p-986, 0x1.503e41d3f0f09p-119, 0x1.e66041d063371p-762,
     0x1.d8853ecc7860dp-24, 0.0, 0x1.52a85057e4e01p-20, 0x1.d88a094b7948ep-486, 0.0,
     0x1.11a265f905294p-313, 0x1.93b5dc93b6cd6p-291, 0.0, 0x1.e146a81c264d9p-927,
     0x1.e360b63d2032cp-766, 0x1.cc03d43d7602p-74, 0.0, 0x1.c98a3fe3a7b61p-167,
     0x1.00c904f4873f2p-443, 0x1.e9ab17a258414p-776, 0x1.0412ecd684e9dp-1022,
     0x1.06866132316f2p-276, 0x1.f7579f0409878p-290, 0x1.7a74a83e056bap-275,
     0x1.ffad014fdcbbp-898, 0.0, 0x1.d1e609b145cd4p-66, 0.0, 0.0, 0.0, 0.0,
     0x1.384ee7219d836p-273, 0x1.093f999c6f11dp-861, 0x1.22de0635ce661p-444, 0.0, 0.0,
     0.0, 0.0, 0x1.f28f66bc353adp-355, 0x1.2dc77a37e0144p-198, 0x1.5136e1db5c4a9p-16,
     0.0, 0.0, 0x1.be00d019fc91dp-989, 0.0, 0.0, 0.0, 0x1.b698a55c3b1ebp-309, 0.0,
     0.0, 0x1.ff6aaa5377994p-443, 0x1.8e15e96c4f14cp-605, 0.0, 0.0,
     0x1.7a6cc87cb92bfp-210, 0.0, 0.0, 0.0, 0.0, 0x1.22ea0814f7f86p-912,
     0x1.3d031862a22dep-492, 0.0, 0.0, 0x1.4ddabae48dc61p-588, 0x1.060e8d9dabe76p-540,
     0.0, 0x1.749b46b87b7ecp-136, 0x1.0f946bc134173p-549, 0.0, 0x1.5ca4705b89ce8p-408,
     0x1.a9bfa9102b61cp-661, 0.0, 0.0, 0x1.c9ce13f44fe0dp-393, 0x1.c9e10a5d6e2abp-130,
     0.0, 0.0, 0x1.b77c7fcbe9713p-673, 0x1.0dc84d53bfe09p-311, 0x1.2ad72dfb8901ap-695,
     0x1.857e5b7e296a4p-937, 0.0, 0.0, 0x1.9e42479cec9a6p-274, 0x1.524ccf69761ebp-990,
     0x1.01401eee470e4p-599, 0.0, 0.0, 0.0, 0.0, 0x1.7aaba789e71f3p-917,
     0x1.d32eda58b362dp-851, 0x1.c0d220c984166p-435, 0x1.caa18c05e264cp-942,
     0x1.e569022f470cfp-671, 0.0, 0.0, 0x1.551370f3945edp-73, 0.0,
     0x1.f59a70faa927dp-523, 0.0, 0x1.71c6d7d606bfep-522, 0.0, 0x1.2f03f7c805a39p-293,
     0.0, 0x1.83b547144c1f2p-666, 0x1.af691c22351e8p-508, 0x1.6bc94c163173fp-240, 0.0,
     0.0, 0x1.7de961ee562c9p-576, 0.0, 0x1.79d2dacd272a7p-673, 0.0, 0.0,
     0x1.4a6662b4b9cdcp-938, 0.0, 0x1.6361b5acc7f14p-253, 0x1.9b8a31b855d18p-646, 0.0,
     0.0, 0x1.1fcb97018ca3cp-724, 0x1.0e2078cdde18p-761, 0.0, 0x1.5aa15da84213dp-720,
     0.0, 0x1.e3cb2ef1210dcp-696, 0x1.023ebc1bf2542p-436, 0x1.330e085059fp-486, 0.0,
     0x1.0487c7618735dp-7, 0.0, 0x1.60214d4ec3e3bp-1012, 0.0, 0x1.d9eff71d1cfep-653,
     0x1.38b3b3179d89fp-899, 0x1.e1b60b6f5a4dcp-764, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0x1.92b8b0bc9ee4ep-923, 0.0, 0.0, 0.0, 0x1.a05a0887c68f1p-293, 0.0,
     0.0, 0.0, 0x1.f9677af0c7a5dp-951, 0.0, 0x1.b7b9369a0bb4cp-768, 0.0, 0.0,
     0x1.b6d31020879dfp-901, 0x1.b1ddd08e659bep-682, 0x1.5b1af69078149p-527,
     0x1.d04436e272a13p-725, 0x1.7e06c50ba976p-737, 0x1.91d4435a108c8p-746, 0.0, 0.0,
     0.0, 0x1.d10705351f5fap-254, 0.0, 0.0, 0.0, 0x1.647b19deb8e76p-986, 0.0, 0.0,
     0x1.1357c646bbf7dp-168, 0.0, 0x1p0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.d72a2ece443b6p-577, 0x1.3c16a291ac729p-915, 0x1.c241d97e76f1ep-252, 0.0,
     0x1.b141c57148db4p-259, 0x1.f2086f4b33aa7p-959, 0.0, 0.0, 0x1.4d928a966e2e9p-596,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.17b6bbbfae731p-854,
     0x1.872cf317b36f7p-640, 0x1.3075413b8322ep-820, 0x1.d78e41dc4838dp-244,
     0x1.53e2b6d454374p-376, 0x1.be1ff03fbe6adp-266, 0.0, 0x1.5aa4c5c88ad47p-443, 0.0,
     0x1.d5158bb4ee1e1p-562, 0.0, 0.0, 0.0, 0x1.5672e8b02b954p-662,
     0x1.431b9ad50c23ap-462, 0x1.2affd67bfbf68p-858, 0.0, 0.0, 0x1.beac1b39a53fap-823,
     0x1.be8cf136c9f7ap-39, 0x1.cf5a866d7f84dp-539, 0x1.1da2171be8581p-403,
     0x1.582a93296228bp-470, 0.0, 0.0, 0x1.ae7be3d0aaabep-688, 0.0,
     0x1.7920f665df594p-1010, 0x1.e59a732dfe1fp-886, 0x1.891dbc31e031ap-143, 0.0, 0.0,
     0.0, 0.0, 0x1.89002ee77f84ep-1000, 0.0, 0.0, 0.0, 0x1.87b2aa94c27a2p-598,
     0x1.284ac5b6ba9ddp-54, 0.0, 0x1.7aec6b9d95214p-885, 0x1.dd1bd53823b02p-536, 0.0,
     0x1.5b897542384ap-182, 0x1.d42d138c37e74p-567, 0x1.3fcfc8739d7acp-379, 0.0,
     0x1.20ed0545140dp-595, 0x1.ef823ebcc0398p-145, 0x1.daa3a10adaa6dp-898, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0x1.dd7fc9b7b6482p-916, 0x1.9520a1498c505p-24,
     0x1.f6cc366c8d764p-990, 0.0, 0.0, 0.0, 0x1.087044842c05bp-200,
     0x1.01fc4a3bb147bp-981, 0x1.e74400a7d77e4p-204, 0x1.0d8ee44d7be63p-915,
     0x1.7d0e0fed6035cp-920, 0.0, 0.0, 0x1.fd25096d59837p-405, 0.0, 0.0,
     0x1.1622fbfd8b389p-568, 0x1.c81e2e5ec2219p-320, 0x1.ff67da5e0456bp-24, 0.0, 0.0,
     0x1.3db28966eb52ap-810, 0.0, 0.0, 0.0, 0x1.7159ae9164f5fp-933,
     0x1.694a02e248114p-170, 0.0, 0x1.d87a3b7f5b84bp-693, 0.0, 0.0,
     0x1.26ecd8a300fbdp-828, 0x1.420e855644a5cp-982, 0.0, 0.0, 0.0, 0.0,
     0x1.c3100a4613d29p-308, 0.0, 0x1.cec5c36f54fa6p-630, 0.0, 0.0,
     0x1.48b05da8a203ap-899, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.22f4c034add06p-404, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.812f5c3191ff2p-634, 0x1.5be70a16873d9p-723, 0.0, 0.0, 0.0,
     0x1.5e0f859afc11cp-560, 0x1.edd482a2bd497p-784, 0x1.5e7594c16774ep-711,
     0x1.6600e9abc738dp-918, 0.0, 0x1.c28eebda7dbb2p-679, 0.0, 0x1.9615f3edd44a3p-26,
     0x1.fe24e28580effp-64, 0x1.d6e9beb5e7fe3p-444, 0x1.1ec1e86cacacep-42,
     0x1.0eaaa88631e0bp-813, 0x1.6aa8585b5534ep-427, 0x1.e4e30e0cdf836p-706, 0.0, 0.0,
     0x1.e968151520502p-912, 0x1.d19d8bbea7bbdp-861, 0x1.1b7ee78ce94cp-317,
     0x1.6bbfd387936ep-191, 0.0, 0.0, 0x1.b4f472d37c4aap-193, 0.0,
     0x1.2e72cd07bd342p-837, 0x1.7cc8dde4df131p-241, 0x1.060f94c9f9227p-881, 0.0,
     0x1.0593d7d0efe91p-557, 0x1.94ae3d5bd7f74p-883, 0.0, 0x1.1123fa889ec6ep-60,
     0x1.d594902801f9ep-272, 0x1.245341976236ep-162, 0.0, 0.0, 0x1.a096c5b0ec518p-45,
     0x1.e3fa00ca6a0f9p-288, 0.0, 0.0, 0.0, 0.0, 0x1.9e923f95238a6p-357,
     0x1.5c56f747c3923p-762, 0x1.03e14db7ea697p-894, 0.0, 0x1.4462dbb079c1p-617,
     0x1.8bb1ccc184d07p-483, 0.0, 0x1.f7be6bb96ccdcp-682, 0.0, 0.0, 0.0,
     0x1.839fef182cb06p-397, 0x1.326b5b4c461eep-539, 0.0, 0x1.33fdb0f0eac6bp-543,
     0x1.b0a1c3dc26254p-976, 0.0, 0x1.7e7aa0b4addb9p-760, 0x1.ab3855e937b4dp-739, 0.0,
     0x1.a65a14ac221dep-485, 0.0, 0.0, 0x1.eb9c1c3df590fp-449, 0x1.5797f04f96265p-45,
     0.0, 0.0, 0.0, 0x1.f284634b25c2cp-136, 0x1.8e896e2ea019ap-350, 0.0,
     0x1.e92776234b416p-754, 0x1.cbd1951890ed2p-534, 0.0, 0x1.ac0d35832f542p-389,
     0x1.8758e3ae18fa6p-709, 0.0, 0.0, 0x1.f5b5ff1037726p-84, 0.0, 0.0,
     0x1.56f7dbe09daddp-903, 0x1.2fe457b3c83bp-236, 0x1.6ca21238a6fd9p-511,
     0x1.c2de550b0b107p-644, 0x1.2c247e89a45dbp-937, 0.0, 0x1.a251954f13cdfp-1013,
     0.0, 0x1.5befaa8ac0fdep-642, 0x1.f563fe7145273p-542, 0x1.dce012886539fp-903,
     0x1.27b4248ef42c7p-85, 0x1.a187747e9f85cp-705, 0x1.5afbd9338b074p-1000, 0.0, 0.0,
     0x1.4805482c5a359p-132, 0.0, 0.0, 0.0, 0.0, 0x1.3ebab3688318ap-389, 0.0, 0.0,
     0.0, 0.0, 0x1.8ac6f157f46f8p-89, 0.0, 0.0, 0x1.daf2d27f03a49p-393, 0.0, 0.0,
     0x1.c57bab47a1a33p-494, 0x1.33e14e70e00c1p-584, 0.0, 0x1.56c1cbafa67c2p-631,
     0x1.f6167b14f7ae1p-461, 0x1.8bad300ad83a1p-600, 0x1.ef74434ca4758p-316, 0.0,
     0x1.fbc3c2cc61311p-219, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.9e9f5b301b2dcp-434,
     0x1.da805487c0dcfp-60, 0.0, 0x1.8887bff21bff7p-722, 0x1.855cc359e2487p-469,
     0x1.9b83bfe86d3d2p-210, 0.0, 0x1.e10e9e373c73dp-453, 0x1.ba8c254e56539p-914,
     0x1.632c9a8d49c2dp-913, 0x1.b9669c5394851p-74, 0.0, 0x1.07430a527ba2fp-899, 0.0,
     0x1.efdc2db9e5146p-444, 0.0, 0x1.414d4bd905491p-233, 0.0, 0.0, 0.0,
     0x1.12c6424b6332p-292, 0.0, 0.0, 0x1.df77541f773c7p-100, 0x1.906e283e09dc3p-89,
     0x1.80ae3025d65adp-514, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.27a963350d453p-758, 0.0, 0x1.19b4a46816a3cp-284, 0.0, 0x1.fc8cc1383cef3p-510,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.0507b38c6389fp-919,
     0x1.3fea1f47e9fa4p-325, 0.0, 0x1.55a883c317754p-798, 0.0, 0x1.aa358a8351c33p-26,
     0.0, 0.0, 0x1.a4848a4f5cddcp-305, 0.0, 0x1.44f02788ae752p-141,
     0x1.200ef6984b0e5p-546, 0x1.05a7df1c1008ep-71, 0.0, 0.0, 0.0,
     0x1.7c31be0c6309ap-60, 0.0, 0x1.c82d48942a9acp-447, 0.0, 0x1.fd171ad3ae2d5p-638,
     0.0, 0.0, 0.0, 0x1.27d427fa4b5ddp-325, 0x1.1c6dc2d873425p-129,
     0x1.04a92118e1066p-855, 0.0, 0x1.3af50dab81ba4p-82, 0x1.c4b282b2fc5cep-42, 0.0,
     0x1.0a015223925fep-754, 0.0, 0x1.6b5aceef2c2fap-197, 0.0, 0x1.43af7c3cbcdaap-488,
     0.0, 0.0, 0.0, 0x1.02cbd235c0558p-67, 0x1.5b0d7de54da5fp-627,
     0x1.4f5d8c7c9f805p-600, 0.0, 0.0, 0.0, 0x1.b77a46e26d758p-384,
     0x1.360e523ffc949p-77, 0x1.dfcaded1751dep-795, 0x1.e55dca00a6141p-504, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.cfe0885a8bb99p-279, 0x1.e5e6f0910ea14p-617,
     0x1.73336369757e4p-728, 0.0, 0.0, 0.0, 0x1.4faa6e32a66c3p-988,
     0x1.85a418d5c3b62p-17, 0x1.21f0a6b1e7aa8p-587, 0x1.30bc62f2975b8p-253,
     0x1.78430843008bcp-134, 0.0, 0.0, 0x1.c1554399ee7c5p-537, 0x1.563e3dbf591ep-18,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.d3f924d154735p-65, 0.0, 0x1.73c7eb7a37c65p-103, 0.0,
     0.0, 0x1.077e8d5443633p-678, 0x1.a021f540a583ep-533, 0x1.f595828fed91ap-793, 0.0,
     0x1.9888a92cacc67p-552, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.2527f79a4ad2ap-999,
     0x1.bf8f3a1cfdb4cp-191, 0x1.4e6c0db813a4cp-1004, 0x1.d925b4b7a8ff3p-294, 0.0,
     0.0, 0x1.7ce5050f8b512p-197, 0x1.ca45462f9f1fap-577, 0x1.7ae704e602af2p-283, 0.0,
     0x1.eedeb69b6fda9p-662, 0.0, 0.0, 0.0, 0x1.704f4b1296c0ap-701, 0.0,
     0x1.1cbb62be497c6p-157, 0x1.71d1ada7dcfd8p-603, 0x1.55fa2d2eebf34p-811, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.c437ec72b8585p-358,
     0x1.02e229e390a07p-445, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0x1.921ea6c7f58e7p-951,
     0.0, 0x1.a3b5a49509e8bp-310, 0x1.55ed06f2ff9aap-330, 0x1.094ed60e957a4p-833, 0.0,
     0.0, 0x1.f6d7f31ef33ddp-986, 0x1.317ee6dd159f1p-756, 0x1.3f93f814352ffp-319,
     0x1.a52cb2c628f3ep-730, 0x1.d22018bf60684p-878, 0x1.5771e262f70a6p-301,
     0x1.295df29cbc8eap-450, 0x1.cda16c2050f2ep-191, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.e56cf052eb871p-642, 0.0, 0x1.371c89ce06263p-397, 0x1.67e5b6c236a6ep-597,
     0x1.c887cdd3a0de1p-45, 0x1.a45eed987f301p-578, 0x1.11ca6b4cb50a6p-989, 0.0, 0.0,
     0x1.f86846e3b0322p-564, 0.0, 0.0, 0x1.da12374f3a633p-934, 0x1.4baf8dd88a92cp-182,
     0x1.96fb398637d2dp-119, 0.0, 0x1.e6c79dadfc4ffp-543, 0x1.e4c6ab0a86f31p-189,
     0x1.425055c6e1844p-122, 0x1.88c38abd95d84p-187, 0x1.4c7cc8a805138p-307,
     0x1.abe8307fd27a1p-700, 0.0, 0.0, 0.0, 0x1.17920c305d508p-328, 0.0, 0.0,
     0x1.0d07fc5865212p-981, 0x1.6f5d5d14f792ap-137, 0x1.784d8568a4234p-445,
     0x1.00e7a04f9030ep-888, 0x1.5a27bde402af5p-347, 0.0, 0.0, 0x1.0b808ba233c68p-66,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.afe4ffbb6587p-414, 0x1.80d11823997d6p-609, 0.0,
     0x1.611ef183075f9p-184, 0.0, 0x1.cf0ff59b05894p-974, 0.0, 0x1.687184b7a422dp-903,
     0.0, 0x1.ca100a1c346abp-719, 0x1.db147aa7641fcp-414, 0.0, 0.0, 0.0,
     0x1.14659b64fa245p-708, 0.0, 0x1.b6472a8b8c662p-374, 0.0, 0.0,
     0x1.8fd1eafcb337ep-1004, 0.0, 0x1.63204784d7c7dp-736, 0x1.cac0fa5bc547dp-898,
     0.0, 0x1.920c7b3dfbb37p-203, 0.0, 0x1.83b8493f17efbp-806, 0.0, 0.0,
     0x1.690330e189e86p-882, 0.0, 0.0, 0x1.c72433a3d869dp-68, 0x1.b7099ee0b6c1bp-263,
     0x1.85944c2aa3aefp-487, 0x1.3f2df43cd124ap-575, 0x1.b61cc91b8ea99p-114, 0.0,
     0x1.766d4872d83c3p-669, 0x1.c46c11e16686p-398, 0x1.865fe0e657bap-192,
     0x1.79ecc505fc00ap-772, 0.0, 0x1.4349a3c7e32ffp-575, 0x1.0eee633549b8fp-738,
     0x1.80bde1a7fb4d6p-413, 0x1.51974a6e8ce9dp-275, 0.0, 0x1.72e50a9457b1ep-336,
     0x1.1d94376f1e92bp-829, 0x1.0edc0a8c4ffdep-677, 0.0, 0x1.e9a47f2ab3066p-265,
     0x1.8c9b38c36446cp-954, 0x1.c070b2171290ep-765, 0x1.77ff93f5af1e7p-672, 0.0, 0.0,
     0.0, 0.0, 0.0, 0.0, 0.0, 0x1.ad0b1bdfeb3cbp-485, 0.0, 0.0,
     0x1.8ffedd545e594p-845, 0x1.d58f375f912cap-931, 0.0, 0x1.6aaade9dd5ed3p-339, 0.0,
     0x1.a816b2789c68ap-472, 0.0, 0.0, 0.0, 0.0, 0x1.bf19d92f30328p-534,
     0x1.6e876c1536cb5p-815, 0.0, 0.0, 0x1.6b734aa72b205p-355, 0.0, 0.0,
     0x1.c40f6aaf287a9p-681, 0.0, 0.0, 0x1.dc33d5fc53a35p-1019, 0.0, 0.0, 0.0, 0.0,
     0.0, 0.0, 0.0, 0x1.e4c9ecbd5f7eep-853, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.cce5f001e7f63p-543, 0.0, 0x1.978ca522d8b29p-8, 0x1.f411d6a7ee025p-939, 0.0,
     0.0, 0.0, 0.0, 0x1.877ca545596ddp-671, 0x1.1f953fd011cdcp-40,
     0x1.27a46a2578c15p-995, 0.0, 0.0, 0x1.222b2a70b6d96p-69, 0x1.d6fc6c838403cp-786,
     0x1.c0a599206a8dcp-485, 0x1.425805f59dadbp-586, 0x1.17dc888d3fa7dp-1017, 0.0,
     0x1.d49aec0939edcp-642, 0.0, 0x1.3f389de688fc9p-712, 0x1.1b0db5e94ae9fp-704,
     0x1.ce2f1f41463b5p-904, 0x1.f51266434c7e9p-310, 0.0, 0x1.ac517dd00d1e8p-716,
     0x1.30425b33cd6d8p-720, 0x1.2e5e2b6859a9fp-824, 0.0, 0.0, 0.0,
     0x1.5a71ea2923f7p-965, 0.0, 0x1.93d2d1ac2a01cp-763, 0x1.d672d762836cdp-304, 0.0,
     0x1.217842682b94dp-199, 0x1.5234bf5c8c3e3p-482, 0x1.9f7fee7c51989p-399, 0.0, 0.0,
     0.0, 0.0, 0x1.2a6e1800402fp-419, 0x1.61d1649e988b6p-178, 0x1.1f4c7d760cc48p-633,
     0x1.ae92ef2011febp-619, 0x1.449a04841b5fp-930, 0.0, 0.0, 0.0, 0.0,
     0x1.5ca885a6d752ep-495, 0x1.1943af03b7c69p-430, 0.0, 0.0, 0.0,
     0x1.1bf2bb7c93ae8p-421, 0.0, 0x1.a3ec52cf1841dp-74, 0.0, 0x1.7f19e27aff01ep-379,
     0x1.7cc346ed5c2c2p-775, 0x1.60bf050c94d9bp-312, 0x1.ea4f5b2835dc3p-813, 0.0,
     0x1.35ceccea1976p-414, 0x1.5a9296acc31eap-388, 0.0, 0x1.b4d244db9e066p-376, 0.0,
     0x1.0bf86dbc211ddp-370, 0x1.ee46371c3bc44p-494, 0x1.970271d7fac78p-673,
     0x1.a9c03d3bdd1acp-991, 0x1.1418b38eaeb2bp-1007, 0.0, 0.0, 0.0,
     0x1.293a3eceb8b99p-255, 0x1.c400fe5685b5ep-963, 0.0, 0.0, 0x1.7ca7373ac4987p-297,
     0x1.c005e295186f7p-544, 0.0, 0x1.dc10580b496b3p-51, 0x1.31b92a3bac285p-599, 0.0,
     0.0, 0x1.2024227c2b517p-275, 0.0, 0x1.b9ff1c8fa45b3p-493, 0.0, 0.0, 0.0, 0.0,
     0x1.b0b508016f002p-73, 0x1.43dea4ff8c276p-847, 0.0, 0.0, 0.0,
     0x1.cfd7a76946747p-122, 0x1.f5d090847977fp-855, 0.0, 0.0, 0x1.68cd81f25c9dep-411,
     0x1.0e7bbc2fb347cp-363, 0x1.701b4cd263ba3p-940, 0x1.f4e835e1983d7p-267, 0.0,
     0x1.f4d7b4797c31p-753, 0.0, 0x1.2848ad2ae13dp-557, 0x1.ad13df728fa5ap-79,
     0x1.7f29260e3521p-147, 0x1.1db8d69e3312dp-14, 0x1.12942e31b8126p-815, 0.0,
     0x1.b3c6aa008d6ebp-1015, 0.0, 0.0, 0x1.502a4eaf99e9p-379, 0x1.212c7316297cap-738,
     0.0, 0x1.71fd626ba4b82p-458, 0x1.435007b4559a6p-188, 0.0, 0.0,
     0x1.0358da1771044p-413, 0x1.b72dbe0a42ef4p-343, 0x1.c3e71a2e64028p-474,
     0x1.10cbbeda512cfp-38, 0x1.7ac7fddac3a95p-715, 0.0, 0.0, 0x1.750f1f054cc81p-29,
     0.0, 0.0, 0.0, 0x1.92daae371d16dp-340, 0x1.b8b7634833d63p-72, 0.0, 0.0,
     0x1.d6a253de3e3c8p-315, 0.0, 0x1.7221075fa031ep-934, 0x1.a606cfc7911bdp-502,
     0x1.6df46e4f178cbp-864, 0.0, 0.0, 0.0, 0.0, 0x1.b6bc0823b4e1dp-269,
     0x1.1e7299728b51ap-15, 0x1.565e09ea46956p-528, 0.0, 0x1.2a04de353d69cp-977,
     0x1.9cc3cf20b5f0dp-638, 0.0, 0x1.81722403f0d49p-647, 0.0, 0.0,
     0x1.261a26861185p-736, 0x1.cc4ecf1067dfdp-72, 0x1.7d82752bffb3ep-328, 0.0, 0.0,
     0x1.13f8cf2ae7cd3p-418, 0.0, 0.0, 0.0, 0x1.55457014d959fp-359,
     0x1.88ff5ca0ad0f3p-343, 0x1.5850352f4e8ffp-167, 0.0, 0.0, 0.0, 0.0, 0.0,
     0x1.6b14f4ae4467dp-150, 0.0, 0x1.f3dc22881caa8p-365, 0x1.06cc929cc61fp-910, 0.0,
     0x1.14b34627d899fp-909, 0x1.67a49d5dee09fp-581, 0.0, 0.0, 0x1.219f0988df72bp-917,
     0.0, 0x1.9f90a58657c62p-174, 0.0, 0.0, 0.0, 0x1.6dddda70f7ef7p-90, 0.0, 0.0,
     0x1.723923fa091dep-264, 0x1.095ba7cabff06p-380, 0x1.ea6feacbcb796p-647,
     0x1.4a353493c2d9fp-195, 0x1.834aa3cbee031p-435, 0x1.0647cd6c0a08fp-559,
     0x1.869e3977377e1p-282, 0.0, 0x1.234d38b836673p-618, 0x1.dd07efe89a558p-519
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
            tmp1 = Sleef_tgammad1_u10purecfma(tmp0);
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
    printf("Sleef_tgammad1_u10purecfma %"PRIi64" elts over [[0;1]] computed in %"PRIi64" cycles => %.3f CPE \n", INT64_C(10010000), timer, cpe_measure);
    printf("Sleef_tgammad1_u10purecfma bench acc %la\n", global_bench_acc);
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
